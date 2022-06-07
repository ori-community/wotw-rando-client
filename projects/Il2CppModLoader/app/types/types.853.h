namespace app {
struct AdvancedDebugMenuPage_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdvancedDebugMenuPage_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdvancedDebugMenuPage_c__VTable vtable;
};

struct __declspec(align(8)) AdvancedDebugMenuPage_c_DisplayClass65_0__Fields {
    struct AchievementAsset *cheevo;
};

struct AdvancedDebugMenuPage_c_DisplayClass65_0 {
    struct AdvancedDebugMenuPage_c_DisplayClass65_0__Class *klass;
    MonitorData *monitor;
    struct AdvancedDebugMenuPage_c_DisplayClass65_0__Fields fields;
};

struct AdvancedDebugMenuPage_c_DisplayClass65_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AdvancedDebugMenuPage_c_DisplayClass65_0__StaticFields {
};

struct AdvancedDebugMenuPage_c_DisplayClass65_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdvancedDebugMenuPage_c_DisplayClass65_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdvancedDebugMenuPage_c_DisplayClass65_0__VTable vtable;
};

struct __declspec(align(8)) AdvancedDebugMenuPage_c_DisplayClass66_0__Fields {
    struct CacheData *firstNotAwarded;
};

struct AdvancedDebugMenuPage_c_DisplayClass66_0 {
    struct AdvancedDebugMenuPage_c_DisplayClass66_0__Class *klass;
    MonitorData *monitor;
    struct AdvancedDebugMenuPage_c_DisplayClass66_0__Fields fields;
};

struct AdvancedDebugMenuPage_c_DisplayClass66_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AdvancedDebugMenuPage_c_DisplayClass66_0__StaticFields {
};

struct AdvancedDebugMenuPage_c_DisplayClass66_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdvancedDebugMenuPage_c_DisplayClass66_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdvancedDebugMenuPage_c_DisplayClass66_0__VTable vtable;
};

struct GeneralDebugMenuPage__Fields {
    struct MonoBehaviour__Fields _;
    struct String *m_name;
    bool m_showSceneFrameworkDebug;
    bool m_showSceneFrameworkDebugExtended;
    bool m_dynamicHudDebug;
    struct List_1_SpiritShardType_ *m_shards;
    struct List_1_DebugTeleportSettings_ *Areas;
    struct List_1_DebugTeleportSettings_ *Cinematics;
    struct List_1_DebugTeleportSettings_ *Vignettes;
    struct List_1_DebugTeleportSettings_ *Escapes;
    struct List_1_DebugTeleportSettings_ *GameStates;
    struct List_1_DebugTeleportSettings_ *CombatPresets;
    struct StressTesterCinematicReporter *m_stressTesterCinematicReporter;
    struct GeneralDebugMenuPage_SceneInfo__Array *allScenes;
    struct GeneralDebugMenuPage_SceneInfo__Array *gameScenes;
    struct GeneralDebugMenuPage_SceneInfo__Array *revisedScenes;
};

struct GeneralDebugMenuPage {
    struct GeneralDebugMenuPage__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage__Fields fields;
};

struct StressTesterCinematicReporter__Fields {
    struct MonoBehaviour__Fields _;
    struct GameplayToCinematicEntity *m_lastSetGameplayToCinematicEntity;
    struct FixedDurationSceneEntity *m_lastSetFixedDurationSceneEntity;
    struct String *m_currentGameplayToCinematicEntityHierarchy;
    struct String *m_currentFixedDurationSceneEntityHierarchy;
};

struct StressTesterCinematicReporter {
    struct StressTesterCinematicReporter__Class *klass;
    MonitorData *monitor;
    struct StressTesterCinematicReporter__Fields fields;
};

enum class FixedDurationSceneEntity_StopBehaviourType__Enum : int32_t {
    StopTimeline = 0x00000000,
    None = 0x00000001,
};

struct FixedDurationSceneEntity_StopBehaviourType__Enum__Boxed {
    struct FixedDurationSceneEntity_StopBehaviourType__Enum__Class *klass;
    MonitorData *monitor;
    FixedDurationSceneEntity_StopBehaviourType__Enum value;
    
};

enum class ScenesManager_SceneManagementMode__Enum : int32_t {
    Gameplay = 0x00000000,
    Cinematic = 0x00000001,
    Explicit = 0x00000002,
    Legacy = 0x00000003,
    GameplayUtility = 0x00000004,
    Static = 0x00000005,
    Count = 0x00000006,
};

struct ScenesManager_SceneManagementMode__Enum__Boxed {
    struct ScenesManager_SceneManagementMode__Enum__Class *klass;
    MonitorData *monitor;
    ScenesManager_SceneManagementMode__Enum value;
    
};

