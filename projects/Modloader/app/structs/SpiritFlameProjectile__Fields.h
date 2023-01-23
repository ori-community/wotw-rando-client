#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritFlameProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritFlameProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritFlameProjectile__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SpiritFlameProjectile_PointOnArc.h>
#include <Modloader/app/structs/SpiritFlameProjectile_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SpiritFlameProjectile_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiritFlameProjectile_PointOnArc_DEFINED)
#define IL2CPP_STRUCT_SpiritFlameProjectile__Fields_DEFINED
struct LineRenderer;
struct AnimationCurve;
struct SoundProvider;
struct Event_1;
struct GameObject;
struct Transform;
struct SeinCharacter;
struct IAttackable;
struct SpiritFlame;
struct List_1_UnityEngine_Vector3_;
struct SoundHost;
struct SpiritFlameProjectile__Fields {
    struct MonoBehaviour__Fields _;
    float Duration;
    struct LineRenderer* LineRenderer;
    int32_t LineVertexCount;
    struct AnimationCurve* TextureOffsetCurve;
    struct AnimationCurve* SpeedCurve;
    float DestroyDelay;
    struct SoundProvider* HitSound;
    struct Event_1* HitSoundEvent;
    struct SoundProvider* KillEntitySound;
    struct Event_1* KillEntitySoundEvent;
    struct SoundProvider* ThrowSound;
    struct Event_1* ThrowSoundEvent;
    struct GameObject* ImpactEffectGameObject;
    struct GameObject* ThrowEffectGameObject;
    struct AnimationCurve* DisplacementCurve;
    float DisplacementCurveOffset;
    DamageType__Enum DamageType;

    AbilityType__Enum AbilityType;

    bool HasARealTarget;
    bool m_suspended;
    SuspendableMask__Enum m_suspensionMask;

    struct Transform* _StartTarget_k__BackingField;
    struct SeinCharacter* _Sein_k__BackingField;
    struct Transform* _AttackableTargetTransform_k__BackingField;
    struct IAttackable* _AttackableTarget_k__BackingField;
    struct Vector3 _StartPosition_k__BackingField;
    struct SpiritFlame* _SpiritFlame_k__BackingField;
    float _Damage_k__BackingField;
    DamageWeight__Enum _DamageWeight_k__BackingField;

    bool _PreventKickback_k__BackingField;
    struct Vector2 ImpactOffset;
    bool DoImpact;
    struct GameObject* m_hitEffect;
    struct List_1_UnityEngine_Vector3_* m_points;
    struct Vector3 m_finalPosition;
    float m_arcOffset;
    float m_currentTime;
    struct Vector3 m_lastTargetPosition;
    SpiritFlameProjectile_State__Enum m_currentState;

    struct SoundHost* m_soundHost;
    int32_t m_frame;
    struct Vector3 m_arcDir;
    struct Vector3 m_arcNormalOffset;
    struct SpiritFlameProjectile_PointOnArc m_poaFwd0;
    struct SpiritFlameProjectile_PointOnArc m_poaFwd4;
    struct SpiritFlameProjectile_PointOnArc m_poaBwd8;
    struct SpiritFlameProjectile_PointOnArc m_poaBwd4;
    struct SpiritFlameProjectile_PointOnArc m_poaBwd1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritFlameProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritFlameProjectile__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SpiritFlame.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritFlameProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritFlameProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritFlameProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritFlameProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritFlameProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
