#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <string>
#include <tclap/CmdLine.h>
#include <vector>

// clang-format off
// Order is important because reasons
#include <Windows.h>
#include <psapi.h>
#include <TlHelp32.h>

#define NO_MODLOADER

#include <tchar.h>
#include <Injector/shared_memory.h>
#include <Common/settings.h>
#include <Common/ext.h>

#include <Injector/get_process_address.h>
#include <Common/droppable.h>
#include <Common/env.h>
#include <InjectLoader/loader_payload.h>

#undef NO_MODLOADER
// clang-format on


const std::string STEAM_PROCESS_NAME = "oriwotw.exe";
const std::string STORE_PROCESS_NAME = "oriandthewillofthewisps-pc.exe";


bool guess_base_path_from_injector_location(std::filesystem::path& output_path) {
    wchar_t path[MAX_PATH];
    HMODULE handle = nullptr;
    if (GetModuleHandleExW(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCWSTR>(&guess_base_path_from_injector_location),
            &handle
        ) == 0) {
        std::cerr << "Failed to GetModuleHandle, error: " << GetLastError() << std::endl;
        return false;
    }

    if (GetModuleFileNameW(handle, path, sizeof(path)) == 0) {
        std::cerr << "Failed to GetModuleFileName, error: " << GetLastError() << std::endl;
        return false;
    }

    std::filesystem::path actual_path(path);
    output_path = actual_path.parent_path();
    std::cout << "Deriving base path from Injector.exe location: " << output_path << std::endl;
    return true;
}

std::vector<DWORD> find_process_id(const char* process_name) {
    PROCESSENTRY32 pe32;
    std::vector<DWORD> results;

    HANDLE h_process_snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (INVALID_HANDLE_VALUE == h_process_snap) {
        return results;
    }

    pe32.dwSize = sizeof(PROCESSENTRY32); // <----- IMPORTANT

    if (!Process32First(h_process_snap, &pe32)) {
        CloseHandle(h_process_snap);
        std::cerr << "Failed to gather information on system processes!" << pe32.szExeFile << std::endl;
        return results;
    }

    do {
        if (0 == strcmp(process_name, pe32.szExeFile)) {
            results.push_back(pe32.th32ProcessID);
        }
    } while (Process32Next(h_process_snap, &pe32));

    CloseHandle(h_process_snap);

    return results;
}

