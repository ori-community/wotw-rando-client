namespace app {
struct SpiderBossLocomotionIdleBehaviour_SpiderBossIdle {
  struct SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Fields fields;
};
struct SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__StaticFields {
};
struct SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__VTable vtable;
};

struct EntityLocomotionTask_1_SpiderBossEntity___Fields {
  struct EntityLocomotionTask__Fields _;
};
struct EntityLocomotionTask_1_SpiderBossEntity_ {
  struct EntityLocomotionTask_1_SpiderBossEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityLocomotionTask_1_SpiderBossEntity___Fields fields;
};
struct SpiderBossLocomotionMoveBehaviour__Fields {
  struct EntityLocomotionTask_1_SpiderBossEntity___Fields _;
  struct Vector3 _TargetPosition_k__BackingField;
  float _TraversalSpeed_k__BackingField;
  float ArrivalDistance;
  bool MoveToTarget;
  struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array * Transitions;
};
struct SpiderBossLocomotionMoveBehaviour {
  struct SpiderBossLocomotionMoveBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossLocomotionMoveBehaviour__Fields fields;
};
struct __declspec(align(8)) SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Fields {
  enum SpiderBossLocationZone__Enum FromLocationZone;
  enum SpiderBossLocationZone__Enum ToLocationZone;
};
struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition {
  struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Fields fields;
};
struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array {
  struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition * vector[32];
};
struct EntityLocomotionTask_1_SpiderBossEntity___VTable {
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
};
struct EntityLocomotionTask_1_SpiderBossEntity___StaticFields {
};
struct EntityLocomotionTask_1_SpiderBossEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityLocomotionTask_1_SpiderBossEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityLocomotionTask_1_SpiderBossEntity___VTable vtable;
};
struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__StaticFields {
};
struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__VTable vtable;
};
struct SpiderBossLocomotionMoveBehaviour__VTable {
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
struct SpiderBossLocomotionMoveBehaviour__StaticFields {
};
struct SpiderBossLocomotionMoveBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossLocomotionMoveBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossLocomotionMoveBehaviour__VTable vtable;
};

struct SpiderBossLocomotionProxy__Fields {
  struct MonoBehaviour__Fields _;
  struct SpiderBossLocomotionIdleBehaviour * IdleBehaviourBehaviour;
  struct SpiderBossLocomotionMoveBehaviour * MoveBehaviourBehaviour;
  struct BaseLocomotionTurningBehaviour * TurningBehaviour;
};
struct SpiderBossLocomotionProxy {
  struct SpiderBossLocomotionProxy__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossLocomotionProxy__Fields fields;
};
struct SpiderBossLocomotionProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBossLocomotionProxy__StaticFields {
};
struct SpiderBossLocomotionProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossLocomotionProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossLocomotionProxy__VTable vtable;
};

struct SpiderBossLocomotionTurningBehaviour__Fields {
  struct BaseLocomotionTurningBehaviour__Fields _;
  struct SpiderBossLocationTimelineSet * Turns;
  struct MoonTimeline * m_currentTurnAnimation;
  struct List_1_SpiderBossLocationZone_ * BypassTurningZones;
  struct ReadyToFinishAnimator * m_finishAnimator;
  bool m_canFinish;
};
struct SpiderBossLocomotionTurningBehaviour {
  struct SpiderBossLocomotionTurningBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossLocomotionTurningBehaviour__Fields fields;
};
struct SpiderBossLocomotionTurningBehaviour__VTable {
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
  VirtualInvokeData get_TargetLookDirectionX;
  VirtualInvokeData set_TargetLookDirectionX;
  VirtualInvokeData PlayAnimation;
  VirtualInvokeData ShouldEndBehaviour;
  VirtualInvokeData get_IsPlaying;
  VirtualInvokeData CanCancel;
};
struct SpiderBossLocomotionTurningBehaviour__StaticFields {
};
struct SpiderBossLocomotionTurningBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossLocomotionTurningBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossLocomotionTurningBehaviour__VTable vtable;
};

struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___Fields {
  struct CageFaceMetaData_1_SpiderBossBehaviourZone___Fields _;
};
struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone_ {
  struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___Class *klass;
  struct MonitorData *monitor;
  struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___Fields fields;
};
struct SpiderBehaviourZoneCageMetaData__Fields {
  struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___Fields _;
};
struct SpiderBehaviourZoneCageMetaData {
  struct SpiderBehaviourZoneCageMetaData__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBehaviourZoneCageMetaData__Fields fields;
};
struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___StaticFields {
};
struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBehaviourZoneCageMetaDataGen_1_SpiderBossBehaviourZone___VTable vtable;
};
struct SpiderBehaviourZoneCageMetaData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBehaviourZoneCageMetaData__StaticFields {
};
struct SpiderBehaviourZoneCageMetaData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBehaviourZoneCageMetaData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBehaviourZoneCageMetaData__VTable vtable;
};

