#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogCallbackHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogCallbackHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackHandler__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LogCallbackHandler__Fields_DEFINED
struct List_1_LogCallbackHandler_LogEntry_;
struct __declspec(align(8)) LogCallbackHandler__Fields {
    struct List_1_LogCallbackHandler_LogEntry_* LogEntries;
    struct List_1_LogCallbackHandler_LogEntry_* m_tempLogEntries;
    bool m_showWindow;
    bool m_autoScroll;
    struct Vector2 m_scrollPosition;
    bool m_showInfo;
    bool m_showWarnings;
    bool m_showErrors;
    float m_logEntryHeight;
    int32_t m_logCount;
    int32_t m_warningCount;
    int32_t m_errorCount;
    int32_t m_exceptionCount;
    int32_t m_assertCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogCallbackHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_LogCallbackHandler__Fields_FWDDECL
#include <Modloader/app/structs/List_1_LogCallbackHandler_LogEntry_.h>
#endif
#undef IL2CPP_STRUCT_LogCallbackHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LogCallbackHandler__Fields_FWDDECL)
#include <Modloader/app/structs/LogCallbackHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogCallbackHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
