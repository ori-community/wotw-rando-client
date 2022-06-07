namespace app {
struct SpiderBatDeathReaction {
    struct SpiderBatDeathReaction__Class *klass;
    MonitorData *monitor;
    struct SpiderBatDeathReaction__Fields fields;
};

struct SpiderBatDeathReaction__VTable {
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

struct SpiderBatDeathReaction__StaticFields {
};

struct SpiderBatDeathReaction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatDeathReaction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatDeathReaction__VTable vtable;
};

struct SpiderBatDeathReaction_c {
    struct SpiderBatDeathReaction_c__Class *klass;
    MonitorData *monitor;
};

struct SpiderBatDeathReaction_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiderBatDeathReaction_c__StaticFields {
    struct SpiderBatDeathReaction_c *__9;
    struct Action *__9__11_0;
};

struct SpiderBatDeathReaction_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatDeathReaction_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatDeathReaction_c__VTable vtable;
};

enum class SpiderBatEntity_ClimbBehaviourType__Enum : int32_t {
    UpDown = 0x00000000,
    DownOnly = 0x00000001,
    None = 0x00000002,
};

struct SpiderBatEntity_ClimbBehaviourType__Enum__Boxed {
    struct SpiderBatEntity_ClimbBehaviourType__Enum__Class *klass;
    MonitorData *monitor;
    SpiderBatEntity_ClimbBehaviourType__Enum value;
    
};

struct SpiderBatEntity__Fields {
    struct EnemyEntity__Fields _;
    float LightKnockBackForce;
    float MediumKnockBackForce;
    float HeavyKnockBackForce;
    float HeavyStunDuration;
    struct Rigidbody *RigidbodyRopeClimber;
    float RotationSpring;
    float RotationDampening;
    struct MoonTimeline *RestingTimelineSequence;
    struct AnimationCurve *ClimbSpeedCurve;
    struct Transform *WebRopeConnectPoint;
    struct Transform *RotationTransform;
    struct GameObject *BaseModel;
    struct GameObject *AcidModel;
    SpiderBatEntity_ClimbBehaviourType__Enum ClimbType;
    
    bool m_isAttacking;
    bool AllowClimb;
    int32_t AttacksSinceClimbedUp;
    int32_t AttackToClimb;
    bool ClimbUpDirection;
    struct Rope *m_ropeToAttachTo;
    float m_ropeTotalLength;
    struct LineRenderer *m_ropeLineRenderer;
    struct Rigidbody *m_rigidbody;
    struct Rigidbody *m_ropeClimberRigidbody;
    int32_t m_ropeLinkIndex;
    float m_ropeLinkOffset;
    struct SpiderBatPlatformMovement *m_spiderBatPlatformMovement;
    struct SpiderBatLocomotion *m_spiderBatLocomotion;
    struct Action_1_Damage_ *m_receivedDamageEvent;
    float m_stunnedTimer;
    bool m_isAggro;
    struct ReactionFallingBehaviour *m_falling;
    struct BehaviourNode *SpitNode;
    struct BehaviourNode *MultiShotNode;
    struct BehaviourNode *SprayNode;
    struct BehaviourNode *MixedNode;
    struct BehaviourNode *AcidNode;
    bool SpawnReady;
    struct ConfigurableJoint *m_generatedConfigurableJoint;
};

struct SpiderBatEntity {
    struct SpiderBatEntity__Class *klass;
    MonitorData *monitor;
    struct SpiderBatEntity__Fields fields;
};

struct Rope__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 LineRendererEndOffset;
    struct Vector2 LineRendererStartOffset;
    bool IsManagedByPhysicsSystemManager;
    float RopeWidth;
    float LinkDensity;
    struct RopePhysicsSettings *PhysicsSettings;
    struct List_1_UnityEngine_Transform_ *Links;
    bool FreeRotationAtTheStart;
    struct LineRenderer *m_lineRenderer;
    bool UseNewTypeJoint;
    struct AttachJointSettings *NewTypeJointSettings;
    struct Vector3 _OffsetBetweenLinks_k__BackingField;
    float _EffectiveLinkDensity_k__BackingField;
    struct Rope_LinkData__Array *m_linkData;
    bool m_isInitialised;
    bool m_updateLineRendererInPlayMode;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct Rope {
    struct Rope__Class *klass;
    MonitorData *monitor;
    struct Rope__Fields fields;
};

