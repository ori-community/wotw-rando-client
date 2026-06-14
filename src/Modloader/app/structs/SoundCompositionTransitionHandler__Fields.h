#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_DEFINED
struct SoundCompositionPlayer;
struct SoundCompositionTransition;
struct SoundPlayer;
struct SoundCompositionTransitionHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundCompositionPlayer* From;
    struct SoundCompositionPlayer* To;
    struct SoundCompositionTransition* Transition;
    float m_time;
    struct SoundPlayer* m_transitionPlayer;
    bool m_playedTransition;
    bool m_playedNext;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_FWDDECL
#include <Modloader/app/structs/SoundCompositionPlayer.h>
#include <Modloader/app/structs/SoundCompositionTransition.h>
#include <Modloader/app/structs/SoundPlayer.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_FWDDECL)
#include <Modloader/app/structs/SoundCompositionTransitionHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionTransitionHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
