namespace app {
struct TraversalBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
};

struct TraversalBehaviour {
    struct TraversalBehaviour__Class *klass;
    MonitorData *monitor;
    struct TraversalBehaviour__Fields fields;
};

struct LocomotionVolumeMoveTimelineBehaviour__Fields {
    struct TraversalBehaviour__Fields _;
    struct LocomotionTimelineAnimation__Array *TimelineMovementEntries;
    struct LocomotionTimelineAnimation__Array *TimelineBackwardMovementEntries;
    struct LocomotionTimelineAnimation *m_currentTimelineAnimation;
    float ArrivalDistance;
    float SlowDownDistance;
    struct LocomotionAnimation__Array *MovementEntries;
    float MinSpeed;
    float GreyboxMaxSpeed;
    bool GreyboxMovementOn;
    float m_arrivalDistance;
    float m_slowDownDistance;
    struct LocomotionAnimation *m_currentAnimation;
    struct VolumeEntityLocomotion *m_locomotion;
    struct IActiveAnimation *m_activeAnimation;
    struct Vector3 m_lastSearchedTargetPosition;
    float m_previousTraversalSpeed;
    bool m_arrivedAtTarget;
    struct Vector3 _TargetPosition_k__BackingField;
};

struct LocomotionVolumeMoveTimelineBehaviour {
    struct LocomotionVolumeMoveTimelineBehaviour__Class *klass;
    MonitorData *monitor;
    struct LocomotionVolumeMoveTimelineBehaviour__Fields fields;
};

struct VolumeType__Enum__VTable {
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

struct VolumeType__Enum__StaticFields {
};

struct VolumeType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VolumeType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VolumeType__Enum__VTable vtable;
};

struct MovementSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MovementSettings__StaticFields {
};

struct MovementSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MovementSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MovementSettings__VTable vtable;
};

struct VolumeEntityMovementProcessor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AllowFreeRotation;
    VirtualInvokeData set_AllowFreeRotation;
};

struct VolumeEntityMovementProcessor__StaticFields {
    int32_t m_distribution;
};

struct VolumeEntityMovementProcessor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VolumeEntityMovementProcessor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VolumeEntityMovementProcessor__VTable vtable;
};

struct LocomotionVolumeMoveTimelineBehaviour__VTable {
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
    VirtualInvokeData get_TargetPosition_1;
    VirtualInvokeData set_TargetPosition_1;
    VirtualInvokeData get_TraversalSpeed_1;
    VirtualInvokeData set_TraversalSpeed_1;
    VirtualInvokeData IsAtPoint;
    VirtualInvokeData get_HasArrivedAtTarget;
};

struct LocomotionVolumeMoveTimelineBehaviour__StaticFields {
};

struct LocomotionVolumeMoveTimelineBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LocomotionVolumeMoveTimelineBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LocomotionVolumeMoveTimelineBehaviour__VTable vtable;
};

struct TraversalBehaviour__VTable {
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
    VirtualInvokeData __unknown_1;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData get_TargetPosition;
    VirtualInvokeData set_TargetPosition;
    VirtualInvokeData get_TraversalSpeed;
    VirtualInvokeData set_TraversalSpeed;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
};

struct TraversalBehaviour__StaticFields {
};

struct TraversalBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraversalBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraversalBehaviour__VTable vtable;
};

struct VolumeEntityLocomotion__VTable {
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
    VirtualInvokeData PropagateTargetPoint;
    VirtualInvokeData InstantFlip;
    VirtualInvokeData get_LookDirection_1;
    VirtualInvokeData get_LookDirectionXYNormalized;
    VirtualInvokeData get_IsFacingLeft_1;
};

struct VolumeEntityLocomotion__StaticFields {
};

struct VolumeEntityLocomotion__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VolumeEntityLocomotion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VolumeEntityLocomotion__VTable vtable;
};

struct VolumeMovementTimelineBehaviourNew__VTable {
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

struct VolumeMovementTimelineBehaviourNew__StaticFields {
};

struct VolumeMovementTimelineBehaviourNew__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VolumeMovementTimelineBehaviourNew__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VolumeMovementTimelineBehaviourNew__VTable vtable;
};

enum class FallBehaviour_FallState__Enum : int32_t {
    Falling = 0x00000000,
    Landing = 0x00000001,
    BouncingOffWall = 0x00000002,
};

struct FallBehaviour_FallState__Enum__Boxed {
    struct FallBehaviour_FallState__Enum__Class *klass;
    MonitorData *monitor;
    FallBehaviour_FallState__Enum value;
    
};

