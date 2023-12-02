#include <array>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <semaphore>
#include <functional>
#include <format>
#include <thread>
#include <Windows.h>


bool loaded = false;


bool find_base_path(std::string &output_path) {
    char path[MAX_PATH];
    HMODULE handle = nullptr;
    if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                          (LPCSTR) &find_base_path, &handle) == 0) {
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

void load_modloader() {
    std::string base_path_string;

    if (!find_base_path(base_path_string)) {
        MessageBoxA(
                nullptr,
                (LPCSTR) "Injection loader initialization failed: Base path not found",
                (LPCSTR) "Ori and the Will of the Wisps Modloader",
                MB_ICONERROR | MB_OK
        );
    }

    auto base_path = std::filesystem::path(base_path_string);

    auto modloader = LoadLibraryW((base_path / "Modloader.dll").c_str());
    auto modloader_injection_entry_fn = reinterpret_cast<void (*)(std::string, const std::function<void()>,
                                                                  const std::function<void(std::string_view)>)>(
            GetProcAddress(modloader, "injection_entry")
    );

    std::binary_semaphore modloader_initialization_mutex(0);

    std::thread thread([&modloader_injection_entry_fn, base_path, &modloader_initialization_mutex]() {
        modloader_injection_entry_fn(base_path.string(), [&modloader_initialization_mutex]() {
            modloader_initialization_mutex.release();
        }, [&modloader_initialization_mutex](auto error_message) {
            MessageBoxA(
                    nullptr,
                    (LPCSTR) std::format("Modloader initialization failed: {}", error_message).c_str(),
                    (LPCSTR) "Ori and the Will of the Wisps Modloader",
                    MB_ICONERROR | MB_OK
            );

            modloader_initialization_mutex.release();
        });
    });

    thread.detach();

    std::cout << "Waiting for initialization to complete...";
    modloader_initialization_mutex.acquire();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if ((ul_reason_for_call == DLL_PROCESS_ATTACH ||
         ul_reason_for_call == DLL_THREAD_ATTACH) &&
        !loaded) {

        loaded = true;

        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)load_modloader, nullptr, 0, 0);
    }

    return 1;
}
