namespace app {
    struct SkeetoLocomotionIdleBehaviour {
        struct SkeetoLocomotionIdleBehaviour__Class* klass;
        MonitorData* monitor;
        struct SkeetoLocomotionIdleBehaviour__Fields fields;
    };

    struct SkeetoAirEntityMovementProcessor__Fields {
        struct MovementProcessor__Fields _;
        struct Transform* LocomotionRotationTransform;
        struct Transform* FeetTransform;
        struct LayerMask GroundMask;
        bool UseObstacleHitAvoidance;
        struct LayerMask AvoidanceObstaclesMask;
        struct SphereCollider* HitBoxCollider;
        float CheckDistance;
        float MinDistanceToObstacle;
        struct SteeringForces* AvoidanceSteeringForces;
        struct Transform* SteeringForcesOrigin;
        bool m_applyNoise;
        struct CharacterPlatformMovement* m_platformMovement;
        struct ILocomotionTurningHandler* m_turningHandler;
        struct Transform* m_rotationTransform;
        struct Vector2 m_surfaceAverageNormal;
        struct RaycastHit m_hit;
        struct Rigidbody* m_rigidbody;
        struct Vector3 m_lastPosition;
        float m_CurrentObstacleAvoidanceStrength;
        float m_accelerationMultiplier;
        float m_decelerationMultiplier;
        struct EntityWeightData_EntityWeightSettings WeightSettings;
        EntityWeightData_EntityWeight__Enum m_entityWeight;

        int32_t m_sphereCastClientID;
    };

    struct SkeetoAirEntityMovementProcessor {
        struct SkeetoAirEntityMovementProcessor__Class* klass;
        MonitorData* monitor;
        struct SkeetoAirEntityMovementProcessor__Fields fields;
    };

    enum class SkeetoAirMoveBehaviour_State__Enum : int32_t {
        Unset = 0x00000000,
        Fly = 0x00000001,
        Flip = 0x00000002,
    };

    struct SkeetoAirMoveBehaviour_State__Enum__Boxed {
        struct SkeetoAirMoveBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        SkeetoAirMoveBehaviour_State__Enum value;
    };

    struct SkeetoAirMoveBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        float MaxSpeed;
        float ArrivalDistance;
        struct Vector2 ChangeDirectionDistanceRange;
        struct Vector2 ChangeDirectionSpeedRange;
        struct AnimationCurve* ChangeDirectionRate;
        struct MoonTimeline* FlyTimeline;
        struct MoonTimeline* FlipTimeline;
        struct EventTriggerAnimator* FlipTrigger;
        struct FloatAnimationParameter* YDirectionParameter;
        float YDirectionParameterChangeRate;
        struct SkeetoLocomotion* m_locomotion;
        struct Vector3 m_lastSearchedTargetPosition;
        struct Vector2 m_currentDirection;
        SkeetoAirMoveBehaviour_State__Enum m_state;