struct FallBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct MoonAnimation *AirLoopAnimation;
    struct FloatAnimationParameter *VerticalSpeedBlendParameter;
    struct ClipAnimation *LandAnimation;
    struct MoonAnimation *HitWallFront;
    struct MoonAnimation *HitWallBack;
    struct GameObject *ImpactEffect;
    struct RootMotionProcessorData *LandRootMotionProcessor;
    bool ResetHorizontalSpeedOnLand;
    int32_t AnimationPriority;
    float LandAntecipationTime;
    struct LayerMask CollisionMask;
    struct EntityBehaviour__Array *NonInterruptableBehaviours;
    struct Locomotion *m_locomotion;
    struct ILocomotionTurningHandler *m_turningHandler;
    struct ActiveAnimationHandle m_animationState;
    FallBehaviour_FallState__Enum m_fallState;
    
    struct Rigidbody *m_rigidBody;
    struct Vector2 m_postBounceVelocity;
};

struct FallBehaviour {
    struct FallBehaviour__Class *klass;
    MonitorData *monitor;
    struct FallBehaviour__Fields fields;
};

struct EntityBehaviour__Array {
    struct EntityBehaviour__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EntityBehaviour *vector[32];
};

struct EntityBehaviour__Array__VTable {
};

struct EntityBehaviour__Array__StaticFields {
};

struct EntityBehaviour__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityBehaviour__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityBehaviour__Array__VTable vtable;
};

struct FallBehaviour_FallState__Enum__VTable {
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

struct FallBehaviour_FallState__Enum__StaticFields {
};

struct FallBehaviour_FallState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FallBehaviour_FallState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FallBehaviour_FallState__Enum__VTable vtable;
};

struct FallBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct FallBehaviour__StaticFields {
};

struct FallBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FallBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FallBehaviour__VTable vtable;
};

struct GroundChaseBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    bool _UsePredictedOriPosition_k__BackingField;
    bool _ClampPredictedPosition_k__BackingField;
    float _TraversalSpeed_k__BackingField;
    float _NearTargetTraversalSpeed_k__BackingField;
    bool _LookAtTargetAfterArrive_k__BackingField;
    struct PlayerInsideZoneChecker *ArriveAtTargetZone;
    float TimeInsideZoneToSucceed;
    struct IEntityLocomotion *m_locomotion;
    struct ILocomotionTurningHandler *m_turningHandler;
    float m_timer;
    struct Rect m_nearTargetZone;
    float _ChasingTime_k__BackingField;
};

struct GroundChaseBehaviour {
    struct GroundChaseBehaviour__Class *klass;
    MonitorData *monitor;
    struct GroundChaseBehaviour__Fields fields;
};

struct GroundChaseBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct GroundChaseBehaviour__StaticFields {
};

struct GroundChaseBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundChaseBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundChaseBehaviour__VTable vtable;
};

struct JumpBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    float _TraversalSpeed_k__BackingField;
    float JumpHeight;
    struct MoonAnimation *JumpStart;
    struct MoonAnimation *Fall;
    int32_t AnimationPriority;
    struct Locomotion *m_locomotion;
    struct ILocomotionTurningHandler *m_turningHandler;
    struct Vector2 m_jumpVelocity;
    float m_jumpTime;
    float m_fallTime;
    bool m_continuePlayingJump;
    bool m_falling;
};

struct JumpBehaviour {
    struct JumpBehaviour__Class *klass;
    MonitorData *monitor;
    struct JumpBehaviour__Fields fields;
};

struct JumpBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct JumpBehaviour__StaticFields {
};

struct JumpBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JumpBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JumpBehaviour__VTable vtable;
};

enum class KickupBehaviour_KickupState__Enum : int32_t {
    Kickup = 0x00000000,
    Falling = 0x00000001,
    Landing = 0x00000002,
};

struct KickupBehaviour_KickupState__Enum__Boxed {
    struct KickupBehaviour_KickupState__Enum__Class *klass;
    MonitorData *monitor;
    KickupBehaviour_KickupState__Enum value;
    
};

struct KickupBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    KickupBehaviour_KickupState__Enum State;
    
    struct MoonTimeline *KickupAnimatorNew;
    struct MoonTimeline *LandingAnimatorNew;
    struct LegacyTimelineSequence *KickupAnimator;
    struct LegacyTimelineSequence *LandingAnimator;
    struct RootMotionProcessorData *RootMotion;
    struct RootMotionProcessorData *LandingRootMotion;
    struct Locomotion *m_locomotion;
    struct ILocomotionTurningHandler *m_turningHandler;
};

struct KickupBehaviour {
    struct KickupBehaviour__Class *klass;
    MonitorData *monitor;
    struct KickupBehaviour__Fields fields;
};

struct KickupBehaviour_KickupState__Enum__VTable {
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

struct KickupBehaviour_KickupState__Enum__StaticFields {
};

struct KickupBehaviour_KickupState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KickupBehaviour_KickupState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KickupBehaviour_KickupState__Enum__VTable vtable;
};

