#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordingLogHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordingLogHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingLogHandler_DEFINED)
#include <Modloader/app/structs/RecordingLogHandler__Fields.h>
#if defined(IL2CPP_STRUCT_RecordingLogHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordingLogHandler_DEFINED
struct RecordingLogHandler__Class;
struct RecordingLogHandler {
    struct RecordingLogHandler__Class* klass;
    MonitorData* monitor;
    struct RecordingLogHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordingLogHandler_FWDDECL)
#define IL2CPP_STRUCT_RecordingLogHandler_FWDDECL
#include <Modloader/app/structs/RecordingLogHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordingLogHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingLogHandler_DEFINED) && !defined(IL2CPP_STRUCT_RecordingLogHandler_FWDDECL)
#include <Modloader/app/structs/RecordingLogHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordingLogHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
