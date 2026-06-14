#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate2__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate2__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2__VTable_DEFINED)
#define IL2CPP_STRUCT_X509Certificate2__VTable_DEFINED
struct X509Certificate2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    VirtualInvokeData Dispose;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCertHash;
    VirtualInvokeData GetCertHashString;
    VirtualInvokeData GetIssuerName;
    VirtualInvokeData GetName;
    VirtualInvokeData GetPublicKey;
    VirtualInvokeData GetRawCertData;
    VirtualInvokeData GetSerialNumber;
    VirtualInvokeData GetSerialNumberString;
    VirtualInvokeData ToString_1;
    VirtualInvokeData Import;
    VirtualInvokeData Import_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Reset;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate2__VTable_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate2__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509Certificate2__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2__VTable_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate2__VTable_FWDDECL)
#include <Modloader/app/structs/X509Certificate2__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate2__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