bool load_inject_loader(HANDLE target_process_handle, const std::wstring& inject_loader_dll_path, const std::wstring& install_data_path, const std::wstring& user_data_path) {
    // Get a pointer to LoadLibraryW
    const auto load_library_w_fn = reinterpret_cast<PTHREAD_START_ROUTINE>(injector::get_function_address_in_process(target_process_handle, "kernel32.dll", "LoadLibraryW"));
    if (load_library_w_fn == nullptr) {
        std::cerr << "Failed to get function pointer for LoadLibraryW" << std::endl;
        return false;
    }

    // Allocate memory for the DLL path in the process
    const auto dll_path_memory_address = VirtualAllocEx(
        target_process_handle, nullptr, inject_loader_dll_path.size(), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE
    );
    if (dll_path_memory_address == nullptr) {
        std::cerr << "Failed to allocate memory on process for DLL path: " << GetLastError() << std::endl;
        return false;
    }

    common::Droppable::ptr_t dll_path_free_memory_droppable = common::Droppable::create([&] {
        VirtualFreeEx(target_process_handle, dll_path_memory_address, 0, MEM_RELEASE);
    });

    // Write DLL path to process memory
    if (WriteProcessMemory(target_process_handle, dll_path_memory_address, inject_loader_dll_path.c_str(), inject_loader_dll_path.size() * sizeof(wchar_t), nullptr) == 0) {
        std::cerr << "Failed to write memory on process for DLL path: " << GetLastError() << std::endl;
        return false;
    }

    // Load InjectLoader.dll
    const auto load_inject_loader_library_thread_handle = CreateRemoteThread(target_process_handle, nullptr, 0, load_library_w_fn, dll_path_memory_address, 0, nullptr);
    if (load_inject_loader_library_thread_handle == nullptr) {
        std::cerr << "Failed to create InjectLoader loading thread on process: " << GetLastError() << std::endl;
        return false;
    }

    // Wait for the loading thread to finish
    unsigned long thread_exit_code = 0;

    WaitForSingleObject(load_inject_loader_library_thread_handle, INFINITE);
    if (GetExitCodeThread(load_inject_loader_library_thread_handle, &thread_exit_code) == 0) {
        std::cerr << "Failed to execute the InjectLoader loading thread: " << GetLastError() << std::endl;
        return false;
    }
    std::cout << "Thread return code was: " << thread_exit_code << std::endl;

    // Get a pointer to load_modloader
    const auto load_modloader_fn = reinterpret_cast<PTHREAD_START_ROUTINE>(injector::get_function_address_in_process(target_process_handle, "InjectLoader.dll", "load_modloader"));
    if (load_modloader_fn == nullptr) {
        std::cerr << "Failed to get function pointer for load_modloader" << std::endl;
        return false;
    }

    // Allocate memory for the payload
    const auto install_data_path_memory_address = VirtualAllocEx(
        target_process_handle, nullptr, install_data_path.size(), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE
    );
    if (install_data_path_memory_address == nullptr) {
        std::cerr << "Failed to allocate memory on process for install data path: " << GetLastError() << std::endl;
        return false;
    }

    common::Droppable::ptr_t install_data_path_free_memory_droppable = common::Droppable::create([&] {
        VirtualFreeEx(target_process_handle, install_data_path_memory_address, 0, MEM_RELEASE);
    });

    const auto user_data_path_memory_address = VirtualAllocEx(
        target_process_handle, nullptr, user_data_path.size(), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE
    );
    if (user_data_path_memory_address == nullptr) {
        std::cerr << "Failed to allocate memory on process for user data path: " << GetLastError() << std::endl;
        return false;
    }

    common::Droppable::ptr_t user_data_path_free_memory_droppable = common::Droppable::create([&] {
        VirtualFreeEx(target_process_handle, user_data_path_memory_address, 0, MEM_RELEASE);
    });

    const auto payload_memory_address = VirtualAllocEx(
        target_process_handle, nullptr, sizeof(inject_loader::Payload), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE
    );
    if (payload_memory_address == nullptr) {
        std::cerr << "Failed to allocate memory on process for payload: " << GetLastError() << std::endl;
        return false;
    }

    common::Droppable::ptr_t payload_free_memory_droppable = common::Droppable::create([&] {
        VirtualFreeEx(target_process_handle, payload_memory_address, 0, MEM_RELEASE);
    });

    inject_loader::Payload payload {
        static_cast<wchar_t*>(install_data_path_memory_address),
        static_cast<wchar_t*>(user_data_path_memory_address),
    };

    // Write payload
    if (WriteProcessMemory(target_process_handle, install_data_path_memory_address, install_data_path.c_str(), install_data_path.size() * sizeof(wchar_t), nullptr) == 0) {
        std::cerr << "Failed to write memory on process for install data path: " << GetLastError() << std::endl;
        return false;
    }
    if (WriteProcessMemory(target_process_handle, user_data_path_memory_address, user_data_path.c_str(), user_data_path.size() * sizeof(wchar_t), nullptr) == 0) {
        std::cerr << "Failed to write memory on process for user data path: " << GetLastError() << std::endl;
        return false;
    }
    if (WriteProcessMemory(target_process_handle, payload_memory_address, &payload, sizeof(inject_loader::Payload), nullptr) == 0) {
        std::cerr << "Failed to write memory on process for payload: " << GetLastError() << std::endl;
        return false;
    }

    // Call load_modloader
    const auto load_modloader_thread_handle = CreateRemoteThread(target_process_handle, nullptr, 0, load_modloader_fn, payload_memory_address, 0, nullptr);
    if (load_modloader_thread_handle == nullptr) {
        std::cerr << "Failed to create load_modloader thread on process: " << GetLastError() << std::endl;
        return false;
    }

    // Wait for the load_modloader thread to finish
    WaitForSingleObject(load_modloader_thread_handle, INFINITE);
    if (GetExitCodeThread(load_modloader_thread_handle, &thread_exit_code) == 0) {
        std::cerr << "Failed to execute the load_modloader thread: " << GetLastError() << std::endl;
        return false;
    }
    std::cout << "Thread return code was: " << thread_exit_code << std::endl;

    dll_path_free_memory_droppable = nullptr;
    install_data_path_free_memory_droppable = nullptr;
    user_data_path_free_memory_droppable = nullptr;
    payload_free_memory_droppable = nullptr;
    CloseHandle(load_inject_loader_library_thread_handle);

    return true;
}

