#include <metahost.h>
#include <mscoree.h>
#include <stdio.h>
#pragma comment(lib, "mscoree.lib") 

#include <common.h>
#include <Common/ext.h>

#include <string>
#include <vector>

namespace modloader
{
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
            std::wstring param;
        };

        std::vector<CSharpDll> csharp_dlls = {
            CSharpDll{ L"c:\\moon\\RandoMainDll.dll", L"RandoMainDLL.Randomizer", L"Bootstrap", L"C:\\moon\\InjectDll.dll" }
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
                hr = runtime_host->ExecuteInDefaultAppDomain(dll.path.c_str(), dll.klass.c_str(), dll.method.c_str(), dll.param.c_str(), &return_value);
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