struct KickupBehaviour__VTable {
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

struct KickupBehaviour__StaticFields {
};

struct KickupBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KickupBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KickupBehaviour__VTable vtable;
};

enum class KickupDeathBehaviour_KickupState__Enum : int32_t {
    Kickup = 0x00000000,
    Falling = 0x00000001,
    Landing = 0x00000002,
};

struct KickupDeathBehaviour_KickupState__Enum__Boxed {
    struct KickupDeathBehaviour_KickupState__Enum__Class *klass;
    MonitorData *monitor;
    KickupDeathBehaviour_KickupState__Enum value;
    
};

struct KickupDeathBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    KickupDeathBehaviour_KickupState__Enum State;
    
    struct LegacyTimelineSequence *KickupAnimator;
    struct LegacyTimelineSequence *LandingAnimator;
    struct MoonTimeline *KickupAnimatorNew;
    struct MoonTimeline *LandingAnimatorNew;
    struct MoonAnimation *FallingLoop;
    struct RootMotionProcessorData *RootMotion;
    struct RootMotionProcessorData *LandingRootMotion;
    struct Locomotion *m_locomotion;
    struct ActiveAnimationHandle m_fallingAnim;
};

struct KickupDeathBehaviour {
    struct KickupDeathBehaviour__Class *klass;
    MonitorData *monitor;
    struct KickupDeathBehaviour__Fields fields;
};

struct KickupDeathBehaviour_KickupState__Enum__VTable {
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

struct KickupDeathBehaviour_KickupState__Enum__StaticFields {
};

struct KickupDeathBehaviour_KickupState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KickupDeathBehaviour_KickupState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KickupDeathBehaviour_KickupState__Enum__VTable vtable;
};

struct KickupDeathBehaviour__VTable {
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

struct KickupDeathBehaviour__StaticFields {
};

struct KickupDeathBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KickupDeathBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KickupDeathBehaviour__VTable vtable;
};

struct MovementBehaviour__Fields {
    struct MonoBehaviour__Fields _;
};

struct MovementBehaviour {
    struct MovementBehaviour__Class *klass;
    MonitorData *monitor;
    struct MovementBehaviour__Fields fields;
};

struct MovementBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MovementBehaviour__StaticFields {
};

struct MovementBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MovementBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MovementBehaviour__VTable vtable;
};

struct SplitTurnAnimationMoonTimeline__Fields {
    struct RangeAnimationEntry__Fields _;
    struct MoonTimeline *TurningAnimation;
    struct EventTriggerAnimator *FlipTrigger;
    bool FlipOnAnimationEnd;
    struct Action *OnStopEvent;
    struct CancelableAnimator *m_cancelable;
    bool m_canCancel;
    float m_lookDirection;
    struct ILocomotionTurningHandler *m_locomotion;
    bool m_isDone;
};

struct SplitTurnAnimationMoonTimeline {
    struct SplitTurnAnimationMoonTimeline__Class *klass;
    MonitorData *monitor;
    struct SplitTurnAnimationMoonTimeline__Fields fields;
};

struct SplitTurnAnimationMoonTimeline__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SplitTurnAnimationMoonTimeline__StaticFields {
};

struct SplitTurnAnimationMoonTimeline__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SplitTurnAnimationMoonTimeline__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SplitTurnAnimationMoonTimeline__VTable vtable;
};

struct SplitTurnAnimationMoonTimeline_c {
    struct SplitTurnAnimationMoonTimeline_c__Class *klass;
    MonitorData *monitor;
};

struct SplitTurnAnimationMoonTimeline_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SplitTurnAnimationMoonTimeline_c__StaticFields {
    struct SplitTurnAnimationMoonTimeline_c *__9;
    struct Action *__9__22_0;
};

struct SplitTurnAnimationMoonTimeline_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SplitTurnAnimationMoonTimeline_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SplitTurnAnimationMoonTimeline_c__VTable vtable;
};

struct StunnBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct ClipAnimation *StunnAnimation;
    struct SoundProvider *SoundProvider;
    bool ResetHorizontalSpeed;
    int32_t AnimationPriority;
    bool FaceTarget;
    struct RootMotionProcessorData *RootMotion;
    struct Locomotion *m_locomotion;
    struct ILocomotionTurningHandler *m_turninghandler;
    struct ActiveAnimationHandle m_animationState;
};

struct StunnBehaviour {
    struct StunnBehaviour__Class *klass;
    MonitorData *monitor;
    struct StunnBehaviour__Fields fields;
};

struct StaggerBehaviour__Fields {
    struct StunnBehaviour__Fields _;
};

struct StaggerBehaviour {
    struct StaggerBehaviour__Class *klass;
    MonitorData *monitor;
    struct StaggerBehaviour__Fields fields;
};

struct StunnBehaviour__VTable {
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

}