struct __declspec(align(8)) RopePhysicsSettings__Fields {
    float AngularSpringDamping;
    float AngularSpringStiffness;
    float LengthSpringDamping;
    float LengthSpringStiffness;
    float AngularMotorDamping;
    float AngularMotorStiffness;
    float LinkDrag;
    float LinkMass;
    int32_t PhysicsIterationCount;
};

struct RopePhysicsSettings {
    struct RopePhysicsSettings__Class *klass;
    MonitorData *monitor;
    struct RopePhysicsSettings__Fields fields;
};

struct __declspec(align(8)) AttachJointSettings__Fields {
    bool lockRotation;
    bool lockPosition;
    bool lockHorizontalMovement;
    float hingeAngleLimit;
    float hingeSpring;
    float hingeDamper;
    float positionSpring;
    float positionDamper;
    float positionLimit;
    float massScale;
    bool useAngularDrive;
    float angularDriveSpring;
    float angularDriveDamper;
    bool UseHingeSpring;
    float HingeSpringSpring;
    float HingeSpringDamper;
};

struct AttachJointSettings {
    struct AttachJointSettings__Class *klass;
    MonitorData *monitor;
    struct AttachJointSettings__Fields fields;
};

struct Rope_LinkData {
    struct Vector3 AngularVelocity;
    struct Vector3 Position;
    struct Rigidbody *Rigidbody;
    struct Quaternion Rotation;
    struct Transform *Transform;
    struct Vector3 Velocity;
    struct Vector3 OriginalPosition;
};

struct Rope_LinkData__Boxed {
    struct Rope_LinkData__Class *klass;
    MonitorData *monitor;
    struct Rope_LinkData fields;
};

struct Rope_LinkData__Array {
    struct Rope_LinkData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Rope_LinkData vector[32];
};

struct IPhysicsAttachable {
    struct IPhysicsAttachable__Class *klass;
    MonitorData *monitor;
};

struct SpiderBatPlatformMovement__Fields {
    struct EnemyPlatformMovement__Fields _;
    bool m_suspended;
    bool m_isDeathFalling;
    struct Vector3 m_velocityBeforeSuspension;
    struct Vector3 m_angularVelocityBeforeSuspension;
};

struct SpiderBatPlatformMovement {
    struct SpiderBatPlatformMovement__Class *klass;
    MonitorData *monitor;
    struct SpiderBatPlatformMovement__Fields fields;
};

struct SpiderBatLocomotion__Fields {
    struct AirEntityLocomotion__Fields _;
    struct MoonTimeline *RestingIdleTimeline;
    struct MoonTimeline *AttackingIdleTimeline;
    struct LocomotionIdleBehaviour *LocomotionIdleBehaviourRef;
};

struct SpiderBatLocomotion {
    struct SpiderBatLocomotion__Class *klass;
    MonitorData *monitor;
    struct SpiderBatLocomotion__Fields fields;
};

struct SpiderBatEntity_ClimbBehaviourType__Enum__VTable {
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

struct SpiderBatEntity_ClimbBehaviourType__Enum__StaticFields {
};

struct SpiderBatEntity_ClimbBehaviourType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatEntity_ClimbBehaviourType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatEntity_ClimbBehaviourType__Enum__VTable vtable;
};

struct RopePhysicsSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RopePhysicsSettings__StaticFields {
};

struct RopePhysicsSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RopePhysicsSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RopePhysicsSettings__VTable vtable;
};

struct AttachJointSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AttachJointSettings__StaticFields {
};

struct AttachJointSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachJointSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachJointSettings__VTable vtable;
};

struct Rope_LinkData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Rope_LinkData__StaticFields {
};

struct Rope_LinkData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Rope_LinkData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Rope_LinkData__VTable vtable;
};

struct Rope_LinkData__Array__VTable {
};

struct Rope_LinkData__Array__StaticFields {
};

struct Rope_LinkData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Rope_LinkData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Rope_LinkData__Array__VTable vtable;
};

struct IPhysicsAttachable__VTable {
    VirtualInvokeData GetRigidbody;
    VirtualInvokeData Attach;
    VirtualInvokeData WasAttached;
    VirtualInvokeData AttachedBodyEnabled;
};

struct IPhysicsAttachable__StaticFields {
};

struct IPhysicsAttachable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPhysicsAttachable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPhysicsAttachable__VTable vtable;
};

struct Rope__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData GetRigidbody;
    VirtualInvokeData Attach;
    VirtualInvokeData WasAttached;
    VirtualInvokeData AttachedBodyEnabled;
};

struct Rope__StaticFields {
    struct Color ROPE_END_LINK_COLOR;
    struct Color ROPE_INTERMEDIATE_LINK_COLOR;
};

