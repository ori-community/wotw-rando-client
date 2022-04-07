namespace app {
struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
  struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
};
struct __declspec(align(8)) List_1_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
  struct EntityLocomotionTask__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct List_1_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
};
struct EntityLocomotionTask__Fields {
  struct EntityTask__Fields _;
  int32_t m_FSMStateID;
  struct Locomotion * m_parentLocomotion;
};
struct EntityLocomotionTask {
  struct EntityLocomotionTask__Class *klass;
  struct MonitorData *monitor;
  struct EntityLocomotionTask__Fields fields;
};
struct EntityLocomotionTask__Array {
  struct EntityLocomotionTask__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityLocomotionTask * vector[32];
};
enum EntityOwnedInitOrder__Enum : int32_t {
  EntityOwnedInitOrder__Enum_Default = 0,
  EntityOwnedInitOrder__Enum_EntityTasks = 1,
  EntityOwnedInitOrder__Enum_LocomotionManagers = 2,
  EntityOwnedInitOrder__Enum_ReactionManagers = 3,
};
struct EntityOwnedInitOrder__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EntityOwnedInitOrder__Enum value;
};
struct FrogLocomotionIdleBehaviour__Fields {
  struct EntityLocomotionTask__Fields _;
  struct MoonTimeline * IdleTimeline;
  struct MoonTimeline * IdleEyecandyTimeline;
  int32_t PlayEyeCandyEveryIdleCount;
  int32_t m_idleCount;
  struct MoonTimeline * m_currentTimeline;
};
struct FrogLocomotionIdleBehaviour {
  struct FrogLocomotionIdleBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct FrogLocomotionIdleBehaviour__Fields fields;
};
struct IEnumerator_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct IEnumerator_1_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct EntityLocomotionTask * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
  struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
  struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Fields fields;
};
struct ICollection_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct ICollection_1_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct Type * key;
  struct EntityLocomotionTask * value;
};
struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Boxed {
  struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ fields;
};
struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array {
  struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
  struct IEnumerable_1_Moon_BehaviourSystem_EntityLocomotionTask___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_RootMotionProcessor___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_RootMotionProcessor_ {
  struct Dictionary_2_System_Int32_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_RootMotionProcessor___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct RootMotionProcessor * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_RootMotionProcessor_ vector[32];
};
struct __declspec(align(8)) RootMotionProcessor__Fields {
  struct RootMotionProcessorData * m_currentConfigData;
  struct CharacterPlatformMovement * m_platformMovement;
  struct MoonAnimator * m_animator;
  float m_gravity;
  struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ * m_motionModifier;
};
struct RootMotionProcessor {
  struct RootMotionProcessor__Class *klass;
  struct MonitorData *monitor;
  struct RootMotionProcessor__Fields fields;
};
struct __declspec(align(8)) RootMotionProcessorData__Fields {
  bool UseRootMotionX;
  bool UseRootMotionY;
  bool DisableGravity;
  bool Additive;
  float Multiplier;
  bool UsePerAxisMultiplier;
  struct Vector2 AxisMultiplier;
  bool WorldSpace;
  float lerpSpeed;
};
struct RootMotionProcessorData {
  struct RootMotionProcessorData__Class *klass;
  struct MonitorData *monitor;
  struct RootMotionProcessorData__Fields fields;
};
struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ {
  struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor___Fields {
  struct Dictionary_2_System_Int32_RootMotionProcessor_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RootMotionProcessor___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor___Fields {
  struct Dictionary_2_System_Int32_RootMotionProcessor_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RootMotionProcessor___Fields fields;
};
struct RootMotionProcessor__Array {
  struct RootMotionProcessor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RootMotionProcessor * vector[32];
};
struct IEnumerator_1_RootMotionProcessor_ {
  struct IEnumerator_1_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_RootMotionProcessor_ {
  struct ICollection_1_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_RootMotionProcessor_ {
  int32_t key;
  struct RootMotionProcessor * value;
};
struct KeyValuePair_2_System_Int32_RootMotionProcessor___Boxed {
  struct KeyValuePair_2_System_Int32_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_RootMotionProcessor_ fields;
};
struct KeyValuePair_2_System_Int32_RootMotionProcessor___Array {
  struct KeyValuePair_2_System_Int32_RootMotionProcessor___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_RootMotionProcessor_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_RootMotionProcessor_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_RootMotionProcessor_ {
  struct IEnumerable_1_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Queue_1_RootMotionProcessor___Fields {
  struct RootMotionProcessor__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_RootMotionProcessor_ {
  struct Queue_1_RootMotionProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_RootMotionProcessor___Fields fields;
};
struct EntityBehaviourNode__Fields {
  struct BehaviourNode__Fields _;
  struct Entity * m_entity;
};
struct EntityBehaviourNode {
  struct EntityBehaviourNode__Class *klass;
  struct MonitorData *monitor;
  struct EntityBehaviourNode__Fields fields;
};
struct TimelineBehaviourNew__Fields {
  struct EntityBehaviourNode__Fields _;
  struct MoonTimeline * Timeline;
  enum BehaviourStatus__Enum m_statusWhenPlaying;
  struct CancelableAnimator * m_cancelable;
  bool shouldBlockWhileTimelineRunning;
  bool StopLocomotionOnEnter;
  bool shouldPauseLocomotion;
  bool canCancel;
};
struct TimelineBehaviourNew {
  struct TimelineBehaviourNew__Class *klass;
  struct MonitorData *monitor;
  struct TimelineBehaviourNew__Fields fields;
};
struct CancelableAnimator__Fields {
  struct EventTriggerAnimator__Fields _;
};
struct CancelableAnimator {
  struct CancelableAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CancelableAnimator__Fields fields;
};
enum WaterfallIntersectionMode__Enum : int32_t {
  WaterfallIntersectionMode__Enum_Bounds = 0,
  WaterfallIntersectionMode__Enum_Raycast = 1,
};
struct WaterfallIntersectionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WaterfallIntersectionMode__Enum value;
};
struct GroundEntityLocomotion__Fields {
  struct Locomotion__Fields _;
  float MinimumFallDistance;
  float TargetPositionGroundSnapDistance;
  bool AdjustLookDirectionToGroundAngle;
  struct GroundEntityMovementProcessor * m_groundMovement;
  struct BaseLocomotionTurningBehaviour * TurningBehaviour;
  struct EntityLocomotionTask * IdleBehaviour;
  bool StopWalkingWhenNearLedge;
  struct LocomotionGroundMoveBehaviour * m_movementBehaviour;
  struct LocomotionGroundMoveTimelineBehaviour * m_timelineMovementBehaviour;
  struct Nullable_1_Single_ m_registeredLookDirection;
  bool m_lookDirectionLocked;
  float m_timeTargetIsOnTheSameArea;
  struct EntityFallEvent * m_fallEventCache;
  enum EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
  int32_t m_requestId;
  int32_t m_standingOnLedgeReqIds;
  int32_t m_standingOnLedgeReqIds2;
  int32_t m_requestIdForward;
  int32_t m_requestIdBackward;
  int32_t m_groundPositionReqId;
};
struct GroundEntityLocomotion {
  struct GroundEntityLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct GroundEntityLocomotion__Fields fields;
};
struct __declspec(align(8)) MovementProcessor__Fields {
  struct Vector2 m_targetVelocity;
  bool _AllowFreeRotation_k__BackingField;
};
struct MovementProcessor {
  struct MovementProcessor__Class *klass;
  struct MonitorData *monitor;
  struct MovementProcessor__Fields fields;
};
struct EntityWeightData_EntityWeightSettings {
  float Gravity;
  float MaxFallSpeed;
  float GroundAcceleration;
  float AirAcceleration;
  float Deceleration;
  float AirDrag;
  float KickbackMultiplier;
  float KnockupMultiplier;
  float KickbackInputMultiplier;
  struct Vector2 KickbackInputForceClamp;
  float AirHorizontalKnockbackMultiplier;
  float AirComboPullInValue;
  float AirComboPullInDistanceX;
  float AirComboPullInDistanceY;
  float MinForceWhenJuggling;
  float GroundHorizontalKnockbackMultiplier;
  float KickbackBounceOffGroundMultiplier;
  float KnockupMax;
  float KickbackMax;
  float BashForceMultiplier;
  float DeathKickbackMinBoost;
  float DeathKickbackMinMagnitude;
  float DeathKickbackMinUpDirection;
  float DeathKickbackClampMaxMagnitude;
  float DeathOffGroundBounceMultiplier;
  float BashKickbackMultiplier;
  float DrowningDecelerationTime;
  struct AnimationCurve * DrowningDecelerationCurve;
  float InitialMaxDrowningSpeedPerAxis;
  float InitialSpeedMultiplier;
  float TargetDrowningSpeed;
};
struct EntityWeightData_EntityWeightSettings__Boxed {
  struct EntityWeightData_EntityWeightSettings__Class *klass;
  struct MonitorData *monitor;
  struct EntityWeightData_EntityWeightSettings fields;
};
struct GroundEntityMovementProcessor__Fields {
  struct MovementProcessor__Fields _;
  float RotationSpeed;
  float RotationLimit;
  float TargetAirRotation;
  float LedgeDetectionDistance;
  float LedgeDetectionOffsetY;
  float LedgeRayDistance;
  struct Transform * FeetTransform;
  struct LayerMask GroundMask;
  bool m_stickToSurfaces;
  bool AllowStickToSurfaceOnlyWhenLocomotionIsActive;
  float NormalRaysSeparation;
  float MaxSurfaceDistance;
  bool ShouldUpdateRotation;
  bool ShouldUpdateRotationInAir;
  float MinFallTimeToAirDrag;
  bool DebugOn;
  struct LayerMask GroundAndKillMask;
  struct LayerMask KillMask;
  int32_t m_gravityDisableCounter;
  struct Entity * m_entity;
  struct CharacterPlatformMovement * m_platformMovement;
  struct ILocomotionTurningHandler * m_turningHandler;
  struct Vector3 m_initFeetOffset;
  struct Transform * m_rotationTransform;
  struct Vector2 m_surfaceAverageNormal;
  struct Rigidbody * m_rigidbody;
  struct Vector3 m_lastPosition;
  struct EntityWeightData_EntityWeightSettings WeightSettings;
  enum EntityWeightData_EntityWeight__Enum m_entityWeight;
  int32_t m_continueForwardReqId;
  int32_t m_continueBackReqId;
  int32_t m_surfaceNormalsReqId;
  struct RaycastCommand__Array * m_cmds;
  struct RaycastHit__Array * m_hits;
  struct Boolean__Array * m_hitResults;
  int32_t m_willBeNearLedgeReqId;
};
struct GroundEntityMovementProcessor {
  struct GroundEntityMovementProcessor__Class *klass;
  struct MonitorData *monitor;
  struct GroundEntityMovementProcessor__Fields fields;
};
struct ILocomotionTurningHandler {
  struct ILocomotionTurningHandler__Class *klass;
  struct MonitorData *monitor;
};
struct BaseLocomotionTurningBehaviour__Fields {
  struct EntityLocomotionTask__Fields _;
  float _TargetLookDirectionX_k__BackingField;
  struct ILocomotionTurningHandler * m_turningHandler;
  struct Locomotion * m_locomotion;
};
struct BaseLocomotionTurningBehaviour {
  struct BaseLocomotionTurningBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct BaseLocomotionTurningBehaviour__Fields fields;
};
struct LocomotionTurningBehaviour__Fields {
  struct BaseLocomotionTurningBehaviour__Fields _;
  bool GreyboxTurn;
  float GreyboxTurnDuration;
  struct SplitTurnAnimation__Array * MirrorAnimations;
  struct SplitTurnAnimation * m_currentTurnAnimation;
  float m_greyboxTurnProgress;
};
struct LocomotionTurningBehaviour {
  struct LocomotionTurningBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct LocomotionTurningBehaviour__Fields fields;
};
struct __declspec(align(8)) RangeAnimationEntry__Fields {
  int32_t Priority;
  float BaseMinSpeed;
  float BaseMaxSpeed;
  float ActivationRangeMin;
  float ActivationRangeMax;
  float AnimationSpeed;
  struct RootMotionProcessorData * RootMotion;
};
struct RangeAnimationEntry {
  struct RangeAnimationEntry__Class *klass;
  struct MonitorData *monitor;
  struct RangeAnimationEntry__Fields fields;
};
enum SplitTurnAnimation_State__Enum : int32_t {
  SplitTurnAnimation_State__Enum_FirstHalf = 0,
  SplitTurnAnimation_State__Enum_SecondHalf = 1,
};
struct SplitTurnAnimation_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SplitTurnAnimation_State__Enum value;
};
struct SplitTurnAnimation__Fields {
  struct RangeAnimationEntry__Fields _;
  struct MoonTimeline * turningStartNew;
  struct MoonTimeline * turningEndNew;
  struct LegacyTimelineSequence * turningStart;
  struct LegacyTimelineSequence * turningEnd;
  float m_lookDirection;
  enum SplitTurnAnimation_State__Enum m_state;
  struct ILocomotionTurningHandler * m_locomotion;
  bool m_isDone;
};
struct SplitTurnAnimation {
  struct SplitTurnAnimation__Class *klass;
  struct MonitorData *monitor;
  struct SplitTurnAnimation__Fields fields;
};
struct SplitTurnAnimation__Array {
  struct SplitTurnAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SplitTurnAnimation * vector[32];
};
struct LocomotionGroundMoveBehaviour__Fields {
  struct EntityLocomotionTask__Fields _;
  struct Vector3 _TargetPosition_k__BackingField;
  float ArrivalDistance;
  float SlowDownDistance;
  struct LocomotionAnimation__Array * MovementEntries;
  struct LocomotionAnimation__Array * BackwardMovementEntries;
  float MinSpeed;
  float GreyboxMaxSpeed;
  bool GreyboxMovementOn;
  bool AutoTurn;
  bool CanMoveBackwards;
  float m_arrivalDistance;
  float m_slowDownDistance;
  struct LocomotionAnimation * m_currentAnimation;
  struct GroundEntityLocomotion * m_locomotion;
  struct ActiveAnimationHandle m_activeAnimation;
  struct Vector3 m_lastSearchedTargetPosition;
  float m_previousTraversalSpeed;
  bool m_arrivedAtTarget;
  bool m_isMovingBackwards;
  bool m_canReachTarget;
  int32_t m_canReachTargetFrameUpdated;
  bool StopChasingIntoLedgesAndSpikes;
  int32_t m_requestIdForward;
  int32_t m_requestIdBackward;
};
struct LocomotionGroundMoveBehaviour {
  struct LocomotionGroundMoveBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct LocomotionGroundMoveBehaviour__Fields fields;
};
struct LocomotionAnimation__Fields {
  struct RangeAnimationEntry__Fields _;
  struct MoonAnimation * ClipAnimation;
  float Distance;
};
struct LocomotionAnimation {
  struct LocomotionAnimation__Class *klass;
  struct MonitorData *monitor;
  struct LocomotionAnimation__Fields fields;
};
struct LocomotionAnimation__Array {
  struct LocomotionAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LocomotionAnimation * vector[32];
};
struct LocomotionGroundMoveTimelineBehaviour__Fields {
  struct LocomotionGroundMoveBehaviour__Fields _;
  struct LocomotionTimelineAnimation__Array * TimelineMovementEntries;
  struct LocomotionTimelineAnimation__Array * TimelineBackwardMovementEntries;
  struct LocomotionTimelineAnimation * m_currentTimelineAnimation;
  bool m_isTimelinePlaybackPaused;
};
struct LocomotionGroundMoveTimelineBehaviour {
  struct LocomotionGroundMoveTimelineBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct LocomotionGroundMoveTimelineBehaviour__Fields fields;
};
struct LocomotionTimelineAnimation__Fields {
  struct RangeAnimationEntry__Fields _;
  struct MoonTimeline * Timeline;
  float Distance;
};
struct LocomotionTimelineAnimation {
  struct LocomotionTimelineAnimation__Class *klass;
  struct MonitorData *monitor;
  struct LocomotionTimelineAnimation__Fields fields;
};
struct LocomotionTimelineAnimation__Array {
  struct LocomotionTimelineAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LocomotionTimelineAnimation * vector[32];
};
struct __declspec(align(8)) EntityEvent__Fields {
  struct Entity * Entity;
};
struct EntityEvent {
  struct EntityEvent__Class *klass;
  struct MonitorData *monitor;
  struct EntityEvent__Fields fields;
};
struct EntityFallEvent__Fields {
  struct EntityEvent__Fields _;
};
struct EntityFallEvent {
  struct EntityFallEvent__Class *klass;
  struct MonitorData *monitor;
  struct EntityFallEvent__Fields fields;
};
struct Action_2_Single_Single___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Single_Single_ {
  struct Action_2_Single_Single___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Single_Single___Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_SkinnedMeshRenderer___Fields {
  struct SkinnedMeshRenderer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_SkinnedMeshRenderer_ {
  struct List_1_UnityEngine_SkinnedMeshRenderer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_SkinnedMeshRenderer___Fields fields;
};
struct SkinnedMeshRenderer__Array {
  struct SkinnedMeshRenderer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SkinnedMeshRenderer * vector[32];
};
struct IEnumerator_1_UnityEngine_SkinnedMeshRenderer_ {
  struct IEnumerator_1_UnityEngine_SkinnedMeshRenderer___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_LimitedLifetime_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
  struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
  int32_t hashCode;
  int32_t next;
  struct LimitedLifetime * key;
  struct MoonTimeline * value;
};
struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Array {
  struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_LimitedLifetime_Moon_Timeline_MoonTimeline_ vector[32];
};
struct IEqualityComparer_1_LimitedLifetime_ {
  struct IEqualityComparer_1_LimitedLifetime___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields {
  struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields {
  struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_LimitedLifetime_Moon_Timeline_MoonTimeline___Fields fields;
};
struct ICollection_1_LimitedLifetime_ {
  struct ICollection_1_LimitedLifetime___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
  struct LimitedLifetime * key;
  struct MoonTimeline * value;
};
struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Boxed {
  struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ fields;
};
struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Array {
  struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
  struct IEnumerator_1_KeyValuePair_2_LimitedLifetime_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_LimitedLifetime_ {
  struct IEnumerable_1_LimitedLifetime___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_IVitalsDeathListener___Fields {
  struct IVitalsDeathListener__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_IVitalsDeathListener_ {
  struct List_1_Moon_IVitalsDeathListener___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_IVitalsDeathListener___Fields fields;
};
struct IVitalsDeathListener {
  struct IVitalsDeathListener__Class *klass;
  struct MonitorData *monitor;
};
struct IVitalsDeathListener__Array {
  struct IVitalsDeathListener__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IVitalsDeathListener * vector[32];
};
struct IEnumerator_1_Moon_IVitalsDeathListener_ {
  struct IEnumerator_1_Moon_IVitalsDeathListener___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Vitals_DamageProcessHelper__Fields {
  struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ * m_sortedDamageEntries;
  struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * m_damageBucketPerID;
  struct IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ * m_damageDistanceComparer;
};
struct Vitals_DamageProcessHelper {
  struct Vitals_DamageProcessHelper__Class *klass;
  struct MonitorData *monitor;
  struct Vitals_DamageProcessHelper__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Fields {
  struct Vitals_DamageProcessHelper_SortedDamageEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
  struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Fields fields;
};
struct Vitals_DamageProcessHelper_SortedDamageEntry {
  struct DamageReceiver * receiver;
  struct DamageReceiver_DamageEntry * damageEntry;
  float dist;
};
struct Vitals_DamageProcessHelper_SortedDamageEntry__Boxed {
  struct Vitals_DamageProcessHelper_SortedDamageEntry__Class *klass;
  struct MonitorData *monitor;
  struct Vitals_DamageProcessHelper_SortedDamageEntry fields;
};
struct Vitals_DamageProcessHelper_SortedDamageEntry__Array {
  struct Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Vitals_DamageProcessHelper_SortedDamageEntry vector[32];
};
struct IEnumerator_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
  struct IEnumerator_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Vitals_DamageProcessHelper_DamageBucket___Fields {
  struct Vitals_DamageProcessHelper_DamageBucket__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
  struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket___Fields fields;
};
struct Vitals_DamageProcessHelper_DamageBucket {
  int32_t id;
  int32_t start;
  int32_t count;
};
struct Vitals_DamageProcessHelper_DamageBucket__Boxed {
  struct Vitals_DamageProcessHelper_DamageBucket__Class *klass;
  struct MonitorData *monitor;
  struct Vitals_DamageProcessHelper_DamageBucket fields;
};
struct Vitals_DamageProcessHelper_DamageBucket__Array {
  struct Vitals_DamageProcessHelper_DamageBucket__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Vitals_DamageProcessHelper_DamageBucket vector[32];
};
struct IEnumerator_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
  struct IEnumerator_1_Moon_Vitals_DamageProcessHelper_DamageBucket___Class *klass;
  struct MonitorData *monitor;
};
struct IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
  struct IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) TargetSpheres__Fields {
  struct List_1_TargetSpheres_SphereGroup_ * SphereGroups;
};
struct TargetSpheres {
  struct TargetSpheres__Class *klass;
  struct MonitorData *monitor;
  struct TargetSpheres__Fields fields;
};
struct SpiritFlameProjectileOffsetGenerator__Fields {
  struct TargetSpheres__Fields _;
};
struct SpiritFlameProjectileOffsetGenerator {
  struct SpiritFlameProjectileOffsetGenerator__Class *klass;
  struct MonitorData *monitor;
  struct SpiritFlameProjectileOffsetGenerator__Fields fields;
};
struct __declspec(align(8)) List_1_TargetSpheres_SphereGroup___Fields {
  struct TargetSpheres_SphereGroup__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TargetSpheres_SphereGroup_ {
  struct List_1_TargetSpheres_SphereGroup___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TargetSpheres_SphereGroup___Fields fields;
};
struct __declspec(align(8)) TargetSpheres_SphereGroup__Fields {
  struct List_1_TargetSpheres_Sphere_ * Spheres;
};
struct TargetSpheres_SphereGroup {
  struct TargetSpheres_SphereGroup__Class *klass;
  struct MonitorData *monitor;
  struct TargetSpheres_SphereGroup__Fields fields;
};
struct TargetSpheres_SphereGroup__Array {
  struct TargetSpheres_SphereGroup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TargetSpheres_SphereGroup * vector[32];
};
struct __declspec(align(8)) List_1_TargetSpheres_Sphere___Fields {
  struct TargetSpheres_Sphere__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TargetSpheres_Sphere_ {
  struct List_1_TargetSpheres_Sphere___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TargetSpheres_Sphere___Fields fields;
};
struct __declspec(align(8)) TargetSpheres_Sphere__Fields {
  struct Vector2 Position;
  float Radius;
};
struct TargetSpheres_Sphere {
  struct TargetSpheres_Sphere__Class *klass;
  struct MonitorData *monitor;
  struct TargetSpheres_Sphere__Fields fields;
};
struct TargetSpheres_Sphere__Array {
  struct TargetSpheres_Sphere__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TargetSpheres_Sphere * vector[32];
};
struct IEnumerator_1_TargetSpheres_Sphere_ {
  struct IEnumerator_1_TargetSpheres_Sphere___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_TargetSpheres_SphereGroup_ {
  struct IEnumerator_1_TargetSpheres_SphereGroup___Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_ArrowHitData_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_ArrowHitData_Boolean_ {
  struct Func_2_ArrowHitData_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_ArrowHitData_Boolean___Fields fields;
};
struct ArrowHitData {
  struct Vector3 CollisionNormal;
  struct Vector3 CollisionPoint;
};
struct ArrowHitData__Boxed {
  struct ArrowHitData__Class *klass;
  struct MonitorData *monitor;
  struct ArrowHitData fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinSpiritFlameAbility___Fields {
  bool HasState;
  struct SeinSpiritFlameAbility * State;
};
struct CharacterStateWrapper_1_SeinSpiritFlameAbility_ {
  struct CharacterStateWrapper_1_SeinSpiritFlameAbility___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinSpiritFlameAbility___Fields fields;
};
struct SeinSpiritFlameAbility__Fields {
  struct CharacterState__Fields _;
  struct GameObject * TempTarget;
  struct HashSet_1_System_String_ * m_lockShootingSpiritFlameLocks;
  bool ShootWhenNoTarget;
};
struct SeinSpiritFlameAbility {
  struct SeinSpiritFlameAbility__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritFlameAbility__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinStandardSpiritFlameAbility___Fields {
  bool HasState;
  struct SeinStandardSpiritFlameAbility * State;
};
struct CharacterStateWrapper_1_SeinStandardSpiritFlameAbility_ {
  struct CharacterStateWrapper_1_SeinStandardSpiritFlameAbility___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinStandardSpiritFlameAbility___Fields fields;
};
struct SeinStandardSpiritFlameAbility__Fields {
  struct CharacterState__Fields _;
  struct ShotCombo * StandardSpiritFlameShotCombo;
  struct SeinStandardSpiritFlameAbility_PoisonSettings * Poison;
  struct SpiritFlame__Array * StandardSpiritFlames;
  float SpiritFlameRange;
  bool CanDamageOverTime;
  float m_timeOfLastShot;
  float m_timeOfBeforeLastShot;
  bool m_isSpamming;
  float m_timeOfLastSpam;
  float SpamShotSpeed;
};
struct SeinStandardSpiritFlameAbility {
  struct SeinStandardSpiritFlameAbility__Class *klass;
  struct MonitorData *monitor;
  struct SeinStandardSpiritFlameAbility__Fields fields;
};
struct __declspec(align(8)) ShotCombo__Fields {
  int32_t NumberOfShotsPerCombo;
  float CooldownTimeForIncompleteCombo;
  float CooldownTimeForCompletedCombo;
  float ShotDelay;
  bool UseShotDelay;
  float m_timeSinceLastShot;
  bool m_canShoot;
  int32_t m_currentShot;
};
struct ShotCombo {
  struct ShotCombo__Class *klass;
  struct MonitorData *monitor;
  struct ShotCombo__Fields fields;
};
struct __declspec(align(8)) SeinStandardSpiritFlameAbility_PoisonSettings__Fields {
  float DamageAmount;
  int32_t DamageDuration;
  struct GameObject * PoisonEffect;
};
struct SeinStandardSpiritFlameAbility_PoisonSettings {
  struct SeinStandardSpiritFlameAbility_PoisonSettings__Class *klass;
  struct MonitorData *monitor;
  struct SeinStandardSpiritFlameAbility_PoisonSettings__Fields fields;
};
struct SpiritFlame__Fields {
  struct ScriptableObject__Fields _;
  struct GameObject * Projectile;
  float Damage;
};
struct SpiritFlame {
  struct SpiritFlame__Class *klass;
  struct MonitorData *monitor;
  struct SpiritFlame__Fields fields;
};}