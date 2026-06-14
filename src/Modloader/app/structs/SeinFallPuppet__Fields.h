#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFallPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFallPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFallPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinFallPuppet__Fields_DEFINED
struct Event_1;
struct GameObject;
struct SurfaceToSoundProviderMap;
struct RTPC;
struct MoonAnimation;
struct FloatAnimationParameter;
struct MoonTimeline;
struct CharacterTimelineTurning;
struct SeinFallPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct Event_1* FallingSound;
    struct Event_1* FallingSoundStop;
    struct GameObject* LandingParticleEffect;
    struct SurfaceToSoundProviderMap* LandingSound;
    struct RTPC* FallSpeedRtpc;
    struct MoonAnimation* Idle;
    struct MoonAnimation* Moving;
    struct FloatAnimationParameter* FallSpeed;
    struct FloatAnimationParameter* HorizontalSpeed;
    struct MoonAnimation* Turn;
    struct MoonTimeline* FallTurnTimeline;
    struct CharacterTimelineTurning* FallTurnTimelineSetup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFallPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinFallPuppet__Fields_FWDDECL
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_SeinFallPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFallPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinFallPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinFallPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFallPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
