namespace app {
struct GeneralDebugMenuPage {
  struct GeneralDebugMenuPage__Class *klass;
  struct MonitorData *monitor;
  struct GeneralDebugMenuPage__Fields fields;
};
struct StressTesterCinematicReporter__Fields {
  struct MonoBehaviour__Fields _;
  struct GameplayToCinematicEntity * m_lastSetGameplayToCinematicEntity;
  struct FixedDurationSceneEntity * m_lastSetFixedDurationSceneEntity;
  struct String * m_currentGameplayToCinematicEntityHierarchy;
  struct String * m_currentFixedDurationSceneEntityHierarchy;
};
struct StressTesterCinematicReporter {
  struct StressTesterCinematicReporter__Class *klass;
  struct MonitorData *monitor;
  struct StressTesterCinematicReporter__Fields fields;
};
enum FixedDurationSceneEntity_StopBehaviourType__Enum : int32_t {
  FixedDurationSceneEntity_StopBehaviourType__Enum_StopTimeline = 0,
  FixedDurationSceneEntity_StopBehaviourType__Enum_None = 1,
};
struct FixedDurationSceneEntity_StopBehaviourType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FixedDurationSceneEntity_StopBehaviourType__Enum value;
};
enum ScenesManager_SceneManagementMode__Enum : int32_t {
  ScenesManager_SceneManagementMode__Enum_Gameplay = 0,
  ScenesManager_SceneManagementMode__Enum_Cinematic = 1,
  ScenesManager_SceneManagementMode__Enum_Explicit = 2,
  ScenesManager_SceneManagementMode__Enum_Legacy = 3,
  ScenesManager_SceneManagementMode__Enum_GameplayUtility = 4,
  ScenesManager_SceneManagementMode__Enum_Static = 5,
  ScenesManager_SceneManagementMode__Enum_Count = 6,
};
struct ScenesManager_SceneManagementMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScenesManager_SceneManagementMode__Enum value;
};
struct FixedDurationSceneEntity__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity_ * m_timeline;
  enum FixedDurationSceneEntity_StopBehaviourType__Enum StopBehaviour;
  bool m_isBlockingLoad;
  struct SceneMetaData * SceneMetaData;
  bool HideSceneOnStop;
  bool IsCameraCut;
  bool UnloadSceneOnStop;
  enum ScenesManager_SceneManagementMode__Enum SceneMode;
  bool CanPreload;
  struct MoonTimeline * TargetTimeline;
  struct RuntimeSceneMetaData * m_runtimeSceneMetaData;
  bool m_isLoaded;
  bool m_startedTimeline;
  bool m_hasFirstFrameProcess;
  int32_t m_startedFrameCount;
  struct IContext * m_context;
  struct RuntimeSceneMetaData * m_rootMetaData;
  float TimeSoFar;
  struct List_1_Moon_MoonReference_1__2 * m_timelines;
  struct List_1_Moon_Timeline_IEventDescriptor_ * m_events;
  struct ITrimController * _TrimController_k__BackingField;
};
struct FixedDurationSceneEntity {
  struct FixedDurationSceneEntity__Class *klass;
  struct MonitorData *monitor;
  struct FixedDurationSceneEntity__Fields fields;
};
struct GeneralDebugMenuPage_SceneInfo {
  int32_t index;
  struct String * label;
};
struct GeneralDebugMenuPage_SceneInfo__Boxed {
  struct GeneralDebugMenuPage_SceneInfo__Class *klass;
  struct MonitorData *monitor;
  struct GeneralDebugMenuPage_SceneInfo fields;
};
struct GeneralDebugMenuPage_SceneInfo__Array {
  struct GeneralDebugMenuPage_SceneInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GeneralDebugMenuPage_SceneInfo vector[32];
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
  struct Int32__Array * m_eventIds;
  struct String__Array * m_eventNames;
};
struct FixedDurationSceneEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FixedDurationSceneEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StressTesterCinematicReporter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_SceneInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_SceneInfo__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass17_0__Fields {
  struct DynamicCameraTargetting * dynamicCameraTargetting;
  struct CameraOffsetController * offsetController;
};
struct GeneralDebugMenuPage_c_DisplayClass17_0 {
  struct GeneralDebugMenuPage_c_DisplayClass17_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass17_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass17_0__VTable vtable;
};

