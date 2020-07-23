#include <metahost.h>
#include <mscoree.h>
#include <stdio.h>
#pragma comment(lib, "mscoree.lib") 

#include <common.h>
#include <Common/ext.h>

#include <json/json.hpp>

#include <locale>
#include <codecvt>
#include <fstream>
#include <string>
#include <vector>

namespace modloader
{
    extern std::string base_path;
    extern std::string modloader_path;

    namespace
    {
        // TODO: Read these from a file or something.
        std::vector<HMODULE> loaded_libraries;
        std::vector<std::string> cpp_dlls = {
            "c:\\moon\\InjectDLL.dll"
        };

        struct CSharpDll
        {
            std::wstring path;
            std::wstring klass;
            std::wstring method;
        };

        std::vector<CSharpDll> csharp_dlls = {
            CSharpDll{ L"c:\\moon\\RandoMainDll.dll", L"RandoMainDLL.Randomizer", L"Bootstrap" }
        };

        bool cpp_bootstrap()
        {
            bool failed = false;
            for (auto dll : cpp_dlls)
            {
                trace(MessageType::Info, 5, "initialize", format("Loading dll '%s'", dll.c_str()));
                auto handle = LoadLibraryA(dll.c_str());
                if (handle == nullptr)
                {
                    trace(MessageType::Error, 1, "initialize", format("Failed to load library, aborting: %d", GetLastError()));
                    failed = true;
                    break;
                }
                else
                {
                    trace(MessageType::Info, 5, "initialize", "Load successful");
                    loaded_libraries.push_back(handle);
                }
            }

            if (failed)
            {
                trace(MessageType::Error, 1, "initialize", "Cpp Mod Loading failed");
                for (auto handle : loaded_libraries)
                    FreeLibrary(handle);

                loaded_libraries.clear();
            }
            else
                trace(MessageType::Info, 5, "initialize", "Cpp Mod Loading successful");
        
            return !failed;
        }

        ICLRMetaHost* meta_host = nullptr;
        ICLRRuntimeInfo* runtime_info = nullptr;
        ICLRRuntimeHost* runtime_host = nullptr;

        bool csharp_bootstrap()
        {
            HRESULT hr = CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost, (LPVOID*)&meta_host);
            if (hr != S_OK)
            {
                trace(MessageType::Error, 2, "initialize", "failed to create clr instance");
                return false;
            }

            hr = meta_host->GetRuntime(L"v4.0.30319", IID_ICLRRuntimeInfo, (LPVOID*)&runtime_info);
            if (hr != S_OK)
            {
                trace(MessageType::Error, 2, "initialize", "failed to find csharp runtime");
                return false;
            }

            hr = runtime_info->GetInterface(CLSID_CLRRuntimeHost, IID_ICLRRuntimeHost, (LPVOID*)&runtime_host);
            if (hr != S_OK)
            {
                trace(MessageType::Error, 2, "initialize", "failed get runtime interface");
                return false;
            }

            hr = runtime_host->Start();
            if (hr != S_OK)
            {
                trace(MessageType::Error, 2, "initialize", "failed to start csharp runtime.");
                return false;
            }

            for (auto dll : csharp_dlls)
            {
                DWORD return_value = 0;
                trace(MessageType::Info, 5, "initialize", format("Loading dll '%ls' entry 'int %ls.%ls(string param)'", dll.path.c_str(), dll.klass.c_str(), dll.method.c_str()));
                hr = runtime_host->ExecuteInDefaultAppDomain(dll.path.c_str(), dll.klass.c_str(), dll.method.c_str(), L"", &return_value);
                if (hr != S_OK)
                {
                    trace(MessageType::Error, 1, "initialize", format("'%ls' returned %d", dll.path.c_str(), hr));
                    trace(MessageType::Error, 1, "initialize", "CSharp Mod Loading failed.");
                    return false;
                }
            }

            trace(MessageType::Info, 5, "initialize", "CSharp Mod Loading successful.");
            return true;
        }
    }

    bool bootstrap()
    {
        std::ifstream stream(base_path + modloader_path);
        if (stream.is_open())
        {
            nlohmann::json j;
            try
            {
                stream >> j;
            }
            catch (nlohmann::json::parse_error& ex)
            {
                trace(MessageType::Debug, 3, "initialize", format("failed to parse '%s%s' error '%d' at byte '%d'", base_path.c_str(), modloader_path.c_str(), ex.id, ex.byte));
            }

            if (j.contains("cpp") && j["cpp"].is_array())
            {
                cpp_dlls.clear();
                auto cpp = j["cpp"];
                for (auto it = cpp.begin(); it != cpp.end(); ++it)
                    if (it->is_string())
                        cpp_dlls.push_back(base_path + it->get<std::string>());
            }

            if (j.contains("csharp") && j["csharp"].is_array())
            {
                std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
                csharp_dlls.clear();
                auto csharp = j["csharp"];
                for (auto it = csharp.begin(); it != csharp.end(); ++it)
                {
                    if (it->is_object() && it->contains("dll") && it->contains("class") && it->contains("method") &&
                        (*it)["dll"].is_string() && (*it)["class"].is_string() && (*it)["method"].is_string())
                        csharp_dlls.push_back(CSharpDll{
                            converter.from_bytes(base_path + (*it)["dll"].get<std::string>()),
                            converter.from_bytes((*it)["class"].get<std::string>()),
                            converter.from_bytes((*it)["method"].get<std::string>())
                            });
                }
            }
        }

        if (!cpp_bootstrap())
            return false;

        return csharp_bootstrap();
    }

    void shutdown()
    {
        runtime_info->Release();
        meta_host->Release();
        runtime_host->Release();

        for (auto handle : loaded_libraries)
            FreeLibrary(handle);

        loaded_libraries.clear();
    }
}
