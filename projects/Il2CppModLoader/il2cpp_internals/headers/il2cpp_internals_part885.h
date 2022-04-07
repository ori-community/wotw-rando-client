namespace app {
struct EntityPhysicsAnimator {
  struct EntityPhysicsAnimator__Class *klass;
  struct MonitorData *monitor;
  struct EntityPhysicsAnimator__Fields fields;
};
struct EntityPhysicsAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData Validate;
};
struct EntityPhysicsAnimator__StaticFields {
};
struct EntityPhysicsAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityPhysicsAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityPhysicsAnimator__VTable vtable;
};

struct IKPostprocessPlayer__Fields {
  struct AnimationPostprocessPlayer__Fields _;
  struct AnimationCurve * SpeedCurve;
  struct IKTargetBehaviour * m_targetBehaviour;
  bool Revert;
  float m_initWeight;
  float m_initSpeed;
};
struct IKPostprocessPlayer {
  struct IKPostprocessPlayer__Class *klass;
  struct MonitorData *monitor;
  struct IKPostprocessPlayer__Fields fields;
};
struct IKPostprocessPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct IKPostprocessPlayer__StaticFields {
};
struct IKPostprocessPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKPostprocessPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKPostprocessPlayer__VTable vtable;
};

struct IKWeightAnimator__Fields {
  struct EventTriggerAnimator__Fields _;
  struct IK * Target;
  float TargetWeight;
  float m_weight;
  float m_transitionTime;
};
struct IKWeightAnimator {
  struct IKWeightAnimator__Class *klass;
  struct MonitorData *monitor;
  struct IKWeightAnimator__Fields fields;
};
struct IKWeightAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData Validate;
};
struct IKWeightAnimator__StaticFields {
};
struct IKWeightAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKWeightAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKWeightAnimator__VTable vtable;
};

struct LedgeDropBlockerAnimator__Fields {
  struct EventTriggerAnimator__Fields _;
  struct Entity * m_entity;
  struct GroundEntityLocomotion * m_locomotion;
  bool StopFallingBack;
  bool StopFallingForward;
};
struct LedgeDropBlockerAnimator {
  struct LedgeDropBlockerAnimator__Class *klass;
  struct MonitorData *monitor;
  struct LedgeDropBlockerAnimator__Fields fields;
};
struct LedgeDropBlockerAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData Validate;
};
struct LedgeDropBlockerAnimator__StaticFields {
};
struct LedgeDropBlockerAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LedgeDropBlockerAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LedgeDropBlockerAnimator__VTable vtable;
};

struct MirroringAnimator__Fields {
  struct EventTriggerAnimator__Fields _;
  struct Entity * m_entity;
  struct GroundEntityLocomotion * m_locomotion;
};
struct MirroringAnimator {
  struct MirroringAnimator__Class *klass;
  struct MonitorData *monitor;
  struct MirroringAnimator__Fields fields;
};
struct MirroringAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData Validate;
};
struct MirroringAnimator__StaticFields {
};
struct MirroringAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MirroringAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MirroringAnimator__VTable vtable;
};

struct OverrideReactionAnimator__Fields {
  struct EventTriggerAnimator__Fields _;
  struct EntityReactions * EntityReactions;
  struct EntityReactionBehaviour__Array * ReactionsToOverride;
};
struct OverrideReactionAnimator {
  struct OverrideReactionAnimator__Class *klass;
  struct MonitorData *monitor;
  struct OverrideReactionAnimator__Fields fields;
};
struct OverrideReactionAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData Validate;
};
struct OverrideReactionAnimator__StaticFields {
};
struct OverrideReactionAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OverrideReactionAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OverrideReactionAnimator__VTable vtable;
};

struct PauseAnimator__Fields {
  struct EventTriggerAnimator__Fields _;
  float PauseTime;
  float m_time;
  bool m_started;
  struct MoonTimeline__Array * m_timelines;
  struct AnimationPlayer * m_animationPlayer;
  struct ActiveAnimationHandle m_activeAnimation;
  float m_activeAnimPrevSpeed;
};
struct PauseAnimator {
  struct PauseAnimator__Class *klass;
  struct MonitorData *monitor;
  struct PauseAnimator__Fields fields;
};
struct PauseAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData Validate;
};
struct PauseAnimator__StaticFields {
};
struct PauseAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PauseAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PauseAnimator__VTable vtable;
};

