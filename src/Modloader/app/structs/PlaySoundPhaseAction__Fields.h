#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_DEFINED
struct AudioClip;
struct SoundProvider;
struct SoundCompositionTransition;
struct SoundPlayer;
struct PlaySoundPhaseAction__Fields {
    struct PerformingAction__Fields _;
    struct AudioClip* Sound;
    struct SoundProvider* SoundProvider;
    struct SoundCompositionTransition* Transition;
    struct SoundPlayer* m_soundPlayer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/SoundCompositionTransition.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlaySoundPhaseAction__Fields_FWDDECL)
#include <Modloader/app/structs/PlaySoundPhaseAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaySoundPhaseAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
