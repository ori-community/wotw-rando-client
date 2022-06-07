namespace app {
struct GrenadeBurst {
    struct GrenadeBurst__Class *klass;
    MonitorData *monitor;
    struct GrenadeBurst__Fields fields;
};

struct GrenadeBurst__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
};

struct GrenadeBurst__StaticFields {
    struct GrenadeBurst *m_lastInstance;
};

struct GrenadeBurst__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrenadeBurst__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrenadeBurst__VTable vtable;
};

struct HammerComboMoveChargable_BalancingData__Fields {
    struct HammerComboMoveBase_BalancingData__Fields _;
    float NormalAttackDamage;
    float ChargedAttackDamage;
};

struct HammerComboMoveChargable_BalancingData {
    struct HammerComboMoveChargable_BalancingData__Class *klass;
    MonitorData *monitor;
    struct HammerComboMoveChargable_BalancingData__Fields fields;
};

struct HammerComboMoveChargable_BalancingData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HammerComboMoveChargable_BalancingData__StaticFields {
};

struct HammerComboMoveChargable_BalancingData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HammerComboMoveChargable_BalancingData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HammerComboMoveChargable_BalancingData__VTable vtable;
};

struct HammerComboMoveSimple_BalancingData__Fields {
    struct HammerComboMoveBase_BalancingData__Fields _;
    float Damage;
};

struct HammerComboMoveSimple_BalancingData {
    struct HammerComboMoveSimple_BalancingData__Class *klass;
    MonitorData *monitor;
    struct HammerComboMoveSimple_BalancingData__Fields fields;
};

struct HammerComboMoveSimple_BalancingData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HammerComboMoveSimple_BalancingData__StaticFields {
};

struct HammerComboMoveSimple_BalancingData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HammerComboMoveSimple_BalancingData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HammerComboMoveSimple_BalancingData__VTable vtable;
};

struct HammerComboMoveStomp_BalancingData__Fields {
    struct HammerComboMoveBase_BalancingData__Fields _;
    float ShockwaveDamage;
};

struct HammerComboMoveStomp_BalancingData {
    struct HammerComboMoveStomp_BalancingData__Class *klass;
    MonitorData *monitor;
    struct HammerComboMoveStomp_BalancingData__Fields fields;
};

struct HammerComboMoveStomp_BalancingData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HammerComboMoveStomp_BalancingData__StaticFields {
};

struct HammerComboMoveStomp_BalancingData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HammerComboMoveStomp_BalancingData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HammerComboMoveStomp_BalancingData__VTable vtable;
};

struct __declspec(align(8)) MeleeComboMoveHammer_HitStop_d_94__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct GameObject *toSuspend;
    float suspendTime;
    struct Component_1__Array *_suspendables_5__2;
};

struct MeleeComboMoveHammer_HitStop_d_94 {
    struct MeleeComboMoveHammer_HitStop_d_94__Class *klass;
    MonitorData *monitor;
    struct MeleeComboMoveHammer_HitStop_d_94__Fields fields;
};

struct MeleeComboMoveHammer_HitStop_d_94__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct MeleeComboMoveHammer_HitStop_d_94__StaticFields {
};

struct MeleeComboMoveHammer_HitStop_d_94__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveHammer_HitStop_d_94__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveHammer_HitStop_d_94__VTable vtable;
};

enum class MeleeComboMoveHammerChargeable_State__Enum : int32_t {
    Inactive = 0x00000000,
    Prepare = 0x00000001,
    ChargedAttack = 0x00000002,
    ChargeHold = 0x00000003,
    NormalAttack = 0x00000004,
    GroundMiss = 0x00000005,
    GroundHit = 0x00000006,
};

struct MeleeComboMoveHammerChargeable_State__Enum__Boxed {
    struct MeleeComboMoveHammerChargeable_State__Enum__Class *klass;
    MonitorData *monitor;
    MeleeComboMoveHammerChargeable_State__Enum value;
    
};

