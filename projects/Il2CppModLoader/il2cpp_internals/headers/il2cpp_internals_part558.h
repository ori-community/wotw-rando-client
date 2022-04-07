namespace app {
struct SpiderBossAcidAttack {
  struct SpiderBossAcidAttack__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossAcidAttack__Fields fields;
};
enum SpiderAttackCategory__Enum : int32_t {
  SpiderAttackCategory__Enum_Common = 0,
  SpiderAttackCategory__Enum_Special = 1,
};
struct SpiderAttackCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderAttackCategory__Enum value;
};
struct __declspec(align(8)) SpiderAttackSettings__Fields {
  enum SpiderAttackCategory__Enum Category;
  struct AnimationCurve * UtilityMultiplierOverTime;
  struct SpiderBossEntity_SpiderFightState__Enum__Array * AllowedPhases;
  bool IsBlocking;
};
struct SpiderAttackSettings {
  struct SpiderAttackSettings__Class *klass;
  struct MonitorData *monitor;
  struct SpiderAttackSettings__Fields fields;
};
enum SpiderBossEntity_SpiderFightState__Enum : int32_t {
  SpiderBossEntity_SpiderFightState__Enum_PreFight = 0,
  SpiderBossEntity_SpiderFightState__Enum_WispTriggered = 1,
  SpiderBossEntity_SpiderFightState__Enum_Arena1Reached = 2,
  SpiderBossEntity_SpiderFightState__Enum_Arena1WallBroken = 3,
  SpiderBossEntity_SpiderFightState__Enum_EscapeTriggered = 4,
  SpiderBossEntity_SpiderFightState__Enum_Arena2Reached = 5,
  SpiderBossEntity_SpiderFightState__Enum_DarknessEnabled = 6,
  SpiderBossEntity_SpiderFightState__Enum_Outro = 7,
};
struct SpiderBossEntity_SpiderFightState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderBossEntity_SpiderFightState__Enum value;
};
struct SpiderBossEntity_SpiderFightState__Enum__Array {
  struct SpiderBossEntity_SpiderFightState__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum SpiderBossEntity_SpiderFightState__Enum vector[32];
};
struct __declspec(align(8)) SpiderBossCancellableController__Fields {
  struct List_1_Moon_Timeline_ReadyToFinishAnimator_ * m_finishAnimators;
};
struct SpiderBossCancellableController {
  struct SpiderBossCancellableController__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossCancellableController__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Timeline_ReadyToFinishAnimator___Fields {
  struct ReadyToFinishAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_ReadyToFinishAnimator_ {
  struct List_1_Moon_Timeline_ReadyToFinishAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_ReadyToFinishAnimator___Fields fields;
};
struct ReadyToFinishAnimator__Fields {
  struct EventTriggerAnimator__Fields _;
};
struct ReadyToFinishAnimator {
  struct ReadyToFinishAnimator__Class *klass;
  struct MonitorData *monitor;
  struct ReadyToFinishAnimator__Fields fields;
};
struct ReadyToFinishAnimator__Array {
  struct ReadyToFinishAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ReadyToFinishAnimator * vector[32];
};
struct IEnumerator_1_Moon_Timeline_ReadyToFinishAnimator_ {
  struct IEnumerator_1_Moon_Timeline_ReadyToFinishAnimator___Class *klass;
  struct MonitorData *monitor;
};
enum SpiderBossLocationZone__Enum : int32_t {
  SpiderBossLocationZone__Enum_None = -1,
  SpiderBossLocationZone__Enum_BaseLeft = 0,
  SpiderBossLocationZone__Enum_BaseMiddle = 1,
  SpiderBossLocationZone__Enum_BaseRight = 2,
};
struct SpiderBossLocationZone__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderBossLocationZone__Enum value;
};
struct __declspec(align(8)) MirroredSet_1_Moon_Timeline_MoonTimeline___Fields {
  struct MoonTimeline * Normal;
  struct MoonTimeline * Mirrored;
};
struct MirroredSet_1_Moon_Timeline_MoonTimeline_ {
  struct MirroredSet_1_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct MirroredSet_1_Moon_Timeline_MoonTimeline___Fields fields;
};
struct MirroredTimelineSet__Fields {
  struct MirroredSet_1_Moon_Timeline_MoonTimeline___Fields _;
};
struct MirroredTimelineSet {
  struct MirroredTimelineSet__Class *klass;
  struct MonitorData *monitor;
  struct MirroredTimelineSet__Fields fields;
};
struct __declspec(align(8)) SpiderBossAcidAttack_AttackSettings__Fields {
  struct AnimationCurve * AngleCurve;
};
struct SpiderBossAcidAttack_AttackSettings {
  struct SpiderBossAcidAttack_AttackSettings__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossAcidAttack_AttackSettings__Fields fields;
};
struct EntityBehaviourNode_1_SpiderBossEntity___VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData CacheSerializedComponents;
  VirtualInvokeData OnEntityInitialized;
};
struct EntityBehaviourNode_1_SpiderBossEntity___StaticFields {
};
struct EntityBehaviourNode_1_SpiderBossEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityBehaviourNode_1_SpiderBossEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityBehaviourNode_1_SpiderBossEntity___VTable vtable;
};
struct SpiderAttackSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderAttackSettings__StaticFields {
};
struct SpiderAttackSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderAttackSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderAttackSettings__VTable vtable;
};
struct ReadyToFinishAnimator__VTable {
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
struct ReadyToFinishAnimator__StaticFields {
};
struct ReadyToFinishAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadyToFinishAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadyToFinishAnimator__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_ReadyToFinishAnimator___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_ReadyToFinishAnimator___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_ReadyToFinishAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_ReadyToFinishAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_ReadyToFinishAnimator___VTable vtable;
};
struct List_1_Moon_Timeline_ReadyToFinishAnimator___VTable {
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
struct List_1_Moon_Timeline_ReadyToFinishAnimator___StaticFields {
  struct ReadyToFinishAnimator__Array * _emptyArray;
};
struct List_1_Moon_Timeline_ReadyToFinishAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_ReadyToFinishAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_ReadyToFinishAnimator___VTable vtable;
};
struct SpiderBossCancellableController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBossCancellableController__StaticFields {
};
struct SpiderBossCancellableController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossCancellableController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossCancellableController__VTable vtable;
};
struct SpiderBossBaseBehaviour__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetForcedAnimationZone;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
};
struct SpiderBossBaseBehaviour__StaticFields {
};
struct SpiderBossBaseBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossBaseBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossBaseBehaviour__VTable vtable;
};
struct SpiderBossTimelineBehaviourBase__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetForcedAnimationZone;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
  VirtualInvokeData __unknown;
};
struct SpiderBossTimelineBehaviourBase__StaticFields {
};
struct SpiderBossTimelineBehaviourBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossTimelineBehaviourBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossTimelineBehaviourBase__VTable vtable;
};
struct MirroredSet_1_Moon_Timeline_MoonTimeline___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetItem;
};
struct MirroredSet_1_Moon_Timeline_MoonTimeline___StaticFields {
};
struct MirroredSet_1_Moon_Timeline_MoonTimeline___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MirroredSet_1_Moon_Timeline_MoonTimeline___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MirroredSet_1_Moon_Timeline_MoonTimeline___VTable vtable;
};
struct MirroredTimelineSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetItem;
};
struct MirroredTimelineSet__StaticFields {
};
struct MirroredTimelineSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MirroredTimelineSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MirroredTimelineSet__VTable vtable;
};
struct SpiderBossTimelineBehaviour__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetForcedAnimationZone;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
  VirtualInvokeData GetTimeline;
};
struct SpiderBossTimelineBehaviour__StaticFields {
};
struct SpiderBossTimelineBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossTimelineBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossTimelineBehaviour__VTable vtable;
};
struct SpiderBossAcidAttack_AttackSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBossAcidAttack_AttackSettings__StaticFields {
};
struct SpiderBossAcidAttack_AttackSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossAcidAttack_AttackSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossAcidAttack_AttackSettings__VTable vtable;
};
struct SpiderBossAcidAttack__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetForcedAnimationZone;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
  VirtualInvokeData GetTimeline;
};
struct SpiderBossAcidAttack__StaticFields {
};
struct SpiderBossAcidAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossAcidAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossAcidAttack__VTable vtable;
};

