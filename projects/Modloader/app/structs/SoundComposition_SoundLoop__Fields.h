#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_DEFINED
struct AudioClip;
struct AnimationCurve;
struct __declspec(align(8)) SoundComposition_SoundLoop__Fields {
    struct AudioClip* Sound;
    float Volume;
    struct AnimationCurve* VolumeOverTime;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AudioClip.h>
#endif
#undef IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_FWDDECL)
#include <Modloader/app/structs/SoundComposition_SoundLoop__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundComposition_SoundLoop__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
