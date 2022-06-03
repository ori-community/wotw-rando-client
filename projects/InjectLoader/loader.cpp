#include <Common/ext.h>

#include <stdio.h>
#include <array>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include <tlhelp32.h>
#include <windows.h>

int load_state = 0;

std::string process_name = "oriwotw.exe";
std::string base_path = "C:\\moon\\";
std::string log_path = "loader_log.txt";

// Load order is top to bottom.
std::array<std::string, 1> dll_paths = {
    "Il2CppModLoader.dll"
};

bool find_base_path(std::string& output_path) {
    char path[MAX_PATH];
    HMODULE handle = nullptr;
    if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCSTR)&find_base_path, &handle) == 0) {
        std::cout << "failed to GetModuleHandle, error: " << GetLastError() << std::endl;
        return false;
    }

    if (GetModuleFileName(handle, path, sizeof(path)) == 0) {
        std::cout << "failed to GetModuleFileName, error: " << GetLastError() << std::endl;
        return false;
    }

    std::filesystem::path actual_path(path);
    output_path = actual_path.parent_path().string() + "\\";
    std::cout << "setting path to: " << output_path << std::endl;
    return true;
}

int load_inject_dlls() {
    std::vector<HMODULE> loaded_libraries;
    bool failed = false;

    auto found = find_base_path(base_path);

    std::ofstream log(base_path + log_path);
    log.clear();

    if (found)
        log << "found base_path '" << base_path << "'" << std::endl;
    else
        log << "failed to find base_path using default" << std::endl;

    {
        log << "starting dll load" << std::endl;
        for (auto const& dll : dll_paths) {
            auto handle = LoadLibraryA((base_path + dll).c_str());
            if (handle == nullptr) {
                log << "failed to load library, aborting: " << GetLastError() << std::endl;
                failed = true;
                break;
            } else {
                log << "successfully loaded dll '" << dll << "'" << std::endl;
                loaded_libraries.push_back(handle);
            }
        }

        if (failed) {
            for (auto handle : loaded_libraries) {
                FreeLibrary(handle);
            }

            load_state = 0;
            log.close();
            return -1;
        }
    }

    auto injectdll_handle = loaded_libraries[0];
    auto proc_address = GetProcAddress(injectdll_handle, "injection_entry");
    if (proc_address == nullptr) {
        log << "failed to get address of injection_entry: " << GetLastError() << std::endl;
        load_state = 0;
        log.close();
        return -3;
    }

    log << "starting InjectDLL main function." << std::endl;
    log.close();
    load_state = 2;
    auto injection_entry = reinterpret_cast<void (*)(std::string)>(proc_address);
    injection_entry(base_path);

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if ((ul_reason_for_call == DLL_PROCESS_ATTACH ||
         ul_reason_for_call == DLL_THREAD_ATTACH) &&
        load_state == 0) {
        load_state = 1;
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)load_inject_dlls, 0, 0, 0);
    }

    return 1;
}
