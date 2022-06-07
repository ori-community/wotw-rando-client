namespace app {
struct MeleeComboMoveChainsword__StaticFields {
};

struct MeleeComboMoveChainsword__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveChainsword__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveChainsword__VTable vtable;
};

struct MeleeComboMoveSwordCharge__Fields {
    struct MeleeComboMoveSword__Fields _;
    float ChargeTime;
    struct GameObject *ChargingEffectToSpawn;
    struct GameObject *ChargedEffectToSpawn;
    struct Event_1 *ChargeLoopStartEvent;
    struct Event_1 *ChargeLoopStopEvent;
    struct Event_1 *ChargeCompleteEvent;
    struct Event_1 *FullyChargedLoopStartEvent;
    struct Event_1 *FullyChargedLoopStopEvent;
    bool StateController;
    bool m_requiresButtonRelease;
};

struct MeleeComboMoveSwordCharge {
    struct MeleeComboMoveSwordCharge__Class *klass;
    MonitorData *monitor;
    struct MeleeComboMoveSwordCharge__Fields fields;
};

enum class MeleeComboMoveSwordCharge_State__Enum : int32_t {
    Normal = 0x00000000,
    Charging = 0x00000001,
    Charged = 0x00000002,
    Attacking = 0x00000003,
};

struct MeleeComboMoveSwordCharge_State__Enum__Boxed {
    struct MeleeComboMoveSwordCharge_State__Enum__Class *klass;
    MonitorData *monitor;
    MeleeComboMoveSwordCharge_State__Enum value;
    
};

struct MeleeComboMoveSwordCharge_State__Enum__VTable {
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

struct MeleeComboMoveSwordCharge_State__Enum__StaticFields {
};

struct MeleeComboMoveSwordCharge_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveSwordCharge_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveSwordCharge_State__Enum__VTable vtable;
};

struct MeleeComboMoveSwordCharge__VTable {
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
    VirtualInvokeData get_EffectiveKnockbackAddY;
    VirtualInvokeData CanDealDamage;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_ShouldUpdateWhileDisabled;
};

struct MeleeComboMoveSwordCharge__StaticFields {
    struct GameObject *m_chargingEffect;
    struct GameObject *m_chargedEffect;
    float m_delayBeforeCharging;
    float m_chargeTimer;
    MeleeComboMoveSwordCharge_State__Enum m_state;
    
};

struct MeleeComboMoveSwordCharge__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeleeComboMoveSwordCharge__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeleeComboMoveSwordCharge__VTable vtable;
};

struct FindClosestSandEdgeToTargetAction__Fields {
    struct Action_1__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_ *CheckTarget;
    struct MoonVector3 *VelocityOfTarget;
    float VelocityPredictionTime;
    float InnerEdgePadding;
    float OutsideClearence;
    struct MoonVector3 *SandEdgePoint;
    struct MoonVector3 *SandEdgePointNormal;
};

struct FindClosestSandEdgeToTargetAction {
    struct FindClosestSandEdgeToTargetAction__Class *klass;
    MonitorData *monitor;
    struct FindClosestSandEdgeToTargetAction__Fields fields;
};

struct FindClosestSandEdgeToTargetAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData OnExecute;
};

struct FindClosestSandEdgeToTargetAction__StaticFields {
};

struct FindClosestSandEdgeToTargetAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FindClosestSandEdgeToTargetAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FindClosestSandEdgeToTargetAction__VTable vtable;
};

enum class HitReactionBehaviourOld_DeathHitReactionMode__Enum : int32_t {
    DefaultReactionHandling = 0x00000000,
    UseCustomHitReaction = 0x00000001,
    Disable = 0x00000002,
};

struct HitReactionBehaviourOld_DeathHitReactionMode__Enum__Boxed {
    struct HitReactionBehaviourOld_DeathHitReactionMode__Enum__Class *klass;
    MonitorData *monitor;
    HitReactionBehaviourOld_DeathHitReactionMode__Enum value;
    
};

struct HitReactionBehaviourOld__Fields {
    struct MonoBehaviour__Fields _;
    struct EntityHitReaction *DefaultHitReaction;
    struct EntityHitReaction *DefaultBlockReaction;
    struct HitReactionBehaviourOld_HitReactionEntry__Array *CustomHitReactions;
    HitReactionBehaviourOld_DeathHitReactionMode__Enum DeathReactionMode;
    
