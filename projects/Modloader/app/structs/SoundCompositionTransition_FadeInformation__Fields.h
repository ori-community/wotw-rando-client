#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) SoundCompositionTransition_FadeInformation__Fields {
    struct AnimationCurve* FadeCurve;
    float FadeDuration;
    float FadeStartTime;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionTransition_FadeInformation__Fields_FWDDECL)
#include <Modloader/app/structs/SoundCompositionTransition_FadeInformation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionTransition_FadeInformation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
