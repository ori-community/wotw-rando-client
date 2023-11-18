#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTlsProvider__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTlsProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsProvider__VTable_DEFINED)
#define IL2CPP_STRUCT_UnityTlsProvider__VTable_DEFINED
struct UnityTlsProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_SupportsSslStream;
    VirtualInvokeData get_SupportsConnectionInfo;
    VirtualInvokeData get_SupportsMonoExtensions;
    VirtualInvokeData get_SupportedProtocols;
    VirtualInvokeData CreateSslStream;
    VirtualInvokeData CreateSslStreamInternal;
    VirtualInvokeData ValidateCertificate;
    VirtualInvokeData get_SupportsCleanShutdown;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityTlsProvider__VTable_FWDDECL)
#define IL2CPP_STRUCT_UnityTlsProvider__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnityTlsProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsProvider__VTable_DEFINED) && !defined(IL2CPP_STRUCT_UnityTlsProvider__VTable_FWDDECL)
#include <Modloader/app/structs/UnityTlsProvider__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTlsProvider__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
