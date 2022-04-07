namespace app {

struct PreloadScene__Fields {
  struct MonoBehaviour__Fields _;
  struct SceneMetaData * MetaData;
};
struct PreloadScene {
  struct PreloadScene__Class *klass;
  struct MonitorData *monitor;
  struct PreloadScene__Fields fields;
};
struct PreloadScene__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PreloadScene__StaticFields {
};
struct PreloadScene__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PreloadScene__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PreloadScene__VTable vtable;
};

struct ScenarioProxyEntity__Fields {
  struct TimelineEntity__Fields _;
  struct Object_1 * ScenarioFile;
  bool LoadLinkedScenes;
  struct ScenarioRoot * ScenarioRoot;
  float m_durationCache;
  struct String * m_filePath;
  struct List_1_Moon_MoonReference_1__2 * _Timelines_k__BackingField;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity_ * _ActiveTimeline_k__BackingField;
  struct ITrimController * _TrimController_k__BackingField;
};
struct ScenarioProxyEntity {
  struct ScenarioProxyEntity__Class *klass;
  struct MonitorData *monitor;
  struct ScenarioProxyEntity__Fields fields;
};
struct ScenarioProxyEntity__VTable {
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
  VirtualInvokeData get_Timelines;
  VirtualInvokeData get_ActiveTimeline;
  VirtualInvokeData get_EntityRecords;
  VirtualInvokeData get_ConstraintMetaDatas;
  VirtualInvokeData get_MarkerRecords;
  VirtualInvokeData get_ExternalRecords;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData RecursivelySetupExecutionOrder;
  VirtualInvokeData get_TrimController;
  VirtualInvokeData set_TrimController;
  VirtualInvokeData get_FullAddress;
  VirtualInvokeData HasFinished;
  VirtualInvokeData ApproximateEvent;
};
struct ScenarioProxyEntity__StaticFields {
};
struct ScenarioProxyEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScenarioProxyEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScenarioProxyEntity__VTable vtable;
};

struct ScenarioSceneEntity__Fields {
  struct MoonTimeline__Fields _;
  struct SceneMetaData * SceneMetaData;
  float _SceneDuration_k__BackingField;
};
struct ScenarioSceneEntity {
  struct ScenarioSceneEntity__Class *klass;
  struct MonitorData *monitor;
  struct ScenarioSceneEntity__Fields fields;
};
struct ScenarioSceneEntity__VTable {
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
  VirtualInvokeData get_EntityRecords;
  VirtualInvokeData get_ConstraintMetaDatas;
  VirtualInvokeData get_MarkerRecords;
  VirtualInvokeData get_ExternalRecords;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData RecursivelySetupExecutionOrder;
  VirtualInvokeData get_TrimController;
  VirtualInvokeData set_TrimController;
  VirtualInvokeData get_FullAddress;
  VirtualInvokeData get_ConstrainedEntitiesCount;
  VirtualInvokeData get_Progress;
  VirtualInvokeData GetConstrainedEntityFrom;
  VirtualInvokeData GetConstrainedEntity;
  VirtualInvokeData get_GetITimelineEntityParent;
  VirtualInvokeData IsTheSame;
  VirtualInvokeData get_StartConstraint;
  VirtualInvokeData get_EndConstraint;
  VirtualInvokeData get_EntityId;
  VirtualInvokeData get_Entity;
  VirtualInvokeData HasFinished;
  VirtualInvokeData ApproximateEvent;
  VirtualInvokeData CollectEvents;
  VirtualInvokeData get_ParsingGroup;
  VirtualInvokeData ApproximateEvent_1;
};
struct ScenarioSceneEntity__StaticFields {
};
struct ScenarioSceneEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScenarioSceneEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScenarioSceneEntity__VTable vtable;
};

struct SceneEntity__Fields {
  struct FixedDurationSceneEntity__Fields _;
  struct Condition_1 * SkipLoadCondition;
  bool m_isSkipping;
};
struct SceneEntity {
  struct SceneEntity__Class *klass;
  struct MonitorData *monitor;
  struct SceneEntity__Fields fields;
};
struct SceneEntity__VTable {
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
  VirtualInvokeData get_Timelines;
  VirtualInvokeData get_ActiveTimeline;
  VirtualInvokeData get_EntityRecords;
  VirtualInvokeData get_ConstraintMetaDatas;
  VirtualInvokeData get_MarkerRecords;
  VirtualInvokeData get_ExternalRecords;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData RecursivelySetupExecutionOrder;
  VirtualInvokeData get_TrimController;
  VirtualInvokeData set_TrimController;
  VirtualInvokeData get_FullAddress;
  VirtualInvokeData CollectEvents;
  VirtualInvokeData ApproximateEvent;
  VirtualInvokeData ApproximateEvent_1;
  VirtualInvokeData HasFinished;
};
struct SceneEntity__StaticFields {
};
struct SceneEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneEntity__VTable vtable;
};