    struct EntityHitReaction *DeathCustomReaction;
    struct StaggerDamageTracker *StaggerTracker;
    struct StaggerSettings *DefaultStaggerSettings;
    struct HitReactionBehaviourOld_StaggetEntry__Array *CustomStaggerEntries;
    bool DebugStagger;
    struct StaggerSettings *m_currentStaggerSettings;
};

struct HitReactionBehaviourOld {
    struct HitReactionBehaviourOld__Class *klass;
    MonitorData *monitor;
    struct HitReactionBehaviourOld__Fields fields;
};

struct __declspec(align(8)) HitReactionBehaviourOld_HitReactionEntry__Fields {
    DamageResultType__Enum DamageResultType;
    
    DamageType__Enum DamageType;
    
    struct EntityHitReaction *HitReaction;
};

struct HitReactionBehaviourOld_HitReactionEntry {
    struct HitReactionBehaviourOld_HitReactionEntry__Class *klass;
    MonitorData *monitor;
    struct HitReactionBehaviourOld_HitReactionEntry__Fields fields;
};

struct HitReactionBehaviourOld_HitReactionEntry__Array {
    struct HitReactionBehaviourOld_HitReactionEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HitReactionBehaviourOld_HitReactionEntry *vector[32];
};

struct __declspec(align(8)) HitReactionBehaviourOld_StaggetEntry__Fields {
    DamageType__Enum DamageType;
    
    struct StaggerSettings *Settings;
};

struct HitReactionBehaviourOld_StaggetEntry {
    struct HitReactionBehaviourOld_StaggetEntry__Class *klass;
    MonitorData *monitor;
    struct HitReactionBehaviourOld_StaggetEntry__Fields fields;
};

struct HitReactionBehaviourOld_StaggetEntry__Array {
    struct HitReactionBehaviourOld_StaggetEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HitReactionBehaviourOld_StaggetEntry *vector[32];
};

struct HitReactionBehaviourOld_HitReactionEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HitReactionBehaviourOld_HitReactionEntry__StaticFields {
};

struct HitReactionBehaviourOld_HitReactionEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HitReactionBehaviourOld_HitReactionEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HitReactionBehaviourOld_HitReactionEntry__VTable vtable;
};

struct HitReactionBehaviourOld_HitReactionEntry__Array__VTable {
};

struct HitReactionBehaviourOld_HitReactionEntry__Array__StaticFields {
};

struct HitReactionBehaviourOld_HitReactionEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HitReactionBehaviourOld_HitReactionEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HitReactionBehaviourOld_HitReactionEntry__Array__VTable vtable;
};

struct HitReactionBehaviourOld_DeathHitReactionMode__Enum__VTable {
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

struct HitReactionBehaviourOld_DeathHitReactionMode__Enum__StaticFields {
};

struct HitReactionBehaviourOld_DeathHitReactionMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HitReactionBehaviourOld_DeathHitReactionMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HitReactionBehaviourOld_DeathHitReactionMode__Enum__VTable vtable;
};

struct HitReactionBehaviourOld_StaggetEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HitReactionBehaviourOld_StaggetEntry__StaticFields {
};

struct HitReactionBehaviourOld_StaggetEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HitReactionBehaviourOld_StaggetEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HitReactionBehaviourOld_StaggetEntry__VTable vtable;
};

struct HitReactionBehaviourOld_StaggetEntry__Array__VTable {
};

struct HitReactionBehaviourOld_StaggetEntry__Array__StaticFields {
};

struct HitReactionBehaviourOld_StaggetEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HitReactionBehaviourOld_StaggetEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HitReactionBehaviourOld_StaggetEntry__Array__VTable vtable;
};

struct HitReactionBehaviourOld__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData PlayHitReaction;
};

struct HitReactionBehaviourOld__StaticFields {
};

struct HitReactionBehaviourOld__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HitReactionBehaviourOld__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HitReactionBehaviourOld__VTable vtable;
};

struct ChaseBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_ *ChaseTarget;
    float TraversalSpeed;
    struct MoonVector3 *LastChaseTargetPosition;
    struct Locomotion *m_locomotion;
    struct GameObject *m_chaseTarget;
};

struct ChaseBehaviourNew {
    struct ChaseBehaviourNew__Class *klass;
    MonitorData *monitor;
    struct ChaseBehaviourNew__Fields fields;
};

struct ChaseBehaviourNew__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct ChaseBehaviourNew__StaticFields {
};

