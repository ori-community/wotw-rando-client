#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugLogHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugLogHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogHandler_DEFINED)
#define IL2CPP_STRUCT_DebugLogHandler_DEFINED
struct DebugLogHandler__Class;
struct DebugLogHandler {
    struct DebugLogHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugLogHandler_FWDDECL)
#define IL2CPP_STRUCT_DebugLogHandler_FWDDECL
#include <Modloader/app/structs/DebugLogHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugLogHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogHandler_DEFINED) && !defined(IL2CPP_STRUCT_DebugLogHandler_FWDDECL)
#include <Modloader/app/structs/DebugLogHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugLogHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
