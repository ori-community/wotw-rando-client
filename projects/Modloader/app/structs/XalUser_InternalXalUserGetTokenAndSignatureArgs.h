#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_DEFINED)
#define IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_DEFINED
struct String;
struct XalUser_InternalXalUserGetTokenAndSignatureArgs {
    struct String* Method;
    struct String* Url;
    uint32_t HeaderCount;
    void* Headers;
    void* BodySize;
    void* Body;
    bool ForceRefresh;
};
#endif
#if !defined(IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_FWDDECL)
#define IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_DEFINED) && !defined(IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_FWDDECL)
#include <Modloader/app/structs/XalUser_InternalXalUserGetTokenAndSignatureArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalUser_InternalXalUserGetTokenAndSignatureArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
