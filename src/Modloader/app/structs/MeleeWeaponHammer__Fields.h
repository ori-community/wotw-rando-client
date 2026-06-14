#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponHammer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponHammer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponHammer__Fields_DEFINED)
#include <Modloader/app/structs/MeleeWeaponHammer_DisolveState__Enum.h>
#include <Modloader/app/structs/MeleeWeapon__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED) && defined(IL2CPP_STRUCT_MeleeWeaponHammer_DisolveState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponHammer__Fields_DEFINED
struct GameObject;
struct LegacyTimelineSequence;
struct MeleeWeaponColliderStick;
struct Transform;
struct Renderer;
struct MoonAnimation;
struct FloatAnimationParameter;
struct SoundProvider;
struct MeleeWeaponHammer__Fields {
    struct MeleeWeapon__Fields _;
    struct GameObject* Hammer;
    struct GameObject* Trail;
    struct LegacyTimelineSequence* VanishEffect;
    struct GameObject* VanishExplosionEffect;
    struct MeleeWeaponColliderStick* WeaponCollider;
    struct Transform* TransformHammerRig;
    struct Transform* TransformTrailOrigin;
    struct Transform* TransformBase;
    struct Transform* TransformTop;
    struct Transform* TransformTip;
    struct Renderer* HammerRenderer;
    struct MoonAnimation* IdleAnimation;
    float TimeInvincibleUponSuccessfullHit;
    float HitStopDuration;
    float CriticalHitStopDuration;
    float CriticalHitDamageMultiplier;
    float GroundHitRayLenghtMultiplier;
    struct FloatAnimationParameter* AttackBlendParameter;
    struct SoundProvider* NextMoveRegisteredSound;
    float m_currentDisolveVal;
    bool m_shouldInstantiateVanishFx;
    MeleeWeaponHammer_DisolveState__Enum m_disolveState;

    bool m_playedVanishEffect;
    float m_disolveSpeed;
    int32_t m_hammerAnimationSpeedMultiplierId;
    struct Vector3 m_oldHammerTipPosition;
    struct Vector3 m_newHammerTipPosition;
    struct Vector3 m_previusScale;
    bool m_isInCombo;
    float _MoveDurationDept_k__BackingField;
    bool _DetectGroundCollision_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponHammer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponHammer__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponHammer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponHammer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponHammer__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponHammer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponHammer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
