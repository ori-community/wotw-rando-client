#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugLogger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugLogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogger_DEFINED)
#include <Modloader/app/structs/DebugLogger__Fields.h>
#if defined(IL2CPP_STRUCT_DebugLogger__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugLogger_DEFINED
struct DebugLogger__Class;
struct DebugLogger {
    struct DebugLogger__Class* klass;
    MonitorData* monitor;
    struct DebugLogger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugLogger_FWDDECL)
#define IL2CPP_STRUCT_DebugLogger_FWDDECL
#include <Modloader/app/structs/DebugLogger__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugLogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogger_DEFINED) && !defined(IL2CPP_STRUCT_DebugLogger_FWDDECL)
#include <Modloader/app/structs/DebugLogger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugLogger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
