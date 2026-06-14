#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_DEFINED)
#define IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_DEFINED
struct String;
struct XalHttpHeader__Array;
struct Byte__Array;
struct XalUserGetTokenAndSignatureArgs {
    struct String* Method;
    struct String* Url;
    struct XalHttpHeader__Array* Headers;
    struct Byte__Array* Body;
    bool ForceRefresh;
};
#endif
#if !defined(IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_FWDDECL)
#define IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XalHttpHeader__Array.h>
#endif
#undef IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_DEFINED) && !defined(IL2CPP_STRUCT_XalUserGetTokenAndSignatureArgs_FWDDECL)
#include <Modloader/app/structs/XalUserGetTokenAndSignatureArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalUserGetTokenAndSignatureArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