struct TimescaleAnimator__Fields {
  struct TimelineEntity__Fields _;
  float TimeScale;
  struct AnimationCurve * Weight;
  struct MoonFloat * TimeScaleMultiplier;
  struct AnimationPlayer * m_animationPlayer;
  struct IActiveAnimation * m_activeAnimation;
  struct MoonTimeline * m_parentTimeline;
  float m_originalTimescale;
  float m_time;
  float m_lastAppliedTimeScale;
};
struct TimescaleAnimator {
  struct TimescaleAnimator__Class *klass;
  struct MonitorData *monitor;
  struct TimescaleAnimator__Fields fields;
};
struct TimescaleAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct TimescaleAnimator__StaticFields {
};
struct TimescaleAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimescaleAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimescaleAnimator__VTable vtable;
};

struct TriggerActionAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct ActionMethod * Action;
};
struct TriggerActionAnimator {
  struct TriggerActionAnimator__Class *klass;
  struct MonitorData *monitor;
  struct TriggerActionAnimator__Fields fields;
};
struct TriggerActionAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct TriggerActionAnimator__StaticFields {
};
struct TriggerActionAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriggerActionAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriggerActionAnimator__VTable vtable;
};

struct __declspec(align(8)) ExperimentalTransparencyAnimatorSystemStrategy__Fields {
  struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array * m_computer;
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ * m_hideSceneActions;
  struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ * m_statePool;
  struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ * m_stateMap;
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ * m_states;
};
struct ExperimentalTransparencyAnimatorSystemStrategy {
  struct ExperimentalTransparencyAnimatorSystemStrategy__Class *klass;
  struct MonitorData *monitor;
  struct ExperimentalTransparencyAnimatorSystemStrategy__Fields fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue {
  float TotalValue;
  float TotalPersistantValue;
  bool IsSet;
  bool PersistantIsSet;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Boxed {
  struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Class *klass;
  struct MonitorData *monitor;
  struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array {
  struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue vector[32];
};
struct __declspec(align(8)) List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Fields {
  struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Fields fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction {
  struct MoonGuid * SceneGuid;
  bool Hidden;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed {
  struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class *klass;
  struct MonitorData *monitor;
  struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array {
  struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction vector[32];
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
  struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
  struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};
struct __declspec(align(8)) ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Fields {
  bool OriginalHiddenFlag;
  int32_t InstanceID;
  struct Renderer * Renderer;
  int32_t _ProcessedFrame_k__BackingField;
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ * Requests;
  struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array * Properties;
  float m_handoverAlpha;
  bool m_hasValidAlphaHandover;
  bool HasImportantRequest;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState {
  struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Class *klass;
  struct MonitorData *monitor;
  struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Fields fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array {
  struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState * vector[32];
};
struct __declspec(align(8)) List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Fields {
  struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ {
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Fields fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_Request {
  enum UberShaderProperty_Color__Enum Color;
  float Value;
  bool Persistant;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Boxed {
  struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Class *klass;
  struct MonitorData *monitor;
  struct ExperimentalTransparencyAnimatorSystemStrategy_Request fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array {
  struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExperimentalTransparencyAnimatorSystemStrategy_Request vector[32];
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ {
  struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Class *klass;
  struct MonitorData *monitor;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState {
  float Original;
  float Current;
  float HandoverValue;
  bool HasHandover;
  bool IsSet;
  enum HandoverMode__Enum LastHandoverMode;
  enum TransparencyMode__Enum LastTransparencyMode;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Boxed {
  struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class *klass;
  struct MonitorData *monitor;
  struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array {
  struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState vector[32];
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
  struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
  struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};
struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  int32_t key;
  struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState * value;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Boxed {
  struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ fields;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array {
  struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
  struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__StaticFields {
};
struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__VTable vtable;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__StaticFields {
};
struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable vtable;
};
struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable {
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
struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields {
  struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array * _emptyArray;
};
struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable vtable;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_Request__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExperimentalTransparencyAnimatorSystemStrategy_Request__StaticFields {
};
struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExperimentalTransparencyAnimatorSystemStrategy_Request__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExperimentalTransparencyAnimatorSystemStrategy_Request__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___VTable vtable;
};
struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___VTable {
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
};}