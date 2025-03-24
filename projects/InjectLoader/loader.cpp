#include <Windows.h>
#include <array>
#include <filesystem>
#include <format>
#include <fstream>
#include <functional>
#include <iostream>
#include <semaphore>
#include <string>
#include <thread>

#include "Modloader/macros.h"

std::filesystem::path data_path;

bool find_application_path(std::wstring &output_path) {
    wchar_t path[MAX_PATH];
    HMODULE handle = nullptr;

    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                          reinterpret_cast<LPCWSTR>(&find_application_path), &handle) == 0) {
        std::cout << "failed to GetModuleHandle, error: " << GetLastError() << std::endl;
        return false;
    }

    if (GetModuleFileNameW(handle, path, sizeof(path)) == 0) {
        std::cout << "failed to GetModuleFileName, error: " << GetLastError() << std::endl;
        return false;
    }

    const std::filesystem::path actual_path(path);
    output_path = actual_path.parent_path().wstring() + L"\\";
    std::wcout << "setting path to: " << output_path << std::endl;
    return true;
}

void load_modloader() {
    std::wstring application_path_string;
    if (!find_application_path(application_path_string)) {
        MessageBoxA(
                nullptr,
                (LPCSTR) "Injection loader initialization failed: Base path not found",
                (LPCSTR) "Ori and the Will of the Wisps Modloader",
                MB_ICONERROR | MB_OK
        );
    }

    auto application_path = std::filesystem::path(application_path_string);
    const auto modloader = LoadLibraryW((application_path / "Modloader.dll").c_str());
    auto modloader_injection_entry_fn = reinterpret_cast<void (*)(std::filesystem::path, std::filesystem::path, const std::function<void()>,
                                                                  const std::function<void(std::string_view)>)>(
            GetProcAddress(modloader, "injection_entry")
    );

    std::binary_semaphore modloader_initialization_mutex(0);

    std::thread thread([&modloader_injection_entry_fn, application_path, &modloader_initialization_mutex]() {
        modloader_injection_entry_fn(application_path, data_path, [&modloader_initialization_mutex]() {
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

extern "C" __declspec(dllexport) void start_loading(const char* data_path_c_str) {
    if (data_path_c_str != nullptr) {
        data_path = data_path_c_str;
    } else {
        data_path = "%appdata%\\ori-wotw-rando";
    }

    CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)load_modloader, nullptr, 0, 0);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    return 1;
}