struct MeleeComboMoveHammerChargeable__Fields {
    struct MeleeComboMoveHammerBase__Fields _;
    float PrepareDuration;
    float GravityStrength;
    struct HorizontalPlatformMovementSettings_SpeedSet *ChargedAttackMovementSettings;
    float AnimationSpeedMultiplier;
    float DisableEnemyFallingDuration;
    struct HammerComboMoveChargable_BalancingData *Balancing;
    DamageWeight__Enum NormalAttackWeight;
    
    struct Vector2 NormalAttackKickbackDirection;
    float NormalAttackKickbackStrength;
    DamageWeight__Enum ChargedAttackWeight;
    
    struct Vector2 ChargedAttackKickbackDirection;
    float ChargedAttackKickbackStrength;
    float ChargedHitCameraShake;
    float ChargedAttackEnergyCost;
    bool InvincibleDuringTheChargedAttack;
    bool EnableGroundCollisionForChargedAttack;
    struct GameObject *ShockWave;
    struct GameObject *ChargeAttackShockWave;
    struct GameObject *GroundMissShockWave;
    struct GameObject *ChargingEffect;
    struct GameObject *BlockEffect;
    float CollisionSpeedTreshold;
    struct SoundProvider *AttackSound;
    struct SoundProvider *HitSound;
    struct SoundProvider *FullyChargedSound;
    struct SoundProvider *NotEnoughEnergySound;
    struct SoundProvider *GroundHitSound;
    struct SoundProvider *ChargedGroundHitSound;
    struct MoonTimeline *PrepareTimeline;
    struct MoonTimeline *ChargeHoldTimeline;
    struct MoonTimeline *ChargedAttackTimeline;
    struct MoonTimeline *NormalAttackTimeline;
    struct MoonTimeline *ChargeHitResolveTimeline;
    struct EventTriggerAnimator__Array *SpawnEffectsTrigger;
    MeleeComboMoveHammerChargeable_State__Enum m_currentState;
    
    struct HammerTrail *m_currentTrail;
    bool m_doChargedAttack;
    struct Damage *m_damage;
    bool _Charged_k__BackingField;
    struct GameObject *m_chargingEffect;
};

struct MeleeComboMoveHammerChargeable {
    struct MeleeComboMoveHammerChargeable__Class *klass;
    MonitorData *monitor;
    struct MeleeComboMoveHammerChargeable__Fields fields;
};

struct MeleeComboMoveHammerChargeable_State__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct MeleeComboMoveHammerChargeable_State__Enum__StaticFields {
};

struct MeleeComboMoveHammerChargeable_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveHammerChargeable_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveHammerChargeable_State__Enum__VTable vtable;
};

