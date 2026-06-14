#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFeatherFlap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFeatherFlap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFeatherFlap__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinFeatherFlap_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinFeatherFlap_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinFeatherFlap__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct DelayedAction;
struct SeinFeatherFlap__Fields {
    struct CharacterState__Fields _;
    float LeafAttackCooldown;
    struct AnimationCurve* LeafSize;
    struct AnimationCurve* AttackMovementSlowdown;
    struct AnimationCurve* DistanceToKnockback;
    struct GameObject* LeafRig;
    float GroundRootMotionMul;
    float AirRootMotionMul;
    float AirGravityMulUp;
    float AirGravityMulUpGlide;
    float AirGravityMulDown;
    float AirMaxSpeedMul;
    float AirAccelerationMul;
    float AirDecellerationMul;
    float LeafAttackToFallInitialSpeed;
    struct DelayedAction* KnockbackDelay;
    struct DelayedAction* WindFXDelay;
    struct GameObject* WindFX;
    float m_attackTime;
    bool m_lockedFaceLeft;
    SeinFeatherFlap_State__Enum m_currentState;

    bool m_fromGlideUp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFeatherFlap__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinFeatherFlap__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DelayedAction.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SeinFeatherFlap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFeatherFlap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinFeatherFlap__Fields_FWDDECL)
#include <Modloader/app/structs/SeinFeatherFlap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFeatherFlap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
