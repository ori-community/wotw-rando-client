#include <Modloader/modloader.h>
#include <Modloader/windows_api/bootstrap.h>
#include <Modloader/windows_api/windows.h>

#include <format>
#include <nlohmann/json.hpp>

#include <filesystem>
#include <fstream>
#include <unordered_set>
#include <vector>


namespace modloader::win::bootstrap {
    namespace {
        std::unordered_set<HMODULE> loaded_external_libraries;
        std::vector<HMODULE> loaded_libraries;
        std::vector<std::string> cpp_dlls = {};

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
        const auto modloader_config_path = get_install_data_path("client/modloader_config.json");
        std::ifstream stream(modloader_config_path);

        if (stream.is_open()) {
            nlohmann::json j;
            try {
                stream >> j;
            } catch (nlohmann::json::parse_error& ex) {
                debug(
                    "initialize",
                    std::format(
                        "failed to parse '{}' error '{}' at byte '{}'", modloader_config_path.string(), ex.id, ex.byte
                    )
                );
            }

            if (j.contains("libraries") && j["libraries"].is_array()) {
                cpp_dlls.clear();
                auto cpp = j["libraries"];
                for (auto it = cpp.begin(); it != cpp.end(); ++it) {
                    if (it->is_string()) {
                        cpp_dlls.push_back((get_install_data_path("client") / it->get<std::string>()).string());
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
} // namespace modloader::win::bootstrap