struct MeleeComboMoveHammerChargeable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_MoveHasFinished;
    VirtualInvokeData get_ComboMoveType;
    VirtualInvokeData get_ButtonInputType;
    VirtualInvokeData get_IsAttackButtonDown;
    VirtualInvokeData get_OnAttackButtonPressed;
    VirtualInvokeData get_OnAttackButtonReleased;
    VirtualInvokeData CanExecute;
    VirtualInvokeData CanBeInterruptedBy;
    VirtualInvokeData CanInputBeQueued;
    VirtualInvokeData EnterMove;
    VirtualInvokeData UpdateMove;
    VirtualInvokeData ExitMove;
    VirtualInvokeData InterruptMove;
    VirtualInvokeData ModifyGravityPlatformMovementSettings;
    VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
    VirtualInvokeData get_MoveCooldown;
    VirtualInvokeData get_MoveCooldownTimer;
    VirtualInvokeData set_MoveCooldownTimer;
    VirtualInvokeData get_WasGroundedSinceLastExecution;
    VirtualInvokeData set_WasGroundedSinceLastExecution;
    VirtualInvokeData OnAnimationEvent;
    VirtualInvokeData GetComboMove;
    VirtualInvokeData get_ComboMoves;
    VirtualInvokeData get_ComboAbilityType;
    VirtualInvokeData get_ProviderCooldown;
    VirtualInvokeData get_ProviderCooldownTimer;
    VirtualInvokeData set_ProviderCooldownTimer;
    VirtualInvokeData get_EffectiveDamage;
    VirtualInvokeData get_EffectiveRootMotionMultiplier;
    VirtualInvokeData get_DealtDamage;
    VirtualInvokeData get_AnimationSpeedMultiplierParameterName;
    VirtualInvokeData OnCollision;
    VirtualInvokeData OnGroundCollision;
    VirtualInvokeData get_MoveHasFinished_1;
    VirtualInvokeData get_ButtonInputType_1;
    VirtualInvokeData get_ComboAbilityType_1;
    VirtualInvokeData EnterMove_1;
    VirtualInvokeData OnMoveWindowOpen;
    VirtualInvokeData OnMoveWindowClosed;
    VirtualInvokeData UpdateMove_1;
    VirtualInvokeData ExitMove_1;
    VirtualInvokeData get_IsAttackButtonUsed;
    VirtualInvokeData get_IsAttackButtonDown_1;
    VirtualInvokeData get_OnAttackButtonPressed_1;
    VirtualInvokeData get_OnAttackButtonReleased_1;
    VirtualInvokeData get_IsUninterruptable;
    VirtualInvokeData CanExecute_1;
    VirtualInvokeData CanBeInterruptedBy_1;
    VirtualInvokeData InterruptMove_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData Deinitialize;
    VirtualInvokeData ModifyGravityPlatformMovementSettings_1;
    VirtualInvokeData ModifyHorizontalPlatformMovementSettings_1;
    VirtualInvokeData OnAnimationEvent_1;
    VirtualInvokeData OnDestroyMove;
    VirtualInvokeData get_BalancingBase;
    VirtualInvokeData get_NormalizedAttackTime;
    VirtualInvokeData OnHammerTopCollision;
    VirtualInvokeData OnHammerHandleCollision;
    VirtualInvokeData OnHammerHitGround;
    VirtualInvokeData get_DetectGroundCollision;
    VirtualInvokeData CanDealDamage;
    VirtualInvokeData CanApplyBlastToAttackable;
};

struct MeleeComboMoveHammerChargeable__StaticFields {
};

struct MeleeComboMoveHammerChargeable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveHammerChargeable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveHammerChargeable__VTable vtable;
};

struct __declspec(align(8)) MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Fields {
    struct MeleeComboMoveHammerChargeable *__4__this;
    bool isChargedHit;
};

struct MeleeComboMoveHammerChargeable_c_DisplayClass102_0 {
    struct MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Class *klass;
    MonitorData *monitor;
    struct MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Fields fields;
};

struct MeleeComboMoveHammerChargeable_c_DisplayClass102_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MeleeComboMoveHammerChargeable_c_DisplayClass102_0__StaticFields {
};

struct MeleeComboMoveHammerChargeable_c_DisplayClass102_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveHammerChargeable_c_DisplayClass102_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveHammerChargeable_c_DisplayClass102_0__VTable vtable;
};

enum class MeleeComboMoveHammerSimple_States__Enum : int32_t {
    PrepareAttack = 0x00000000,
    Attacking = 0x00000001,
    GroundHitResolve = 0x00000002,
    GroundMiss = 0x00000003,
};

struct MeleeComboMoveHammerSimple_States__Enum__Boxed {
    struct MeleeComboMoveHammerSimple_States__Enum__Class *klass;
    MonitorData *monitor;
    MeleeComboMoveHammerSimple_States__Enum value;
    
};

