namespace app {
struct Trigger_ProcessTrigger_d_39__StaticFields {
};
struct Trigger_ProcessTrigger_d_39__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Trigger_ProcessTrigger_d_39__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Trigger_ProcessTrigger_d_39__VTable vtable;
};

struct Trigger_c {
  struct Trigger_c__Class *klass;
  struct MonitorData *monitor;
};
struct Trigger_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Trigger_c__StaticFields {
  struct Trigger_c * __9;
  struct Action_1_Trigger_ * __9__41_0;
};
struct Trigger_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Trigger_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Trigger_c__VTable vtable;
};

struct TriggerByString__Fields {
  struct LegacyTrigger__Fields _;
  struct TriggerByString_StringTriggerData * Data;
};
struct TriggerByString {
  struct TriggerByString__Class *klass;
  struct MonitorData *monitor;
  struct TriggerByString__Fields fields;
};
enum TriggerByString_TriggerEvent__Enum : int32_t {
  TriggerByString_TriggerEvent__Enum_Awake = 0,
  TriggerByString_TriggerEvent__Enum_Start = 1,
  TriggerByString_TriggerEvent__Enum_SceneEnabledAfterSerialize = 2,
  TriggerByString_TriggerEvent__Enum_Always = 3,
};
struct TriggerByString_TriggerEvent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TriggerByString_TriggerEvent__Enum value;
};
struct __declspec(align(8)) TriggerByString_StringTriggerData__Fields {
  struct String * String;
  enum TriggerByString_TriggerEvent__Enum TriggerEvent;
};
struct TriggerByString_StringTriggerData {
  struct TriggerByString_StringTriggerData__Class *klass;
  struct MonitorData *monitor;
  struct TriggerByString_StringTriggerData__Fields fields;
};
struct TriggerByString_StringTriggerData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriggerByString_StringTriggerData__StaticFields {
};
struct TriggerByString_StringTriggerData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriggerByString_StringTriggerData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriggerByString_StringTriggerData__VTable vtable;
};
struct TriggerByString__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
};
struct TriggerByString__StaticFields {
  struct List_1_System_String_ * m_stringTriggersList;
};
struct TriggerByString__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriggerByString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriggerByString__VTable vtable;
};

struct TriggerWithCondition__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * Action;
  struct Condition_1 * Condition;
  bool TriggerOnce;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct TriggerWithCondition {
  struct TriggerWithCondition__Class *klass;
  struct MonitorData *monitor;
  struct TriggerWithCondition__Fields fields;
};
struct TriggerWithCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct TriggerWithCondition__StaticFields {
};
struct TriggerWithCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriggerWithCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriggerWithCondition__VTable vtable;
};

struct ActionSequence_c {
  struct ActionSequence_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_ActionMethod___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_ActionMethod_ {
  struct Comparison_1_ActionMethod___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_ActionMethod___Fields fields;
};
struct Comparison_1_ActionMethod___VTable {
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
struct Comparison_1_ActionMethod___StaticFields {
};
struct Comparison_1_ActionMethod___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_ActionMethod___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_ActionMethod___VTable vtable;
};
struct ActionSequence_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ActionSequence_c__StaticFields {
  struct ActionSequence_c * __9;
  struct Comparison_1_ActionMethod_ * __9__22_0;
};
struct ActionSequence_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActionSequence_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActionSequence_c__VTable vtable;
};

struct ActionSequenceSerializer__Fields {
  struct SaveSerialize__Fields _;
  struct ActionSequence * m_actionSequence;
};
struct ActionSequenceSerializer {
  struct ActionSequenceSerializer__Class *klass;
  struct MonitorData *monitor;
  struct ActionSequenceSerializer__Fields fields;
};
struct ActionSequenceSerializer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct ActionSequenceSerializer__StaticFields {
};
struct ActionSequenceSerializer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActionSequenceSerializer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActionSequenceSerializer__VTable vtable;
};

struct WaitAction__Fields {
  struct PerformingAction__Fields _;
  float Duration;
  bool LastActionFinished;
  struct Condition_1 * Condition;
  struct Condition_1 * CancelCondition;
  struct PerformingAction * LastAction;
  float m_time;
  float m_remainingTime;
  struct IContext * m_context;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct WaitAction {
  struct WaitAction__Class *klass;
  struct MonitorData *monitor;
  struct WaitAction__Fields fields;
};
struct WaitAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct WaitAction__StaticFields {
};
struct WaitAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitAction__VTable vtable;
};

