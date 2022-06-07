namespace app {
struct FixedDurationSceneEntity_SceneEntityEvent__StaticFields {
};

struct FixedDurationSceneEntity_SceneEntityEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FixedDurationSceneEntity_SceneEntityEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FixedDurationSceneEntity_SceneEntityEvent__VTable vtable;
};

struct KeepSceneLoadedEntity__Fields {
    struct TimelineEntity__Fields _;
    bool m_isBlockingLoad;
    struct SceneMetaData *SceneMetaData;
    bool HideSceneOnStop;
    ScenesManager_SceneManagementMode__Enum SceneMode;
    
    struct RuntimeSceneMetaData *m_runtimeSceneMetaData;
    bool m_isLoaded;
    struct IContext *m_context;
    struct RuntimeSceneMetaData *m_rootMetaData;
    bool m_complete;
    bool IncreaseSceneReferenceCountOnStop;
    bool UnsetPreventUnloadingOnStop;
};

struct KeepSceneLoadedEntity {
    struct KeepSceneLoadedEntity__Class *klass;
    MonitorData *monitor;
    struct KeepSceneLoadedEntity__Fields fields;
};

struct KeepSceneLoadedEntity__VTable {
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

struct KeepSceneLoadedEntity__StaticFields {
};

struct KeepSceneLoadedEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeepSceneLoadedEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeepSceneLoadedEntity__VTable vtable;
};

struct KeepScenesLoaded__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneMetaData__Array *Scenes;
    struct MoonReference_1_ISerializedUberState_ *UberState;
    struct Condition_1 *Condition;
    bool m_hasPreloaded;
    struct IUberState__Array *m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_ *_AllTargets_k__BackingField;
};

struct KeepScenesLoaded {
    struct KeepScenesLoaded__Class *klass;
    MonitorData *monitor;
    struct KeepScenesLoaded__Fields fields;
};

struct KeepScenesLoaded__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
};

struct KeepScenesLoaded__StaticFields {
};

struct KeepScenesLoaded__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeepScenesLoaded__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeepScenesLoaded__VTable vtable;
};

struct PreloadFirstScene__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    struct SceneMetaData *m_metaData;
    bool m_preloaded;
    struct Condition_1 *PreloadCondition;
};

struct PreloadFirstScene {
    struct PreloadFirstScene__Class *klass;
    MonitorData *monitor;
    struct PreloadFirstScene__Fields fields;
};

struct PreloadFirstScene__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PreloadFirstScene__StaticFields {
    bool UseConditionalFirstScenePreloadOptimization;
};

struct PreloadFirstScene__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PreloadFirstScene__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PreloadFirstScene__VTable vtable;
};

struct PreLoadingEntity__Fields {
    struct TimelineEntity__Fields _;
    bool OverrideSceneMetaData;
    struct SceneMetaData *m_sceneMetaData;
    bool KeepSceneHidden;
    bool OnlyLoadNextScene;
    struct Condition_1 *SkipLoadCondition;
    bool m_isSkipping;
    bool m_loaded;
    bool m_enabled;
    bool m_presumeComplete;
    struct RuntimeSceneMetaData *m_runtimeSceneMetaData;
    bool m_blockingForSceneLoad;
    int32_t m_suspensionTicketID;
    struct List_1_Moon_Timeline_FixedDurationSceneEntity_ *m_entities;
};

struct PreLoadingEntity {
    struct PreLoadingEntity__Class *klass;
    MonitorData *monitor;
    struct PreLoadingEntity__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_Timeline_FixedDurationSceneEntity___Fields {
    struct FixedDurationSceneEntity__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_FixedDurationSceneEntity_ {
    struct List_1_Moon_Timeline_FixedDurationSceneEntity___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_FixedDurationSceneEntity___Fields fields;
};

struct FixedDurationSceneEntity__Array {
    struct FixedDurationSceneEntity__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FixedDurationSceneEntity *vector[32];
};

struct IEnumerator_1_Moon_Timeline_FixedDurationSceneEntity_ {
    struct IEnumerator_1_Moon_Timeline_FixedDurationSceneEntity___Class *klass;
    MonitorData *monitor;
};

struct FixedDurationSceneEntity__Array__VTable {
};

struct FixedDurationSceneEntity__Array__StaticFields {
};

struct FixedDurationSceneEntity__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FixedDurationSceneEntity__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FixedDurationSceneEntity__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_FixedDurationSceneEntity___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_FixedDurationSceneEntity___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_FixedDurationSceneEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_FixedDurationSceneEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Timeline_FixedDurationSceneEntity___VTable vtable;
};

struct List_1_Moon_Timeline_FixedDurationSceneEntity___VTable {
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

struct List_1_Moon_Timeline_FixedDurationSceneEntity___StaticFields {
    struct FixedDurationSceneEntity__Array *_emptyArray;
};

struct List_1_Moon_Timeline_FixedDurationSceneEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Timeline_FixedDurationSceneEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_Timeline_FixedDurationSceneEntity___VTable vtable;
};

struct PreLoadingEntity__VTable {
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
    VirtualInvokeData HasFinished;
};

struct PreLoadingEntity__StaticFields {
};

struct PreLoadingEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PreLoadingEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PreLoadingEntity__VTable vtable;
};