struct __declspec(align(8)) ScenePreloading_c_DisplayClass2_0__Fields {
  struct MoonTimeline * timeline;
};
struct ScenePreloading_c_DisplayClass2_0 {
  struct ScenePreloading_c_DisplayClass2_0__Class *klass;
  struct MonitorData *monitor;
  struct ScenePreloading_c_DisplayClass2_0__Fields fields;
};
struct ScenePreloading_c_DisplayClass2_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScenePreloading_c_DisplayClass2_0__StaticFields {
};
struct ScenePreloading_c_DisplayClass2_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScenePreloading_c_DisplayClass2_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScenePreloading_c_DisplayClass2_0__VTable vtable;
};

struct ScenePreloading_c {
  struct ScenePreloading_c__Class *klass;
  struct MonitorData *monitor;
};
struct Predicate_1_Moon_Timeline_TimelineEntityRecord___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_Moon_Timeline_TimelineEntityRecord_ {
  struct Predicate_1_Moon_Timeline_TimelineEntityRecord___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_Moon_Timeline_TimelineEntityRecord___Fields fields;
};
struct Predicate_1_Moon_Timeline_TimelineEntityRecord___VTable {
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
struct Predicate_1_Moon_Timeline_TimelineEntityRecord___StaticFields {
};
struct Predicate_1_Moon_Timeline_TimelineEntityRecord___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_Moon_Timeline_TimelineEntityRecord___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_Moon_Timeline_TimelineEntityRecord___VTable vtable;
};
struct ScenePreloading_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScenePreloading_c__StaticFields {
  struct ScenePreloading_c * __9;
  struct Predicate_1_Moon_Timeline_TimelineEntityRecord_ * __9__2_1;
};
struct ScenePreloading_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScenePreloading_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScenePreloading_c__VTable vtable;
};

struct ILegacyTimelineStateObserver {
  struct ILegacyTimelineStateObserver__Class *klass;
  struct MonitorData *monitor;
};
struct ILegacyTimelineStateObserver__VTable {
  VirtualInvokeData get_TimelineSamplePriority;
  VirtualInvokeData TimelineSample;
};
struct ILegacyTimelineStateObserver__StaticFields {
};
struct ILegacyTimelineStateObserver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ILegacyTimelineStateObserver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ILegacyTimelineStateObserver__VTable vtable;
};

struct LegacyTimelineState {
  struct LegacyTimelineState__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_ILegacyTimelineStateObserver___Fields {
  struct ILegacyTimelineStateObserver__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_ILegacyTimelineStateObserver_ {
  struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___Fields fields;
};
struct ILegacyTimelineStateObserver__Array {
  struct ILegacyTimelineStateObserver__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ILegacyTimelineStateObserver * vector[32];
};
struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver_ {
  struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_GenericPuppet___Fields {
  struct GenericPuppet__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_GenericPuppet_ {
  struct List_1_GenericPuppet___Class *klass;
  struct MonitorData *monitor;
  struct List_1_GenericPuppet___Fields fields;
};
struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___VTable vtable;
};
struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___VTable {
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
struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___StaticFields {
  struct ILegacyTimelineStateObserver__Array * _emptyArray;
};
struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___VTable vtable;
};
struct List_1_GenericPuppet___VTable {
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
struct List_1_GenericPuppet___StaticFields {
  struct GenericPuppet__Array * _emptyArray;
};
struct List_1_GenericPuppet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_GenericPuppet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_GenericPuppet___VTable vtable;
};
struct LegacyTimelineState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LegacyTimelineState__StaticFields {
  float _CurrentTime_k__BackingField;
  bool _IsPlaying_k__BackingField;
  bool RefreshRequired;
  struct Action_1_Single_ * OnPreviewablesSampledCallback;
  struct Action * OnTimelineStateChangeCallback;
  struct List_1_Moon_Timeline_ILegacyTimelineStateObserver_ * s_observers;
  struct GameObject * s_ori;
  struct List_1_GenericPuppet_ * s_puppets;
  struct Animator * s_oriAnimator;
  bool m_inPreviewMode;
  bool m_isOriAnimatorDrivingOri;
  bool m_shouldTimelineAnimateCamera;
};
struct LegacyTimelineState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyTimelineState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyTimelineState__VTable vtable;
};

struct LegacyTimelineState_c {
  struct LegacyTimelineState_c__Class *klass;
  struct MonitorData *monitor;
};
struct LegacyTimelineState_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LegacyTimelineState_c__StaticFields {
  struct LegacyTimelineState_c * __9;
};
struct LegacyTimelineState_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyTimelineState_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyTimelineState_c__VTable vtable;
};

struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem_ {
  struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) GameplayUISystem__Fields {
  int32_t m_enableCount;
  int32_t m_disableCount;
  float _DisableAutomaticHidingTime_k__BackingField;
};
struct GameplayUISystem {
  struct GameplayUISystem__Class *klass;
  struct MonitorData *monitor;
  struct GameplayUISystem__Fields fields;
};
struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInit;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData __unknown;
};
struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___StaticFields {
  struct GameplayUISystem * m_instance;
};
struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___VTable vtable;
};
struct GameplayUISystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInit;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData OnUpdate_1;
};
struct GameplayUISystem__StaticFields {
};
struct GameplayUISystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameplayUISystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameplayUISystem__VTable vtable;
};

struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem_ {
  struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ReplayFastForwardSystem__Fields {
  int32_t m_count;
};
struct ReplayFastForwardSystem {
  struct ReplayFastForwardSystem__Class *klass;
  struct MonitorData *monitor;
  struct ReplayFastForwardSystem__Fields fields;
};
struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInit;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData __unknown;
};
struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___StaticFields {
  struct ReplayFastForwardSystem * m_instance;
};
struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___VTable vtable;
};
struct ReplayFastForwardSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInit;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData OnUpdate_1;
};
struct ReplayFastForwardSystem__StaticFields {
};
struct ReplayFastForwardSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayFastForwardSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayFastForwardSystem__VTable vtable;
};

struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem_ {
  struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SceneManagementSystem__Fields {
  struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ * m_loadedStates;
  struct List_1_RuntimeSceneMetaData_ * m_sceneStateToRemove;
  int32_t m_sceneEntityPlayCount;
  enum ScenesManager_SceneManagementMode__Enum Mode;
  float _IncreasedSceneEntityPlayCountTime_k__BackingField;
  struct RuntimeSceneMetaData * LastMasterTimelineScene;
  struct FixedDurationSceneEntity * LastFixedDurationSceneEntity;
  struct List_1_RuntimeSceneMetaData_ * m_toRemove;
  bool m_isSuspended;
};
struct SceneManagementSystem {
  struct SceneManagementSystem__Class *klass;
  struct MonitorData *monitor;
  struct SceneManagementSystem__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_RuntimeSceneMetaData_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  int32_t hashCode;
  int32_t next;
  struct RuntimeSceneMetaData * key;
  struct SceneManagementSystem_SceneLoadedState * value;
};
struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array {
  struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ vector[32];
};
struct __declspec(align(8)) SceneManagementSystem_SceneLoadedState__Fields {
  int32_t Count;
  bool Enabled;
  bool Suspended;
};
struct SceneManagementSystem_SceneLoadedState {
  struct SceneManagementSystem_SceneLoadedState__Class *klass;
  struct MonitorData *monitor;
  struct SceneManagementSystem_SceneLoadedState__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields {
  struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields {
  struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields fields;
};
struct SceneManagementSystem_SceneLoadedState__Array {
  struct SceneManagementSystem_SceneLoadedState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneManagementSystem_SceneLoadedState * vector[32];
};
struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  struct RuntimeSceneMetaData * key;
  struct SceneManagementSystem_SceneLoadedState * value;
};
struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Boxed {
  struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ fields;
};
struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array {
  struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
  struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class *klass;
  struct MonitorData *monitor;
};
struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInit;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData __unknown;
};
struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___StaticFields {
  struct SceneManagementSystem * m_instance;
};
struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___VTable vtable;
};
struct SceneManagementSystem_SceneLoadedState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneManagementSystem_SceneLoadedState__StaticFields {
};
struct SceneManagementSystem_SceneLoadedState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneManagementSystem_SceneLoadedState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneManagementSystem_SceneLoadedState__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
};
struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
};
struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
};
struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
};
struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
};
struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
  VirtualInvokeData GetEnumerator;
};}