struct FixedDurationSceneEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_ *m_timeline;
    FixedDurationSceneEntity_StopBehaviourType__Enum StopBehaviour;
    
    bool m_isBlockingLoad;
    struct SceneMetaData *SceneMetaData;
    bool HideSceneOnStop;
    bool IsCameraCut;
    bool UnloadSceneOnStop;
    ScenesManager_SceneManagementMode__Enum SceneMode;
    
    bool CanPreload;
    struct MoonTimeline *TargetTimeline;
    struct RuntimeSceneMetaData *m_runtimeSceneMetaData;
    bool m_isLoaded;
    bool m_startedTimeline;
    bool m_hasFirstFrameProcess;
    int32_t m_startedFrameCount;
    struct IContext *m_context;
    struct RuntimeSceneMetaData *m_rootMetaData;
    float TimeSoFar;
    struct List_1_Moon_MoonReference_1__2 *m_timelines;
    struct List_1_Moon_Timeline_IEventDescriptor_ *m_events;
    struct ITrimController *_TrimController_k__BackingField;
};

struct FixedDurationSceneEntity {
    struct FixedDurationSceneEntity__Class *klass;
    MonitorData *monitor;
    struct FixedDurationSceneEntity__Fields fields;
};

struct GeneralDebugMenuPage_SceneInfo {
    int32_t index;
    struct String *label;
};

struct GeneralDebugMenuPage_SceneInfo__Boxed {
    struct GeneralDebugMenuPage_SceneInfo__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_SceneInfo fields;
};

struct GeneralDebugMenuPage_SceneInfo__Array {
    struct GeneralDebugMenuPage_SceneInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GeneralDebugMenuPage_SceneInfo vector[32];
};

struct FixedDurationSceneEntity_StopBehaviourType__Enum__VTable {
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

struct FixedDurationSceneEntity_StopBehaviourType__Enum__StaticFields {
};

struct FixedDurationSceneEntity_StopBehaviourType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FixedDurationSceneEntity_StopBehaviourType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FixedDurationSceneEntity_StopBehaviourType__Enum__VTable vtable;
};

struct ScenesManager_SceneManagementMode__Enum__VTable {
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

struct ScenesManager_SceneManagementMode__Enum__StaticFields {
};

struct ScenesManager_SceneManagementMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenesManager_SceneManagementMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenesManager_SceneManagementMode__Enum__VTable vtable;
};

struct FixedDurationSceneEntity__VTable {
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
};

struct FixedDurationSceneEntity__StaticFields {
    struct Int32__Array *m_eventIds;
    struct String__Array *m_eventNames;
};

struct FixedDurationSceneEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FixedDurationSceneEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FixedDurationSceneEntity__VTable vtable;
};

struct StressTesterCinematicReporter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StressTesterCinematicReporter__StaticFields {
    bool m_showDebug;
};

struct StressTesterCinematicReporter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StressTesterCinematicReporter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StressTesterCinematicReporter__VTable vtable;
};

struct GeneralDebugMenuPage_SceneInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_SceneInfo__StaticFields {
};

struct GeneralDebugMenuPage_SceneInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_SceneInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_SceneInfo__VTable vtable;
};

struct GeneralDebugMenuPage_SceneInfo__Array__VTable {
};

struct GeneralDebugMenuPage_SceneInfo__Array__StaticFields {
};

struct GeneralDebugMenuPage_SceneInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_SceneInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_SceneInfo__Array__VTable vtable;
};

struct GeneralDebugMenuPage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ColumnOffset;
    VirtualInvokeData GetItems;
};

struct GeneralDebugMenuPage__StaticFields {
};

struct GeneralDebugMenuPage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass17_0__Fields {
    struct DynamicCameraTargetting *dynamicCameraTargetting;
    struct CameraOffsetController *offsetController;
};

struct GeneralDebugMenuPage_c_DisplayClass17_0 {
    struct GeneralDebugMenuPage_c_DisplayClass17_0__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass17_0__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass17_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass17_0__StaticFields {
};

struct GeneralDebugMenuPage_c_DisplayClass17_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c_DisplayClass17_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c_DisplayClass17_0__VTable vtable;
};

struct GeneralDebugMenuPage_c {
    struct GeneralDebugMenuPage_c__Class *klass;
    MonitorData *monitor;
};

struct Func_1_UberWaterControl_VisualDebugMode___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_UberWaterControl_VisualDebugMode_ {
    struct Func_1_UberWaterControl_VisualDebugMode___Class *klass;
    MonitorData *monitor;
    struct Func_1_UberWaterControl_VisualDebugMode___Fields fields;
};

