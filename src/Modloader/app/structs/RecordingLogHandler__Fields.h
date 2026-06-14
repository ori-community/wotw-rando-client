#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordingLogHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordingLogHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingLogHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordingLogHandler__Fields_DEFINED
struct HashSet_1_System_Exception_;
struct HashSet_1_Moon_ContinuousIntegration_MessageAndStackTrace_;
struct ILogHandler;
struct __declspec(align(8)) RecordingLogHandler__Fields {
    double m_lastCaptureTime;
    struct HashSet_1_System_Exception_* m_exceptions;
    struct HashSet_1_Moon_ContinuousIntegration_MessageAndStackTrace_* m_errors;
    bool m_quickExit;
    struct ILogHandler* m_defaultLogHandler;
};
#endif
#if !defined(IL2CPP_STRUCT_RecordingLogHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecordingLogHandler__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_ContinuousIntegration_MessageAndStackTrace_.h>
#include <Modloader/app/structs/HashSet_1_System_Exception_.h>
#include <Modloader/app/structs/ILogHandler.h>
#endif
#undef IL2CPP_STRUCT_RecordingLogHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingLogHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecordingLogHandler__Fields_FWDDECL)
#include <Modloader/app/structs/RecordingLogHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordingLogHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
