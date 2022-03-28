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

bool nowait = false;
bool shutting_down = false;
std::ostream& logstream = std::cout;

std::string steam_process_name = "oriwotw.exe";
std::string store_process_name = "oriandthewillofthewisps-pc.exe";
std::string base_path = "C:\\moon\\randomizer\\";
std::string dll_name = "InjectLoader.dll";
std::string settings_name = "settings.ini";

bool find_base_path(std::string& output_path)
{
    wchar_t path[MAX_PATH];
    HMODULE handle = nullptr;
    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCWSTR)&find_base_path, &handle) == 0)
    {
        std::cout << "failed to GetModuleHandle, error: " << GetLastError() << std::endl;
        return false;
    }

    if (GetModuleFileNameW(handle, path, sizeof(path)) == 0)
    {
        std::cout << "failed to GetModuleFileName, error: " << GetLastError() << std::endl;
        return false;
    }

    std::filesystem::path actual_path(path);
    output_path = actual_path.parent_path().string();
    std::cout << "setting path to: " << output_path << std::endl;
    return true;
}

std::vector<DWORD> find_process_id(const char* processname)
{
    HANDLE hProcessSnap;
    PROCESSENTRY32 pe32;
    std::vector<DWORD> results;
    
    hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (INVALID_HANDLE_VALUE == hProcessSnap)
        return results;

    pe32.dwSize = sizeof(PROCESSENTRY32); // <----- IMPORTANT
    
    if (!Process32First(hProcessSnap, &pe32))
    {
        CloseHandle(hProcessSnap);
        logstream << "failed to gather information on system processes!" << pe32.szExeFile << std::endl;
        return results;
    }

    do
    {
        if (0 == strcmp(processname, pe32.szExeFile))
            results.push_back(pe32.th32ProcessID);

    } while (Process32Next(hProcessSnap, &pe32));

    CloseHandle(hProcessSnap);

    return results;
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

    if (nowait)
        logstream << "Ori stopped running. Exiting..." << std::endl;
    else
    {
        logstream << "Ori stopped running. Exiting in 4s..." << std::endl;
        Sleep(4000);
    }

    exit(0);
}

int actual_main()
{
    find_base_path(base_path);

    IniSettings settings(create_randomizer_settings(base_path));
    settings.path = base_path + "\\" + settings_name;
    load_settings_from_file(settings);

    auto use_win_store = check_option(settings, "Flags", "UseWinStore", false);
    dev_mode = check_option(settings, "Flags", "Dev", false);

    auto inject_delay = check_option(settings, "Values", "InjectDelay", 0);

    auto i = 0;
    for (; i < 300; i++) {
        if (FindWindow(nullptr, "OriAndTheWilloftheWisps") != nullptr)
            break;
        Sleep(1000);
        logstream << "waiting for the game to start..." << std::endl;
    }

    // We hit the end of the loop.
    if (i == 300)
    {
        logstream << "failed to find window" << std::endl;
        return -1;
    }

    Sleep(inject_delay);

    auto load_function = reinterpret_cast<PTHREAD_START_ROUTINE>(GetProcAddress(GetModuleHandle("Kernel32"), "LoadLibraryA"));
    if (load_function == nullptr)
    {
        logstream << "failed to get load function pointer" << std::endl;
        return -1;
    }

    auto process_ids = find_process_id(
        use_win_store ?
        store_process_name.c_str() :
        steam_process_name.c_str()
    );

    if (process_ids.empty())
    {
        logstream << "failed to find process " << GetLastError() << std::endl;
        return -1;
    }

    HANDLE process_handle = nullptr;
    for (auto id : process_ids)
    {
        DWORD access =
            PROCESS_VM_OPERATION |
            PROCESS_VM_WRITE |
            PROCESS_CREATE_THREAD |
            PROCESS_QUERY_INFORMATION |
            PROCESS_VM_READ |
            SYNCHRONIZE |
            PROCESS_TERMINATE;
        process_handle = OpenProcess(access, 1, id);
        if (process_handle != nullptr)
            break;
        else
            logstream << "failed to open process [" << id << "] error " << GetLastError() << std::endl;
    }

    if (process_handle == nullptr)
    {
        logstream << "failed to open processes for injection, terminating." << std::endl;
        return -1;
    }

    //load_dll(process_handle, load_function, base_path + dll_name);
    auto dll_path = base_path + "\\" + dll_name;
    std::cout << "loading dll: " << dll_path << std::endl;
    if (load_dll(process_handle, load_function, dll_path.c_str(), dll_path.size()))
        logstream << "injected successfully" << std::endl;
    else
        logstream << "failed to inject" << std::endl;

    CloseHandle(process_handle);
    return 0;
}

int main(int param_count, char** argc)
{
    for (int i = 1; i < param_count; ++i) {
        if (std::string_view(argc[i]) == "/nowait")
            nowait = true;
    }

    auto ret = actual_main();
    logstream << "main return was " << ret << std::endl;
    return ret;
}