struct SpiderBossBottomDamageDealerEnabler__Fields {
  struct ActionMethod__Fields _;
  struct MoonReference_1_MovingPlatformController_ * SpiderPlatformController;
  bool EnableBottomDamageDealers;
  bool DisableBottomDamageDealers;
  bool EnableCollisions;
  bool DisableCollisions;
};
struct SpiderBossBottomDamageDealerEnabler {
  struct SpiderBossBottomDamageDealerEnabler__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossBottomDamageDealerEnabler__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_MovingPlatformController___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_MovingPlatformController_ * m_cachedProxyType;
  struct MovingPlatformController * m_volatileValue;
};
struct MoonReference_1_MovingPlatformController_ {
  struct MoonReference_1_MovingPlatformController___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_MovingPlatformController___Fields fields;
};
struct IMoonType_1_MovingPlatformController_ {
  struct IMoonType_1_MovingPlatformController___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_MovingPlatformController___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_MovingPlatformController___StaticFields {
};
struct IMoonType_1_MovingPlatformController___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_MovingPlatformController___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_MovingPlatformController___VTable vtable;
};
struct MoonReference_1_MovingPlatformController___VTable {
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
struct MoonReference_1_MovingPlatformController___StaticFields {
};
struct MoonReference_1_MovingPlatformController___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_MovingPlatformController___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_MovingPlatformController___VTable vtable;
};
struct SpiderBossBottomDamageDealerEnabler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct SpiderBossBottomDamageDealerEnabler__StaticFields {
};
struct SpiderBossBottomDamageDealerEnabler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossBottomDamageDealerEnabler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossBottomDamageDealerEnabler__VTable vtable;
};

struct SpiderBossCameraTargetsProvider__Fields {
  struct CameraTargetsProvider__Fields _;
  struct SpiderBossEntity * Spider;
  struct Transform * SpiderReferenceTransform;
  struct Vector3 SpiderReferenceOffset;
  struct OriPredictionHelper_Settings * m_oriPredictionSettings;
  struct Vector2 OriPaddingEscape;
  struct Vector2 OriPaddingFight;
  float MaxGroundDistance;
  struct Vector2 GroundPadding;
  struct Vector2 SpiderPadding;
  float SpiderMinHeight;
  struct Transform * GroundArena1;
  float SpiderCutOffDistance;
  float SpiderPositionSmoothTime;
  struct List_1_Moon_CameraTargetSettings_ * m_targets;
  struct OriPredictionHelper * m_oriPrediction;
  struct Vector3 m_spiderSmoothedPosition;
  struct Vector3 m_spiderPositionDampCurrentSpeed;
};
struct SpiderBossCameraTargetsProvider {
  struct SpiderBossCameraTargetsProvider__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossCameraTargetsProvider__Fields fields;
};
struct SpiderBossCameraTargetsProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetTargets;
  VirtualInvokeData UpdateTargets;
  VirtualInvokeData ModifyZoomRange;
  VirtualInvokeData ModifyPaddings;
  VirtualInvokeData ModifyLerping;
};
struct SpiderBossCameraTargetsProvider__StaticFields {
};
struct SpiderBossCameraTargetsProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossCameraTargetsProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossCameraTargetsProvider__VTable vtable;
};

struct SpiderBossDeathReactionBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * TransitionTimeline;
  struct MoonTimeline * DeathTimeline;
  struct EntityDamageEvent * DeathEvent;
};
struct SpiderBossDeathReactionBehaviour {
  struct SpiderBossDeathReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossDeathReactionBehaviour__Fields fields;
};
struct SpiderBossDeathReactionBehaviour__VTable {
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
struct SpiderBossDeathReactionBehaviour__StaticFields {
};
struct SpiderBossDeathReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossDeathReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossDeathReactionBehaviour__VTable vtable;
};

struct SpiderBossDirectionBrainController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpiderBossEntity * Spider;
  struct Enum__Array * Entries;
};
struct SpiderBossDirectionBrainController {
  struct SpiderBossDirectionBrainController__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossDirectionBrainController__Fields fields;
};
struct SpiderBossDirectionBrainController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEntries;
  VirtualInvokeData Evaluate;
  VirtualInvokeData get_ShouldSkip;
};
struct SpiderBossDirectionBrainController__StaticFields {
};
struct SpiderBossDirectionBrainController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossDirectionBrainController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossDirectionBrainController__VTable vtable;
};