struct __declspec(align(8)) SpiderBossAcidAttack_c_DisplayClass36_0__Fields {
  struct Collider * projectileCollider;
  struct SpiderBossAcidAttack * __4__this;
};
struct SpiderBossAcidAttack_c_DisplayClass36_0 {
  struct SpiderBossAcidAttack_c_DisplayClass36_0__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossAcidAttack_c_DisplayClass36_0__Fields fields;
};
struct SpiderBossAcidAttack_c_DisplayClass36_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBossAcidAttack_c_DisplayClass36_0__StaticFields {
};
struct SpiderBossAcidAttack_c_DisplayClass36_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossAcidAttack_c_DisplayClass36_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossAcidAttack_c_DisplayClass36_0__VTable vtable;
};

enum SpiderBossAttackBite_State__Enum : int32_t {
  SpiderBossAttackBite_State__Enum_Invalid = 0,
  SpiderBossAttackBite_State__Enum_Transition = 1,
  SpiderBossAttackBite_State__Enum_ShootAndEnd = 2,
  SpiderBossAttackBite_State__Enum_Done = 3,
};
struct SpiderBossAttackBite_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderBossAttackBite_State__Enum value;
};
struct SpiderBossAttackBite__Fields {
  struct SpiderBossBaseBehaviour__Fields _;
  struct MoonTimeline * Timeline;
  struct EventTriggerAnimator * BiteTrigger;
  struct Transform * BitePoint;
  bool ShouldSpawnProjectiles;
  struct PrefabSpawner * ProjectileSpawner;
  struct Vector2 ProjectileSpeedRange;
  float ProjectileGravity;
  float ProjectileDamage;
  float SpawnVerticalOffset;
  struct Vector2 ProjectileAngleRange;
  bool ShouldSpawnAcid;
  float AcidTime;
  float AcidDamage;
  struct GameObject * AcidPrefab;
  struct GameObject * AcidBigPrefab;
  enum SpiderBossAttackBite_State__Enum m_state;
};
struct SpiderBossAttackBite {
  struct SpiderBossAttackBite__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossAttackBite__Fields fields;
};
struct SpiderBossAttackBite__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetForcedAnimationZone;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
};
struct SpiderBossAttackBite__StaticFields {
};
struct SpiderBossAttackBite__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossAttackBite__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossAttackBite__VTable vtable;
};

