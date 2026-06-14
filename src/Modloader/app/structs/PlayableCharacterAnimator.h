#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableCharacterAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableCharacterAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableCharacterAnimator_DEFINED)
#include <Modloader/app/structs/PlayableCharacterAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_PlayableCharacterAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayableCharacterAnimator_DEFINED
struct PlayableCharacterAnimator__Class;
struct PlayableCharacterAnimator {
    struct PlayableCharacterAnimator__Class* klass;
    MonitorData* monitor;
    struct PlayableCharacterAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableCharacterAnimator_FWDDECL)
#define IL2CPP_STRUCT_PlayableCharacterAnimator_FWDDECL
#include <Modloader/app/structs/PlayableCharacterAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableCharacterAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableCharacterAnimator_DEFINED) && !defined(IL2CPP_STRUCT_PlayableCharacterAnimator_FWDDECL)
#include <Modloader/app/structs/PlayableCharacterAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableCharacterAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
