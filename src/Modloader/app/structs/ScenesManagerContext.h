#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerContext_DEFINED)
#include <Modloader/app/structs/ScenesManagerContext__Fields.h>
#if defined(IL2CPP_STRUCT_ScenesManagerContext__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerContext_DEFINED
struct ScenesManagerContext__Class;
struct ScenesManagerContext {
    struct ScenesManagerContext__Class* klass;
    MonitorData* monitor;
    struct ScenesManagerContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerContext_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerContext_FWDDECL
#include <Modloader/app/structs/ScenesManagerContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerContext_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerContext_FWDDECL)
#include <Modloader/app/structs/ScenesManagerContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