struct SpiderBossEntity_c {
  struct SpiderBossEntity_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpiderBossEntity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBossEntity_c__StaticFields {
  struct SpiderBossEntity_c * __9;
  struct Action * __9__183_0;
};
struct SpiderBossEntity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossEntity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossEntity_c__VTable vtable;
};

struct EntityReactionBehaviour_1_SpiderBossEntity___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_SpiderBossEntity_ {
  struct EntityReactionBehaviour_1_SpiderBossEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_SpiderBossEntity___Fields fields;
};
struct SpiderBossHitReactionBehaviour__Fields {
  struct EntityReactionBehaviour_1_SpiderBossEntity___Fields _;
  struct MoonTimeline * Hit;
  struct MoonTimeline * HitB;
  struct MoonTimeline * HitAdditive;
  struct DirectionalHitReactionPostprocess * HitAdditiveDirectional;
  struct RTPC * DamageAmountRTPC;
  float HeavyDamageMultiplier;
  struct List_1_DamageWeight_ * AdditiveDisallowedWeights;
  struct List_1_DamageType_ * AdditiveDisallowedTypes;
  struct SpiderBossCancellableController * m_cancellableController;
  struct MoonTimeline * m_currentHitTimeline;
  struct AnimationAdditiveStrengthContext * m_additiveStrengthContext;
  struct ContextSet * m_timelineContext;
  struct EntityDamageEvent * DamageEvent;
};
struct SpiderBossHitReactionBehaviour {
  struct SpiderBossHitReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossHitReactionBehaviour__Fields fields;
};
struct EntityReactionBehaviour_1_SpiderBossEntity___VTable {
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
struct EntityReactionBehaviour_1_SpiderBossEntity___StaticFields {
};
struct EntityReactionBehaviour_1_SpiderBossEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_SpiderBossEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_SpiderBossEntity___VTable vtable;
};
struct SpiderBossHitReactionBehaviour__VTable {
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
struct SpiderBossHitReactionBehaviour__StaticFields {
};
struct SpiderBossHitReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossHitReactionBehaviour__VTable vtable;
};

struct SpiderBossLocationBrainController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpiderBossEntity * Spider;
  struct Enum__Array * Entries;
};
struct SpiderBossLocationBrainController {
  struct SpiderBossLocationBrainController__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossLocationBrainController__Fields fields;
};
struct SpiderBossLocationBrainController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEntries;
  VirtualInvokeData Evaluate;
  VirtualInvokeData get_ShouldSkip;
};
struct SpiderBossLocationBrainController__StaticFields {
};
struct SpiderBossLocationBrainController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossLocationBrainController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossLocationBrainController__VTable vtable;
};

enum SpiderlingDeathReaction_State__Enum : int32_t {
  SpiderlingDeathReaction_State__Enum_Loop = 0,
  SpiderlingDeathReaction_State__Enum_Burrow = 1,
};
struct SpiderlingDeathReaction_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderlingDeathReaction_State__Enum value;
};
struct SpiderlingDeathReaction__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * DeathKnockupAndLoopTimeline;
  struct MoonTimeline * AdditiveDeathStartTimeline;
  struct MoonTimeline * BurrowTimeline;
  struct MoonTimeline * BounceTimeline;
  struct MoonTimeline * LandShakeTimeline;
  struct MoonTimeline * m_currentTimeline;
  struct CharacterPlatformMovement * m_platformMovement;
  struct SpiderlingLocomotion * m_locomotion;
  bool m_startedFalling;
  enum SpiderlingDeathReaction_State__Enum m_state;
  struct Vector2 m_lastFallingVelocity;
  int32_t m_bunceCount;
  float DeathKickbackMinMagnitude;
  float DeathKickbackMinBoost;
  float DeathKickbackMinUpDirection;
  float WallAndCeilingKnockup;
  float MinYSpeedForKnockup;
  float BounceStrength;
  int32_t MaxBounces;
  struct DeathStartEffectSpawnSetting * DeathStartEffect;
};
struct SpiderlingDeathReaction {
  struct SpiderlingDeathReaction__Class *klass;
  struct MonitorData *monitor;
  struct SpiderlingDeathReaction__Fields fields;
};
struct SpiderlingLocomotion__Fields {
  struct GroundEntityLocomotion__Fields _;
  float SurfaceCheckOrigin;
  float SurfaceCheckLength;
  float m_continousRotationSpeed;
  float m_timeOnGround;
  float m_allowFallDelay;
  int32_t m_stickCastID;
  bool UseDelayedRaycast;
};
struct SpiderlingLocomotion {
  struct SpiderlingLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct SpiderlingLocomotion__Fields fields;
};
struct SpiderlingLocomotion__VTable {
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
  VirtualInvokeData get_UsesSeparateTurningBehaviour;
  VirtualInvokeData ShouldStartFalling;
  VirtualInvokeData PropagateTargetPoint;
  VirtualInvokeData InstantFlip;
  VirtualInvokeData get_LookDirection_1;
  VirtualInvokeData get_LookDirectionXYNormalized;
  VirtualInvokeData get_IsFacingLeft_1;
};
struct SpiderlingLocomotion__StaticFields {
};
struct SpiderlingLocomotion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderlingLocomotion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderlingLocomotion__VTable vtable;
};
struct SpiderlingDeathReaction__VTable {
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
struct SpiderlingDeathReaction__StaticFields {
};
struct SpiderlingDeathReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderlingDeathReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderlingDeathReaction__VTable vtable;
};

