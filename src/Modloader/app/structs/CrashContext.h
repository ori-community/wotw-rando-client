#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrashContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrashContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_DEFINED)
#define IL2CPP_STRUCT_CrashContext_DEFINED
struct CrashContext__Class;
struct CrashContext {
    struct CrashContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CrashContext_FWDDECL)
#define IL2CPP_STRUCT_CrashContext_FWDDECL
#include <Modloader/app/structs/CrashContext__Class.h>
#endif
#undef IL2CPP_STRUCT_CrashContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_DEFINED) && !defined(IL2CPP_STRUCT_CrashContext_FWDDECL)
#include <Modloader/app/structs/CrashContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrashContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