struct SeinAnimationSystemSwitcher__Fields {
  struct MonoBehaviour__Fields _;
  enum KeyCode__Enum OldSystemKeyCode;
  enum KeyCode__Enum NewSystemKeyCode;
  struct GameObject * OldSystem;
  struct GameObject * NewSystem;
};
struct SeinAnimationSystemSwitcher {
  struct SeinAnimationSystemSwitcher__Class *klass;
  struct MonitorData *monitor;
  struct SeinAnimationSystemSwitcher__Fields fields;
};
struct SeinAnimationSystemSwitcher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinAnimationSystemSwitcher__StaticFields {
};
struct SeinAnimationSystemSwitcher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinAnimationSystemSwitcher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinAnimationSystemSwitcher__VTable vtable;
};

struct SeinController3D_c {
  struct SeinController3D_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinController3D_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinController3D_c__StaticFields {
  struct SeinController3D_c * __9;
  struct Action_1_SeinController3D_EventId_ * __9__89_0;
  struct Action_1_String_ * __9__89_1;
};
struct SeinController3D_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinController3D_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinController3D_c__VTable vtable;
};

struct AnimationCharacterProvider__Fields {
  struct MonoBehaviour__Fields _;
};
struct AnimationCharacterProvider {
  struct AnimationCharacterProvider__Class *klass;
  struct MonitorData *monitor;
  struct AnimationCharacterProvider__Fields fields;
};
struct AnimationCharacterProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationCharacterProvider__StaticFields {
  struct GameObject * s_oriCharacter;
  struct MoonAnimator * s_oriAnimator;
  struct GameObject * s_kuCharacter;
  struct MoonAnimator * s_kuAnimator;
};
struct AnimationCharacterProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationCharacterProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationCharacterProvider__VTable vtable;
};

struct LegacyAnimationPlayer__Fields {
  struct BaseAnimator__Fields _;
  struct MoonAnimation * Animation;
  struct GameObject * AnimatedObject;
  float DurationOverride;
  bool UseDurationOverride;
  int32_t Priority;
  enum CharacterFactory_Characters__Enum AnimatedCharacter;
  bool Loop;
  struct MoonAnimator * m_moonAnimator;
  bool m_started;
  struct ActiveAnimationHandle m_animationState;
};
struct LegacyAnimationPlayer {
  struct LegacyAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct LegacyAnimationPlayer__Fields fields;
};
struct LegacyAnimationPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct LegacyAnimationPlayer__StaticFields {
};
struct LegacyAnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyAnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyAnimationPlayer__VTable vtable;
};

struct LegacyBlendAnimationPlayer__Fields {
  struct LegacyAnimationPlayer__Fields _;
  struct FloatAnimationParameter * floatAnimationParameter;
  float previewParameterValue;
};
struct LegacyBlendAnimationPlayer {
  struct LegacyBlendAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct LegacyBlendAnimationPlayer__Fields fields;
};
struct LegacyBlendAnimationPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct LegacyBlendAnimationPlayer__StaticFields {
};
struct LegacyBlendAnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyBlendAnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyBlendAnimationPlayer__VTable vtable;
};

struct LegacyFloatAnimationParameterAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct FloatAnimationParameter * Parameter;
  struct MoonAnimator * AnimatedObject;
  struct AnimationCurve * AnimationCurve;
  float m_originalValue;
};
struct LegacyFloatAnimationParameterAnimator {
  struct LegacyFloatAnimationParameterAnimator__Class *klass;
  struct MonitorData *monitor;
  struct LegacyFloatAnimationParameterAnimator__Fields fields;
};
struct LegacyFloatAnimationParameterAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct LegacyFloatAnimationParameterAnimator__StaticFields {
};
struct LegacyFloatAnimationParameterAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyFloatAnimationParameterAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyFloatAnimationParameterAnimator__VTable vtable;
};

struct LegacyPostprocessAnimationPlayer__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationPostprocess * Postprocess;
  struct AnimationCurve * WeightCurve;
  struct GameObject * AnimatedObject;
  bool TweakMode;
  bool m_started;
  struct MoonAnimator * m_moonAnimator;
  struct AnimationPostprocess * m_postprocessInstance;
};
struct LegacyPostprocessAnimationPlayer {
  struct LegacyPostprocessAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct LegacyPostprocessAnimationPlayer__Fields fields;
};
struct LegacyPostprocessAnimationPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct LegacyPostprocessAnimationPlayer__StaticFields {
};
struct LegacyPostprocessAnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyPostprocessAnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyPostprocessAnimationPlayer__VTable vtable;
};

