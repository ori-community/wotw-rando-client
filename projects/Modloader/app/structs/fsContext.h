#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsContext_DEFINED)
#include <Modloader/app/structs/fsContext__Fields.h>
#if defined(IL2CPP_STRUCT_fsContext__Fields_DEFINED)
#define IL2CPP_STRUCT_fsContext_DEFINED
struct fsContext__Class;
struct fsContext {
    struct fsContext__Class* klass;
    MonitorData* monitor;
    struct fsContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsContext_FWDDECL)
#define IL2CPP_STRUCT_fsContext_FWDDECL
#include <Modloader/app/structs/fsContext__Class.h>
#endif
#undef IL2CPP_STRUCT_fsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsContext_DEFINED) && !defined(IL2CPP_STRUCT_fsContext_FWDDECL)
#include <Modloader/app/structs/fsContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
