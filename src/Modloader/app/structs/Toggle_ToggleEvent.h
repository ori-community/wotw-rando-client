#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Toggle_ToggleEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Toggle_ToggleEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toggle_ToggleEvent_DEFINED)
#include <Modloader/app/structs/Toggle_ToggleEvent__Fields.h>
#if defined(IL2CPP_STRUCT_Toggle_ToggleEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_Toggle_ToggleEvent_DEFINED
struct Toggle_ToggleEvent__Class;
struct Toggle_ToggleEvent {
    struct Toggle_ToggleEvent__Class* klass;
    MonitorData* monitor;
    struct Toggle_ToggleEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Toggle_ToggleEvent_FWDDECL)
#define IL2CPP_STRUCT_Toggle_ToggleEvent_FWDDECL
#include <Modloader/app/structs/Toggle_ToggleEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_Toggle_ToggleEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toggle_ToggleEvent_DEFINED) && !defined(IL2CPP_STRUCT_Toggle_ToggleEvent_FWDDECL)
#include <Modloader/app/structs/Toggle_ToggleEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Toggle_ToggleEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
