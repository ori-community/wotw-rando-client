#include <array>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

// clang-format off
// Order is important because reasons
#include <Windows.h>
#include <TlHelp32.h>

#define NO_MODLOADER

#include <shared_memory.h>
#include <Common/settings_reader.h>

#undef NO_MODLOADER
// clang-format on

std::filesystem::path base_path = R"(C:\moon\randomizer)";
const std::string STEAM_PROCESS_NAME = "oriwotw.exe";
const std::string STORE_PROCESS_NAME = "oriandthewillofthewisps-pc.exe";
const std::string DLL_NAME = "InjectLoader.dll";
const std::string SETTINGS_NAME = "settings.ini";

bool find_base_path(std::filesystem::path &output_path) {
    wchar_t path[MAX_PATH];
    HMODULE handle = nullptr;
    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           (LPCWSTR) &find_base_path, &handle) == 0) {
        std::cerr << "failed to GetModuleHandle, error: " << GetLastError() << std::endl;
        return false;
    }

    if (GetModuleFileNameW(handle, path, sizeof(path)) == 0) {
        std::cerr << "failed to GetModuleFileName, error: " << GetLastError() << std::endl;
        return false;
    }

    std::filesystem::path actual_path(path);
    output_path = actual_path.parent_path();
    std::cout << "setting path to: " << output_path << std::endl;
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
        std::cerr << "failed to gather information on system processes!" << pe32.szExeFile << std::endl;
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
        std::cerr << "failed to allocate memory on process " << error << std::endl;
        return false;
    }

    if (WriteProcessMemory(process_handle, memory_address, path, length, nullptr) == 0) {
        auto error = GetLastError();
        VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
        std::cerr << "failed to write memory to process " << error << std::endl;
        return false;
    }

    auto thread_handle = CreateRemoteThread(process_handle, nullptr, 0, load_function, memory_address, 0, nullptr);
    if (thread_handle == nullptr) {
        auto error = GetLastError();
        VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
        std::cerr << "failed to create thread on process: " << error << std::endl;
        return false;
    }

    bool output;
    while (true) {
        WaitForSingleObject(thread_handle, INFINITE);
        unsigned long ret = 0;
        if (GetExitCodeThread(thread_handle, &ret) != 0) {
            std::cout << "thread return code was: " << ret << std::endl;
            output = ret != 0;
            break;
        } else {
            std::cout << "thread has not finished" << std::endl;
        }
    }

    VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
    CloseHandle(thread_handle);
    return output;
}

int main() {
    shared_memory::SharedMemorySlot<bool> injector_running_memory_slot("OriWotWRandoInjectorRunning");
    injector_running_memory_slot.set_value(true);

    find_base_path(base_path);

    auto settings = read_utf8_ini((base_path / SETTINGS_NAME).string());

    auto use_win_store = settings->GetBoolean("Flags", "UseWinStore", false);
    auto inject_delay = settings->GetInteger("Values", "InjectDelay", 0);

    auto process_name = use_win_store ? STORE_PROCESS_NAME : STEAM_PROCESS_NAME;

    std::cout << "searching for process '" << process_name << "'" << std::endl;

    while (true) {
        if (FindWindow(nullptr, "OriAndTheWilloftheWisps") != nullptr) {
            break;
        }
        Sleep(1000);
        std::cout << "waiting for the game to start..." << std::endl;
    }

    Sleep(inject_delay);

    auto load_function = reinterpret_cast<PTHREAD_START_ROUTINE>(GetProcAddress(GetModuleHandle("Kernel32"),
                                                                                "LoadLibraryA"));
    if (load_function == nullptr) {
        std::cerr << "failed to get load function pointer" << std::endl;
        return -1;
    }

    auto process_ids = find_process_id(process_name.c_str());

    if (process_ids.empty()) {
        std::cerr << "failed to find process " << GetLastError() << std::endl;
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
            std::cerr << "failed to open process [" << id << "] error " << GetLastError() << std::endl;
        }
    }

    if (process_handle == nullptr) {
        std::cerr << "failed to open processes for injection, terminating." << std::endl;
        return -1;
    }

    auto dll_path_string = (base_path / DLL_NAME).string();
    std::cout << "loading dll: " << dll_path_string << std::endl;
    if (load_dll(process_handle, load_function, dll_path_string.c_str(), dll_path_string.size())) {
        std::cout << "injected successfully" << std::endl;
    } else {
        std::cerr << "failed to inject" << std::endl;
    }

    CloseHandle(process_handle);

    // Wait 5 seconds to give others (like Community Patch) time to read from the shared memory slot
    Sleep(5000);

    return 0;
}