enum class UberWaterControl_VisualDebugMode__Enum : int32_t {
    Off = 0x00000000,
    Mesh = 0x00000001,
    SolidBounds = 0x00000002,
    Both = 0x00000003,
};

struct UberWaterControl_VisualDebugMode__Enum__Boxed {
    struct UberWaterControl_VisualDebugMode__Enum__Class *klass;
    MonitorData *monitor;
    UberWaterControl_VisualDebugMode__Enum value;
    
};

struct Action_1_UberWaterControl_VisualDebugMode___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_UberWaterControl_VisualDebugMode_ {
    struct Action_1_UberWaterControl_VisualDebugMode___Class *klass;
    MonitorData *monitor;
    struct Action_1_UberWaterControl_VisualDebugMode___Fields fields;
};

struct Comparison_1_GeneralDebugMenuPage_SceneInfo___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_GeneralDebugMenuPage_SceneInfo_ {
    struct Comparison_1_GeneralDebugMenuPage_SceneInfo___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_GeneralDebugMenuPage_SceneInfo___Fields fields;
};

struct UberWaterControl_VisualDebugMode__Enum__VTable {
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

struct UberWaterControl_VisualDebugMode__Enum__StaticFields {
};

struct UberWaterControl_VisualDebugMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberWaterControl_VisualDebugMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberWaterControl_VisualDebugMode__Enum__VTable vtable;
};

struct Func_1_UberWaterControl_VisualDebugMode___VTable {
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

struct Func_1_UberWaterControl_VisualDebugMode___StaticFields {
};

struct Func_1_UberWaterControl_VisualDebugMode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_1_UberWaterControl_VisualDebugMode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_1_UberWaterControl_VisualDebugMode___VTable vtable;
};

struct Action_1_UberWaterControl_VisualDebugMode___VTable {
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

struct Action_1_UberWaterControl_VisualDebugMode___StaticFields {
};

struct Action_1_UberWaterControl_VisualDebugMode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_UberWaterControl_VisualDebugMode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_UberWaterControl_VisualDebugMode___VTable vtable;
};

struct Comparison_1_GeneralDebugMenuPage_SceneInfo___VTable {
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

struct Comparison_1_GeneralDebugMenuPage_SceneInfo___StaticFields {
};

struct Comparison_1_GeneralDebugMenuPage_SceneInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_GeneralDebugMenuPage_SceneInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_GeneralDebugMenuPage_SceneInfo___VTable vtable;
};