struct MeleeComboMoveHammerSimple__Fields {
    struct MeleeComboMoveHammerBase__Fields _;
    bool ModifyHorizontalMovementSettings;
    bool UseSpeedSets;
    struct HorizontalPlatformMovementSettings_SpeedSet *AirSpeedSet;
    struct HorizontalPlatformMovementSettings_SpeedSet *GroundSpeedSet;
    bool ModifyGravitySettings;
    float GravityStrength;
    float EnterMoveVelocityMultiplierX;
    float EnterMoveVelocityMultiplierUp;
    float EnterMoveVelocityMultiplierDown;
    float EnterMoveVelocityMultiplierUpAdd;
    float EnterMoveVelocityMultiplierDownAdd;
    struct HammerComboMoveSimple_BalancingData *Balancing;
    DamageWeight__Enum DamageWeight;
    
    float CameraShake;
    float DisableEnemyFallingDuration;
    struct Vector2 KickbackDirection;
    float KickbackStrength;
    struct GameObject *ShockWave;
    bool ParentShockwaveToOri;
    struct GameObject *GroundHitEffect;
    float GroundCollisionSpeedThreshold;
    struct GameObject *BlockEffect;
    struct SoundProvider *HitSound;
    struct SoundProvider *AttackSound;
    struct SoundProvider *GroundHitSound;
    struct MoonTimeline *PrepareAttackTimeline;
    float PrepareDuration;
    struct MoonTimeline *AttackTimeline;
    struct MoonTimeline *GroundHitResolveTimeline;
    float GroundHitToIdleTransitionTime;
    struct EventTriggerAnimator *SpawnEffectsTrigger;
    float AnimationSpeedMultiplier;
    float AttackEndSpeedUp;
    float BlendSpeed;
    struct HammerTrail *m_currentTrail;
    bool m_active;
    float m_idleTransitionTimer;
    bool m_finalizeComboAfterResolve;
    MeleeComboMoveHammerSimple_States__Enum m_currentState;
    
    float m_desiredBlendValue;
    bool m_speedUpSet;
    bool m_canExecuteNextMove;
    bool m_nextMoveRegisteredBeforeWindow;
    bool m_registeredMoveSoundPlayed;
    bool m_canSkipGroundMiss;
    float m_lastTimeUsed;
    struct Damage *m_damage;
};

struct MeleeComboMoveHammerSimple {
    struct MeleeComboMoveHammerSimple__Class *klass;
    MonitorData *monitor;
    struct MeleeComboMoveHammerSimple__Fields fields;
};

struct MeleeComboMoveHammerSimple_States__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct MeleeComboMoveHammerSimple_States__Enum__StaticFields {
};

struct MeleeComboMoveHammerSimple_States__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveHammerSimple_States__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveHammerSimple_States__Enum__VTable vtable;
};

