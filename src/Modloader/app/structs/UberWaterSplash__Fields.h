#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterSplash__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterSplash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterSplash__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterSplash__Fields_DEFINED
struct AudioClip__Array;
struct ParticleSystem;
struct AudioSource;
struct UberWaterSplash__Fields {
    struct MonoBehaviour__Fields _;
    bool AutoDeleteSplash;
    float SplashLifetime;
    struct AudioClip__Array* SplashClips;
    struct ParticleSystem* ParticleEmitter;
    struct AudioSource* m_audioSource;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterSplash__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterSplash__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip__Array.h>
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_UberWaterSplash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterSplash__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterSplash__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterSplash__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterSplash__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