struct GeneralDebugMenuPage_c {
  struct GeneralDebugMenuPage_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_UberWaterControl_VisualDebugMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_UberWaterControl_VisualDebugMode_ {
  struct Func_1_UberWaterControl_VisualDebugMode___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_UberWaterControl_VisualDebugMode___Fields fields;
};
enum UberWaterControl_VisualDebugMode__Enum : int32_t {
  UberWaterControl_VisualDebugMode__Enum_Off = 0,
  UberWaterControl_VisualDebugMode__Enum_Mesh = 1,
  UberWaterControl_VisualDebugMode__Enum_SolidBounds = 2,
  UberWaterControl_VisualDebugMode__Enum_Both = 3,
};
struct UberWaterControl_VisualDebugMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberWaterControl_VisualDebugMode__Enum value;
};
struct Action_1_UberWaterControl_VisualDebugMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UberWaterControl_VisualDebugMode_ {
  struct Action_1_UberWaterControl_VisualDebugMode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UberWaterControl_VisualDebugMode___Fields fields;
};
struct Comparison_1_GeneralDebugMenuPage_SceneInfo___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_GeneralDebugMenuPage_SceneInfo_ {
  struct Comparison_1_GeneralDebugMenuPage_SceneInfo___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_GeneralDebugMenuPage_SceneInfo___Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_UberWaterControl_VisualDebugMode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UberWaterControl_VisualDebugMode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_GeneralDebugMenuPage_SceneInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_GeneralDebugMenuPage_SceneInfo___VTable vtable;
};
struct GeneralDebugMenuPage_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GeneralDebugMenuPage_c__StaticFields {
  struct GeneralDebugMenuPage_c * __9;
  struct Func_1_Boolean_ * __9__17_6;
  struct Action_1_Boolean_ * __9__17_7;
  struct Func_1_Boolean_ * __9__18_0;
  struct Func_1_Boolean_ * __9__18_1;
  struct Func_1_Boolean_ * __9__18_2;
  struct Action_1_Boolean_ * __9__18_3;
  struct Func_1_String_ * __9__18_4;
  struct Func_1_Boolean_ * __9__18_5;
  struct Action_1_Boolean_ * __9__18_6;
  struct Func_1_Boolean_ * __9__18_7;
  struct Func_1_Int32_ * __9__18_8;
  struct Action_1_Int32_ * __9__18_9;
  struct Func_1_Int32_ * __9__18_10;
  struct Action_1_Int32_ * __9__18_11;
  struct Func_1_Boolean_ * __9__18_16;
  struct Action_1_Boolean_ * __9__18_17;
  struct Func_1_Int32_ * __9__18_20;
  struct Func_1_Boolean_ * __9__18_21;
  struct Action_1_Boolean_ * __9__18_22;
  struct Func_1_Boolean_ * __9__18_23;
  struct Action_1_Boolean_ * __9__18_24;
  struct Func_1_Boolean_ * __9__18_29;
  struct Action_1_Boolean_ * __9__18_30;
  struct Func_1_Boolean_ * __9__18_31;
  struct Action_1_Boolean_ * __9__18_32;
  struct Func_1_Boolean_ * __9__18_35;
  struct Action_1_Boolean_ * __9__18_36;
  struct Func_1_Boolean_ * __9__18_37;
  struct Action_1_Boolean_ * __9__18_38;
  struct Func_1_Boolean_ * __9__18_39;
  struct Action_1_Boolean_ * __9__18_40;
  struct Func_1_Boolean_ * __9__18_41;
  struct Action_1_Boolean_ * __9__18_42;
  struct Func_1_Boolean_ * __9__18_43;
  struct Action_1_Boolean_ * __9__18_44;
  struct Func_1_Boolean_ * __9__18_45;
  struct Action_1_Boolean_ * __9__18_46;
  struct Func_1_Boolean_ * __9__18_47;
  struct Action_1_Boolean_ * __9__18_48;
  struct Func_1_Boolean_ * __9__18_49;
  struct Action_1_Boolean_ * __9__18_50;
  struct Func_1_Boolean_ * __9__18_51;
  struct Action_1_Boolean_ * __9__18_52;
  struct Func_1_Single_ * __9__18_53;
  struct Action_1_Single_ * __9__18_54;
  struct Func_1_Single_ * __9__18_55;
  struct Action_1_Single_ * __9__18_56;
  struct Func_1_Single_ * __9__18_57;
  struct Action_1_Single_ * __9__18_58;
  struct Func_1_Int32_ * __9__18_59;
  struct Action_1_Int32_ * __9__18_60;
  struct Func_1_Boolean_ * __9__18_61;
  struct Action_1_Boolean_ * __9__18_62;
  struct Func_1_Boolean_ * __9__18_63;
  struct Action_1_Boolean_ * __9__18_64;
  struct Func_1_Boolean_ * __9__18_65;
  struct Action_1_Boolean_ * __9__18_66;
  struct Func_1_Boolean_ * __9__18_67;
  struct Action_1_Boolean_ * __9__18_68;
  struct Func_1_Boolean_ * __9__18_69;
  struct Action_1_Boolean_ * __9__18_70;
  struct Func_1_Boolean_ * __9__18_71;
  struct Action_1_Boolean_ * __9__18_72;
  struct Func_1_Boolean_ * __9__18_73;
  struct Action_1_Boolean_ * __9__18_74;
  struct Func_1_Boolean_ * __9__18_75;
  struct Action_1_Boolean_ * __9__18_76;
  struct Func_1_Boolean_ * __9__18_77;
  struct Action_1_Boolean_ * __9__18_78;
  struct Func_1_Boolean_ * __9__18_79;
  struct Action_1_Boolean_ * __9__18_80;
  struct Func_1_Int32_ * __9__18_81;
  struct Action_1_Int32_ * __9__18_82;
  struct Func_1_Int32_ * __9__18_83;
  struct Action_1_Int32_ * __9__18_84;
  struct Func_1_Int32_ * __9__18_85;
  struct Action_1_Int32_ * __9__18_86;
  struct Func_1_Int32_ * __9__18_87;
  struct Action_1_Int32_ * __9__18_88;
  struct Func_1_Int32_ * __9__18_89;
  struct Action_1_Int32_ * __9__18_90;
  struct Func_1_Int32_ * __9__18_91;
  struct Action_1_Int32_ * __9__18_92;
  struct Func_1_Boolean_ * __9__18_93;
  struct Action_1_Boolean_ * __9__18_94;
  struct Func_1_Boolean_ * __9__18_95;
  struct Action_1_Boolean_ * __9__18_96;
  struct Func_1_Boolean_ * __9__18_97;
  struct Action_1_Boolean_ * __9__18_98;
  struct Func_1_Boolean_ * __9__18_99;
  struct Action_1_Boolean_ * __9__18_100;
  struct Func_1_Boolean_ * __9__18_101;
  struct Action_1_Boolean_ * __9__18_102;
  struct Func_1_Boolean_ * __9__18_103;
  struct Func_1_Boolean_ * __9__18_104;
  struct Action_1_Boolean_ * __9__18_105;
  struct Func_1_Boolean_ * __9__18_106;
  struct Action_1_Boolean_ * __9__18_107;
  struct Func_1_Boolean_ * __9__18_108;
  struct Action_1_Boolean_ * __9__18_109;
  struct Func_1_Boolean_ * __9__18_110;
  struct Action_1_Boolean_ * __9__18_111;
  struct Func_1_UberWaterControl_VisualDebugMode_ * __9__18_114;
  struct Action_1_UberWaterControl_VisualDebugMode_ * __9__18_115;
  struct Func_1_Boolean_ * __9__18_116;
  struct Action_1_Boolean_ * __9__18_117;
  struct Func_1_Boolean_ * __9__18_118;
  struct Action_1_Boolean_ * __9__18_119;
  struct Func_1_Boolean_ * __9__18_120;
  struct Action_1_Boolean_ * __9__18_121;
  struct Func_1_Boolean_ * __9__18_122;
  struct Action_1_Boolean_ * __9__18_123;
  struct Func_1_Int32_ * __9__18_124;
  struct Action_1_Int32_ * __9__18_125;
  struct Func_1_Boolean_ * __9__18_126;
  struct Action_1_Boolean_ * __9__18_127;
  struct Func_1_Boolean_ * __9__18_128;
  struct Action_1_Boolean_ * __9__18_129;
  struct Func_1_Boolean_ * __9__18_130;
  struct Action_1_Boolean_ * __9__18_131;
  struct Func_1_Boolean_ * __9__32_3;
  struct Comparison_1_GeneralDebugMenuPage_SceneInfo_ * __9__83_0;
};
struct GeneralDebugMenuPage_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass18_0__Fields {
  enum AbilityType__Enum ability;
  struct GeneralDebugMenuPage * __4__this;
};
struct GeneralDebugMenuPage_c_DisplayClass18_0 {
  struct GeneralDebugMenuPage_c_DisplayClass18_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass18_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass18_0__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass18_1__Fields {
  enum EquipmentType__Enum weapon;
  struct GeneralDebugMenuPage * __4__this;
};
struct GeneralDebugMenuPage_c_DisplayClass18_1 {
  struct GeneralDebugMenuPage_c_DisplayClass18_1__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass18_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass18_1__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass18_2__Fields {
  enum EquipmentType__Enum spell;
  struct GeneralDebugMenuPage * __4__this;
};
struct GeneralDebugMenuPage_c_DisplayClass18_2 {
  struct GeneralDebugMenuPage_c_DisplayClass18_2__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass18_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass18_2__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass18_3__Fields {
  enum SpiritShardType__Enum shard;
  struct GeneralDebugMenuPage * __4__this;
};
struct GeneralDebugMenuPage_c_DisplayClass18_3 {
  struct GeneralDebugMenuPage_c_DisplayClass18_3__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass18_3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass18_3__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass32_0__Fields {
  bool doTeleport;
  struct GeneralDebugMenuPage * __4__this;
};
struct GeneralDebugMenuPage_c_DisplayClass32_0 {
  struct GeneralDebugMenuPage_c_DisplayClass32_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass32_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass32_0__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass32_1__Fields {
  struct DebugTeleportSettings * setting;
  struct GeneralDebugMenuPage_c_DisplayClass32_0 * CS___8__locals1;
  struct DelayedAction_Action * __9__4;
  struct DelayedAction_Action * __9__5;
  struct DelayedAction_Action * __9__2;
  struct Action * __9__1;
};
struct GeneralDebugMenuPage_c_DisplayClass32_1 {
  struct GeneralDebugMenuPage_c_DisplayClass32_1__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass32_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass32_1__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass60_0__Fields {
  struct Vector3 position;
};
struct GeneralDebugMenuPage_c_DisplayClass60_0 {
  struct GeneralDebugMenuPage_c_DisplayClass60_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass60_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass60_0__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_c_DisplayClass85_0__Fields {
  struct GeneralDebugMenuPage_SceneInfo scene;
  struct GeneralDebugMenuPage * __4__this;
};
struct GeneralDebugMenuPage_c_DisplayClass85_0 {
  struct GeneralDebugMenuPage_c_DisplayClass85_0__Class *klass;
  struct MonitorData *monitor;
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
struct GeneralDebugMenuPage_c_DisplayClass85_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_c_DisplayClass85_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_c_DisplayClass85_0__VTable vtable;
};

struct __declspec(align(8)) GeneralDebugMenuPage_GoToSceneRoutine_d_87__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct String * sceneName;
  struct RuntimeSceneMetaData * _sceneInformation_5__2;
};
struct GeneralDebugMenuPage_GoToSceneRoutine_d_87 {
  struct GeneralDebugMenuPage_GoToSceneRoutine_d_87__Class *klass;
  struct MonitorData *monitor;
  struct GeneralDebugMenuPage_GoToSceneRoutine_d_87__Fields fields;
};
struct GeneralDebugMenuPage_GoToSceneRoutine_d_87__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct GeneralDebugMenuPage_GoToSceneRoutine_d_87__StaticFields {
};
struct GeneralDebugMenuPage_GoToSceneRoutine_d_87__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralDebugMenuPage_GoToSceneRoutine_d_87__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralDebugMenuPage_GoToSceneRoutine_d_87__VTable vtable;
};

struct HierarchyDebugMenuPage__Fields {
  struct MonoBehaviour__Fields _;
  struct String * m_name;
  struct IDebugMenuPage * _Page_k__BackingField;
};
struct HierarchyDebugMenuPage {
  struct HierarchyDebugMenuPage__Class *klass;
  struct MonitorData *monitor;
  struct HierarchyDebugMenuPage__Fields fields;
};
struct HierarchyDebugMenuPage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ColumnOffset;
  VirtualInvokeData GetItems;
};
struct HierarchyDebugMenuPage__StaticFields {
};
struct HierarchyDebugMenuPage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HierarchyDebugMenuPage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HierarchyDebugMenuPage__VTable vtable;
};

struct LoadDebugMenuPage__Fields {
  struct MonoBehaviour__Fields _;
  struct String * m_name;
  struct List_1_LoadDebugMenuPage_DebugSaveInfo_ * m_saves;
};
struct LoadDebugMenuPage {
  struct LoadDebugMenuPage__Class *klass;
  struct MonitorData *monitor;
  struct LoadDebugMenuPage__Fields fields;
};
struct __declspec(align(8)) List_1_LoadDebugMenuPage_DebugSaveInfo___Fields {
  struct LoadDebugMenuPage_DebugSaveInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LoadDebugMenuPage_DebugSaveInfo_ {
  struct List_1_LoadDebugMenuPage_DebugSaveInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LoadDebugMenuPage_DebugSaveInfo___Fields fields;
};
struct LoadDebugMenuPage_DebugSaveInfo {
  struct String * Area;
  struct String * SaveName;
  struct String * Path;
  int32_t SortingArea;
  int32_t SortingSave;
};
struct LoadDebugMenuPage_DebugSaveInfo__Boxed {
  struct LoadDebugMenuPage_DebugSaveInfo__Class *klass;
  struct MonitorData *monitor;
  struct LoadDebugMenuPage_DebugSaveInfo fields;
};
struct LoadDebugMenuPage_DebugSaveInfo__Array {
  struct LoadDebugMenuPage_DebugSaveInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LoadDebugMenuPage_DebugSaveInfo vector[32];
};
struct IEnumerator_1_LoadDebugMenuPage_DebugSaveInfo_ {
  struct IEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Class *klass;
  struct MonitorData *monitor;
};
struct LoadDebugMenuPage_DebugSaveInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadDebugMenuPage_DebugSaveInfo__StaticFields {
};
struct LoadDebugMenuPage_DebugSaveInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadDebugMenuPage_DebugSaveInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadDebugMenuPage_DebugSaveInfo__VTable vtable;
};
struct IEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___StaticFields {
};
struct IEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___VTable vtable;
};
struct List_1_LoadDebugMenuPage_DebugSaveInfo___VTable {
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
struct List_1_LoadDebugMenuPage_DebugSaveInfo___StaticFields {
  struct LoadDebugMenuPage_DebugSaveInfo__Array * _emptyArray;
};
struct List_1_LoadDebugMenuPage_DebugSaveInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LoadDebugMenuPage_DebugSaveInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LoadDebugMenuPage_DebugSaveInfo___VTable vtable;
};
struct LoadDebugMenuPage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ColumnOffset;
  VirtualInvokeData GetItems;
};
struct LoadDebugMenuPage__StaticFields {
  bool LoadSaveUsed;
};
struct LoadDebugMenuPage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadDebugMenuPage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadDebugMenuPage__VTable vtable;
};