struct PreloadScene__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneMetaData *MetaData;
};

struct PreloadScene {
    struct PreloadScene__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PreloadScene__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PreloadScene__VTable vtable;
};

struct ScenarioProxyEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Object_1 *ScenarioFile;
    bool LoadLinkedScenes;
    struct ScenarioRoot *ScenarioRoot;
    float m_durationCache;
    struct String *m_filePath;
    struct List_1_Moon_MoonReference_1__2 *_Timelines_k__BackingField;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_ *_ActiveTimeline_k__BackingField;
    struct ITrimController *_TrimController_k__BackingField;
};

struct ScenarioProxyEntity {
    struct ScenarioProxyEntity__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenarioProxyEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenarioProxyEntity__VTable vtable;
};

struct ScenarioSceneEntity__Fields {
    struct MoonTimeline__Fields _;
    struct SceneMetaData *SceneMetaData;
    float _SceneDuration_k__BackingField;
};

struct ScenarioSceneEntity {
    struct ScenarioSceneEntity__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenarioSceneEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenarioSceneEntity__VTable vtable;
};

struct SceneEntity__Fields {
    struct FixedDurationSceneEntity__Fields _;
    struct Condition_1 *SkipLoadCondition;
    bool m_isSkipping;
};

struct SceneEntity {
    struct SceneEntity__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneEntity__VTable vtable;
};

struct __declspec(align(8)) ScenePreloading_c_DisplayClass2_0__Fields {
    struct MoonTimeline *timeline;
};

struct ScenePreloading_c_DisplayClass2_0 {
    struct ScenePreloading_c_DisplayClass2_0__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenePreloading_c_DisplayClass2_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenePreloading_c_DisplayClass2_0__VTable vtable;
};

struct ScenePreloading_c {
    struct ScenePreloading_c__Class *klass;
    MonitorData *monitor;
};

struct Predicate_1_Moon_Timeline_TimelineEntityRecord___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_Moon_Timeline_TimelineEntityRecord_ {
    struct Predicate_1_Moon_Timeline_TimelineEntityRecord___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Predicate_1_Moon_Timeline_TimelineEntityRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Predicate_1_Moon_Timeline_TimelineEntityRecord___VTable vtable;
};

struct ScenePreloading_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ScenePreloading_c__StaticFields {
    struct ScenePreloading_c *__9;
    struct Predicate_1_Moon_Timeline_TimelineEntityRecord_ *__9__2_1;
};

struct ScenePreloading_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenePreloading_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenePreloading_c__VTable vtable;
};

struct ILegacyTimelineStateObserver {
    struct ILegacyTimelineStateObserver__Class *klass;
    MonitorData *monitor;
};

struct ILegacyTimelineStateObserver__VTable {
    VirtualInvokeData get_TimelineSamplePriority;
    VirtualInvokeData TimelineSample;
};

struct ILegacyTimelineStateObserver__StaticFields {
};

struct ILegacyTimelineStateObserver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ILegacyTimelineStateObserver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ILegacyTimelineStateObserver__VTable vtable;
};

struct LegacyTimelineState {
    struct LegacyTimelineState__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_ILegacyTimelineStateObserver___Fields {
    struct ILegacyTimelineStateObserver__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_ILegacyTimelineStateObserver_ {
    struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___Fields fields;
};

struct ILegacyTimelineStateObserver__Array {
    struct ILegacyTimelineStateObserver__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ILegacyTimelineStateObserver *vector[32];
};

struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver_ {
    struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_GenericPuppet___Fields {
    struct GenericPuppet__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_GenericPuppet_ {
    struct List_1_GenericPuppet___Class *klass;
    MonitorData *monitor;
    struct List_1_GenericPuppet___Fields fields;
};

struct ILegacyTimelineStateObserver__Array__VTable {
};

struct ILegacyTimelineStateObserver__Array__StaticFields {
};

struct ILegacyTimelineStateObserver__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ILegacyTimelineStateObserver__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ILegacyTimelineStateObserver__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_ILegacyTimelineStateObserver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct ILegacyTimelineStateObserver__Array *_emptyArray;
};

struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Timeline_ILegacyTimelineStateObserver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct GenericPuppet__Array *_emptyArray;
};

struct List_1_GenericPuppet___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_GenericPuppet___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Action_1_Single_ *OnPreviewablesSampledCallback;
    struct Action *OnTimelineStateChangeCallback;
    struct List_1_Moon_Timeline_ILegacyTimelineStateObserver_ *s_observers;
    struct GameObject *s_ori;
    struct List_1_GenericPuppet_ *s_puppets;
    struct Animator *s_oriAnimator;
    bool m_inPreviewMode;
    bool m_isOriAnimatorDrivingOri;
    bool m_shouldTimelineAnimateCamera;
};

struct LegacyTimelineState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTimelineState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTimelineState__VTable vtable;
};

struct LegacyTimelineState_c {
    struct LegacyTimelineState_c__Class *klass;
    MonitorData *monitor;
};

struct LegacyTimelineState_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LegacyTimelineState_c__StaticFields {
    struct LegacyTimelineState_c *__9;
};

struct LegacyTimelineState_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTimelineState_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTimelineState_c__VTable vtable;
};

}