struct Rope__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Rope__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Rope__VTable vtable;
};

struct SpiderBatPlatformMovement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsOnGround;
    VirtualInvokeData get_HasWallLeft;
    VirtualInvokeData get_HasWallRight;
    VirtualInvokeData get_IsOnWall;
    VirtualInvokeData get_MovingHorizontally;
    VirtualInvokeData get_Jumping;
    VirtualInvokeData get_LocalSpeed;
    VirtualInvokeData set_LocalSpeed;
    VirtualInvokeData get_WorldSpeed;
    VirtualInvokeData set_WorldSpeed;
    VirtualInvokeData get_GravityAngle;
    VirtualInvokeData set_GravityAngle;
    VirtualInvokeData get_GroundAngle;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_FeetPosition;
    VirtualInvokeData set_FeetPosition;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_GoThroughPlatformTestingRayLeft;
    VirtualInvokeData get_GoThroughPlatformTestingRayRight;
    VirtualInvokeData GoThroughPlatformTestingRayLeftRight;
    VirtualInvokeData get_GoThroughPlatformTesterCollider;
    VirtualInvokeData get_GoThroughPlatformTestingRayRadius;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_OnGroundSpeedTreshold;
    VirtualInvokeData get_IsOnGround_1;
    VirtualInvokeData get_IsGroundHurting;
    VirtualInvokeData get_LocalSpeed_1;
    VirtualInvokeData set_LocalSpeed_1;
    VirtualInvokeData get_LocalSpeedX;
    VirtualInvokeData set_LocalSpeedX;
    VirtualInvokeData get_LocalSpeedY;
    VirtualInvokeData set_LocalSpeedY;
    VirtualInvokeData get_WorldSpeed_1;
    VirtualInvokeData set_WorldSpeed_1;
    VirtualInvokeData get_Position_1;
    VirtualInvokeData set_Position_1;
    VirtualInvokeData get_IsAllowedNonZeroZPosition;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData WorldToLocal;
    VirtualInvokeData LocalToWorld;
    VirtualInvokeData OnAwake;
    VirtualInvokeData OnPrewarm;
    VirtualInvokeData OnCacheNonSerializedComponents;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnDisable;
    VirtualInvokeData PlaceOnGround;
    VirtualInvokeData get_StickToMovingPlatform;
    VirtualInvokeData Move;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData ScheduleJobs;
    VirtualInvokeData CompleteUpdate;
    VirtualInvokeData CalculatePositionDelta;
    VirtualInvokeData get_FeetRayPosition;
    VirtualInvokeData get_HeadRayPosition;
};

struct SpiderBatPlatformMovement__StaticFields {
};

struct SpiderBatPlatformMovement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatPlatformMovement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatPlatformMovement__VTable vtable;
};

struct SpiderBatLocomotion__VTable {
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

struct SpiderBatLocomotion__StaticFields {
};

struct SpiderBatLocomotion__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatLocomotion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatLocomotion__VTable vtable;
};

