#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShockWaveAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShockWaveAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShockWaveAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ShockWaveAnimator__Fields_DEFINED
struct AnimationCurve;
struct Transform;
struct ShockWaveAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* Radius;
    float ConeAngle;
    float TimeDuration;
    struct LayerMask CollisionMask;
    float DealDamageDelay;
    float DamageAmount;
    float KickbackStrength;
    DamageType__Enum DamageType;

    DamageLayerMask__Enum DamageLayerMask;

    float StunDuration;
    struct Transform* DirectionTransformReference;
    float m_radius;
    float m_timeToNextDamage;
    int32_t m_damageID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShockWaveAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShockWaveAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShockWaveAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShockWaveAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShockWaveAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ShockWaveAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShockWaveAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