int main() {
    shared_memory::SharedMemorySlot<bool> injector_running_memory_slot("OriWotWRandoInjectorRunning");
    injector_running_memory_slot.set_value(true);

    TCLAP::CmdLine cmd("Ori and the Will of the Wisps Modloader (Injector)", ' ', "1.0");
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

    std::filesystem::path install_data_path;
    std::filesystem::path user_data_path;

    if (modloader_install_data_dir.isSet()) {
        install_data_path = std::filesystem::path(modloader_install_data_dir.getValue());
        std::cout << "Set install data directory from command line to '" << install_data_path.string() << "'" << std::endl;
    } else if (!guess_base_path_from_injector_location(install_data_path)) {
        std::cout << std::format("Failed to determine install data path. You will need to set the -{} flag.", modloader_install_data_dir.getFlag())
                  << std::endl;
        return 1;
    }

    if (modloader_user_data_dir.isSet()) {
        user_data_path = std::filesystem::path(modloader_user_data_dir.getValue());
        std::cout << "Set user data directory from command line to '" << user_data_path.string() << "'" << std::endl;
    } else {
        const auto appdata_variable = get_environment_variable("APPDATA");

        if (!appdata_variable.has_value()) {
            std::cout << std::format("Failed to determine user data path. You will need to set the -{} flag.", modloader_user_data_dir.getFlag()) << std::endl;
            return 1;
        }

        user_data_path = std::filesystem::path(*appdata_variable) / R"(Ori and the Will of the Wisps Randomizer)";
        std::cout << "Derived user data directory from environment to '" << user_data_path.string() << "'" << std::endl;
    }

    common::settings::Settings settings(user_data_path / "randomizer" / "settings.json");
    auto use_win_store = settings.get_string("GameLaunchMethod", "standalone") == "microsoft-store";
    auto inject_delay = settings.get_int("InjectorInterceptDelay", 0);

    auto process_name = use_win_store ? STORE_PROCESS_NAME : STEAM_PROCESS_NAME;

    std::cout << "Searching for process '" << process_name << "'" << std::endl;

    while (true) {
        if (FindWindow(nullptr, "OriAndTheWilloftheWisps") != nullptr) {
            break;
        }
        Sleep(1000);
        std::cout << "Waiting for the game to start..." << std::endl;
    }

    Sleep(inject_delay);

    auto process_ids = find_process_id(process_name.c_str());

    if (process_ids.empty()) {
        std::cerr << "Failed to find process " << GetLastError() << std::endl;
        return -1;
    }

    HANDLE process_handle = nullptr;
    for (auto id: process_ids) {
        DWORD access = PROCESS_VM_OPERATION | PROCESS_VM_WRITE | PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | SYNCHRONIZE |
            PROCESS_TERMINATE;

        process_handle = OpenProcess(access, 1, id);
        if (process_handle != nullptr) {
            break;
        }

        std::cerr << "Failed to open process [" << id << "] error " << GetLastError() << std::endl;
    }

    if (process_handle == nullptr) {
        std::cerr << "Failed to open processes for injection, terminating." << std::endl;
        return -1;
    }

    auto inject_loader_dll_path = install_data_path / "client" / "InjectLoader.dll";
    std::cout << "Loading inject loader library: " << inject_loader_dll_path.string() << std::endl;

    if (load_inject_loader(process_handle, inject_loader_dll_path.wstring(), install_data_path.wstring(), user_data_path.wstring())) {
        std::cout << "Injected successfully" << std::endl;
    } else {
        std::cerr << "Failed to inject" << std::endl;
    }

    CloseHandle(process_handle);

    // Wait 5 seconds to give others (like Community Patch) time to read from the shared memory slot
    Sleep(60000);  // TODO

    return 0;
}