struct ChaseBehaviourNew__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChaseBehaviourNew__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChaseBehaviourNew__VTable vtable;
};

struct FaceTargetBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3 *m_targetPosition;
    struct ILocomotionTurningHandler *m_turningHandler;
    float m_facingDirection;
};

struct FaceTargetBehaviourNew {
    struct FaceTargetBehaviourNew__Class *klass;
    MonitorData *monitor;
    struct FaceTargetBehaviourNew__Fields fields;
};

struct FaceTargetBehaviourNew__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct FaceTargetBehaviourNew__StaticFields {
};

struct FaceTargetBehaviourNew__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FaceTargetBehaviourNew__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FaceTargetBehaviourNew__VTable vtable;
};

struct GroundAreaPatrolBehaviourNew_c {
    struct GroundAreaPatrolBehaviourNew_c__Class *klass;
    MonitorData *monitor;
};

struct GroundAreaPatrolBehaviourNew_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GroundAreaPatrolBehaviourNew_c__StaticFields {
    struct GroundAreaPatrolBehaviourNew_c *__9;
    struct Action *__9__21_0;
    struct Action *__9__28_0;
};

struct GroundAreaPatrolBehaviourNew_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundAreaPatrolBehaviourNew_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundAreaPatrolBehaviourNew_c__VTable vtable;
};

struct GroundMoveInDirectionBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonBool *MoveLeft;
    int32_t TraversalSpeed;
    struct MoonFloat *MinDuration;
    struct MoonFloat *MaxDuration;
    bool FailIfOffAllowedZone;
    bool FailIfHasObstacle;
    bool m_failedOnEnter;
    float m_timer;
    struct Vector3 m_Direction;
    struct GroundEntityLocomotion *m_locomotion;
};

struct GroundMoveInDirectionBehaviourNew {
    struct GroundMoveInDirectionBehaviourNew__Class *klass;
    MonitorData *monitor;
    struct GroundMoveInDirectionBehaviourNew__Fields fields;
};

struct GroundMoveInDirectionBehaviourNew__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct GroundMoveInDirectionBehaviourNew__StaticFields {
};

struct GroundMoveInDirectionBehaviourNew__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundMoveInDirectionBehaviourNew__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundMoveInDirectionBehaviourNew__VTable vtable;
};

enum class GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum : int32_t {
    Infinite = 0x00000000,
    ReturnSuccessAtEachStop = 0x00000001,
};

struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__Boxed {
    struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__Class *klass;
    MonitorData *monitor;
    GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum value;
    
};

enum class GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum : int32_t {
    ToggleDirection = 0x00000000,
    AlwaysLeft = 0x00000001,
    AlwaysRight = 0x00000002,
    FollowTarget = 0x00000003,
};

struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Boxed {
    struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class *klass;
    MonitorData *monitor;
    GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum value;
    
};

struct GroundPatrolWithDirectionBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum PatrolMode;
    
    GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum PatrolDirectionMode;
    
    bool IdleBeforeTurning;
    struct MoonVector3 *m_patrolOrigin;
    struct MoonVector3 *m_targetPosition;
    float MaxPatrolRadius;
    bool ShouldIdle;
    float MinIdleInterval;
    float MaxIdleInterval;
    float MinMovingInterval;
    float MaxMovingInterval;
    bool StartWithMoving;
    float TraversalSpeed;
    bool QuickStopOnIdle;
    float QuickStopAcceleration;
    float m_timeUntilIdleEnd;
    float m_timeUntilMovingEnd;
    struct GroundEntityLocomotion *m_locomotion;
    bool m_movingLeft;
    bool m_isMoving;
    struct Vector2 m_effectivePatrolOrigin;
    int32_t m_standingOnLedgeOrNearKill;
    int32_t m_wallHitreqId;
};

struct GroundPatrolWithDirectionBehaviourNew {
    struct GroundPatrolWithDirectionBehaviourNew__Class *klass;
    MonitorData *monitor;
    struct GroundPatrolWithDirectionBehaviourNew__Fields fields;
};

struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__VTable {
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

struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__StaticFields {
};

struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__VTable vtable;
};

struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__VTable {
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

struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__StaticFields {
};

struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__VTable vtable;
};

struct GroundPatrolWithDirectionBehaviourNew__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct GroundPatrolWithDirectionBehaviourNew__StaticFields {
};

struct GroundPatrolWithDirectionBehaviourNew__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundPatrolWithDirectionBehaviourNew__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundPatrolWithDirectionBehaviourNew__VTable vtable;
};

