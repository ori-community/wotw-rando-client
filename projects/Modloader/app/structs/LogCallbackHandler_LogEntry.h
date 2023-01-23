#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogCallbackHandler_LogEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogCallbackHandler_LogEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry_DEFINED)
#include <Modloader/app/structs/LogCallbackHandler_LogEntry__Fields.h>
#if defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_LogCallbackHandler_LogEntry_DEFINED
struct LogCallbackHandler_LogEntry__Class;
struct LogCallbackHandler_LogEntry {
    struct LogCallbackHandler_LogEntry__Class* klass;
    MonitorData* monitor;
    struct LogCallbackHandler_LogEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry_FWDDECL)
#define IL2CPP_STRUCT_LogCallbackHandler_LogEntry_FWDDECL
#include <Modloader/app/structs/LogCallbackHandler_LogEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_LogCallbackHandler_LogEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry_DEFINED) && !defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry_FWDDECL)
#include <Modloader/app/structs/LogCallbackHandler_LogEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogCallbackHandler_LogEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
