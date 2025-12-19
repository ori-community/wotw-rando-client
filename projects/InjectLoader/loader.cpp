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
#include <InjectLoader/macros.h>
#include <InjectLoader/loader_payload.h>


INJECT_LOADER_C_DLLEXPORT void load_modloader(const inject_loader::Payload* payload) {
    std::filesystem::path install_data_path(payload->install_data_path);
    std::filesystem::path user_data_path(payload->user_data_path);

    auto modloader = LoadLibraryW((install_data_path / "Modloader.dll").c_str());
    auto initialize_modloader_fn = reinterpret_cast<void (*)(
        const std::filesystem::path& install_data_path,
        const std::filesystem::path& user_data_path,
        const std::function<void()>& on_success,
        const std::function<void(std::string_view)>& on_error
    )>(GetProcAddress(modloader, "initialize_modloader"));

    std::binary_semaphore modloader_initialization_mutex(0);

    std::thread thread([&initialize_modloader_fn, install_data_path, user_data_path, &modloader_initialization_mutex]() {
        initialize_modloader_fn(install_data_path, user_data_path, [&modloader_initialization_mutex]() {
            modloader_initialization_mutex.release();
        }, [&modloader_initialization_mutex](auto error_message) {
            MessageBoxA(
                    nullptr,
                    static_cast<LPCSTR>(std::format("Modloader initialization failed: {}", error_message).c_str()),
                    "Ori and the Will of the Wisps Modloader",
                    MB_ICONERROR | MB_OK
            );

            modloader_initialization_mutex.release();
        });
    });

    thread.detach();

    std::cout << "Waiting for initialization to complete...";
    modloader_initialization_mutex.acquire();
}