struct GeneralDebugMenuPage_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c__StaticFields {
    struct GeneralDebugMenuPage_c *__9;
    struct Func_1_Boolean_ *__9__17_6;
    struct Action_1_Boolean_ *__9__17_7;
    struct Func_1_Boolean_ *__9__18_0;
    struct Func_1_Boolean_ *__9__18_1;
    struct Func_1_Boolean_ *__9__18_2;
    struct Action_1_Boolean_ *__9__18_3;
    struct Func_1_String_ *__9__18_4;
    struct Func_1_Boolean_ *__9__18_5;
    struct Action_1_Boolean_ *__9__18_6;
    struct Func_1_Boolean_ *__9__18_7;
    struct Func_1_Int32_ *__9__18_8;
    struct Action_1_Int32_ *__9__18_9;
    struct Func_1_Int32_ *__9__18_10;
    struct Action_1_Int32_ *__9__18_11;
    struct Func_1_Boolean_ *__9__18_16;
    struct Action_1_Boolean_ *__9__18_17;
    struct Func_1_Int32_ *__9__18_20;
    struct Func_1_Boolean_ *__9__18_21;
    struct Action_1_Boolean_ *__9__18_22;
    struct Func_1_Boolean_ *__9__18_23;
    struct Action_1_Boolean_ *__9__18_24;
    struct Func_1_Boolean_ *__9__18_29;
    struct Action_1_Boolean_ *__9__18_30;
    struct Func_1_Boolean_ *__9__18_31;
    struct Action_1_Boolean_ *__9__18_32;
    struct Func_1_Boolean_ *__9__18_35;
    struct Action_1_Boolean_ *__9__18_36;
    struct Func_1_Boolean_ *__9__18_37;
    struct Action_1_Boolean_ *__9__18_38;
    struct Func_1_Boolean_ *__9__18_39;
    struct Action_1_Boolean_ *__9__18_40;
    struct Func_1_Boolean_ *__9__18_41;
    struct Action_1_Boolean_ *__9__18_42;
    struct Func_1_Boolean_ *__9__18_43;
    struct Action_1_Boolean_ *__9__18_44;
    struct Func_1_Boolean_ *__9__18_45;
    struct Action_1_Boolean_ *__9__18_46;
    struct Func_1_Boolean_ *__9__18_47;
    struct Action_1_Boolean_ *__9__18_48;
    struct Func_1_Boolean_ *__9__18_49;
    struct Action_1_Boolean_ *__9__18_50;
    struct Func_1_Boolean_ *__9__18_51;
    struct Action_1_Boolean_ *__9__18_52;
    struct Func_1_Single_ *__9__18_53;
    struct Action_1_Single_ *__9__18_54;
    struct Func_1_Single_ *__9__18_55;
    struct Action_1_Single_ *__9__18_56;
    struct Func_1_Single_ *__9__18_57;
    struct Action_1_Single_ *__9__18_58;
    struct Func_1_Int32_ *__9__18_59;
    struct Action_1_Int32_ *__9__18_60;
    struct Func_1_Boolean_ *__9__18_61;
    struct Action_1_Boolean_ *__9__18_62;
    struct Func_1_Boolean_ *__9__18_63;
    struct Action_1_Boolean_ *__9__18_64;
    struct Func_1_Boolean_ *__9__18_65;
    struct Action_1_Boolean_ *__9__18_66;
    struct Func_1_Boolean_ *__9__18_67;
    struct Action_1_Boolean_ *__9__18_68;
    struct Func_1_Boolean_ *__9__18_69;
    struct Action_1_Boolean_ *__9__18_70;
    struct Func_1_Boolean_ *__9__18_71;
    struct Action_1_Boolean_ *__9__18_72;
    struct Func_1_Boolean_ *__9__18_73;
    struct Action_1_Boolean_ *__9__18_74;
    struct Func_1_Boolean_ *__9__18_75;
    struct Action_1_Boolean_ *__9__18_76;
    struct Func_1_Boolean_ *__9__18_77;
    struct Action_1_Boolean_ *__9__18_78;
    struct Func_1_Boolean_ *__9__18_79;
    struct Action_1_Boolean_ *__9__18_80;
    struct Func_1_Int32_ *__9__18_81;
    struct Action_1_Int32_ *__9__18_82;
    struct Func_1_Int32_ *__9__18_83;
    struct Action_1_Int32_ *__9__18_84;
    struct Func_1_Int32_ *__9__18_85;
    struct Action_1_Int32_ *__9__18_86;
    struct Func_1_Int32_ *__9__18_87;
    struct Action_1_Int32_ *__9__18_88;
    struct Func_1_Int32_ *__9__18_89;
    struct Action_1_Int32_ *__9__18_90;
    struct Func_1_Int32_ *__9__18_91;
    struct Action_1_Int32_ *__9__18_92;
    struct Func_1_Boolean_ *__9__18_93;
    struct Action_1_Boolean_ *__9__18_94;
    struct Func_1_Boolean_ *__9__18_95;
    struct Action_1_Boolean_ *__9__18_96;
    struct Func_1_Boolean_ *__9__18_97;
    struct Action_1_Boolean_ *__9__18_98;
    struct Func_1_Boolean_ *__9__18_99;
    struct Action_1_Boolean_ *__9__18_100;
    struct Func_1_Boolean_ *__9__18_101;
    struct Action_1_Boolean_ *__9__18_102;
    struct Func_1_Boolean_ *__9__18_103;
    struct Func_1_Boolean_ *__9__18_104;
    struct Action_1_Boolean_ *__9__18_105;
    struct Func_1_Boolean_ *__9__18_106;
    struct Action_1_Boolean_ *__9__18_107;
    struct Func_1_Boolean_ *__9__18_108;
    struct Action_1_Boolean_ *__9__18_109;
    struct Func_1_Boolean_ *__9__18_110;
    struct Action_1_Boolean_ *__9__18_111;
    struct Func_1_UberWaterControl_VisualDebugMode_ *__9__18_114;
    struct Action_1_UberWaterControl_VisualDebugMode_ *__9__18_115;
    struct Func_1_Boolean_ *__9__18_116;
    struct Action_1_Boolean_ *__9__18_117;
    struct Func_1_Boolean_ *__9__18_118;
    struct Action_1_Boolean_ *__9__18_119;
    struct Func_1_Boolean_ *__9__18_120;
    struct Action_1_Boolean_ *__9__18_121;
    struct Func_1_Boolean_ *__9__18_122;
    struct Action_1_Boolean_ *__9__18_123;
    struct Func_1_Int32_ *__9__18_124;
    struct Action_1_Int32_ *__9__18_125;
    struct Func_1_Boolean_ *__9__18_126;
    struct Action_1_Boolean_ *__9__18_127;
    struct Func_1_Boolean_ *__9__18_128;
    struct Action_1_Boolean_ *__9__18_129;
    struct Func_1_Boolean_ *__9__18_130;
    struct Action_1_Boolean_ *__9__18_131;
    struct Func_1_Boolean_ *__9__32_3;
    struct Comparison_1_GeneralDebugMenuPage_SceneInfo_ *__9__83_0;
};

