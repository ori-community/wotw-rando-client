#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaySoundAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaySoundAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaySoundAction_DEFINED)
#include <Modloader/app/structs/PlaySoundAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlaySoundAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaySoundAction_DEFINED
struct PlaySoundAction__Class;
struct PlaySoundAction {
    struct PlaySoundAction__Class* klass;
    MonitorData* monitor;
    struct PlaySoundAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaySoundAction_FWDDECL)
#define IL2CPP_STRUCT_PlaySoundAction_FWDDECL
#include <Modloader/app/structs/PlaySoundAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaySoundAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaySoundAction_DEFINED) && !defined(IL2CPP_STRUCT_PlaySoundAction_FWDDECL)
#include <Modloader/app/structs/PlaySoundAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaySoundAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
