#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamagerAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamagerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamagerAnimator__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamagerAnimator_DamagerShape__Enum.h>
#include <Modloader/app/structs/DamagerAnimator_DirectionType__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamagerAnimator_DamagerShape__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_DamagerAnimator_DirectionType__Enum_DEFINED)
#define IL2CPP_STRUCT_DamagerAnimator__Fields_DEFINED
struct Transform;
struct VelocityBezierSplineComponent;
struct DamageOwner;
struct AnimationCurve;
struct GameObject;
struct BaseSpline_SplineIterator;
struct DamagerAnimator__Fields {
    struct BaseAnimator__Fields _;
    float ClipDuration;
    int32_t priority;
    DamagerAnimator_DamagerShape__Enum Shape;

    struct Vector3 Size;
    float Radius;
    struct Transform* attachBone;
    struct VelocityBezierSplineComponent* Spline;
    float DamageAmount;
    DamageType__Enum DamageType;

    AbilityType__Enum AbilityType;

    struct LayerMask layerMask;
    struct DamageOwner* DamageOwner;
    struct AnimationCurve* KickbackCurve;
    float DamageKickbackStrength;
    struct GameObject* DamageReceivedEffectPrefab;
    struct GameObject* DamageBlockedEffectPrefab;
    DamagerAnimator_DirectionType__Enum directionType;

    struct Vector3 DamageDirection;
    int32_t m_damageID;
    float m_lastTime;
    struct BaseSpline_SplineIterator* m_splineIterator;
    bool enteredSampling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamagerAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamagerAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BaseSpline_SplineIterator.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#endif
#undef IL2CPP_STRUCT_DamagerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamagerAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamagerAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/DamagerAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamagerAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
