#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTrigger_DEFINED)
#include <Modloader/app/structs/EventTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_EventTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_EventTrigger_DEFINED
struct EventTrigger__Class;
struct EventTrigger {
    struct EventTrigger__Class* klass;
    MonitorData* monitor;
    struct EventTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventTrigger_FWDDECL)
#define IL2CPP_STRUCT_EventTrigger_FWDDECL
#include <Modloader/app/structs/EventTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_EventTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTrigger_DEFINED) && !defined(IL2CPP_STRUCT_EventTrigger_FWDDECL)
#include <Modloader/app/structs/EventTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
