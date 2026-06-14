#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_DEFINED
struct AudioClip;
struct SoundCompositionSoundVolumeAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct AudioClip* Sound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionSoundVolumeAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SoundCompositionSoundVolumeAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionSoundVolumeAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
