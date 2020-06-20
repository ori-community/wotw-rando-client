#include <Common/ext.h>

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <array>
#include <vector>

#include <windows.h>
#include <tlhelp32.h>

int load_state = 0;

std::string process_name = "oriwotw.exe";
std::string base_path = "C:\\moon\\";
std::string log_path = "loader_log.txt";

// Load order is top to bottom.
std::array<std::string, 1> dll_paths = {
    "InjectDll.dll"
};

int load_inject_dlls()
{
    std::vector<HMODULE> loaded_libraries;
    bool failed = false;
    std::ofstream log(base_path + log_path);
    log.clear();

    {
        log << "starting dll load" << std::endl;
        for (auto const& dll : dll_paths)
        {
            auto handle = LoadLibraryA((base_path + dll).c_str());
            if (handle == nullptr)
            {
                log << "failed to load library, aborting: " << GetLastError() << std::endl;
                failed = true;
                break;
            }
            else
            {
                log << "successfully loaded dll '" << dll << "'" << std::endl;
                loaded_libraries.push_back(handle);
            }
        }

        if (failed)
        {
            for (auto handle : loaded_libraries)
            {
                FreeLibrary(handle);
            }

            load_state = 0;
            log.close();
            return -1;
        }
    }

    auto injectdll_handle = loaded_libraries[0];
    auto proc_address = GetProcAddress(injectdll_handle, "injection_entry");
    if (proc_address == nullptr)
    {
        log << "failed to get address of injection_entry: " << GetLastError() << std::endl;
        load_state = 0;
        log.close();
        return -3;
    }

    log << "starting InjectDLL main function." << std::endl;
    log.close();
    load_state = 2;
    auto injection_entry = reinterpret_cast<void(*)()>(proc_address);
    injection_entry();

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if ((ul_reason_for_call == DLL_PROCESS_ATTACH ||
        ul_reason_for_call == DLL_THREAD_ATTACH) &&
        load_state == 0)
    {
        load_state = 1;
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)load_inject_dlls, 0, 0, 0);
    }

    return 1;
}
