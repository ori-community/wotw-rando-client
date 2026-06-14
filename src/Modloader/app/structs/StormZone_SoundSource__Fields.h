#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StormZone_SoundSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StormZone_SoundSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StormZone_SoundSource__Fields_DEFINED)
#define IL2CPP_STRUCT_StormZone_SoundSource__Fields_DEFINED
struct AnimatingFloat;
struct AudioSource;
struct __declspec(align(8)) StormZone_SoundSource__Fields {
    struct AnimatingFloat* Volume;
    struct AudioSource* Source;
    float FadeInDuration;
    float FadeOutDuration;
};
#endif
#if !defined(IL2CPP_STRUCT_StormZone_SoundSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_StormZone_SoundSource__Fields_FWDDECL
#include <Modloader/app/structs/AnimatingFloat.h>
#include <Modloader/app/structs/AudioSource.h>
#endif
#undef IL2CPP_STRUCT_StormZone_SoundSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StormZone_SoundSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StormZone_SoundSource__Fields_FWDDECL)
#include <Modloader/app/structs/StormZone_SoundSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StormZone_SoundSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