struct MeleeComboMoveHammerSimple__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_MoveHasFinished;
    VirtualInvokeData get_ComboMoveType;
    VirtualInvokeData get_ButtonInputType;
    VirtualInvokeData get_IsAttackButtonDown;
    VirtualInvokeData get_OnAttackButtonPressed;
    VirtualInvokeData get_OnAttackButtonReleased;
    VirtualInvokeData CanExecute;
    VirtualInvokeData CanBeInterruptedBy;
    VirtualInvokeData CanInputBeQueued;
    VirtualInvokeData EnterMove;
    VirtualInvokeData UpdateMove;
    VirtualInvokeData ExitMove;
    VirtualInvokeData InterruptMove;
    VirtualInvokeData ModifyGravityPlatformMovementSettings;
    VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
    VirtualInvokeData get_MoveCooldown;
    VirtualInvokeData get_MoveCooldownTimer;
    VirtualInvokeData set_MoveCooldownTimer;
    VirtualInvokeData get_WasGroundedSinceLastExecution;
    VirtualInvokeData set_WasGroundedSinceLastExecution;
    VirtualInvokeData OnAnimationEvent;
    VirtualInvokeData GetComboMove;
    VirtualInvokeData get_ComboMoves;
    VirtualInvokeData get_ComboAbilityType;
    VirtualInvokeData get_ProviderCooldown;
    VirtualInvokeData get_ProviderCooldownTimer;
    VirtualInvokeData set_ProviderCooldownTimer;
    VirtualInvokeData get_EffectiveDamage;
    VirtualInvokeData get_EffectiveRootMotionMultiplier;
    VirtualInvokeData get_DealtDamage;
    VirtualInvokeData get_AnimationSpeedMultiplierParameterName;
    VirtualInvokeData OnCollision;
    VirtualInvokeData OnGroundCollision;
    VirtualInvokeData get_MoveHasFinished_1;
    VirtualInvokeData get_ButtonInputType_1;
    VirtualInvokeData get_ComboAbilityType_1;
    VirtualInvokeData EnterMove_1;
    VirtualInvokeData OnMoveWindowOpen;
    VirtualInvokeData OnMoveWindowClosed;
    VirtualInvokeData UpdateMove_1;
    VirtualInvokeData ExitMove_1;
    VirtualInvokeData get_IsAttackButtonUsed;
    VirtualInvokeData get_IsAttackButtonDown_1;
    VirtualInvokeData get_OnAttackButtonPressed_1;
    VirtualInvokeData get_OnAttackButtonReleased_1;
    VirtualInvokeData get_IsUninterruptable;
    VirtualInvokeData CanExecute_1;
    VirtualInvokeData CanBeInterruptedBy_1;
    VirtualInvokeData InterruptMove_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData Deinitialize;
    VirtualInvokeData ModifyGravityPlatformMovementSettings_1;
    VirtualInvokeData ModifyHorizontalPlatformMovementSettings_1;
    VirtualInvokeData OnAnimationEvent_1;
    VirtualInvokeData OnDestroyMove;
    VirtualInvokeData get_BalancingBase;
    VirtualInvokeData get_NormalizedAttackTime;
    VirtualInvokeData OnHammerTopCollision;
    VirtualInvokeData OnHammerHandleCollision;
    VirtualInvokeData OnHammerHitGround;
    VirtualInvokeData get_DetectGroundCollision;
    VirtualInvokeData CanDealDamage;
    VirtualInvokeData CanApplyBlastToAttackable;
};

struct MeleeComboMoveHammerSimple__StaticFields {
};

struct MeleeComboMoveHammerSimple__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveHammerSimple__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveHammerSimple__VTable vtable;
};

struct MeleeComboMoveHammerSimple_c {
    struct MeleeComboMoveHammerSimple_c__Class *klass;
    MonitorData *monitor;
};

struct Action_1_UnityEngine_GameObject___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_UnityEngine_GameObject_ {
    struct Action_1_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct Action_1_UnityEngine_GameObject___Fields fields;
};

struct Action_1_UnityEngine_GameObject___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Action_1_UnityEngine_GameObject___StaticFields {
};

struct Action_1_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_UnityEngine_GameObject___VTable vtable;
};

struct MeleeComboMoveHammerSimple_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MeleeComboMoveHammerSimple_c__StaticFields {
    struct MeleeComboMoveHammerSimple_c *__9;
    struct Action_1_UnityEngine_GameObject_ *__9__59_0;
};

struct MeleeComboMoveHammerSimple_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveHammerSimple_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveHammerSimple_c__VTable vtable;
};

struct __declspec(align(8)) MeleeComboMoveHammerSimple_HitStop_d_76__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct GameObject *toSuspend;
    float suspendTime;
    struct Component_1__Array *_suspendables_5__2;
};

struct MeleeComboMoveHammerSimple_HitStop_d_76 {
    struct MeleeComboMoveHammerSimple_HitStop_d_76__Class *klass;
    MonitorData *monitor;
    struct MeleeComboMoveHammerSimple_HitStop_d_76__Fields fields;
};

struct MeleeComboMoveHammerSimple_HitStop_d_76__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct MeleeComboMoveHammerSimple_HitStop_d_76__StaticFields {
};

