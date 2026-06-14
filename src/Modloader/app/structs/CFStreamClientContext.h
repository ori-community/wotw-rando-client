#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFStreamClientContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFStreamClientContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFStreamClientContext_DEFINED)
#define IL2CPP_STRUCT_CFStreamClientContext_DEFINED
struct CFStreamClientContext {
    void* Version;
    void* Info;
    void* Retain;
    void* Release;
    void* CopyDescription;
};
#endif
#if !defined(IL2CPP_STRUCT_CFStreamClientContext_FWDDECL)
#define IL2CPP_STRUCT_CFStreamClientContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_CFStreamClientContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFStreamClientContext_DEFINED) && !defined(IL2CPP_STRUCT_CFStreamClientContext_FWDDECL)
#include <Modloader/app/structs/CFStreamClientContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFStreamClientContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