struct SpiderlingDeathReaction_c {
  struct SpiderlingDeathReaction_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpiderlingDeathReaction_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderlingDeathReaction_c__StaticFields {
  struct SpiderlingDeathReaction_c * __9;
  struct Action * __9__22_0;
};
struct SpiderlingDeathReaction_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderlingDeathReaction_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderlingDeathReaction_c__VTable vtable;
};

enum SpiderlingFallReactionBehaviour_FallState__Enum : int32_t {
  SpiderlingFallReactionBehaviour_FallState__Enum_Resting = 0,
  SpiderlingFallReactionBehaviour_FallState__Enum_Falling = 1,
  SpiderlingFallReactionBehaviour_FallState__Enum_Landing = 2,
  SpiderlingFallReactionBehaviour_FallState__Enum_HandlingCollision = 3,
};
struct SpiderlingFallReactionBehaviour_FallState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderlingFallReactionBehaviour_FallState__Enum value;
};
struct SpiderlingFallReactionBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * KnockupAndLoopTimeline;
  struct MoonTimeline * LandSequenceNew;
  struct EventTriggerAnimator * EndLandEventTrigger;
  struct MoonTimeline * FallingTimeline;
  struct MoonTimeline * FallingUpToDownTimeline;
  struct MoonTimeline * FallingUpToDownFastTimeline;
  float VerticalSpeedToEnableUpToDownTransition;
  float VerticalSpeedToStartUpToDownTransition;
  struct MoonAnimation * FallingAnimation;
  bool LoopFallingAnimation;
  struct MoonTimeline * BounceTimeline;
  struct MoonTimeline * LandShakeTimeline;
  struct FloatAnimationParameter * FallSpeedParameter;
  int32_t AnimationPriority;
  struct RootMotionProcessorData * LandRootMotion;
  float CollisionHitStop;
  struct GameObject * ImpactEffect;
  float MinBounceForce;
  float MaxBounceForce;
  float WallRepelForce;
  float BounceEnergyConservation;
  bool LooseExtraEnergyWhenHitWall;
  float ExtraEnergyPercentageTooLooseWhenHitWall;
  float OutOfCameraViewDecelerationX;
  float OutOfCameraViewDecelerationY;
  struct ActiveAnimationHandle m_animation;
  struct SpiderlingLocomotion * m_locomotion;
  enum SpiderlingFallReactionBehaviour_FallState__Enum m_state;
  struct MoonControllerColliderHit m_hit;
  float m_collisionTimer;
  struct Vector2 m_bounceSpeed;
  float m_effectInstantiationTimer;
  float m_bounceMultiplier;
  bool m_shouldDoUpToDownTransition;
  bool m_hasDoneUpToDownTransition;
};
struct SpiderlingFallReactionBehaviour {
  struct SpiderlingFallReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpiderlingFallReactionBehaviour__Fields fields;
};
struct SpiderlingFallReactionBehaviour__VTable {
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
  VirtualInvokeData get_EffectiveLandSequenceNew;
  VirtualInvokeData get_ShouldLand;
  VirtualInvokeData OnEnterFalling;
  VirtualInvokeData FallingUpdate;
  VirtualInvokeData OnEnterLand;
  VirtualInvokeData LandUpdate;
  VirtualInvokeData OnEnterCollision;
  VirtualInvokeData CollisionUpdate;
};
struct SpiderlingFallReactionBehaviour__StaticFields {
};
struct SpiderlingFallReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderlingFallReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderlingFallReactionBehaviour__VTable vtable;
};

struct EntityReactionBehaviour_1_SpiderlingEntity___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_SpiderlingEntity_ {
  struct EntityReactionBehaviour_1_SpiderlingEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_SpiderlingEntity___Fields fields;
};
struct EntityHitReactionBehaviour_1_SpiderlingEntity___Fields {
  struct EntityReactionBehaviour_1_SpiderlingEntity___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_SpiderlingEntity_ {
  struct EntityHitReactionBehaviour_1_SpiderlingEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_SpiderlingEntity___Fields fields;
};}