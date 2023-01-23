#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaySoundPhaseAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaySoundPhaseAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaySoundPhaseAction_DEFINED)
#include <Modloader/app/structs/PlaySoundPhaseAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaySoundPhaseAction_DEFINED
struct PlaySoundPhaseAction__Class;
struct PlaySoundPhaseAction {
    struct PlaySoundPhaseAction__Class* klass;
    MonitorData* monitor;
    struct PlaySoundPhaseAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaySoundPhaseAction_FWDDECL)
#define IL2CPP_STRUCT_PlaySoundPhaseAction_FWDDECL
#include <Modloader/app/structs/PlaySoundPhaseAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaySoundPhaseAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaySoundPhaseAction_DEFINED) && !defined(IL2CPP_STRUCT_PlaySoundPhaseAction_FWDDECL)
#include <Modloader/app/structs/PlaySoundPhaseAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaySoundPhaseAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
