#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate__VTable_DEFINED)
#define IL2CPP_STRUCT_X509Certificate__VTable_DEFINED
struct X509Certificate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_IssuerName;
    VirtualInvokeData get_KeyAlgorithmParameters;
    VirtualInvokeData get_PublicKey;
    VirtualInvokeData get_RSA;
    VirtualInvokeData get_RawData;
    VirtualInvokeData get_SerialNumber;
    VirtualInvokeData get_SubjectName;
    VirtualInvokeData get_ValidFrom;
    VirtualInvokeData get_ValidUntil;
    VirtualInvokeData GetObjectData_1;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate__VTable_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509Certificate__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate__VTable_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate__VTable_FWDDECL)
#include <Modloader/app/structs/X509Certificate__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