struct OriAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct ClipAnimation * ClipAnimation;
  struct Vector2 EditorPreviewPosition;
  struct MoonAnimator * m_moonAnimator;
  bool m_started;
  struct IActiveAnimation * m_animationState;
};
struct OriAnimator {
  struct OriAnimator__Class *klass;
  struct MonitorData *monitor;
  struct OriAnimator__Fields fields;
};
struct OriAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct OriAnimator__StaticFields {
};
struct OriAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriAnimator__VTable vtable;
};

struct SkeletonAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct ClipAnimation * ClipAnimation;
  struct GameObject * AnimatedObject;
  float Length;
  struct MoonAnimator * m_moonAnimator;
  bool m_started;
  struct ActiveAnimationHandle m_animationState;
};
struct SkeletonAnimator {
  struct SkeletonAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SkeletonAnimator__Fields fields;
};
struct SkeletonAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct SkeletonAnimator__StaticFields {
};
struct SkeletonAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeletonAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeletonAnimator__VTable vtable;
};

struct VectorAnimationParameterAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct VectorAnimationParameter * Parameter;
  struct Vector3 ParameterValue;
  struct GameObject * AnimatedObject;
  float EffectDuration;
};
struct VectorAnimationParameterAnimator {
  struct VectorAnimationParameterAnimator__Class *klass;
  struct MonitorData *monitor;
  struct VectorAnimationParameterAnimator__Fields fields;
};
struct VectorAnimationParameterAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct VectorAnimationParameterAnimator__StaticFields {
};
struct VectorAnimationParameterAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VectorAnimationParameterAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VectorAnimationParameterAnimator__VTable vtable;
};

struct VectorParameterAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct VectorAnimationParameter * Parameter;
  struct Vector3 ParameterValue;
  struct MoonReference_1_MoonAnimator_ * Animator;
  struct MoonAnimator * m_moonAnimator;
};
struct VectorParameterAnimator {
  struct VectorParameterAnimator__Class *klass;
  struct MonitorData *monitor;
  struct VectorParameterAnimator__Fields fields;
};
struct VectorParameterAnimator__VTable {
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
struct VectorParameterAnimator__StaticFields {
};
struct VectorParameterAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VectorParameterAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VectorParameterAnimator__VTable vtable;
};

struct SpriteTexture__Fields {
  struct ScriptableObject__Fields _;
};
struct SpriteTexture {
  struct SpriteTexture__Class *klass;
  struct MonitorData *monitor;
  struct SpriteTexture__Fields fields;
};
struct SpriteTexture__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct SpriteTexture__StaticFields {
};
struct SpriteTexture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteTexture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteTexture__VTable vtable;
};

struct __declspec(align(8)) AnimationMetaData_c_DisplayClass19_0__Fields {
  struct String * name;
};
struct AnimationMetaData_c_DisplayClass19_0 {
  struct AnimationMetaData_c_DisplayClass19_0__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMetaData_c_DisplayClass19_0__Fields fields;
};
struct AnimationMetaData_c_DisplayClass19_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationMetaData_c_DisplayClass19_0__StaticFields {
};
struct AnimationMetaData_c_DisplayClass19_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationMetaData_c_DisplayClass19_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationMetaData_c_DisplayClass19_0__VTable vtable;
};

struct __declspec(align(8)) UnityModelAnimationCurveProcessor__Fields {
  struct GameObject * GameObject;
};
struct UnityModelAnimationCurveProcessor {
  struct UnityModelAnimationCurveProcessor__Class *klass;
  struct MonitorData *monitor;
  struct UnityModelAnimationCurveProcessor__Fields fields;
};
struct AnimationMetaDataCurveProcessor__Fields {
  struct UnityModelAnimationCurveProcessor__Fields _;
  struct AnimationMetaData * AnimationMetaData;
  struct Transform * m_camera;
  struct Transform * m_cameraTarget;
  struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ * m_data;
};
struct AnimationMetaDataCurveProcessor {
  struct AnimationMetaDataCurveProcessor__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMetaDataCurveProcessor__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_Transform_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
  struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
  int32_t hashCode;
  int32_t next;
  struct Transform * key;
  struct AnimationMetaData_AnimationData * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_Transform_ {
  struct IEqualityComparer_1_UnityEngine_Transform___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields {
  struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields {
  struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields fields;
};}