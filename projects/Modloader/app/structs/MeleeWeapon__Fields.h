#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeapon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeapon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/WeaponJoint__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_WeaponJoint__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED
struct DynamicDataResolver;
struct MeleeComboTransition__Array;
struct MoonAnimator;
struct Animator;
struct Transform;
struct MoonTimeline__Array;
struct Transform__Array;
struct SeinCharacter;
struct DamageOwner;
struct UpgradableMultiplier;
struct SerializedByteUberState;
struct Single__Array;
struct MoonAnimation;
struct AnimationCurve;
struct MaterialBasedSeinEffectsMap;
struct Action_1_DamageResult_;
struct SeinComboHandler;
struct SoundHost;
struct List_1_Moon_ComboSystem_IComboMove_;
struct MeleeWeapon__Fields {
    struct MonoBehaviour__Fields _;
    bool DebugWeaponOutput;
    struct DynamicDataResolver* m_dataResolver;
    struct MeleeComboTransition__Array* Transitions;
    struct MoonAnimator* Animator;
    struct MoonAnimator* HeroAnimatorPreview;
    struct Animator* LegacyWeaponAnimator;
    WeaponJoint__Enum m_weaponJoint;

    struct Transform* m_targetJoint;
    struct Transform* WeaponRoot;
    struct MoonTimeline__Array* m_allTimelines;
    struct Transform__Array* m_animatorTransforms;
    struct SeinCharacter* m_weaponOwner;
    AbilityType__Enum AbilityType;

    DamageLayerMask__Enum DamageLayerMask;

    struct DamageOwner* DamageOwner;
    struct UpgradableMultiplier* Upgradable;
    struct SerializedByteUberState* UpgradeLevel;
    struct Single__Array* UpgradeEffectiveness;
    bool InterruptComboOnDamageTaken;
    bool InterruptComboOnDamageBlocked;
    float InterruptComboMinRange;
    struct MoonAnimation* GroundBlockAnimation;
    struct AnimationCurve* GroundBlockKickbackCurve;
    struct MoonAnimation* AirBlockAnimation;
    struct AnimationCurve* AirBlockKickbackCurve;
    bool FlattenKickbackDirection;
    bool IgnoreTargetsBehind;
    struct MaterialBasedSeinEffectsMap* HitEffects;
    struct Vector2 GravityMultiplierRange;
    float GravityMultiplierIncreaseSpeed;
    float _CurrentGravityMultiplier_k__BackingField;
    struct Action_1_DamageResult_* DamageResultReceived;
    struct Nullable_1_Boolean_ m_attackButtonPressedCached;
    bool _IsPerformingCombo_k__BackingField;
    struct SeinComboHandler* ComboHandler;
    bool m_canDeactivateRoot;
    bool m_isInitialized;
    bool m_isWeaponShown;
    bool m_spriteMirrorLock;
    struct SoundHost* m_soundHost;
    float _WeaponCooldown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    struct List_1_Moon_ComboSystem_IComboMove_* m_comboMoves;
    struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeapon__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeapon__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_DamageResult_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/MeleeComboTransition__Array.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/UpgradableMultiplier.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeapon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeapon__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeWeapon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeapon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
