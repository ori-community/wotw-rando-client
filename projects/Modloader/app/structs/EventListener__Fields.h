#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventListener__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventListener__Fields_DEFINED)
#define IL2CPP_STRUCT_EventListener__Fields_DEFINED
struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs_;
struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs_;
struct EventListener;
struct ActivityFilter;
struct __declspec(align(8)) EventListener__Fields {
    struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs_* _EventSourceCreated;
    struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs_* EventWritten;
    struct EventListener* m_Next;
    struct ActivityFilter* m_activityFilter;
};
#endif
#if !defined(IL2CPP_STRUCT_EventListener__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventListener__Fields_FWDDECL
#include <Modloader/app/structs/ActivityFilter.h>
#include <Modloader/app/structs/EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs_.h>
#include <Modloader/app/structs/EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs_.h>
#include <Modloader/app/structs/EventListener.h>
#endif
#undef IL2CPP_STRUCT_EventListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventListener__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventListener__Fields_FWDDECL)
#include <Modloader/app/structs/EventListener__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventListener__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
