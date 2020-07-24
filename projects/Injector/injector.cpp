#include <Common/ext.h>

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <array>
#include <filesystem>
#include <vector>
#include <thread>

#include <windows.h>
#include <tlhelp32.h>

#include <Common/settings.h>

bool dev_mode = false;

bool shutting_down = false;
std::ostream& logstream = std::cout;

std::string steam_process_name = "oriwotw.exe";
std::string store_process_name = "oriandthewillofthewisps-pc.exe";
std::string base_path = "C:\\moon\\";
std::string dll_name = "InjectLoader.dll";
std::string settings_name = "settings.ini";

bool find_base_path(std::string& output_path)
{
    char path[MAX_PATH];
    HMODULE handle = nullptr;
    if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCSTR)&find_base_path, &handle) == 0)
    {
        std::cout << "failed to GetModuleHandle, error: " << GetLastError() << std::endl;
        return false;
    }

    if (GetModuleFileName(handle, path, sizeof(path)) == 0)
    {
        std::cout << "failed to GetModuleFileName, error: " << GetLastError() << std::endl;
        return false;
    }

    std::filesystem::path actual_path(path);
    output_path = actual_path.parent_path().string();
    std::cout << "setting path to: " << output_path << std::endl;
    return true;
}

DWORD find_process_id(const char* processname)
{
    HANDLE hProcessSnap;
    PROCESSENTRY32 pe32;
    DWORD result = 0;
    
    hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (INVALID_HANDLE_VALUE == hProcessSnap)
        return 0;

    pe32.dwSize = sizeof(PROCESSENTRY32); // <----- IMPORTANT
    
    if (!Process32First(hProcessSnap, &pe32))
    {
        CloseHandle(hProcessSnap);
        logstream << "failed to gather information on system processes!" << pe32.szExeFile << std::endl;
        return 0;
    }

    do
    {
        if (0 == strcmp(processname, pe32.szExeFile))
        {
            result = pe32.th32ProcessID;
            break;
        }
    } while (Process32Next(hProcessSnap, &pe32));

    CloseHandle(hProcessSnap);

    return result;
}

bool load_dll(HANDLE process_handle, PTHREAD_START_ROUTINE load_function, const char* path, int length)
{
    auto memory_address = VirtualAllocEx(process_handle, nullptr, length, MEM_COMMIT | MEM_RESERVE, 0X40);
    if (memory_address == nullptr)
    {
        auto error = GetLastError();
        logstream << "failed to allocate memory on process " << error << std::endl;
        return false;
    }

    if (WriteProcessMemory(process_handle, memory_address, path, length, 0) == 0)
    {
        auto error = GetLastError();
        VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
        logstream << "failed to write memory to process " << error << std::endl;
        return false;
    }

    _SECURITY_ATTRIBUTES security_attributes;

    auto thread_handle = CreateRemoteThread(process_handle, nullptr, 0, load_function, memory_address, 0, nullptr);
    if (thread_handle == nullptr)
    {
        auto error = GetLastError();
        VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
        logstream << "failed to create thread on process: " << error << std::endl;
        return false;
    }

    bool output = true;
    while (true)
    {
        WaitForSingleObject(thread_handle, INFINITE);
        unsigned long ret = 0;
        if (GetExitCodeThread(thread_handle, &ret) != 0) {
            logstream << "thread return code was: " << ret << std::endl;
            output = ret != 0;
            break;
        }
        else
            logstream << "thread has not finished" << std::endl;
    }

    VirtualFreeEx(process_handle, memory_address, 0, MEM_RELEASE);
    CloseHandle(thread_handle);
    return output;
}

void listen_for_ori()
{
    while (true) {
        if (shutting_down)
            break;;

        HWND window = FindWindow(nullptr, "OriAndTheWilloftheWisps");
        if (window == 0)
            break;

        Sleep(500);
    }

    logstream << "Ori stopped running. Exiting in 4s..." << std::endl;
    Sleep(4000);
    exit(0);
}

int actual_main()
{
    find_base_path(base_path);

    IniSettings settings(create_randomizer_settings());
    settings.path = base_path + settings_name;
    load_settings_from_file(settings);

    auto use_win_store = find_option(settings, "Flags", "UseWinStore")->value.b;
    dev_mode = find_option(settings, "Flags", "Dev")->value.b;

    HWND window;
    for (auto i = 0; i < 30; i++) {
        window = FindWindow(nullptr, "OriAndTheWilloftheWisps");
        if (window != 0)
            break;

        Sleep(1000);
        logstream << "waiting for the game to start..." << std::endl;
    }

    auto load_function = reinterpret_cast<PTHREAD_START_ROUTINE>(GetProcAddress(GetModuleHandle("Kernel32"), "LoadLibraryA"));
    if (load_function == nullptr)
    {
        logstream << "failed to get load function pointer" << std::endl;
        return -1;
    }

    auto process_id = find_process_id(
        use_win_store ?
        store_process_name.c_str() :
        steam_process_name.c_str()
    );

    if (process_id == 0)
    {
        logstream << "failed to find process" << GetLastError() << std::endl;
        return -1;
    }

    DWORD access =
        PROCESS_VM_OPERATION |
        PROCESS_VM_WRITE |
        PROCESS_CREATE_THREAD;
    auto process_handle = OpenProcess(PROCESS_ALL_ACCESS, 1, process_id);
    if (process_handle == nullptr)
    {
        CloseHandle(process_handle);
        logstream << "failed to open process" << GetLastError() << std::endl;
        return -1;
    }

    //load_dll(process_handle, load_function, base_path + dll_name);
    const char path[] = "C:\\moon\\InjectLoader.dll";
    if (load_dll(process_handle, load_function, path, sizeof(path) + 1))
    {
        std::thread thread(listen_for_ori);
        
        logstream << "injected successfully, press any key to exit Ori" << std::endl;
        while (!kbhit() && !shutting_down) {}

        // This might be bad, if we do this while we are in
        // the middle of saving we might corrupt the save...
        TerminateProcess(process_handle, 0);
        shutting_down = true;
    }
    else
        logstream << "failed to inject" << std::endl;

    CloseHandle(process_handle);
    return 0;
}

int main(int, char**)
{
    auto ret = actual_main();
    logstream << "main return was " << ret << std::endl;
    if (ret != 0)
        system("pause");

    return ret;
}
