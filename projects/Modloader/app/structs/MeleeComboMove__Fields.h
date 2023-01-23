#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMove__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMove__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED)
#include <Modloader/app/structs/MaterialTypeVFXSettings_EffectSize__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_MaterialTypeVFXSettings_EffectSize__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED
struct MeleeComboTransition__Array;
struct ActivateCooldownRule__Array;
struct SeinComboHandler;
struct SeinCharacter;
struct MeleeWeapon;
struct MaterialBasedSeinEffectsMap;
struct List_1_UnityEngine_Collider_;
struct List_1_Moon_Entity_;
struct IAttackable;
struct MeleeComboMove;
struct List_1_UnityEngine_GameObject_;
struct Boolean__Array;
struct String;
struct GameObject;
struct List_1_Moon_ComboSystem_IComboMove_;
struct MeleeComboMove__Fields {
    struct MonoBehaviour__Fields _;
    bool DebugBreakOnEnter;
    struct MeleeComboTransition__Array* Transitions;
    struct Vector2 RootMotionMultiplier;
    float DownwardRootMotionMultiplier;
    bool DisableRootMotion;
    bool RetainXRootMotion;
    bool RetainYRootMotion;
    float Cooldown;
    struct ActivateCooldownRule__Array* CooldownRules;
    bool RotateToGroundAngle;
    bool OnlyGround;
    float GroundMaxDistance;
    bool AutoTarget;
    float AutoTargetAngleMax;
    struct Vector2 PrimaryAttackDirection;
    float AllowedTargetPositionDeviation;
    float AllowedGroundVFXNormalDeviation;
    struct SeinComboHandler* m_comboHandler;
    struct SeinCharacter* m_sein;
    struct MeleeWeapon* m_weapon;
    struct MaterialBasedSeinEffectsMap* m_hitVFX;
    int32_t m_damageID;
    struct List_1_UnityEngine_Collider_* m_haveBeenHit;
    struct List_1_Moon_Entity_* m_haveEntityBeenHit;
    float m_lastTimeAirReset;
    struct IAttackable* m_currentTarget;
    float m_rootRotation;
    float m_groundAngle;
    float StingerAdjustSpeed;
    float StingerTargetOffset;
    float StingerRange;
    float StingerStartTime;
    float StingerMinimumDistance;
    float StingerSpeed;
    struct Nullable_1_UnityEngine_Vector3_ m_stingerTargetPosition;
    MaterialTypeVFXSettings_EffectSize__Enum ImpactSize;

    struct MeleeComboMove* m_nextMove;
    struct List_1_UnityEngine_GameObject_* m_suspendableHitEffects;
    struct Boolean__Array* m_canBeInterruptedBy;
    bool m_canInputBeQueued;
    bool m_attackButtonReleased;
    bool m_changeFacingDirForNextMove;
    float m_moveTime;
    int32_t m_animationSpeedMultiplierParameterId;
    int32_t m_weaponAnimationSpeedMultiplierParameterId;
    struct String* m_scheduledWeaponAnimation;
    float m_scheduledWeaponAnimationSpeedMultiplier;
    bool m_oneTimeOnCollisionEffectPlayed;
    bool m_oneTimeOnBigCollisionEffectPlayed;
    bool m_oneTimeHitEffectPlayed;
    struct GameObject* m_effectSpawnedThisFrame;
    struct GameObject* m_hitEffectSpawnedThisFrame;
    bool m_effectSpawnedThisFrameWasSmall;
    float _MoveCooldownTimer_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    struct List_1_Moon_ComboSystem_IComboMove_* m_comboMoves;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMove__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMove__Fields_FWDDECL
#include <Modloader/app/structs/ActivateCooldownRule__Array.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/MeleeComboMove.h>
#include <Modloader/app/structs/MeleeComboTransition__Array.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMove__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMove__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMove__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMove__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
