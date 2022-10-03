namespace app {
    struct GasballEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GasballEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GasballEntity__VTable vtable;
    };

    struct GasballSpawnSetup__Fields {
        struct EntitySpawnSetup__Fields _;
        bool m_setSpawnOffsetManualy;
        struct Vector3 m_spawnOffset;
    };

    struct GasballSpawnSetup {
        struct GasballSpawnSetup__Class* klass;
        MonitorData* monitor;
        struct GasballSpawnSetup__Fields fields;
    };

    struct GasballSpawnSetup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GasballSpawnSetup__StaticFields {
    };

    struct GasballSpawnSetup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GasballSpawnSetup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GasballSpawnSetup__VTable vtable;
    };

    struct GasBallSpawnTask__Fields {
        struct CommonSpawnTask__Fields _;
        struct FloatAnimationParameter* LookDirectionAnimParam;
        float BlendParamChangeSpeed;
        float MoveSpeed;
        float SlowDownDistance;
        struct EventTriggerAnimator* StartMovingEvent;
        struct MoonVector3* TargetPosition;
        float TraversalSpeed;
        float PositionOffset;
        bool EndEarlyOnCondition;
        struct Condition_1* Condition;
        struct Transform* m_mirror;
        float m_currentBlend;
        struct Vector3 m_targetPosition;
        struct GasballEntity* m_gasball;
        struct PlatformMovement* m_platformMovement;
        struct Vector3 m_moveDirection;
        float m_slowDownDistanceSqr;
        bool m_canBeInterrupted;
    };

    struct GasBallSpawnTask {
        struct GasBallSpawnTask__Class* klass;
        MonitorData* monitor;
        struct GasBallSpawnTask__Fields fields;
    };

    struct GasBallSpawnTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData SetActivateDamageDealers;
        VirtualInvokeData SetPlatformMovementColliderEnabledState;
    };

    struct GasBallSpawnTask__StaticFields {
    };

    struct GasBallSpawnTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GasBallSpawnTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GasBallSpawnTask__VTable vtable;
    };

    struct GasballHitReactionBehaviour__Fields {
        struct EntityReactionBehaviour__Fields _;
        struct MoonTimeline* HitReaction;
        struct MoonTimeline* HitAdditive;
        struct MoonTimeline* m_currentTimeline;
        struct ReactionFallingBehaviour* m_fallBehaviour;
        struct AirEntityLocomotion* m_locomotion;
        struct EntityDamageEvent* _DamageEvent_k__BackingField;
        float KickbackMultiplier;
        float KickbackMax;
        struct Event_1* OnAnyHitEvent;
    };

    struct GasballHitReactionBehaviour {
        struct GasballHitReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct GasballHitReactionBehaviour__Fields fields;
    };

    struct GasballHitReactionBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData get_RunInParallel;
        VirtualInvokeData get_CanInterruptSelf;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData CanInterrupt;
        VirtualInvokeData HandleReasonToNotInterrupt;
    };

    struct GasballHitReactionBehaviour__StaticFields {
    };

    struct GasballHitReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GasballHitReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GasballHitReactionBehaviour__VTable vtable;
    };

    struct GasballHitReactionBehaviour_c {
        struct GasballHitReactionBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct GasballHitReactionBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GasballHitReactionBehaviour_c__StaticFields {
        struct GasballHitReactionBehaviour_c* __9;
        struct Action* __9__18_0;
    };

    struct GasballHitReactionBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GasballHitReactionBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GasballHitReactionBehaviour_c__VTable vtable;
    };

    struct GasballReactions__Fields {
        struct EntityReactions__Fields _;
    };

    struct GasballReactions {
        struct GasballReactions__Class* klass;
        MonitorData* monitor;
        struct GasballReactions__Fields fields;
    };

    struct GasballReactions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData OnAwake;
        VirtualInvokeData ProcessEntityEvent;
    };

    struct GasballReactions__StaticFields {
    };

    struct GasballReactions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GasballReactions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GasballReactions__VTable vtable;
    };

    struct MudkisseBiteDashAttack__Fields {
        struct VolumeMovementTimelineBehaviourNew__Fields _;
    };

    struct MudkisseBiteDashAttack {
        struct MudkisseBiteDashAttack__Class* klass;
        MonitorData* monitor;
        struct MudkisseBiteDashAttack__Fields fields;
    };

    struct MudkisseBiteDashAttack__VTable {
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
        VirtualInvokeData get_StatusWhenPlaying;
    };

    struct MudkisseBiteDashAttack__StaticFields {
    };

    struct MudkisseBiteDashAttack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MudkisseBiteDashAttack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MudkisseBiteDashAttack__VTable vtable;
    };

    struct MudkisserProjectileAttack__Fields {
        struct VolumeMovementTimelineBehaviourNew__Fields _;
        struct EventTriggerAnimator* ThrowTrigger;
        struct EventTriggerAnimator* AimTrigger;
        struct EventTriggerAnimator* PullOutTrigger;
        struct PrefabSpawner* ProjectileSpawner;
        float ProjectileSpeed;
        float ProjectileGravity;
        int32_t ProjectileDamage;
        DamageWeight__Enum ProjectileDamageWeight;

        float MinimumDistanceToArcProjectile;
        float ProjectileRangeWhenNoTarget;
        bool ShootHighAngle;
        struct Transform* ShootPoint;
        struct List_1_UnityEngine_Collider_* IgnoredColliders;
        struct Transform* ThrowingHand;
        struct Vector3 shootTargetPos;
        struct Projectile* m_projectile;
        struct DamageDealer* m_projectileDamageDealer;
    };

    struct MudkisserProjectileAttack {
        struct MudkisserProjectileAttack__Class* klass;
        MonitorData* monitor;
        struct MudkisserProjectileAttack__Fields fields;
    };

    struct MudkisserProjectileAttack__VTable {
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
        VirtualInvokeData get_StatusWhenPlaying;
    };

    struct MudkisserProjectileAttack__StaticFields {
    };

    struct MudkisserProjectileAttack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MudkisserProjectileAttack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MudkisserProjectileAttack__VTable vtable;
    };

    struct MudkisserWhipAttack__Fields {
        struct VolumeMovementTimelineBehaviourNew__Fields _;
    };

    struct MudkisserWhipAttack {
        struct MudkisserWhipAttack__Class* klass;
        MonitorData* monitor;
        struct MudkisserWhipAttack__Fields fields;
    };

    struct MudkisserWhipAttack__VTable {
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
        VirtualInvokeData get_StatusWhenPlaying;
    };

    struct MudkisserWhipAttack__StaticFields {
    };

    struct MudkisserWhipAttack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MudkisserWhipAttack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MudkisserWhipAttack__VTable vtable;
    };

    struct MudkisserChaseBehaviour__Fields {
        struct GroundChaseBehaviourNew__Fields _;
    };

    struct MudkisserChaseBehaviour {
        struct MudkisserChaseBehaviour__Class* klass;
        MonitorData* monitor;
        struct MudkisserChaseBehaviour__Fields fields;
    };

    struct MudkisserChaseBehaviour__VTable {
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
        VirtualInvokeData IsBlockingInterruption;
        VirtualInvokeData AssignLocomotionData;
    };

    struct MudkisserChaseBehaviour__StaticFields {
    };

    struct MudkisserChaseBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MudkisserChaseBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MudkisserChaseBehaviour__VTable vtable;
    };

    enum class VolumePatrolBehaviourNew_PatrolMode__Enum : int32_t {
        Infinite = 0x00000000,
        ReturnSuccessAtEachPoint = 0x00000001,
    };

    struct VolumePatrolBehaviourNew_PatrolMode__Enum__Boxed {
        struct VolumePatrolBehaviourNew_PatrolMode__Enum__Class* klass;
        MonitorData* monitor;
        VolumePatrolBehaviourNew_PatrolMode__Enum value;
    };

    struct VolumePatrolBehaviourNew__Fields {
        struct EntityBehaviourNode__Fields _;
        VolumePatrolBehaviourNew_PatrolMode__Enum AgentPatrolMode;

        float MinInterval;
        float MaxInterval;
        struct MoonVector3* PatrolOrigin;
        float MaxPatrolRadius;
        float TraversalSpeed;
        NavigationType__Enum VolumeType;

        struct LayerMask LayerMask;
        struct String* IgnoreColliderTag;
        struct Predicate_1_UnityEngine_Vector3_* m_patrolTargetPredicate;
        struct Vector2 m_targetPosition;
        float m_timeUntilNextPoint;
        struct Vector3 m_patrolOrigin;
    };

    struct VolumePatrolBehaviourNew {
        struct VolumePatrolBehaviourNew__Class* klass;
        MonitorData* monitor;
        struct VolumePatrolBehaviourNew__Fields fields;
    };

    struct MudkisserPatrolBehaviour__Fields {
        struct VolumePatrolBehaviourNew__Fields _;
    };

    struct MudkisserPatrolBehaviour {
        struct MudkisserPatrolBehaviour__Class* klass;
        MonitorData* monitor;
        struct MudkisserPatrolBehaviour__Fields fields;
    };

    struct Predicate_1_UnityEngine_Vector3___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Predicate_1_UnityEngine_Vector3_ {
        struct Predicate_1_UnityEngine_Vector3___Class* klass;
        MonitorData* monitor;
        struct Predicate_1_UnityEngine_Vector3___Fields fields;
    };

    struct VolumePatrolBehaviourNew_PatrolMode__Enum__VTable {
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

    struct VolumePatrolBehaviourNew_PatrolMode__Enum__StaticFields {
    };

    struct VolumePatrolBehaviourNew_PatrolMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VolumePatrolBehaviourNew_PatrolMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VolumePatrolBehaviourNew_PatrolMode__Enum__VTable vtable;
    };

    struct Predicate_1_UnityEngine_Vector3___VTable {
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

    struct Predicate_1_UnityEngine_Vector3___StaticFields {
    };

    struct Predicate_1_UnityEngine_Vector3___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Predicate_1_UnityEngine_Vector3___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Predicate_1_UnityEngine_Vector3___VTable vtable;
    };

    struct VolumePatrolBehaviourNew__VTable {
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
        VirtualInvokeData KeepMoving;
        VirtualInvokeData PickNextPoint;
    };

    struct VolumePatrolBehaviourNew__StaticFields {
    };

    struct VolumePatrolBehaviourNew__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VolumePatrolBehaviourNew__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VolumePatrolBehaviourNew__VTable vtable;
    };

    struct MudkisserPatrolBehaviour__VTable {
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
        VirtualInvokeData KeepMoving;
        VirtualInvokeData PickNextPoint;
    };

    struct MudkisserPatrolBehaviour__StaticFields {
    };

    struct MudkisserPatrolBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MudkisserPatrolBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MudkisserPatrolBehaviour__VTable vtable;
    };

    struct MudkisserGrayboxEntity__Fields {
        struct EnemyEntity__Fields _;
        struct IgnoreGoThroughPlatforms* m_ignoreGoThroughs;
        struct PlatformMovement* m_platformMovement;
        struct DamageDealer* m_touchDamage;
        struct VolumeEntityMovementProcessor* m_movementProcessor;
        float Offset;
        struct HitProtection* HitProtection;
        bool m_wasLocomotionPaused;
        struct VolumeEntityLocomotion* m_locomotion;
        bool MoveTowardsTargetIfAggro;
        struct Transform* Rotation;
        bool m_flopping;
    };

    struct MudkisserGrayboxEntity {
        struct MudkisserGrayboxEntity__Class* klass;
        MonitorData* monitor;
        struct MudkisserGrayboxEntity__Fields fields;
    };

    struct IgnoreGoThroughPlatforms__Fields {
        struct MonoBehaviour__Fields _;
        bool m_ignored;
    };

    struct IgnoreGoThroughPlatforms {
        struct IgnoreGoThroughPlatforms__Class* klass;
        MonitorData* monitor;
        struct IgnoreGoThroughPlatforms__Fields fields;
    };

    enum class HitProtectionState__Enum : int32_t {
        Default = 0x00000000,
        Vulnerable = 0x00000001,
        ProtectedFromLightAttacks = 0x00000002,
        Protected = 0x00000003,
    };

    struct HitProtectionState__Enum__Boxed {
        struct HitProtectionState__Enum__Class* klass;
        MonitorData* monitor;
        HitProtectionState__Enum value;
    };

    struct __declspec(align(8)) HitProtection__Fields {
        struct Dictionary_2_System_Object_HitProtectionState_* m_protectionStateGuard;
        HitProtectionState__Enum DefaultProtectionState;

        HitProtectionState__Enum m_protectionState;

        struct Object* m_protector;
        float m_vulnerabilityTimer;
        float m_invulnerabilityTimer;
    };

    struct HitProtection {
        struct HitProtection__Class* klass;
        MonitorData* monitor;
        struct HitProtection__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Object_HitProtectionState___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Object_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Object_HitProtectionState_ {
        struct Dictionary_2_System_Object_HitProtectionState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Object_HitProtectionState___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState_ {
        int32_t hashCode;
        int32_t next;
        struct Object* key;
        HitProtectionState__Enum value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___Fields {
        struct Dictionary_2_System_Object_HitProtectionState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___Fields {
        struct Dictionary_2_System_Object_HitProtectionState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___Fields fields;
    };

    struct HitProtectionState__Enum__Array {
        struct HitProtectionState__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        HitProtectionState__Enum vector[32];
    };

    struct IEnumerator_1_HitProtectionState_ {
        struct IEnumerator_1_HitProtectionState___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_HitProtectionState_ {
        struct ICollection_1_HitProtectionState___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Object_HitProtectionState_ {
        struct Object* key;
        HitProtectionState__Enum value;
    };

    struct KeyValuePair_2_System_Object_HitProtectionState___Boxed {
        struct KeyValuePair_2_System_Object_HitProtectionState___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Object_HitProtectionState_ fields;
    };

    struct KeyValuePair_2_System_Object_HitProtectionState___Array {
        struct KeyValuePair_2_System_Object_HitProtectionState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Object_HitProtectionState_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState_ {
        struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_HitProtectionState_ {
        struct IEnumerable_1_HitProtectionState___Class* klass;
        MonitorData* monitor;
    };

    struct IgnoreGoThroughPlatforms__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IgnoreGoThroughPlatforms__StaticFields {
    };

    struct IgnoreGoThroughPlatforms__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IgnoreGoThroughPlatforms__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IgnoreGoThroughPlatforms__VTable vtable;
    };

    struct HitProtectionState__Enum__VTable {
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

    struct HitProtectionState__Enum__StaticFields {
    };

    struct HitProtectionState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitProtectionState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitProtectionState__Enum__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array__VTable vtable;
    };

} // namespace app
