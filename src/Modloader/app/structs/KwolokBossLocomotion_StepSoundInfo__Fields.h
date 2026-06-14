#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_DEFINED
struct SoundHost;
struct __declspec(align(8)) KwolokBossLocomotion_StepSoundInfo__Fields {
    float NormalizedTime;
    struct SoundHost* SoundHost;
    bool WasPlayed;
};
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_FWDDECL
#include <Modloader/app/structs/SoundHost.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossLocomotion_StepSoundInfo__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossLocomotion_StepSoundInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossLocomotion_StepSoundInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
