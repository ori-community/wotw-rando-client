#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_DEFINED
struct AudioClip;
struct List_1_System_Boolean_;
struct AnimationCurve;
struct __declspec(align(8)) SoundComposition_SoundLayer__Fields {
    struct AudioClip* Sound;
    struct List_1_System_Boolean_* LoopsToPlay;
    float Volume;
    struct AnimationCurve* VolumeOverTime;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/List_1_System_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_FWDDECL)
#include <Modloader/app/structs/SoundComposition_SoundLayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundComposition_SoundLayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
