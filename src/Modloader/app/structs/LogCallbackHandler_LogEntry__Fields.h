#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_DEFINED)
#include <Modloader/app/structs/LogType__Enum.h>
#if defined(IL2CPP_STRUCT_LogType__Enum_DEFINED)
#define IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_DEFINED
struct String;
struct __declspec(align(8)) LogCallbackHandler_LogEntry__Fields {
    struct String* m_condition;
    struct String* m_stackTrace;
    LogType__Enum m_logType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LogCallbackHandler_LogEntry__Fields_FWDDECL)
#include <Modloader/app/structs/LogCallbackHandler_LogEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogCallbackHandler_LogEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
