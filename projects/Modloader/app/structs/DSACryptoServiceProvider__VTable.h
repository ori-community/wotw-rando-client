#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_DEFINED)
#define IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_DEFINED
struct DSACryptoServiceProvider__VTable {
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
    VirtualInvokeData CreateSignature;
    VirtualInvokeData VerifySignature;
    VirtualInvokeData HashData;
    VirtualInvokeData HashData_1;
    VirtualInvokeData SignData;
    VirtualInvokeData SignData_1;
    VirtualInvokeData VerifyData;
    VirtualInvokeData VerifyData_1;
    VirtualInvokeData ExportParameters;
    VirtualInvokeData ImportParameters;
    VirtualInvokeData ExportCspBlob;
    VirtualInvokeData ImportCspBlob;
    VirtualInvokeData get_CspKeyContainerInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_FWDDECL)
#define IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DSACryptoServiceProvider__VTable_FWDDECL)
#include <Modloader/app/structs/DSACryptoServiceProvider__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSACryptoServiceProvider__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
