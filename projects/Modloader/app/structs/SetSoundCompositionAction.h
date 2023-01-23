#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetSoundCompositionAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetSoundCompositionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetSoundCompositionAction_DEFINED)
#include <Modloader/app/structs/SetSoundCompositionAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetSoundCompositionAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetSoundCompositionAction_DEFINED
struct SetSoundCompositionAction__Class;
struct SetSoundCompositionAction {
    struct SetSoundCompositionAction__Class* klass;
    MonitorData* monitor;
    struct SetSoundCompositionAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetSoundCompositionAction_FWDDECL)
#define IL2CPP_STRUCT_SetSoundCompositionAction_FWDDECL
#include <Modloader/app/structs/SetSoundCompositionAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetSoundCompositionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetSoundCompositionAction_DEFINED) && !defined(IL2CPP_STRUCT_SetSoundCompositionAction_FWDDECL)
#include <Modloader/app/structs/SetSoundCompositionAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetSoundCompositionAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
