#include <comdef.h>
#include <metahost.h>
#include <mscoree.h>
#pragma comment(lib, "mscoree.lib")

#include <Common/ext.h>
#include <common.h>

#include <nlohmann/json.hpp>
#include <fmt/core.h>

#include <fstream>
#include <string>
#include <vector>

namespace modloader {
    extern std::string base_path;
    extern std::string modloader_path;

    namespace win::bootstrap {
        namespace {
            // TODO: Read these from a file or something.
            std::vector<HMODULE> loaded_libraries;
            std::vector<std::string> cpp_dlls = {
                "c:\\moon\\Core.dll"
                "c:\\moon\\Randomizer.dll"
            };

            struct CSharpDll {
                std::wstring path;
                std::wstring klass;
                std::wstring method;
            };

            std::vector<CSharpDll> csharp_dlls = {
                CSharpDll{ L"c:\\moon\\RandomizerManaged.dll", L"RandomizerManaged.Randomizer", L"Bootstrap" }
            };

            bool cpp_bootstrap() {
                bool failed = false;
                for (auto dll : cpp_dlls) {
                    trace(MessageType::Info, 5, "initialize", fmt::format("Loading dll '{}'", dll));
                    auto handle = LoadLibraryA(dll.c_str());
                    if (handle == nullptr) {
                        trace(MessageType::Error, 1, "initialize", fmt::format("Failed to load library, aborting: {}", GetLastError()));
                        failed = true;
                        break;
                    } else {
                        trace(MessageType::Info, 5, "initialize", "Load successful");
                        loaded_libraries.push_back(handle);
                    }
                }

                if (failed) {
                    trace(MessageType::Error, 1, "initialize", "Cpp Mod Loading failed");
                    for (auto handle : loaded_libraries)
                        FreeLibrary(handle);

                    loaded_libraries.clear();
                } else
                    trace(MessageType::Info, 5, "initialize", "Cpp Mod Loading successful");

                return !failed;
            }

            ICLRMetaHost* meta_host = nullptr;
            ICLRRuntimeInfo* runtime_info = nullptr;
            ICLRRuntimeHost* runtime_host = nullptr;

            bool csharp_bootstrap() {
                HRESULT hr = CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost, (LPVOID*)&meta_host);
                if (hr != S_OK) {
                    _com_error err(hr);
                    LPCTSTR err_msg = err.ErrorMessage();
                    trace(MessageType::Error, 2, "initialize", fmt::format("failed to create clr instance ({})", err_msg));
                    return false;
                }

                hr = meta_host->GetRuntime(L"v4.0.30319", IID_ICLRRuntimeInfo, (LPVOID*)&runtime_info);
                if (hr != S_OK) {
                    _com_error err(hr);
                    LPCTSTR err_msg = err.ErrorMessage();
                    trace(MessageType::Error, 2, "initialize", fmt::format("failed to find csharp runtime ({})", err_msg));
                    return false;
                }

                hr = runtime_info->GetInterface(CLSID_CLRRuntimeHost, IID_ICLRRuntimeHost, (LPVOID*)&runtime_host);
                if (hr != S_OK) {
                    _com_error err(hr);
                    LPCTSTR err_msg = err.ErrorMessage();
                    trace(MessageType::Error, 2, "initialize", fmt::format("failed get runtime interface ({})", err_msg));
                    return false;
                }

                hr = runtime_host->Start();
                if (hr != S_OK) {
                    _com_error err(hr);
                    LPCTSTR err_msg = err.ErrorMessage();
                    trace(MessageType::Error, 2, "initialize", fmt::format("failed to start csharp runtime ({}).", err_msg));
                    return false;
                }

                for (auto dll : csharp_dlls) {
                    DWORD return_value = 0;
                    trace(MessageType::Info, 5, "initialize",fmt::format(
                                                                      "Loading dll '{}' entry 'int {}.{}(string param)'",
                                                                      convert_wstring_to_string(dll.path),
                                                                      convert_wstring_to_string(dll.klass),
                                                                      convert_wstring_to_string(dll.method)
                                                                      ));
                    hr = runtime_host->ExecuteInDefaultAppDomain(dll.path.c_str(), dll.klass.c_str(), dll.method.c_str(), L"", &return_value);
                    if (hr != S_OK) {
                        trace(MessageType::Error, 1, "initialize", fmt::format("'{}' returned {}", convert_wstring_to_string(dll.path), hr));
                        trace(MessageType::Error, 1, "initialize", "CSharp Mod Loading failed.");
                        return false;
                    }
                }

                trace(MessageType::Info, 5, "initialize", "CSharp Mod Loading successful.");
                return true;
            }
        } // namespace

        bool bootstrap() {
            std::ifstream stream(base_path + modloader_path);
            if (stream.is_open()) {
                nlohmann::json j;
                try {
                    stream >> j;
                } catch (nlohmann::json::parse_error& ex) {
                    trace(MessageType::Debug, 3, "initialize", fmt::format("failed to parse '{}{}' error '{}' at byte '{}'", base_path, modloader_path, ex.id, ex.byte));
                }

                if (j.contains("cpp") && j["cpp"].is_array()) {
                    cpp_dlls.clear();
                    auto cpp = j["cpp"];
                    for (auto it = cpp.begin(); it != cpp.end(); ++it)
                        if (it->is_string())
                            cpp_dlls.push_back(base_path + it->get<std::string>());
                }

                if (j.contains("csharp") && j["csharp"].is_array()) {
                    csharp_dlls.clear();
                    auto csharp = j["csharp"];
                    for (auto it = csharp.begin(); it != csharp.end(); ++it) {
                        if (it->is_object() && it->contains("dll") && it->contains("class") && it->contains("method") &&
                            (*it)["dll"].is_string() && (*it)["class"].is_string() && (*it)["method"].is_string()) {
                            csharp_dlls.push_back(
                                    CSharpDll{
                                            convert_string_to_wstring(base_path + (*it)["dll"].get<std::string>()),
                                            convert_string_to_wstring((*it)["class"].get<std::string>()),
                                            convert_string_to_wstring((*it)["method"].get<std::string>()) }
                            );
                        }
                    }
                }
            }

            if (!cpp_bootstrap())
                return false;

            return csharp_bootstrap();
        }

        void bootstrap_shutdown() {
            runtime_info->Release();
            meta_host->Release();
            runtime_host->Release();

            for (auto handle : loaded_libraries)
                FreeLibrary(handle);

            loaded_libraries.clear();
        }
    }
} // namespace modloader