enum SpiderBossAttackCallMinions_State__Enum : int32_t {
  SpiderBossAttackCallMinions_State__Enum_Invalid = 0,
  SpiderBossAttackCallMinions_State__Enum_Transition = 1,
  SpiderBossAttackCallMinions_State__Enum_ShootAndEnd = 2,
  SpiderBossAttackCallMinions_State__Enum_Done = 3,
};
struct SpiderBossAttackCallMinions_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderBossAttackCallMinions_State__Enum value;
};
struct SpiderBossAttackCallMinions__Fields {
  struct SpiderBossBaseBehaviour__Fields _;
  struct MoonTimeline * Timeline;
  struct EventTriggerAnimator * SpawnMinionsTrigger;
  uint32_t AmountToSpawn;
  struct Vector2 RandomDelayBetweenSpawns;
  float minDistanceFromOri;
  struct GameObject * ParentObjectWithPlaceholders;
  enum SpiderBossAttackCallMinions_State__Enum m_state;
  struct EntityPlaceholder__Array * m_spawners;
  struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo_ * m_delayedSpawns;
};
struct SpiderBossAttackCallMinions {
  struct SpiderBossAttackCallMinions__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossAttackCallMinions__Fields fields;
};
struct __declspec(align(8)) List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___Fields {
  struct SpiderBossAttackCallMinions_DelayedSpawnInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo_ {
  struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___Fields fields;
};
struct __declspec(align(8)) SpiderBossAttackCallMinions_DelayedSpawnInfo__Fields {
  float RemainingTime;
};
struct SpiderBossAttackCallMinions_DelayedSpawnInfo {
  struct SpiderBossAttackCallMinions_DelayedSpawnInfo__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossAttackCallMinions_DelayedSpawnInfo__Fields fields;
};
struct SpiderBossAttackCallMinions_DelayedSpawnInfo__Array {
  struct SpiderBossAttackCallMinions_DelayedSpawnInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiderBossAttackCallMinions_DelayedSpawnInfo * vector[32];
};
struct IEnumerator_1_SpiderBossAttackCallMinions_DelayedSpawnInfo_ {
  struct IEnumerator_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___Class *klass;
  struct MonitorData *monitor;
};
struct SpiderBossAttackCallMinions_DelayedSpawnInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBossAttackCallMinions_DelayedSpawnInfo__StaticFields {
};
struct SpiderBossAttackCallMinions_DelayedSpawnInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossAttackCallMinions_DelayedSpawnInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossAttackCallMinions_DelayedSpawnInfo__VTable vtable;
};
struct IEnumerator_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___StaticFields {
};
struct IEnumerator_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___VTable vtable;
};
struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___VTable {
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
struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___StaticFields {
  struct SpiderBossAttackCallMinions_DelayedSpawnInfo__Array * _emptyArray;
};
struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo___VTable vtable;
};
struct SpiderBossAttackCallMinions__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetForcedAnimationZone;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
};
struct SpiderBossAttackCallMinions__StaticFields {
};
struct SpiderBossAttackCallMinions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBossAttackCallMinions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBossAttackCallMinions__VTable vtable;
};

