#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_DEFINED)
#include <Modloader/app/structs/SizeT.h>
#if defined(IL2CPP_STRUCT_SizeT_DEFINED)
#define IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_DEFINED
struct String;
struct XUserGetTokenAndSignatureUtf16Data_1 {
    struct SizeT TokenCount;
    struct SizeT SignatureCount;
    struct String* Token;
    struct String* Signature;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_FWDDECL)
#define IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_DEFINED) && !defined(IL2CPP_STRUCT_XUserGetTokenAndSignatureUtf16Data_1_FWDDECL)
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Data_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Data_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
