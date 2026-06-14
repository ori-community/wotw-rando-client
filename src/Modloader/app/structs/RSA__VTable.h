#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSA__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSA__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSA__VTable_DEFINED)
#define IL2CPP_STRUCT_RSA__VTable_DEFINED
struct RSA__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_KeySize;
    VirtualInvokeData set_KeySize;
    VirtualInvokeData get_LegalKeySizes;
    VirtualInvokeData get_SignatureAlgorithm;
    VirtualInvokeData get_KeyExchangeAlgorithm;
    VirtualInvokeData FromXmlString;
    VirtualInvokeData ToXmlString;
    VirtualInvokeData Encrypt;
    VirtualInvokeData Decrypt;
    VirtualInvokeData SignHash;
    VirtualInvokeData VerifyHash;
    VirtualInvokeData HashData;
    VirtualInvokeData HashData_1;
    VirtualInvokeData SignData;
    VirtualInvokeData SignData_1;
    VirtualInvokeData VerifyData;
    VirtualInvokeData DecryptValue;
    VirtualInvokeData EncryptValue;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
};
#endif
#if !defined(IL2CPP_STRUCT_RSA__VTable_FWDDECL)
#define IL2CPP_STRUCT_RSA__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_RSA__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSA__VTable_DEFINED) && !defined(IL2CPP_STRUCT_RSA__VTable_FWDDECL)
#include <Modloader/app/structs/RSA__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSA__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