struct SpiderBatEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
    VirtualInvokeData GetHitStopAutoSuspendables;
    VirtualInvokeData OnHitStopStart;
    VirtualInvokeData OnHitStopEnd;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_BehaviourTree;
    VirtualInvokeData ResolveDamage;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData ShouldKillBubble;
    VirtualInvokeData CreateTimelineParentEntity;
    VirtualInvokeData get_AddChildren;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData get_ExternalID;
    VirtualInvokeData get_TrackTranformChangesForRecording;
    VirtualInvokeData get_TrackingExclusions;
    VirtualInvokeData get_ParsingGroup;
    VirtualInvokeData get_CameraTargetActive;
    VirtualInvokeData get_CameraTargetPosition;
    VirtualInvokeData get_CameraTargetPadding;
    VirtualInvokeData get_CameraInfluencePosition;
    VirtualInvokeData AdjustCameraTargetWeight;
    VirtualInvokeData get_CameraInfluenceMinDist;
    VirtualInvokeData get_CameraInfluenceMaxDist;
    VirtualInvokeData get_CameraZoomFactor;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData GetTargetData;
    VirtualInvokeData IPortalVisitor_get_Position;
    VirtualInvokeData IPortalVisitor_set_Position;
    VirtualInvokeData IPortalVisitor_get_Speed;
    VirtualInvokeData IPortalVisitor_set_Speed;
    VirtualInvokeData OnGoThroughPortal;
    VirtualInvokeData OnPortalOverlapEnter;
    VirtualInvokeData OnPortalOverlapExit;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
    VirtualInvokeData get_IsFacingTarget;
    VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
    VirtualInvokeData get_ScreenPadding;
    VirtualInvokeData IsBehaviourTreePaused;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnAwake;
    VirtualInvokeData GetBehaviourTree;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData UnserializedInitialization;
    VirtualInvokeData Start;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
    VirtualInvokeData OnSuspendedStay;
    VirtualInvokeData OnUpdate_2;
    VirtualInvokeData EnterSpawningState;
    VirtualInvokeData UpdateSpawningState;
    VirtualInvokeData ExitSpawningState;
    VirtualInvokeData EnterDecisionMakingState;
    VirtualInvokeData UpdateDecisionMakingState;
    VirtualInvokeData ExitDecisionMakingState;
    VirtualInvokeData EnterReactionState;
    VirtualInvokeData UpdateReactionState;
    VirtualInvokeData ExitReactionState;
    VirtualInvokeData EnterCinematicState;
    VirtualInvokeData UpdateCinematicState;
    VirtualInvokeData ExitCinematicState;
    VirtualInvokeData GetActiveLocomotion;
    VirtualInvokeData OnContactDamageDealt;
    VirtualInvokeData OnHandleFireDamage;
    VirtualInvokeData OnHandleIceDamage;
    VirtualInvokeData OnDamageReceived;
    VirtualInvokeData OnDamageBlocked;
    VirtualInvokeData DeactivateDamageReceivers;
    VirtualInvokeData InstantKill;
    VirtualInvokeData OnDied;
    VirtualInvokeData SpawnOrbs;
    VirtualInvokeData OnDiedOutOfBounds;
    VirtualInvokeData OnEndDeathBehaviour;
    VirtualInvokeData OnPostRestoreCheckpoint;
    VirtualInvokeData ResetEntity;
    VirtualInvokeData GetHitStopAutoSuspendables_1;
    VirtualInvokeData OnHitStopStart_1;
    VirtualInvokeData OnHitStopEnd_1;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData IsFacingPoint;
    VirtualInvokeData ResolveDamage_1;
    VirtualInvokeData get_CameraTargetActive_1;
    VirtualInvokeData get_CameraTargetPosition_1;
    VirtualInvokeData get_CameraTargetPadding_1;
    VirtualInvokeData get_CameraInfluenceMinDist_1;
    VirtualInvokeData get_CameraInfluenceMaxDist_1;
    VirtualInvokeData get_CameraZoomFactor_1;
    VirtualInvokeData get_TargetType_1;
    VirtualInvokeData AdjustCameraTargetWeight_1;
    VirtualInvokeData get_IsAggroed;
    VirtualInvokeData get_CanAttackTokenBeStolen;
    VirtualInvokeData OnAttackTokenStolen;
    VirtualInvokeData get_UsesHealthbar;
    VirtualInvokeData get_ShouldApplySpawnPopFix;
    VirtualInvokeData get_IsFlyingEnemy;
    VirtualInvokeData get_UseDeathLoopTimeLimit;
    VirtualInvokeData get_CanAttackTokenBeStolen_1;
    VirtualInvokeData get_AutoResetSpotOriBool;
    VirtualInvokeData TryGetPlatformMovement;
    VirtualInvokeData ModifyKickbackForce;
};

struct SpiderBatEntity__StaticFields {
};

struct SpiderBatEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatEntity__VTable vtable;
};

enum class SpiderBatEntity_AttackSet__Enum : int32_t {
    SpitOnly = 0x00000000,
    SprayOnly = 0x00000001,
    MultishotOnly = 0x00000002,
    Mixed = 0x00000003,
    Acid = 0x00000004,
};

struct SpiderBatEntity_AttackSet__Enum__Boxed {
    struct SpiderBatEntity_AttackSet__Enum__Class *klass;
    MonitorData *monitor;
    SpiderBatEntity_AttackSet__Enum value;
    
};

struct SpiderBatEntity_AttackSet__Enum__VTable {
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

struct SpiderBatEntity_AttackSet__Enum__StaticFields {
};

struct SpiderBatEntity_AttackSet__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatEntity_AttackSet__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatEntity_AttackSet__Enum__VTable vtable;
};

enum class SpiderBatEntity_ModelVariation__Enum : int32_t {
    Base = 0x00000000,
    Acid = 0x00000001,
};

struct SpiderBatEntity_ModelVariation__Enum__Boxed {
    struct SpiderBatEntity_ModelVariation__Enum__Class *klass;
    MonitorData *monitor;
    SpiderBatEntity_ModelVariation__Enum value;
    
};

