#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_DEFINED
struct MoonTimeline;
struct FloatAnimationParameter;
struct GameObject;
struct IGhostGenericSoundPlayer;
struct SeinChargeJumpPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonTimeline* AimingTimeline;
    struct MoonTimeline* JumpTimeline;
    struct MoonTimeline* DashThroughAttackTimeline;
    struct MoonTimeline* BounceAttackTimeline;
    struct FloatAnimationParameter* ChargeJumpDirection;
    struct GameObject* BlockEffect;
    struct GameObject* HitEffect;
    struct GameObject* ChargeEffect;
    struct GameObject* ChargeTrailEffect;
    struct IGhostGenericSoundPlayer* ParachuteLoop;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IGhostGenericSoundPlayer.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeJumpPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChargeJumpPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeJumpPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