        float m_timeInState;
        float m_timeInBehaviour;
        struct MoonTimeline* m_currentTimeline;
        float m_yDirectionParameterValue;
        bool m_pauseFlyAnimation;
        float m_previousTraversalSpeed;
        struct Vector3 _TargetPosition_k__BackingField;
        struct Vector2 _CurrentTargetDirection_k__BackingField;
    };

    struct SkeetoAirMoveBehaviour {
        struct SkeetoAirMoveBehaviour__Class* klass;
        MonitorData* monitor;
        struct SkeetoAirMoveBehaviour__Fields fields;
    };

    struct SkeetoLocomotionIdleBehaviour_State__Enum__VTable {
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

    struct SkeetoLocomotionIdleBehaviour_State__Enum__StaticFields {
    };

    struct SkeetoLocomotionIdleBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoLocomotionIdleBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoLocomotionIdleBehaviour_State__Enum__VTable vtable;
    };

    struct SkeetoLocomotionIdleBehaviour__VTable {
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
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
    };

    struct SkeetoLocomotionIdleBehaviour__StaticFields {
    };

    struct SkeetoLocomotionIdleBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoLocomotionIdleBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoLocomotionIdleBehaviour__VTable vtable;
    };

    struct SkeetoAirEntityMovementProcessor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_AllowFreeRotation;
        VirtualInvokeData set_AllowFreeRotation;
    };

    struct SkeetoAirEntityMovementProcessor__StaticFields {
    };

    struct SkeetoAirEntityMovementProcessor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoAirEntityMovementProcessor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoAirEntityMovementProcessor__VTable vtable;
    };

    struct SkeetoAirMoveBehaviour_State__Enum__VTable {
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

    struct SkeetoAirMoveBehaviour_State__Enum__StaticFields {
    };

    struct SkeetoAirMoveBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoAirMoveBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoAirMoveBehaviour_State__Enum__VTable vtable;
    };

    struct SkeetoAirMoveBehaviour__VTable {
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
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData get_TargetPosition;
        VirtualInvokeData set_TargetPosition;
        VirtualInvokeData get_TraversalSpeed;
        VirtualInvokeData set_TraversalSpeed;
    };

    struct SkeetoAirMoveBehaviour__StaticFields {
    };

    struct SkeetoAirMoveBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoAirMoveBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoAirMoveBehaviour__VTable vtable;
    };

    struct SkeetoLocomotion__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveToPoint;
        VirtualInvokeData MoveInTheDirection;
        VirtualInvokeData Stop;
        VirtualInvokeData get_TraversalTier;
        VirtualInvokeData set_TraversalTier;
        VirtualInvokeData get_FeetPosition;
        VirtualInvokeData get_HasArrivedAtTarget;
        VirtualInvokeData get_IsMovingToTarget;
        VirtualInvokeData get_GravityDirection;
        VirtualInvokeData OnEntityReset;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
        VirtualInvokeData get_PositionForWaterfallInteraction;
        VirtualInvokeData get_SpeedForWaterfallInteraction;
        VirtualInvokeData set_SpeedForWaterfallInteraction;
        VirtualInvokeData get_BoundsForWaterfallInteraction;
        VirtualInvokeData get_WaterfallIntersectionMode;
        VirtualInvokeData get_RigidbodyForWaterfallInteraction;
        VirtualInvokeData get_IsFlamable;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_FeetTransform;
        VirtualInvokeData get_FeetPosition_1;
        VirtualInvokeData get_HasArrivedAtTarget_1;
        VirtualInvokeData get_Gravity;
        VirtualInvokeData set_Gravity;
        VirtualInvokeData get_Weight;
        VirtualInvokeData set_Weight;
        VirtualInvokeData get_Entity;
        VirtualInvokeData get_ShouldReset;
        VirtualInvokeData get_IsMovingToTarget_1;
        VirtualInvokeData get_GravityDirection_1;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnPrewarm;
        VirtualInvokeData OnEntityInitialization_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData ConfigureStateMachine;
        VirtualInvokeData get_DefaultFSMState;
        VirtualInvokeData OnEntityReset_1;
        VirtualInvokeData ResetLocomotion;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData UpdateLocomotionBehaviours;
        VirtualInvokeData GetNextBehaviour;
        VirtualInvokeData MoveToPoint_1;
        VirtualInvokeData MoveInTheDirection_1;
        VirtualInvokeData Stop_1;
        VirtualInvokeData SetLookDirectionX;
        VirtualInvokeData SetLookDirection;
        VirtualInvokeData SetLookDirectionTowardsPoint;
        VirtualInvokeData get_LookDirection;
        VirtualInvokeData get_IsFacingLeft;
        VirtualInvokeData get_IsTurning;
        VirtualInvokeData get_MovementProcessor;
        VirtualInvokeData GetMovementBehaviour;
        VirtualInvokeData PropagateTargetPoint;
        VirtualInvokeData InstantFlip;
        VirtualInvokeData get_LookDirection_1;
        VirtualInvokeData get_LookDirectionXYNormalized;
        VirtualInvokeData get_IsFacingLeft_1;
    };

    struct SkeetoLocomotion__StaticFields {
    };

    struct SkeetoLocomotion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoLocomotion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoLocomotion__VTable vtable;
    };

    struct EntityReactionBehaviour_1_SkeetoEntity___Fields {
        struct EntityReactionBehaviour__Fields _;
    };

    struct EntityReactionBehaviour_1_SkeetoEntity_ {
        struct EntityReactionBehaviour_1_SkeetoEntity___Class* klass;
        MonitorData* monitor;
        struct EntityReactionBehaviour_1_SkeetoEntity___Fields fields;
    };

    struct EntityHitReactionBehaviour_1_SkeetoEntity___Fields {
        struct EntityReactionBehaviour_1_SkeetoEntity___Fields _;
        struct List_1_DamageType_* DamageTypePreventingInterruption;
        struct List_1_DamageWeight_* DamageWeightPreventingInterruption;
        struct HashSet_1_DamageType_* m_damageTypePreventingInterruption;
        struct HashSet_1_DamageWeight_* m_damageWeightPreventingInterruption;
        bool _HasLocomotion_k__BackingField;
        struct CharacterPlatformMovement* m_platformMovement;
        EntityWeightData_EntityWeight__Enum m_weight;

        struct HitReactionSettings* m_kickbackSettings;
    };

    struct EntityHitReactionBehaviour_1_SkeetoEntity_ {
        struct EntityHitReactionBehaviour_1_SkeetoEntity___Class* klass;
        MonitorData* monitor;
        struct EntityHitReactionBehaviour_1_SkeetoEntity___Fields fields;
    };

    struct SkeetoHitReaction__Fields {
        struct EntityHitReactionBehaviour_1_SkeetoEntity___Fields _;
        struct MoonTimeline* HitGround;
        struct MoonTimeline* HitAir;
        struct MoonTimeline* HitGroundAdditive;
        struct MoonTimeline* HitAirAdditive;
        struct MoonTimeline* m_currentTimeline;
        struct SkeetoLocomotion* m_locomotion;
        struct EntityDamageEvent* _DamageEvent_k__BackingField;
        float KickbackForceMultiplier;
        float AirHorziontalKnockbackMultiplier;
        float MinForceWhenJuggling;
        float AirSpinRotationAmount;
        bool CanBeInterruptedByVeryLightDamage;
        bool ResetRotationByInterruptingHit;
        struct Event_1* OnAnyHitEvent;
        bool m_lockDamageKickback;
        bool m_useDamageTypePreventingInterruption;
        float m_timeFromKickback;
        bool m_exitEarly;
    };

    struct SkeetoHitReaction {
        struct SkeetoHitReaction__Class* klass;
        MonitorData* monitor;
        struct SkeetoHitReaction__Fields fields;
    };

    struct KamikazeSkeetoHitReaction__Fields {
        struct SkeetoHitReaction__Fields _;
        struct List_1_KamikazeSkeetoDiveAttackBehaviour_* m_diveAttacks;
    };

    struct KamikazeSkeetoHitReaction {
        struct KamikazeSkeetoHitReaction__Class* klass;
        MonitorData* monitor;
        struct KamikazeSkeetoHitReaction__Fields fields;
    };

    struct __declspec(align(8)) List_1_KamikazeSkeetoDiveAttackBehaviour___Fields {
        struct KamikazeSkeetoDiveAttackBehaviour__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_KamikazeSkeetoDiveAttackBehaviour_ {
        struct List_1_KamikazeSkeetoDiveAttackBehaviour___Class* klass;
        MonitorData* monitor;
        struct List_1_KamikazeSkeetoDiveAttackBehaviour___Fields fields;
    };

    struct KamikazeSkeetoDiveAttackBehaviour__Array {
        struct KamikazeSkeetoDiveAttackBehaviour__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KamikazeSkeetoDiveAttackBehaviour* vector[32];
    };

    struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour_ {
        struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___Class* klass;
        MonitorData* monitor;
    };

    struct EntityReactionBehaviour_1_SkeetoEntity___VTable {
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
        VirtualInvokeData __unknown;
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

    struct EntityReactionBehaviour_1_SkeetoEntity___StaticFields {
    };

    struct EntityReactionBehaviour_1_SkeetoEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityReactionBehaviour_1_SkeetoEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityReactionBehaviour_1_SkeetoEntity___VTable vtable;
    };

    struct EntityHitReactionBehaviour_1_SkeetoEntity___VTable {
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
        VirtualInvokeData IsDamageTypePreventingInterruption;
        VirtualInvokeData IsInterruptingDamageWeight;
    };

    struct EntityHitReactionBehaviour_1_SkeetoEntity___StaticFields {
    };

    struct EntityHitReactionBehaviour_1_SkeetoEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityHitReactionBehaviour_1_SkeetoEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityHitReactionBehaviour_1_SkeetoEntity___VTable vtable;
    };

    struct SkeetoHitReaction__VTable {
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
        VirtualInvokeData IsDamageTypePreventingInterruption;
        VirtualInvokeData IsInterruptingDamageWeight;
    };

    struct SkeetoHitReaction__StaticFields {
    };

    struct SkeetoHitReaction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoHitReaction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoHitReaction__VTable vtable;
    };

    struct KamikazeSkeetoDiveAttackBehaviour__Array__VTable {
    };

    struct KamikazeSkeetoDiveAttackBehaviour__Array__StaticFields {
    };

    struct KamikazeSkeetoDiveAttackBehaviour__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KamikazeSkeetoDiveAttackBehaviour__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KamikazeSkeetoDiveAttackBehaviour__Array__VTable vtable;
    };

    struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___StaticFields {
    };

    struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___VTable vtable;
    };

    struct List_1_KamikazeSkeetoDiveAttackBehaviour___VTable {
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

    struct List_1_KamikazeSkeetoDiveAttackBehaviour___StaticFields {
        struct KamikazeSkeetoDiveAttackBehaviour__Array* _emptyArray;
    };

    struct List_1_KamikazeSkeetoDiveAttackBehaviour___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_KamikazeSkeetoDiveAttackBehaviour___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_KamikazeSkeetoDiveAttackBehaviour___VTable vtable;
    };

    struct KamikazeSkeetoHitReaction__VTable {
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
        VirtualInvokeData IsDamageTypePreventingInterruption;
        VirtualInvokeData IsInterruptingDamageWeight;
    };

    struct KamikazeSkeetoHitReaction__StaticFields {
    };

    struct KamikazeSkeetoHitReaction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KamikazeSkeetoHitReaction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KamikazeSkeetoHitReaction__VTable vtable;
    };

    struct ScaredySkeetoProjectileSettings__Fields {
        struct MonoBehaviour__Fields _;
        float ProjectileSpeed;
        float TurningSpeed;
        float ProjectileGravity;
        float ProjectileDamage;
        DamageWeight__Enum ProjectileDamageWeight;

        DamageLayerMask__Enum DamageLayerMask;
    };

    struct ScaredySkeetoProjectileSettings {
        struct ScaredySkeetoProjectileSettings__Class* klass;
        MonitorData* monitor;
        struct ScaredySkeetoProjectileSettings__Fields fields;
    };

    struct ScaredySkeetoProjectileSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScaredySkeetoProjectileSettings__StaticFields {
    };

    struct ScaredySkeetoProjectileSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScaredySkeetoProjectileSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScaredySkeetoProjectileSettings__VTable vtable;
    };

    struct SkeetoKeepPositionBehaviour__Fields {
        struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
        struct MoonFloat* SlowDownRate;
        struct MoonFloat* Duration;
        struct SkeetoLocomotion* m_skeetoLocomotion;
        float m_slowDownRate;
        float m_duration;
        float m_timeLeft;
    };

    struct SkeetoKeepPositionBehaviour {
        struct SkeetoKeepPositionBehaviour__Class* klass;
        MonitorData* monitor;
        struct SkeetoKeepPositionBehaviour__Fields fields;
    };

    struct SkeetoKeepPositionBehaviour__VTable {
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

    struct SkeetoKeepPositionBehaviour__StaticFields {
    };

    struct SkeetoKeepPositionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoKeepPositionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoKeepPositionBehaviour__VTable vtable;
    };

    enum class SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum : int32_t {
        Unset = 0x00000000,
        JobScheduled = 0x00000001,
        PerformingMovement = 0x00000002,
    };

    struct SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Boxed {
        struct SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class* klass;
        MonitorData* monitor;
        SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum value;
    };

    struct SkeetoMoveToSemiRandomPositionBehaviour__Fields {
        struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
        int32_t LatitudePointsCount;
        int32_t LongtitdePointsCount;
        bool OverrideMaxSpeed;
        float MaxSpeed;
        float AccelerationMultiplier;
        float MinDistanceToTarget;
        float MaxDistanceToTarget;
        float MinLatitudeT;
        float MaxLatitudeT;
        bool UseSelfAsAimTarget;
        bool AllowMoveBelowTarget;
        bool PrioritizeCurrentSide;
        bool LimitToAllowedArea;
        bool LimitToPatrolArea;
        bool FollowTarget;
        bool AdditionalDistanceCheck;
        float DistanceForAdditionalCheck;
        bool DrawGizmos;
        struct Color GizmoPointsColor;
        bool m_hasValidFinalPosition;
        struct Vector3 m_positionToMoveTo;
        struct Vector3 m_initialEntityPosition;
        struct Vector3 m_offsetToTarget;
        SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum m_currentPhase;

        struct BatchedRaycast* m_batchedRaycasts;
        int32_t m_randomIndexOffset;
        struct Vector3__Array_1* m_positionCache;
        struct Vector3__Array_1* m_normalizedPositionCache;
        struct Single__Array_1* m_positionDistanceCache;
        struct RaycastHit__Array* m_hits;
        struct RaycastCommand__Array* m_commands;
    };

    struct SkeetoMoveToSemiRandomPositionBehaviour {
        struct SkeetoMoveToSemiRandomPositionBehaviour__Class* klass;
        MonitorData* monitor;
        struct SkeetoMoveToSemiRandomPositionBehaviour__Fields fields;
    };

    struct Single__Array_1 {
        struct Single__Array_1__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        float vector[32];
    };

    struct SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__VTable {
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

    struct SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__StaticFields {
    };

    struct SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__VTable vtable;
    };

    struct Single__Array_1__VTable {
    };

    struct Single__Array_1__StaticFields {
    };

    struct Single__Array_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Single__Array_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Single__Array_1__VTable vtable;
    };

    struct SkeetoMoveToSemiRandomPositionBehaviour__VTable {
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

    struct SkeetoMoveToSemiRandomPositionBehaviour__StaticFields {
    };

    struct SkeetoMoveToSemiRandomPositionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoMoveToSemiRandomPositionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoMoveToSemiRandomPositionBehaviour__VTable vtable;
    };

    struct SkeetoRunAwayBehaviour__Fields {
        struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
        float ApproachArrivalDistance;
        struct Vector2 ApproachTargetOffset;
        float ApproachTargetRandomDistance;
        int32_t MovementSpeed;
        struct Vector3 m_targetPosition;
        struct Vector3 m_anticipationPosition;
        struct Vector3 m_resolvePosition;
        bool m_successfulAttack;
        struct Vector3 m_velocity;
        struct Vector3 m_approachRandomOffset;
        struct Vector3 m_upDirection;
        struct Collider__Array* m_colliders;
        struct RaycastHit__Array* m_hits;
        bool m_hasValidPosition;
    };

    struct SkeetoRunAwayBehaviour {
        struct SkeetoRunAwayBehaviour__Class* klass;
        MonitorData* monitor;
        struct SkeetoRunAwayBehaviour__Fields fields;
    };

} // namespace app