struct EnumSelector_1_SpiderBossBehaviourZone___Fields {
  struct CompositeNode__Fields _;
  struct List_1_SpiderBossBehaviourZone_ * Options;
};
struct EnumSelector_1_SpiderBossBehaviourZone_ {
  struct EnumSelector_1_SpiderBossBehaviourZone___Class *klass;
  struct MonitorData *monitor;
  struct EnumSelector_1_SpiderBossBehaviourZone___Fields fields;
};
struct SpiderBossBehaviourSelector__Fields {
  struct EnumSelector_1_SpiderBossBehaviourZone___Fields _;
};
struct SpiderBossBehaviourSelector {
  struct SpiderBossBehaviourSelector__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBossBehaviourSelector__Fields fields;
};
struct __declspec(align(8)) List_1_SpiderBossBehaviourZone___Fields {
  struct SpiderBossBehaviourZone__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpiderBossBehaviourZone_ {
  struct List_1_SpiderBossBehaviourZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpiderBossBehaviourZone___Fields fields;
};
enum SpiderBossBehaviourZone__Enum : int32_t {
  SpiderBossBehaviourZone__Enum_BaseAttackForward = 0,
  SpiderBossBehaviourZone__Enum_BaseBiteAttack = 1,
  SpiderBossBehaviourZone__Enum_BaseTripleSlam = 2,
  SpiderBossBehaviourZone__Enum_BaseSmushAttack = 3,
  SpiderBossBehaviourZone__Enum_BaseSpit = 4,
  SpiderBossBehaviourZone__Enum_BaseTurningAttack = 5,
  SpiderBossBehaviourZone__Enum_None = -1,
};
struct SpiderBossBehaviourZone__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderBossBehaviourZone__Enum value;
};
struct SpiderBossBehaviourZone__Enum__Array {
  struct SpiderBossBehaviourZone__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum SpiderBossBehaviourZone__Enum vector[32];
};
struct IEnumerator_1_SpiderBossBehaviourZone_ {
  struct IEnumerator_1_SpiderBossBehaviourZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SpiderBossBehaviourZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SpiderBossBehaviourZone___StaticFields {
};
struct IEnumerator_1_SpiderBossBehaviourZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SpiderBossBehaviourZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SpiderBossBehaviourZone___VTable vtable;
};
struct List_1_SpiderBossBehaviourZone___VTable {
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