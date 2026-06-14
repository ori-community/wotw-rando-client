#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleanupDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleanupDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleanupDebugger_DEFINED)
#include <Modloader/app/structs/CleanupDebugger__Fields.h>
#if defined(IL2CPP_STRUCT_CleanupDebugger__Fields_DEFINED)
#define IL2CPP_STRUCT_CleanupDebugger_DEFINED
struct CleanupDebugger__Class;
struct CleanupDebugger {
    struct CleanupDebugger__Class* klass;
    MonitorData* monitor;
    struct CleanupDebugger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleanupDebugger_FWDDECL)
#define IL2CPP_STRUCT_CleanupDebugger_FWDDECL
#include <Modloader/app/structs/CleanupDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_CleanupDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleanupDebugger_DEFINED) && !defined(IL2CPP_STRUCT_CleanupDebugger_FWDDECL)
#include <Modloader/app/structs/CleanupDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleanupDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
