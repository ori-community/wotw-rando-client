#include <array>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include <InjectLoader/loader.h>
#include <Windows.h>

int load_state = 0;

std::string process_name = "oriwotw.exe";
std::string base_path = "C:\\moon\\randomizer\\";
std::string log_path = "loader_log.txt";

// Load order is top to bottom.
std::array<std::string, 1> dll_paths = {
    "Modloader.dll"
};

std::atomic<bool> initialization_complete = false;

void on_initialization_complete() {
    initialization_complete = true;
}

bool find_base_path(std::string& output_path) {
    output_path = "C:\\moon\\randomizer\\";
    return true;

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

namespace inject_loader {
    bool is_initialization_complete() {
        return initialization_complete;
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
                    auto error_code = GetLastError();
                    log << "failed to load library '" << dll << "', aborting: " << error_code << std::endl;
                    log << std::system_category().message(error_code) << std::endl;
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

        auto randomizer_handle = loaded_libraries[0];
        auto proc_address = GetProcAddress(randomizer_handle, "injection_entry");
        if (proc_address == nullptr) {
            log << "failed to get address of injection_entry: " << GetLastError() << std::endl;
            load_state = 0;
            log.close();
            return -3;
        }

        log << "starting Randomizer main function." << std::endl;
        log.close();
        load_state = 2;
        auto injection_entry = reinterpret_cast<void (*)(std::string, void(*))>(proc_address);
        injection_entry(base_path, reinterpret_cast<void(*)>(&on_initialization_complete));

        return 0;
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if ((ul_reason_for_call == DLL_PROCESS_ATTACH ||
         ul_reason_for_call == DLL_THREAD_ATTACH) &&
        load_state == 0) {
        load_state = 1;
        // CreateThread(0, 0, (LPTHREAD_START_ROUTINE)inject_loader::load_inject_dlls, 0, 0, 0);
    }

    return 1;
}
