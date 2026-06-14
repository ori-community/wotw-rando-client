#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinIdlePuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinIdlePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinIdlePuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinIdlePuppet__Fields_DEFINED
struct SoundProvider;
struct MoonAnimation;
struct FloatAnimationParameter;
struct SeinLeafParticles;
struct GameObject;
struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_;
struct SeinIdlePuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct SoundProvider* YawnSound;
    struct MoonAnimation* Idle;
    struct FloatAnimationParameter* Slope;
    struct MoonAnimation* IdleYawn;
    struct MoonAnimation* LookBackIn;
    struct MoonAnimation* LookBackLoop;
    struct MoonAnimation* LookBackOut;
    struct FloatAnimationParameter* Ground;
    struct FloatAnimationParameter* SlopeB;
    struct FloatAnimationParameter* SlopeUp;
    struct FloatAnimationParameter* SlopeDown;
    struct FloatAnimationParameter* Speed;
    struct FloatAnimationParameter* FallSpeed;
    struct FloatAnimationParameter* bowAimAngle;
    struct FloatAnimationParameter* AimAngle;
    struct FloatAnimationParameter* ChargeJumpDirection;
    struct FloatAnimationParameter* DigBlend;
    struct FloatAnimationParameter* SwimAngle;
    struct FloatAnimationParameter* SwinCurvature;
    struct FloatAnimationParameter* GrabSurfaceSlopeParameter;
    struct FloatAnimationParameter* GrabSurfaceCurvatureParameter;
    struct SeinLeafParticles* LeafParticlesManager;
    struct GameObject* LeavesTrail;
    struct GameObject* LeavesTrailUnderwater;
    struct GameObject* m_leavesTrail;
    struct GameObject* m_leavesTrailUnderwater;
    struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_* m_floatAnimatorParamCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinIdlePuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinIdlePuppet__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_FloatAnimationParameter_System_Single_.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SeinLeafParticles.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinIdlePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinIdlePuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinIdlePuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinIdlePuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinIdlePuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
