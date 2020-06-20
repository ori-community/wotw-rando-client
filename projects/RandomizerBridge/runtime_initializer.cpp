#include <metahost.h>
#include <string>
#include <msclr\marshal_cppstd.h>

#pragma comment(lib, "mscoree.lib")

#import "mscorlib.tlb" raw_interfaces_only \
    high_property_prefixes("_get","_put","_putref") \
    rename("ReportEvent", "InteropServices_ReportEvent")

using namespace System;
using namespace System::IO;
using namespace System::Reflection;
using namespace msclr::interop;

extern "C"
{
    __declspec(dllexport) void initialize_runtime(std::string assembly_path)
    {
        HRESULT hr;
        ICLRMetaHost* pMetaHost = NULL;
        ICLRRuntimeInfo* pRuntimeInfo = NULL;
        ICLRRuntimeHost* pClrRuntimeHost = NULL;

        // build runtime
        hr = CLRCreateInstance(CLSID_CLRMetaHost, IID_PPV_ARGS(&pMetaHost));
        hr = pMetaHost->GetRuntime(L"v4.0.30319", IID_PPV_ARGS(&pRuntimeInfo));

        if (pRuntimeInfo != nullptr)
        {
            hr = pRuntimeInfo->GetInterface(CLSID_CLRRuntimeHost,
                IID_PPV_ARGS(&pClrRuntimeHost));

            // start runtime
            hr = pClrRuntimeHost->Start();
        }

        AppDomain^ current = AppDomain::CurrentDomain;

        auto assembly = marshal_as<String^>(assembly_path);
        if (assembly->Length != 0)
        {
            //auto assembly_file = Path::GetFileName(assembly);
            //auto assembly_dir = Path::GetDirectoryName(assembly);
            //Environment::SetEnvironmentVariable("PATH", Environment::GetEnvironmentVariable("PATH") + ";" + assembly_dir);
            auto loaded_assembly = Assembly::LoadFrom(assembly);
        }
    }
}
