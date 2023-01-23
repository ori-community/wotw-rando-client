#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ButtonInteractionTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ButtonInteractionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonInteractionTransition_DEFINED)
#include <Modloader/app/structs/ButtonInteractionTransition__Fields.h>
#if defined(IL2CPP_STRUCT_ButtonInteractionTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_ButtonInteractionTransition_DEFINED
struct ButtonInteractionTransition__Class;
struct ButtonInteractionTransition {
    struct ButtonInteractionTransition__Class* klass;
    MonitorData* monitor;
    struct ButtonInteractionTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ButtonInteractionTransition_FWDDECL)
#define IL2CPP_STRUCT_ButtonInteractionTransition_FWDDECL
#include <Modloader/app/structs/ButtonInteractionTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_ButtonInteractionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonInteractionTransition_DEFINED) && !defined(IL2CPP_STRUCT_ButtonInteractionTransition_FWDDECL)
#include <Modloader/app/structs/ButtonInteractionTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ButtonInteractionTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
