#include <windows_api/bootstrap.h>

#include <windows_api/windows.h>

#include <modloader.h>

#include <format>
#include <nlohmann/json.hpp>

#include <filesystem>
#include <fstream>
#include <unordered_set>
#include <vector>

namespace modloader {
    extern std::filesystem::path modloader_config_path;

    namespace win::bootstrap {
        namespace {
            std::unordered_set<HMODULE> loaded_external_libraries;
            std::vector<HMODULE> loaded_libraries;
            std::vector<std::string> cpp_dlls = {
                "c:\\moon\\Core.dll"
                "c:\\moon\\Randomizer.dll"
            };

            bool cpp_bootstrap() {
                bool failed = false;
                for (auto dll: cpp_dlls) {
                    info("initialize", std::format("Loading dll '{}'", dll));
                    auto handle = LoadLibraryA(dll.c_str());
                    if (handle == nullptr) {
                        error("initialize", std::format("Failed to load library, aborting: {}", GetLastError()));
                        failed = true;
                        break;
                    } else {
                        info("initialize", "Load successful");
                        loaded_libraries.push_back(handle);
                    }
                }

                if (failed) {
                    error("initialize", "Cpp Mod Loading failed");
                    for (auto handle: loaded_libraries) {
                        FreeLibrary(handle);
                    }

                    loaded_libraries.clear();
                } else {
                    info("initialize", "Cpp Mod Loading successful");
                }

                return !failed;
            }
        } // namespace

        bool bootstrap() {
            std::ifstream stream(base_path() / modloader_config_path);

            if (stream.is_open()) {
                nlohmann::json j;
                try {
                    stream >> j;
                } catch (nlohmann::json::parse_error& ex) {
                    debug("initialize", std::format("failed to parse '{}{}' error '{}' at byte '{}'", base_path().string(), modloader_config_path.string(), ex.id, ex.byte));
                }

                if (j.contains("cpp") && j["cpp"].is_array()) {
                    cpp_dlls.clear();
                    auto cpp = j["cpp"];
                    for (auto it = cpp.begin(); it != cpp.end(); ++it) {
                        if (it->is_string()) {
                            cpp_dlls.push_back((base_path() / it->get<std::string>()).string());
                        }
                    }
                }
            }

            return cpp_bootstrap();
        }

        void bootstrap_shutdown() {
            for (auto handle: loaded_libraries) {
                FreeLibrary(handle);
            }

            for (auto handle: loaded_external_libraries) {
                FreeLibrary(handle);
            }

            loaded_external_libraries.clear();
            loaded_libraries.clear();
        }

        library_handle load_library(std::filesystem::path dll) {
            auto handle = LoadLibraryA(dll.string().data());
            loaded_external_libraries.emplace(handle);
            return static_cast<library_handle>(handle);
        }

        func_ptr load_function(library_handle handle, std::string_view name) {
            HMODULE win_handle = static_cast<HMODULE>(handle);
            return reinterpret_cast<func_ptr>(GetProcAddress(win_handle, name.data()));
        }

        void free_library(library_handle handle) {
            HMODULE win_handle = static_cast<HMODULE>(handle);
            loaded_external_libraries.erase(win_handle);
            FreeLibrary(win_handle);
        }
    } // namespace win::bootstrap
} // namespace modloader