struct MeleeComboMoveHammerSimple_HitStop_d_76__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveHammerSimple_HitStop_d_76__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveHammerSimple_HitStop_d_76__VTable vtable;
};

enum class MeleeComboMoveHammerStomp_State__Enum : int32_t {
    Inactive = 0x00000000,
    Start = 0x00000001,
    Fall = 0x00000002,
    Land = 0x00000003,
};

struct MeleeComboMoveHammerStomp_State__Enum__Boxed {
    struct MeleeComboMoveHammerStomp_State__Enum__Class *klass;
    MonitorData *monitor;
    MeleeComboMoveHammerStomp_State__Enum value;
    
};

struct Nullable_1_UnityEngine_RaycastHit_ {
    struct RaycastHit value;
    bool has_value;
};

struct Nullable_1_UnityEngine_RaycastHit___Boxed {
    struct Nullable_1_UnityEngine_RaycastHit___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_UnityEngine_RaycastHit_ fields;
};

struct MeleeComboMoveHammerStomp__Fields {
    struct MeleeComboMoveHammerBase__Fields _;
    struct HammerComboMoveStomp_BalancingData *Balancing;
    struct MoonTimeline *StartTimeline;
    struct MoonTimeline *LoopTimeline;
    struct MoonTimeline *EndTimeline;
    struct MoonTimeline *StartShortTimeline;
    struct MoonTimeline *EndShortTimeline;
    float Speed;
    float ShortSlamRayLenght;
    float landDynamicPushForce;
    float landDynamicSpeed;
    float LandPredictionTimeAnticipation;
    float FallCancelDistance;
    struct GameObject *LandEffect;
    struct GameObject *PrepareEffect;
    struct MoonTrail *FallingTrail;
    struct List_1_FirewhirlBeamSpawner_ *ShockwaveSpawners;
    struct SerializedByteUberState *ShockwaveUpgradeLevel;
    struct Event_1 *StartSoundEvent;
    struct Event_1 *FallSoundEvent;
    struct Event_1 *LandSoundEvent;
    struct Event_1 *HammerStompCancelSoundEvent;
    struct MeleeWeaponHammer *m_hammer;
    MeleeComboMoveHammerStomp_State__Enum m_currentState;
    
    bool m_anticipatingLanding;
    struct Nullable_1_UnityEngine_RaycastHit_ m_predictedLandHit;
    struct Vector3 m_positionPreLand;
    float m_placeOnGroundTimer;
    float m_placeOnGroundDuration;
    bool m_playShortLand;
    struct Vector3 m_fallStartPosition;
    struct Transform *m_landEffect;
    struct Collider *m_shortLandDetectedCollider;
    struct Vector3 m_predictedLandHitPosition;
    float _EffectiveDamage_k__BackingField;
    struct GameObject *m_startEffect;
};

struct MeleeComboMoveHammerStomp {
    struct MeleeComboMoveHammerStomp__Class *klass;
    MonitorData *monitor;
    struct MeleeComboMoveHammerStomp__Fields fields;
};

struct __declspec(align(8)) List_1_FirewhirlBeamSpawner___Fields {
    struct FirewhirlBeamSpawner__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_FirewhirlBeamSpawner_ {
    struct List_1_FirewhirlBeamSpawner___Class *klass;
    MonitorData *monitor;
    struct List_1_FirewhirlBeamSpawner___Fields fields;
};

struct FirewhirlBeamSpawner__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct GameObject *FirewhirlBeamPrefab;
    int32_t PrewarmAmount;
    float DistanceBetweenBeams;
    float BeamsPerSecond;
    float MaxDistanceToGround;
    int32_t BeamCount;
    float AirBeamSinkDistance;
    float HitsPerSecond;
    float DamageAmount;
    DamageWeight__Enum m_damageWeight;
    
    AbilityType__Enum DamageAbilityType;
    