struct SpiderBatEntity_ModelVariation__Enum__VTable {
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

struct SpiderBatEntity_ModelVariation__Enum__StaticFields {
};

struct SpiderBatEntity_ModelVariation__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatEntity_ModelVariation__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatEntity_ModelVariation__Enum__VTable vtable;
};

struct SpiderBatEntity_c {
    struct SpiderBatEntity_c__Class *klass;
    MonitorData *monitor;
};

struct SpiderBatEntity_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiderBatEntity_c__StaticFields {
    struct SpiderBatEntity_c *__9;
    struct Action_1_Damage_ *__9__72_0;
};

struct SpiderBatEntity_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatEntity_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatEntity_c__VTable vtable;
};

struct SpiderBatEntityReactions__Fields {
    struct GroundEntityReactions__Fields _;
    struct SpiderBatEntityReactions_UninterruptableTimelineVars__Array *UninterruptableTimelines;
};

struct SpiderBatEntityReactions {
    struct SpiderBatEntityReactions__Class *klass;
    MonitorData *monitor;
    struct SpiderBatEntityReactions__Fields fields;
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars {
    struct MoonTimeline *Timeline;
    float DurationTillInterruptable;
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars__Boxed {
    struct SpiderBatEntityReactions_UninterruptableTimelineVars__Class *klass;
    MonitorData *monitor;
    struct SpiderBatEntityReactions_UninterruptableTimelineVars fields;
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars__Array {
    struct SpiderBatEntityReactions_UninterruptableTimelineVars__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SpiderBatEntityReactions_UninterruptableTimelineVars vector[32];
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars__StaticFields {
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatEntityReactions_UninterruptableTimelineVars__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatEntityReactions_UninterruptableTimelineVars__VTable vtable;
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars__Array__VTable {
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars__Array__StaticFields {
};

struct SpiderBatEntityReactions_UninterruptableTimelineVars__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatEntityReactions_UninterruptableTimelineVars__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatEntityReactions_UninterruptableTimelineVars__Array__VTable vtable;
};

struct SpiderBatEntityReactions__VTable {
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

struct SpiderBatEntityReactions__StaticFields {
};

struct SpiderBatEntityReactions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiderBatEntityReactions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiderBatEntityReactions__VTable vtable;
};

struct EntityReactionBehaviour_1_SpiderBatEntity___Fields {
    struct EntityReactionBehaviour__Fields _;
};

struct EntityReactionBehaviour_1_SpiderBatEntity_ {
    struct EntityReactionBehaviour_1_SpiderBatEntity___Class *klass;
    MonitorData *monitor;
    struct EntityReactionBehaviour_1_SpiderBatEntity___Fields fields;
};

struct EntityHitReactionBehaviour_1_SpiderBatEntity___Fields {
    struct EntityReactionBehaviour_1_SpiderBatEntity___Fields _;
    struct List_1_DamageType_ *DamageTypePreventingInterruption;
    struct List_1_DamageWeight_ *DamageWeightPreventingInterruption;
    struct HashSet_1_DamageType_ *m_damageTypePreventingInterruption;
    struct HashSet_1_DamageWeight_ *m_damageWeightPreventingInterruption;
    bool _HasLocomotion_k__BackingField;
    struct CharacterPlatformMovement *m_platformMovement;
    EntityWeightData_EntityWeight__Enum m_weight;
    
    struct HitReactionSettings *m_kickbackSettings;
};

struct EntityHitReactionBehaviour_1_SpiderBatEntity_ {
    struct EntityHitReactionBehaviour_1_SpiderBatEntity___Class *klass;
    MonitorData *monitor;
    struct EntityHitReactionBehaviour_1_SpiderBatEntity___Fields fields;
};

struct SpiderBatHitReaction__Fields {
    struct EntityHitReactionBehaviour_1_SpiderBatEntity___Fields _;
    struct MoonTimeline *IdleTimeline;
    struct MoonTimeline *HitForwardTimeline;
    struct MoonTimeline *HitBackwardTimeline;
    struct MoonTimeline *HitAdditiveTimeline;
    struct Event_1 *OnAnyHitEvent;
    struct MoonTimeline *m_currentTimeline;
    bool m_exitEarly;
    struct EntityDamageEvent *_DamageEvent_k__BackingField;
};

struct SpiderBatHitReaction {
    struct SpiderBatHitReaction__Class *klass;
    MonitorData *monitor;
    struct SpiderBatHitReaction__Fields fields;
};

struct EntityReactionBehaviour_1_SpiderBatEntity___VTable {
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

}
