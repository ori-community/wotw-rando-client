#include <metahost.h>
#include <mscoree.h>
#include <stdio.h>
#pragma comment(lib, "mscoree.lib") 

#include <common.h>
#include <Common/ext.h>
#include <string>

namespace
{
    ICLRMetaHost* meta_host = nullptr;
    ICLRRuntimeInfo* runtime_info = nullptr;
    ICLRRuntimeHost* runtime_host = nullptr;
}

bool bootstrap()
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
        trace(MessageType::Error, 2, "initialize", "failed to start csharp runtime");
        return false;
    }

    DWORD return_value = 0;
    hr = runtime_host->ExecuteInDefaultAppDomain(L"c:\\moon\\RandoMainDll.dll", L"RandoMainDLL.Randomizer", L"Bootstrap", L"C:\\moon\\InjectDll.dll", &return_value);
    trace(MessageType::Error, 2, "initialize", format("Randomizer return %d", hr));
    if (hr != S_OK)
        return false;

    return true;
}

void shutdown()
{
    runtime_info->Release();
    meta_host->Release();
    runtime_host->Release();
}