struct __declspec(align(8)) LoadDebugMenuPage_c_DisplayClass8_0__Fields {
  struct LoadDebugMenuPage_DebugSaveInfo save;
  struct LoadDebugMenuPage * __4__this;
};
struct LoadDebugMenuPage_c_DisplayClass8_0 {
  struct LoadDebugMenuPage_c_DisplayClass8_0__Class *klass;
  struct MonitorData *monitor;
  struct LoadDebugMenuPage_c_DisplayClass8_0__Fields fields;
};
struct LoadDebugMenuPage_c_DisplayClass8_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadDebugMenuPage_c_DisplayClass8_0__StaticFields {
};
struct LoadDebugMenuPage_c_DisplayClass8_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadDebugMenuPage_c_DisplayClass8_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadDebugMenuPage_c_DisplayClass8_0__VTable vtable;
};

struct LoadDebugMenuPage_c {
  struct LoadDebugMenuPage_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ {
  struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo___Fields fields;
};
struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo___VTable {
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
struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo___StaticFields {
};
struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo___VTable vtable;
};
struct LoadDebugMenuPage_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadDebugMenuPage_c__StaticFields {
  struct LoadDebugMenuPage_c * __9;
  struct Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * __9__11_0;
};
struct LoadDebugMenuPage_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadDebugMenuPage_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadDebugMenuPage_c__VTable vtable;
};

struct MiscDebugMenuPage__Fields {
  struct MonoBehaviour__Fields _;
  struct String * m_name;
  struct GameObject * NightberryPlaceholder;
  struct String * TestSceneName;
  struct SceneMetaData * TestScene;
};}