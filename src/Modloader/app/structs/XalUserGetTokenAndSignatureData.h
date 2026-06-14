#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_DEFINED)
#define IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_DEFINED
struct String;
struct XalUserGetTokenAndSignatureData {
    void* TokenSize;
    void* SignatureSize;
    struct String* Token;
    struct String* Signature;
};
#endif
#if !defined(IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_FWDDECL)
#define IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_DEFINED) && !defined(IL2CPP_STRUCT_XalUserGetTokenAndSignatureData_FWDDECL)
#include <Modloader/app/structs/XalUserGetTokenAndSignatureData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalUserGetTokenAndSignatureData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
