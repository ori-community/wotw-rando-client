#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContext_DEFINED)
#define IL2CPP_STRUCT_IContext_DEFINED
struct IContext__Class;
struct IContext {
    struct IContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContext_FWDDECL)
#define IL2CPP_STRUCT_IContext_FWDDECL
#include <Modloader/app/structs/IContext__Class.h>
#endif
#undef IL2CPP_STRUCT_IContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContext_DEFINED) && !defined(IL2CPP_STRUCT_IContext_FWDDECL)
#include <Modloader/app/structs/IContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
