#include <InjectProxy/hook.h>
#include <AtlBase.h>
#include <format>
#include <tclap/CmdLine.h>
#include <windows.h>
#include <winuser.h>
#include <filesystem>
#include <functional>
#include <iostream>
#include <semaphore>
#include <thread>
#include <Common/env.h>
#include <Common/shared_memory.h>

namespace {
    struct ModloaderArguments {
        std::filesystem::path install_data_directory;
        std::optional<std::filesystem::path> user_data_directory;
    };

    common::shared_memory::SharedMemorySlot<bool> injector_running_memory_slot("OriWotWRandoInjectProxyRunning");
    std::optional<ModloaderArguments> modloader_arguments = std::nullopt;
}

std::optional<ModloaderArguments> get_modloader_arguments_from_cli() {
    TCLAP::CmdLine cmd("Ori and the Will of the Wisps Modloader (Proxy)", ' ', "1.0");
    cmd.ignoreUnmatched(true);

    TCLAP::ValueArg<std::string> modloader_install_data_dir("i", "install-data-directory", "Path to the install data directory", false, "", "string");
    TCLAP::ValueArg<std::string> modloader_user_data_dir("u", "user-data-directory", "Path the the user data directory", false, "", "string");
    cmd.add(modloader_install_data_dir);
    cmd.add(modloader_user_data_dir);

    std::vector<std::string> arguments;
    int argc = 0;
    LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);

    for (int i = 0; i < argc; ++i) {
        auto arg = argv[i];
        arguments.push_back(convert_wstring_to_string(arg));
    }

    cmd.parse(arguments);

    if (!modloader_install_data_dir.isSet()) {
        return std::nullopt;
    }

    return ModloaderArguments {
        .install_data_directory = modloader_install_data_dir.getValue(),
        .user_data_directory = modloader_user_data_dir.isSet()
            ? std::make_optional(modloader_user_data_dir.getValue())
            : std::nullopt,
    };
}

void inject(const ModloaderArguments arguments) {
    std::filesystem::path user_data_path;
    std::filesystem::path install_data_path = arguments.install_data_directory;
    std::cout << "Set install data directory from command line to '" << install_data_path.string() << "'" << std::endl;

    if (arguments.user_data_directory.has_value()) {
        user_data_path = *arguments.user_data_directory;
        std::cout << "Set user data directory from command line to '" << user_data_path.string() << "'" << std::endl;
    } else {
        const auto appdata_variable = get_environment_variable("APPDATA");

        if (!appdata_variable.has_value()) {
            MessageBoxA(
                nullptr,
                "Failed to determine user data path. You will need to set the -i flag.",
                "Ori and the Will of the Wisps Modloader",
                MB_ICONERROR | MB_OK
            );
            return;
        }

        user_data_path = std::filesystem::path(*appdata_variable) / "ori-wotw-randomizer";
        std::cout << "Derived user data directory from environment to '" << user_data_path.string() << "'" << std::endl;
    }

    const std::filesystem::path modloader_dll_path(install_data_path / "client" / "Modloader.dll");

    if (!std::filesystem::exists(modloader_dll_path)) {
        MessageBoxA(
                 nullptr,
                 std::format("Modloader.dll not found at {}", modloader_dll_path.string()).c_str(),
                 "Ori and the Will of the Wisps Modloader",
                 MB_ICONERROR | MB_OK
             );
        return;
    }

    auto modloader = LoadLibraryW(modloader_dll_path.c_str());
    auto initialize_modloader_fn = reinterpret_cast<void (*)(
        const std::filesystem::path& install_data_path,
        const std::filesystem::path& user_data_path,
        const std::function<void()>& on_success,
        const std::function<void(std::string_view)>& on_error
    )>(GetProcAddress(modloader, "initialize_modloader"));

    std::binary_semaphore modloader_initialization_mutex(0);

    std::thread thread([&initialize_modloader_fn, install_data_path, user_data_path, &modloader_initialization_mutex]() {
        initialize_modloader_fn(
            install_data_path,
            user_data_path,
            [&modloader_initialization_mutex]() {
                modloader_initialization_mutex.release();
            },
            [&modloader_initialization_mutex](auto error_message) {
                MessageBoxA(
                    nullptr,
                    static_cast<LPCSTR>(std::format("Modloader initialization failed: {}", error_message).c_str()),
                    "Ori and the Will of the Wisps Modloader",
                    MB_ICONERROR | MB_OK
                );

                modloader_initialization_mutex.release();
            }
        );
    });

    thread.detach();

    std::cout << "Waiting for initialization to complete..." << std::endl;
    modloader_initialization_mutex.acquire();
}

void (*il2cpp_init)(const char* domain_name);

void il2cpp_init_intercept(const char* domain_name) {
    il2cpp_init(domain_name);

    if (modloader_arguments.has_value()) {
        inject(*modloader_arguments);
    }
}

void* original_get_proc_address = nullptr;
void* WINAPI get_proc_address_detour(HMODULE module_name, char* name) {
    auto return_value = (void (*)()) reinterpret_cast<void*(*)(HMODULE, char*)>(original_get_proc_address)(module_name, name);

    if (lstrcmpA(name, "il2cpp_init") == 0) {
        il2cpp_init = reinterpret_cast<void (*)(const char*)>(return_value);
        return reinterpret_cast<void*>(&il2cpp_init_intercept);
    }

    return reinterpret_cast<void*>(return_value);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmicrosoft-cast"

void inject_iat() {
    HMODULE target_module = GetModuleHandle(TEXT("UnityPlayer"));

    const auto ok = iat_hook(target_module, "kernel32.dll", "GetProcAddress", reinterpret_cast<void*>(&get_proc_address_detour), &original_get_proc_address);

    if (!ok) {
        MessageBoxA(
            nullptr,
            (LPCSTR) "IAT hooking failed.",
            (LPCSTR) "Ori and the Will of the Wisps Modloader",
            MB_ICONERROR | MB_OK
        );
    }
}

#pragma clang diagnostic pop

bool iat_injected = false;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    // Check whether we were actually loaded by the game
    const auto current_process = GetCurrentProcess();
    const auto current_process_name = new char[MAX_PATH];
    DWORD current_process_name_size = MAX_PATH;
    QueryFullProcessImageNameA(current_process, 0, current_process_name, &current_process_name_size);
    const auto process_name_string = std::string(current_process_name);
    const auto is_ori = process_name_string.ends_with("\\oriwotw.exe") || process_name_string.ends_with("\\oriandthewillofthewisps-pc.exe");
    delete[] current_process_name;

    if (is_ori) {
        modloader_arguments = get_modloader_arguments_from_cli();
        if (modloader_arguments.has_value()) {
            injector_running_memory_slot.set_value(true);
        }

        if ((ul_reason_for_call == DLL_PROCESS_ATTACH || ul_reason_for_call == DLL_THREAD_ATTACH) && !iat_injected) {
            iat_injected = true;
            inject_iat();
        }
    }

    return true;
}