struct GeneralDebugMenuPage_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass18_0__Fields {
    AbilityType__Enum ability;
    
    struct GeneralDebugMenuPage *__4__this;
};

struct GeneralDebugMenuPage_c_DisplayClass18_0 {
    struct GeneralDebugMenuPage_c_DisplayClass18_0__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass18_0__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass18_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass18_0__StaticFields {
};

struct GeneralDebugMenuPage_c_DisplayClass18_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c_DisplayClass18_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c_DisplayClass18_0__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass18_1__Fields {
    EquipmentType__Enum weapon;
    
    struct GeneralDebugMenuPage *__4__this;
};

struct GeneralDebugMenuPage_c_DisplayClass18_1 {
    struct GeneralDebugMenuPage_c_DisplayClass18_1__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass18_1__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass18_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass18_1__StaticFields {
};

struct GeneralDebugMenuPage_c_DisplayClass18_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c_DisplayClass18_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c_DisplayClass18_1__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass18_2__Fields {
    EquipmentType__Enum spell;
    
    struct GeneralDebugMenuPage *__4__this;
};

struct GeneralDebugMenuPage_c_DisplayClass18_2 {
    struct GeneralDebugMenuPage_c_DisplayClass18_2__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass18_2__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass18_2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass18_2__StaticFields {
};

struct GeneralDebugMenuPage_c_DisplayClass18_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c_DisplayClass18_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c_DisplayClass18_2__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass18_3__Fields {
    SpiritShardType__Enum shard;
    
    struct GeneralDebugMenuPage *__4__this;
};

struct GeneralDebugMenuPage_c_DisplayClass18_3 {
    struct GeneralDebugMenuPage_c_DisplayClass18_3__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass18_3__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass18_3__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass18_3__StaticFields {
};

struct GeneralDebugMenuPage_c_DisplayClass18_3__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c_DisplayClass18_3__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c_DisplayClass18_3__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass32_0__Fields {
    bool doTeleport;
    struct GeneralDebugMenuPage *__4__this;
};

struct GeneralDebugMenuPage_c_DisplayClass32_0 {
    struct GeneralDebugMenuPage_c_DisplayClass32_0__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass32_0__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass32_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass32_0__StaticFields {
};

struct GeneralDebugMenuPage_c_DisplayClass32_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c_DisplayClass32_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c_DisplayClass32_0__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass32_1__Fields {
    struct DebugTeleportSettings *setting;
    struct GeneralDebugMenuPage_c_DisplayClass32_0 *CS___8__locals1;
    struct DelayedAction_Action *__9__4;
    struct DelayedAction_Action *__9__5;
    struct DelayedAction_Action *__9__2;
    struct Action *__9__1;
};

struct GeneralDebugMenuPage_c_DisplayClass32_1 {
    struct GeneralDebugMenuPage_c_DisplayClass32_1__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass32_1__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass32_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass32_1__StaticFields {
};

struct GeneralDebugMenuPage_c_DisplayClass32_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c_DisplayClass32_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c_DisplayClass32_1__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass60_0__Fields {
    struct Vector3 position;
};

struct GeneralDebugMenuPage_c_DisplayClass60_0 {
    struct GeneralDebugMenuPage_c_DisplayClass60_0__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass60_0__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass60_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass60_0__StaticFields {
};

struct GeneralDebugMenuPage_c_DisplayClass60_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GeneralDebugMenuPage_c_DisplayClass60_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GeneralDebugMenuPage_c_DisplayClass60_0__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass85_0__Fields {
    struct GeneralDebugMenuPage_SceneInfo scene;
    struct GeneralDebugMenuPage *__4__this;
};

struct GeneralDebugMenuPage_c_DisplayClass85_0 {
    struct GeneralDebugMenuPage_c_DisplayClass85_0__Class *klass;
    MonitorData *monitor;
    struct GeneralDebugMenuPage_c_DisplayClass85_0__Fields fields;
};

struct GeneralDebugMenuPage_c_DisplayClass85_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GeneralDebugMenuPage_c_DisplayClass85_0__StaticFields {
};

}