    DamageLayerMask__Enum DamageLayerMask;
    
    struct Event_1 *StartCastingEvent;
    struct Event_1 *StopCastingEvent;
    struct ArtificialSoundHostReference m_soundHost;
    bool m_castSoundRunning;
    float m_delayTillNextHit;
    struct List_1_FirewhirlBeam_ *m_beams;
    struct List_1_UnityEngine_Rect_ *m_beamRectangles;
    struct Vector3 m_burstPosition;
    struct Vector3 m_direction;
    int32_t m_remainingBursts;
    float m_nextBurstRemainingTime;
    struct EventTriggerAnimator *DamageTrigger;
    struct MoonBool *ShouldSpawn;
    struct MoonReference_1_UnityEngine_Transform_ *AreaDamageSpawnReference;
    struct MoonReference_1_Entity_ *Owner;
    bool ReverseDirection;
    struct LayerMask StopLayerMask;
    float BeamAnimationSpeed;
    float BeamHeight;
    struct Transform *LightTranform;
    float LigthSizeOffset;
    bool DebugSpawnPosition;
    bool m_debugHasStartSpawnPoint;
    struct Vector3 m_debugOriginPosition;
    struct Vector3 m_debugStartSpawnPosition;
    int32_t m_damageID;
    bool m_lastBeamInAir_NOTUSED;
    float MaxClimbHeight;
    float MaxFallHeight;
    struct List_1_UnityEngine_GameObject_ *m_dealtDamageToObjects;
    bool m_isPlayer;
};

struct FirewhirlBeamSpawner {
    struct FirewhirlBeamSpawner__Class *klass;
    MonitorData *monitor;
    struct FirewhirlBeamSpawner__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_Entity___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_Entity_ *m_cachedProxyType;
    struct Entity *m_volatileValue;
};

struct MoonReference_1_Entity_ {
    struct MoonReference_1_Entity___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_Entity___Fields fields;
};

struct IMoonType_1_Entity_ {
    struct IMoonType_1_Entity___Class *klass;
    MonitorData *monitor;
};

struct FirewhirlBeamSpawner__Array {
    struct FirewhirlBeamSpawner__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FirewhirlBeamSpawner *vector[32];
};

struct IEnumerator_1_FirewhirlBeamSpawner_ {
    struct IEnumerator_1_FirewhirlBeamSpawner___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_Entity___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_Entity___StaticFields {
};

struct IMoonType_1_Entity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_Entity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_Entity___VTable vtable;
};

struct Entity___VTable {
};

struct Entity___StaticFields {
};

struct Entity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Entity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Entity___VTable vtable;
};

struct MoonReference_1_Entity___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
    VirtualInvokeData get_IsStaticValue;
    VirtualInvokeData GetTypeData;
    VirtualInvokeData CanResolve;
    VirtualInvokeData get_IsCrossSceneReference;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};

struct MoonReference_1_Entity___StaticFields {
};

struct MoonReference_1_Entity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_Entity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_Entity___VTable vtable;
};

struct FirewhirlBeamSpawner__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
};

struct FirewhirlBeamSpawner__StaticFields {
};

struct FirewhirlBeamSpawner__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FirewhirlBeamSpawner__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FirewhirlBeamSpawner__VTable vtable;
};

struct FirewhirlBeamSpawner__Array__VTable {
};

struct FirewhirlBeamSpawner__Array__StaticFields {
};

struct FirewhirlBeamSpawner__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FirewhirlBeamSpawner__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FirewhirlBeamSpawner__Array__VTable vtable;
};

struct IEnumerator_1_FirewhirlBeamSpawner___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_FirewhirlBeamSpawner___StaticFields {
};

struct IEnumerator_1_FirewhirlBeamSpawner___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_FirewhirlBeamSpawner___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_FirewhirlBeamSpawner___VTable vtable;
};

struct List_1_FirewhirlBeamSpawner___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

}
