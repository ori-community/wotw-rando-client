#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_DEFINED
struct AudioClip;
struct AnimationCurve;
struct __declspec(align(8)) SoundCompositionTransition_SoundFadeInformation__Fields {
    struct AudioClip* Sound;
    struct AnimationCurve* FadeCurve;
    float FadeDuration;
    float FadeStartTime;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AudioClip.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionTransition_SoundFadeInformation__Fields_FWDDECL)
#include <Modloader/app/structs/SoundCompositionTransition_SoundFadeInformation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionTransition_SoundFadeInformation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
