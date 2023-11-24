#include "hook.h"
#include <AtlBase.h>
#include <InjectProxy/winhttp_proxy.h>
#include <atlconv.h>
#include <format>
#include <tclap/CmdLine.h>
#include <windows.h>
#include <winuser.h>
#include <filesystem>
#include <functional>
#include <iostream>
#include <semaphore>
#include <thread>

std::string convert_wstring_to_string(std::wstring_view str) {
    CW2A cw2a(str.data());
    return { cw2a };
}

void inject() {
    /**
    MessageBoxA(
            nullptr,
            (LPCSTR) "Hello from il2cpp_init. Injecting now...",
            (LPCSTR) "Yooo??",
            MB_ICONINFORMATION | MB_OK
    );
     **/

    TCLAP::CmdLine cmd("Ori and the Will of the Wisps Modloader", ' ', "1.0");
    cmd.ignoreUnmatched(true);

    TCLAP::ValueArg<std::string> modloader_base_dir(
        "m",
        "modloader-base-dir",
        "Directory that has the Modloader.dll",
        false,
        "",
        "string"
    );
    cmd.add(modloader_base_dir);

    std::vector<std::string> arguments;
    int argc = 0;
    LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);

    for (int i = 0; i < argc; ++i) {
        auto arg = argv[i];
        arguments.push_back(convert_wstring_to_string(arg));
    }

    cmd.parse(arguments);

    if (modloader_base_dir.isSet()) {
        auto base_path = std::filesystem::path(modloader_base_dir.getValue());

        auto modloader = LoadLibraryW((base_path / "Modloader.dll").c_str());
        auto modloader_injection_entry_fn = reinterpret_cast<void (*)(std::string const&, const std::function<void()>, const std::function<void(std::string_view)>)>(
            GetProcAddress(modloader, "injection_entry")
        );

        std::binary_semaphore modloader_initialization_mutex(0);

        std::thread thread([&modloader_injection_entry_fn, base_path, &modloader_initialization_mutex]() {
            modloader_injection_entry_fn(
                base_path.string(),
                [&modloader_initialization_mutex]() {
                    modloader_initialization_mutex.release();
                },
                [&modloader_initialization_mutex](auto error_message) {
                    MessageBoxA(
                        nullptr,
                        (LPCSTR)std::format("Modloader initialization failed: {}", error_message).c_str(),
                        (LPCSTR) "Ori and the Will of the Wisps Modloader",
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
}

void (*il2cpp_init)(const char* domain_name);

void il2cpp_init_intercept(const char* domain_name) {
    il2cpp_init(domain_name);
    inject();
}

void* WINAPI get_proc_address_detour(HMODULE module_name, char* name) {
    auto return_value = (void (*)())GetProcAddress(module_name, name);

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

    bool ok = true;
    ok = iat_hook(target_module, "kernel32.dll", &GetProcAddress, &get_proc_address_detour);

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
    load_proxy(L"winhttp");

    if ((ul_reason_for_call == DLL_PROCESS_ATTACH || ul_reason_for_call == DLL_THREAD_ATTACH) && !iat_injected) {
        iat_injected = true;
        inject_iat();
    }

    return true;
}
