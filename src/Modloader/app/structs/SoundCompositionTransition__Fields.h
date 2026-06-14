#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionTransition__Fields_DEFINED
struct List_1_SoundCompositionTransition_SoundFadeInformation_;
struct SoundCompositionTransition_FadeInformation;
struct AudioClip;
struct SoundCompositionTransition__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_SoundCompositionTransition_SoundFadeInformation_* FadeOut;
    struct List_1_SoundCompositionTransition_SoundFadeInformation_* FadeIn;
    struct SoundCompositionTransition_FadeInformation* DefaultFadeIn;
    struct SoundCompositionTransition_FadeInformation* DefaultFadeOut;
    float TransitionDelay;
    float NextSoundDelay;
    struct AudioClip* Sound;
    float Volume;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionTransition__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/List_1_SoundCompositionTransition_SoundFadeInformation_.h>
#include <Modloader/app/structs/SoundCompositionTransition_FadeInformation.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionTransition__Fields_FWDDECL)
#include <Modloader/app/structs/SoundCompositionTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
