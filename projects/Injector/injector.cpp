#include <array>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>
#include <tclap/CmdLine.h>

// clang-format off
// Order is important because reasons
#include <Windows.h>
#include <TlHelp32.h>

#define NO_MODLOADER

#include <Injector/shared_memory.h>
#include <Common/settings.h>
#include <Common/ext.h>

#undef NO_MODLOADER
// clang-format on

std::filesystem::path base_path = R"(C:\moon\randomizer)";
const std::string STEAM_PROCESS_NAME = "oriwotw.exe";
const std::string STORE_PROCESS_NAME = "oriandthewillofthewisps-pc.exe";
const std::string DLL_NAME = "InjectLoader.dll";
const std::string SETTINGS_NAME = "settings.json";

bool guess_base_path_from_injector_location(std::filesystem::path &output_path) {
    wchar_t path[MAX_PATH];
    HMODULE handle = nullptr;
    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           reinterpret_cast<LPCWSTR>(&guess_base_path_from_injector_location), &handle) == 0) {
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

std::vector<DWORD> find_process_id(const char *processname) {
    HANDLE h_process_snap;
    PROCESSENTRY32 pe32;
    std::vector<DWORD> results;

    h_process_snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
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
        if (0 == strcmp(processname, pe32.szExeFile)) {
            results.push_back(pe32.th32ProcessID);
        }
    } while (Process32Next(h_process_snap, &pe32));

    CloseHandle(h_process_snap);

    return results;
}

bool load_dll(HANDLE process_handle, PTHREAD_START_ROUTINE load_function, const char *path, unsigned long long length) {
    auto memory_address = VirtualAllocEx(process_handle, nullptr, length, MEM_COMMIT | MEM_RESERVE, 0X40);
    if (memory_address == nullptr) {
        auto error = GetLastError();
        std::cerr << "Failed to allocate memory on process " << error << std::endl;
        return false;
    }

    if (WriteProcessMemory(process_handle, memory_address, path, length, nullptr) == 0) {
        auto error = GetLastError();
        VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
        std::cerr << "Failed to write memory to process " << error << std::endl;
        return false;
    }

    auto thread_handle = CreateRemoteThread(process_handle, nullptr, 0, load_function, memory_address, 0, nullptr);
    if (thread_handle == nullptr) {
        auto error = GetLastError();
        VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
        std::cerr << "Failed to create thread on process: " << error << std::endl;
        return false;
    }

    bool output;
    while (true) {
        WaitForSingleObject(thread_handle, INFINITE);
        unsigned long ret = 0;
        if (GetExitCodeThread(thread_handle, &ret) != 0) {
            std::cout << "Thread return code was: " << ret << std::endl;
            output = ret != 0;
            break;
        } else {
            std::cout << "Thread has not finished" << std::endl;
        }
    }

    VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
    CloseHandle(thread_handle);
    return output;
}

int main() {
    shared_memory::SharedMemorySlot<bool> injector_running_memory_slot("OriWotWRandoInjectorRunning");
    injector_running_memory_slot.set_value(true);

    TCLAP::CmdLine cmd("Ori and the Will of the Wisps Modloader (Injector)", ' ', "1.0");
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
        base_path = std::filesystem::path(modloader_base_dir.getValue());
        std::cout << "Set base path from command line to '" << modloader_base_dir.getValue() << "'" << std::endl;
    } else {
        guess_base_path_from_injector_location(base_path);
    }

    common::settings::Settings settings(base_path / SETTINGS_NAME);
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

    auto load_function = reinterpret_cast<PTHREAD_START_ROUTINE>(GetProcAddress(GetModuleHandle("Kernel32"),
                                                                                "LoadLibraryA"));
    if (load_function == nullptr) {
        std::cerr << "Failed to get load function pointer" << std::endl;
        return -1;
    }

    auto process_ids = find_process_id(process_name.c_str());

    if (process_ids.empty()) {
        std::cerr << "Failed to find process " << GetLastError() << std::endl;
        return -1;
    }

    HANDLE process_handle = nullptr;
    for (auto id: process_ids) {
        DWORD access =
                PROCESS_VM_OPERATION |
                PROCESS_VM_WRITE |
                PROCESS_CREATE_THREAD |
                PROCESS_QUERY_INFORMATION |
                PROCESS_VM_READ |
                SYNCHRONIZE |
                PROCESS_TERMINATE;

        process_handle = OpenProcess(access, 1, id);
        if (process_handle != nullptr) {
            break;
        } else {
            std::cerr << "Failed to open process [" << id << "] error " << GetLastError() << std::endl;
        }
    }

    if (process_handle == nullptr) {
        std::cerr << "Failed to open processes for injection, terminating." << std::endl;
        return -1;
    }

    auto dll_path_string = (base_path / DLL_NAME).string();
    std::cout << "Loading library: " << dll_path_string << std::endl;
    if (load_dll(process_handle, load_function, dll_path_string.c_str(), dll_path_string.size())) {
        std::cout << "Injected successfully" << std::endl;
    } else {
        std::cerr << "Failed to inject" << std::endl;
    }

    CloseHandle(process_handle);

    // Wait 5 seconds to give others (like Community Patch) time to read from the shared memory slot
    Sleep(5000);

    return 0;
}