struct GroundQuickStopBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    float DeccelerationRate;
    struct GroundEntityLocomotion *m_locomotion;
};

struct GroundQuickStopBehaviour {
    struct GroundQuickStopBehaviour__Class *klass;
    MonitorData *monitor;
    struct GroundQuickStopBehaviour__Fields fields;
};

struct GroundQuickStopBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct GroundQuickStopBehaviour__StaticFields {
};

struct GroundQuickStopBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundQuickStopBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundQuickStopBehaviour__VTable vtable;
};

struct GroundSurroundingsSensor {
    float MinDistanceFromLedge;
    float MinDistanceFromBackLedge;
    float MinDistanceFromWall;
    float MinDistanceFromBackWall;
    float m_distanceFromFrontWall;
    float m_distanceFromBackWall;
    bool m_frontEdgeEndsWithWall;
    bool m_backEdgeEndsWithWall;
};

struct GroundSurroundingsSensor__Boxed {
    struct GroundSurroundingsSensor__Class *klass;
    MonitorData *monitor;
    struct GroundSurroundingsSensor fields;
};

struct GroundSurroundingsSensor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GroundSurroundingsSensor__StaticFields {
};

struct GroundSurroundingsSensor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundSurroundingsSensor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundSurroundingsSensor__VTable vtable;
};

enum class MeleeAttackBehaviourNew_DamageDirectionType__Enum : int32_t {
    ColliderToTarget = 0x00000000,
    ColliderMoveDirection = 0x00000001,
};

struct MeleeAttackBehaviourNew_DamageDirectionType__Enum__Boxed {
    struct MeleeAttackBehaviourNew_DamageDirectionType__Enum__Class *klass;
    MonitorData *monitor;
    MeleeAttackBehaviourNew_DamageDirectionType__Enum value;
    
};

struct MeleeAttackBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3 *TargetPosition;
    struct LegacyTimelineSequence *AttackTimeline;
    struct LegacyTimelineSequence *WallRecoil;
    struct MoonTimeline *AttackTimelineNew;
    struct MoonTimeline *WallRecoilNew;
    bool ShouldSucceedOnAttackTimelineEnd;
    struct CancelableAnimator__Array *m_cancelableAnimators;
    struct MeleeAttackBehaviourNew_Attack__Array *Attacks;
    float DamageAmount;
    bool UseDamageAmountOverride;
    struct MoonFloat *DamageAmountOverride;
    DamageType__Enum DamageType;
    
    DamageLayerMask__Enum DamageLayerMask;
    
    DamageWeight__Enum DamageWeight;
    
    struct AnimationCurve *KickbackCurve;
    float DamageKickbackStrength;
    struct GameObject *DamageReceivedEffectPrefab;
    struct GameObject *DamageBlockedEffectPrefab;
    MeleeAttackBehaviourNew_DamageDirectionType__Enum DamageDirection;
    
    bool LookTowardsTarget;
    struct RootMotionProcessorData *RootMotion;
    struct GroundSurroundingsSensor Surroundings;
    bool StickToGround;
    bool m_prevStickStatus;
    bool StopAtLedge;
    bool StopAtBackLedge;
    float PositionPredictionTime;
    bool RequiresDirectLineOfSight;
    bool _Cancellable_k__BackingField;
    struct PlayerInsideZoneChecker *AttackZoneChecker;
    struct Vector2 InsideAreaRootMultiplier;
    bool NonInterruptableBehaviour;
    struct TimelineEventTrigger__Array *PauseBehaviourTreeEvents;
    struct EventTriggerAnimator__Array *PauseBehaviourTreeEventsNew;
    struct Locomotion *m_locomotion;
    struct ILocomotionTurningHandler *m_turningHandler;
    struct Vector2 m_targetDir;
    int32_t m_damageID;
    bool m_interruptable;
    bool m_recoiled;
    float m_recoilColliderMinGroundDistance;
    bool m_shouldEnd;
    struct GroundEntityLocomotion *m_groundLocomotion;
    struct PlatformMovement *m_platformMovement;
    int32_t m_cancelable;
    struct DamageOwner *_DamageOwner_k__BackingField;
    struct BlockDamageInterruptionHandler *m_blockingHandler;
    int32_t m_standingOnLedge;
    int32_t m_standingOnLedgeRootMotion;
    int32_t m_standingBackLedgeRootMotion;
};

}
