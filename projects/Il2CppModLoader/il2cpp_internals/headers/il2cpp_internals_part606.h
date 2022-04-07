namespace app {
struct MoonTelemetryDeathEvent {
  struct MoonTelemetryDeathEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryDeathEvent__Fields fields;
};
struct MoonTelemetryDeathEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryDeathEvent__StaticFields {
};
struct MoonTelemetryDeathEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryDeathEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryDeathEvent__VTable vtable;
};

struct MoonTelemetryPlayerSessionPauseEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryPlayerSessionPauseEvent {
  struct MoonTelemetryPlayerSessionPauseEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryPlayerSessionPauseEvent__Fields fields;
};
struct MoonTelemetryPlayerSessionPauseEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryPlayerSessionPauseEvent__StaticFields {
};
struct MoonTelemetryPlayerSessionPauseEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryPlayerSessionPauseEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryPlayerSessionPauseEvent__VTable vtable;
};

struct MoonTelemetryPlayerSessionResumeEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  float PauseTime;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryPlayerSessionResumeEvent {
  struct MoonTelemetryPlayerSessionResumeEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryPlayerSessionResumeEvent__Fields fields;
};
struct MoonTelemetryPlayerSessionResumeEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryPlayerSessionResumeEvent__StaticFields {
};
struct MoonTelemetryPlayerSessionResumeEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryPlayerSessionResumeEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryPlayerSessionResumeEvent__VTable vtable;
};

struct MoonTelemetryPlayerSuspendScreenOpenEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  enum MenuScreenManager_Screens__Enum Screen;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryPlayerSuspendScreenOpenEvent {
  struct MoonTelemetryPlayerSuspendScreenOpenEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryPlayerSuspendScreenOpenEvent__Fields fields;
};
struct MoonTelemetryPlayerSuspendScreenOpenEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryPlayerSuspendScreenOpenEvent__StaticFields {
};
struct MoonTelemetryPlayerSuspendScreenOpenEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryPlayerSuspendScreenOpenEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryPlayerSuspendScreenOpenEvent__VTable vtable;
};

struct MoonTelemetryPlayerSuspendScreenClosedEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  enum MenuScreenManager_Screens__Enum Screen;
  float TimeOnScreen;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryPlayerSuspendScreenClosedEvent {
  struct MoonTelemetryPlayerSuspendScreenClosedEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryPlayerSuspendScreenClosedEvent__Fields fields;
};
struct MoonTelemetryPlayerSuspendScreenClosedEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryPlayerSuspendScreenClosedEvent__StaticFields {
};
struct MoonTelemetryPlayerSuspendScreenClosedEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryPlayerSuspendScreenClosedEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryPlayerSuspendScreenClosedEvent__VTable vtable;
};

struct MoonTelemetryClientHeartbeatEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  int32_t MinFPS;
  int32_t AvgFPS;
  int32_t MaxFPS;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryClientHeartbeatEvent {
  struct MoonTelemetryClientHeartbeatEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryClientHeartbeatEvent__Fields fields;
};
struct MoonTelemetryClientHeartbeatEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryClientHeartbeatEvent__StaticFields {
};
struct MoonTelemetryClientHeartbeatEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryClientHeartbeatEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryClientHeartbeatEvent__VTable vtable;
};

enum MoonTelemetrySceneEvent_EventSceneState__Enum : int32_t {
  MoonTelemetrySceneEvent_EventSceneState__Enum_LoadingBegin = 0,
  MoonTelemetrySceneEvent_EventSceneState__Enum_LoadingEnd = 1,
  MoonTelemetrySceneEvent_EventSceneState__Enum_AwakeBegin = 2,
  MoonTelemetrySceneEvent_EventSceneState__Enum_AwakeEnd = 3,
  MoonTelemetrySceneEvent_EventSceneState__Enum_StartBegin = 4,
  MoonTelemetrySceneEvent_EventSceneState__Enum_StartEnd = 5,
  MoonTelemetrySceneEvent_EventSceneState__Enum_EnableBegin = 6,
  MoonTelemetrySceneEvent_EventSceneState__Enum_EnableEnd = 7,
  MoonTelemetrySceneEvent_EventSceneState__Enum_DisableBegin = 8,
  MoonTelemetrySceneEvent_EventSceneState__Enum_DisableEnd = 9,
  MoonTelemetrySceneEvent_EventSceneState__Enum_UnloadTransformsBegin = 10,
  MoonTelemetrySceneEvent_EventSceneState__Enum_UnloadTransformsEnd = 11,
  MoonTelemetrySceneEvent_EventSceneState__Enum_UnloadResourcesBegin = 12,
  MoonTelemetrySceneEvent_EventSceneState__Enum_UnloadResourcesEnd = 13,
  MoonTelemetrySceneEvent_EventSceneState__Enum_None = 14,
};
struct MoonTelemetrySceneEvent_EventSceneState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTelemetrySceneEvent_EventSceneState__Enum value;
};
struct MoonTelemetrySceneEvent_SceneData {
  struct String * Name;
  enum MoonTelemetrySceneEvent_EventSceneState__Enum State;
  float Time;
};
struct MoonTelemetrySceneEvent_SceneData__Boxed {
  struct MoonTelemetrySceneEvent_SceneData__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetrySceneEvent_SceneData fields;
};
struct MoonTelemetrySceneEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  struct MoonTelemetrySceneEvent_SceneData ThisSceneData;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetrySceneEvent {
  struct MoonTelemetrySceneEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetrySceneEvent__Fields fields;
};
struct MoonTelemetrySceneEvent_SceneData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetrySceneEvent_SceneData__StaticFields {
};
struct MoonTelemetrySceneEvent_SceneData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetrySceneEvent_SceneData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetrySceneEvent_SceneData__VTable vtable;
};
struct MoonTelemetrySceneEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetrySceneEvent__StaticFields {
};
struct MoonTelemetrySceneEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetrySceneEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetrySceneEvent__VTable vtable;
};

struct MoonTelemetryCharacterHeartbeatEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  int32_t MinFPS;
  int32_t AvgFPS;
  int32_t MaxFPS;
  int32_t WorstHistoryAverage;
  float AvgFrameTime;
  float MaxFrameTime;
  int32_t AvailableMemory;
  float m_sceneSlowedTime;
  float m_sceneStalledTime;
  float AvgCPUTime1;
  float AvgCPUTime2;
  float AvgCPUTime3;
  float AvgCPUTime4;
  float AvgGPUTime1;
  float AvgGPUTime2;
  float AvgGPUTime3;
  float AvgGPUTime4;
  float AvgFrameTime1;
  float AvgFrameTime2;
  float AvgFrameTime3;
  float AvgFrameTime4;
  float AvgDRSScaleX1;
  float AvgDRSScaleX2;
  float AvgDRSScaleX3;
  float AvgDRSScaleX4;
  int32_t MaxConsecutiveFramesCpuTimeOver25Ms;
  int32_t MaxConsecutiveFramesCpuTimeOver33Ms;
  int32_t MaxConsecutiveFramesCpuTimeOver50Ms;
  int32_t MaxConsecutiveFramesGpuTimeOver25Ms;
  int32_t MaxConsecutiveFramesGpuTimeOver33Ms;
  int32_t MaxConsecutiveFramesGpuTimeOver50Ms;
  int32_t MaxConsecutiveFramesFrameTimeOver25Ms;
  int32_t MaxConsecutiveFramesFrameTimeOver33Ms;
  int32_t MaxConsecutiveFramesFrameTimeOver50Ms;
  int32_t MaxConsecutiveFramesFrameTimeOver1000Ms;
  int32_t MaxSceneUnloadsSinceLastResourceCollect;
  int32_t InstantiationsUnpooled;
  int32_t InstantiationsExhausted;
  int32_t InstantiationsPooled;
  uint64_t HeapSize;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryCharacterHeartbeatEvent {
  struct MoonTelemetryCharacterHeartbeatEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryCharacterHeartbeatEvent__Fields fields;
};
struct __declspec(align(8)) List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Fields {
  struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ {
  struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Fields fields;
};
enum TelemetryCleanupEvents__Enum : int32_t {
  TelemetryCleanupEvents__Enum_Cleanup = 10,
  TelemetryCleanupEvents__Enum_Fader = 11,
  TelemetryCleanupEvents__Enum_Gc = 12,
  TelemetryCleanupEvents__Enum_GcAuto = 13,
  TelemetryCleanupEvents__Enum_GcDebug = 14,
  TelemetryCleanupEvents__Enum_GcFader = 15,
  TelemetryCleanupEvents__Enum_GcProactive = 16,
  TelemetryCleanupEvents__Enum_HeapGrow = 17,
  TelemetryCleanupEvents__Enum_Menu = 18,
  TelemetryCleanupEvents__Enum_Panic = 19,
  TelemetryCleanupEvents__Enum_PanicHint = 20,
};
struct TelemetryCleanupEvents__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TelemetryCleanupEvents__Enum value;
};
struct MoonTelemetryCharacterHeartbeatEvent_Cleanup {
  enum TelemetryCleanupEvents__Enum Event;
  struct Vector2 Position;
  struct String * SceneName;
};
struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Boxed {
  struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryCharacterHeartbeatEvent_Cleanup fields;
};
struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array {
  struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonTelemetryCharacterHeartbeatEvent_Cleanup vector[32];
};
struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ {
  struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Class *klass;
  struct MonitorData *monitor;
};
struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__StaticFields {
};
struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__VTable vtable;
};
struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___StaticFields {
};
struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___VTable vtable;
};
struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___VTable {
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
struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___StaticFields {
  struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array * _emptyArray;
};
struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___VTable vtable;
};
struct MoonTelemetryCharacterHeartbeatEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryCharacterHeartbeatEvent__StaticFields {
  struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ * s_cleanupEventsIncoming;
  struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ * s_cleanupEventsSerialized;
};
struct MoonTelemetryCharacterHeartbeatEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryCharacterHeartbeatEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryCharacterHeartbeatEvent__VTable vtable;
};

struct MoonTelemetryPlayerSessionStartEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  int32_t OS;
  struct String * OSVersion;
  struct String * Language;
  struct String * Region;
  int32_t PrimaryDisplayWidth;
  int32_t PrimaryDisplayHeight;
  struct String * CPU;
  struct String * GPU;
  int32_t RAM;
  int32_t VRAM;
  struct String * DxLevel;
  bool GraphicsMultiThreaded;
  int32_t GraphicsShaderLevel;
  int32_t DeviceType;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryPlayerSessionStartEvent {
  struct MoonTelemetryPlayerSessionStartEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryPlayerSessionStartEvent__Fields fields;
};
struct MoonTelemetryPlayerSessionStartEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryPlayerSessionStartEvent__StaticFields {
};
struct MoonTelemetryPlayerSessionStartEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryPlayerSessionStartEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryPlayerSessionStartEvent__VTable vtable;
};

enum RestartReason__Enum : int32_t {
  RestartReason__Enum_NotSpecified = 0,
  RestartReason__Enum_Quit = 1,
  RestartReason__Enum_ProfileSwitch = 2,
  RestartReason__Enum_Error = 3,
};
struct RestartReason__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RestartReason__Enum value;
};
struct MoonTelemetryPlayerSessionEndEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  enum RestartReason__Enum ExitType;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryPlayerSessionEndEvent {
  struct MoonTelemetryPlayerSessionEndEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryPlayerSessionEndEvent__Fields fields;
};
struct MoonTelemetryPlayerSessionEndEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryPlayerSessionEndEvent__StaticFields {
};
struct MoonTelemetryPlayerSessionEndEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryPlayerSessionEndEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryPlayerSessionEndEvent__VTable vtable;
};

struct MoonTelemetryAbilityChangeEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  int32_t TargetSlot;
  int32_t PreviousAbility;
  int32_t CurrentAbility;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryAbilityChangeEvent {
  struct MoonTelemetryAbilityChangeEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryAbilityChangeEvent__Fields fields;
};
struct MoonTelemetryAbilityChangeEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryAbilityChangeEvent__StaticFields {
};
struct MoonTelemetryAbilityChangeEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryAbilityChangeEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryAbilityChangeEvent__VTable vtable;
};

enum MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum : int32_t {
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_ExpOrbPickup = 0,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_SkillPointPicku = 1,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_EnergyOrbPickup = 2,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_MaxEnergyContainerPickup = 3,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_KeystonePickup = 4,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_RestoreHealthPickup = 5,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_MaxHealthContainerPickup = 6,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_MapStonePickup = 7,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_SpiritShardPickup = 8,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_QuestItemPickup = 9,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_ShardSlotUpgradePickup = 10,
  MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum_OrePickup = 11,
};
struct MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum value;
};
struct MoonTelemetryItemTransactionEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  enum MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum ItemID;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryItemTransactionEvent {
  struct MoonTelemetryItemTransactionEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryItemTransactionEvent__Fields fields;
};
struct MoonTelemetryItemTransactionEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryItemTransactionEvent__StaticFields {
};
struct MoonTelemetryItemTransactionEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryItemTransactionEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryItemTransactionEvent__VTable vtable;
};

enum MoonTelemetryShrineStartEvent_ShrineID__Enum : int32_t {
  MoonTelemetryShrineStartEvent_ShrineID__Enum_NotDefined = 0,
  MoonTelemetryShrineStartEvent_ShrineID__Enum_ShrineHammer = 1,
  MoonTelemetryShrineStartEvent_ShrineID__Enum_ShrineLaser = 2,
  MoonTelemetryShrineStartEvent_ShrineID__Enum_ShrineMouldwooDepths = 3,
  MoonTelemetryShrineStartEvent_ShrineID__Enum_ShrineOfFall = 4,
  MoonTelemetryShrineStartEvent_ShrineID__Enum_ShrinePortal = 5,
  MoonTelemetryShrineStartEvent_ShrineID__Enum_ShrineProjectile = 6,
  MoonTelemetryShrineStartEvent_ShrineID__Enum_ShrineTeleport = 7,
};
struct MoonTelemetryShrineStartEvent_ShrineID__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTelemetryShrineStartEvent_ShrineID__Enum value;
};
struct MoonTelemetryShrineStartEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  enum MoonTelemetryShrineStartEvent_ShrineID__Enum ShrineSceneID;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryShrineStartEvent {
  struct MoonTelemetryShrineStartEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryShrineStartEvent__Fields fields;
};
struct MoonTelemetryShrineStartEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryShrineStartEvent__StaticFields {
};
struct MoonTelemetryShrineStartEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryShrineStartEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryShrineStartEvent__VTable vtable;
};

enum MoonTelemetryShrineEndEvent_ShrineResult__Enum : int32_t {
  MoonTelemetryShrineEndEvent_ShrineResult__Enum_Won = 0,
  MoonTelemetryShrineEndEvent_ShrineResult__Enum_Timeout = 1,
  MoonTelemetryShrineEndEvent_ShrineResult__Enum_Died = 2,
};
struct MoonTelemetryShrineEndEvent_ShrineResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTelemetryShrineEndEvent_ShrineResult__Enum value;
};
struct MoonTelemetryShrineEndEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  float ChallengeTime;
  enum MoonTelemetryShrineEndEvent_ShrineResult__Enum Result;
  enum MoonTelemetryShrineStartEvent_ShrineID__Enum ShrineSceneID;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryShrineEndEvent {
  struct MoonTelemetryShrineEndEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryShrineEndEvent__Fields fields;
};
struct MoonTelemetryShrineEndEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryShrineEndEvent__StaticFields {
};
struct MoonTelemetryShrineEndEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryShrineEndEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryShrineEndEvent__VTable vtable;
};

enum MoonTelemetryRacesStartEvent_RaceID__Enum : int32_t {
  MoonTelemetryRacesStartEvent_RaceID__Enum_NotDefined = 0,
  MoonTelemetryRacesStartEvent_RaceID__Enum_lumaPools = 1,
  MoonTelemetryRacesStartEvent_RaceID__Enum_wellspringGlades = 2,
  MoonTelemetryRacesStartEvent_RaceID__Enum_baursReach = 3,
  MoonTelemetryRacesStartEvent_RaceID__Enum_kwolokDrop = 4,
  MoonTelemetryRacesStartEvent_RaceID__Enum_inkwaterMarsh = 5,
  MoonTelemetryRacesStartEvent_RaceID__Enum_silentWoodland = 6,
  MoonTelemetryRacesStartEvent_RaceID__Enum_desert = 7,
  MoonTelemetryRacesStartEvent_RaceID__Enum_mouldwoodDepths = 8,
};
struct MoonTelemetryRacesStartEvent_RaceID__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTelemetryRacesStartEvent_RaceID__Enum value;
};
struct MoonTelemetryRacesStartEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  enum MoonTelemetryRacesStartEvent_RaceID__Enum RaceSceneID;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryRacesStartEvent {
  struct MoonTelemetryRacesStartEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryRacesStartEvent__Fields fields;
};
struct MoonTelemetryRacesStartEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryRacesStartEvent__StaticFields {
};
struct MoonTelemetryRacesStartEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryRacesStartEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryRacesStartEvent__VTable vtable;
};

struct MoonTelemetryRacesEndEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  float RaceTime;
  int32_t LeaderboardPlacing;
  enum MoonTelemetryRacesStartEvent_RaceID__Enum RaceSceneID;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryRacesEndEvent {
  struct MoonTelemetryRacesEndEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryRacesEndEvent__Fields fields;
};
struct MoonTelemetryRacesEndEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryRacesEndEvent__StaticFields {
};
struct MoonTelemetryRacesEndEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryRacesEndEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryRacesEndEvent__VTable vtable;
};

struct MoonTelemetryDebugLogEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  struct String * Info;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryDebugLogEvent {
  struct MoonTelemetryDebugLogEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryDebugLogEvent__Fields fields;
};
struct MoonTelemetryDebugLogEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetryDebugLogEvent__StaticFields {
};
struct MoonTelemetryDebugLogEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryDebugLogEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryDebugLogEvent__VTable vtable;
};

struct MoonTelemetrySettingsEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  bool VSync;
  int32_t ScreenWidth;
  int32_t ScreenHeight;
  bool FullScreen;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetrySettingsEvent {
  struct MoonTelemetrySettingsEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetrySettingsEvent__Fields fields;
};
struct MoonTelemetrySettingsEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData SynchronousInitialize;
  VirtualInvokeData AsynchronousInitialize;
  VirtualInvokeData get_Name;
  VirtualInvokeData SerializeToObject;
};
struct MoonTelemetrySettingsEvent__StaticFields {
};
struct MoonTelemetrySettingsEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetrySettingsEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetrySettingsEvent__VTable vtable;
};

struct NetworkTest__Fields {
  struct MonoBehaviour__Fields _;
  struct String * SiteId;
  struct String * Player;
  struct String * ReplayDataString;
};
struct NetworkTest {
  struct NetworkTest__Class *klass;
  struct MonitorData *monitor;
  struct NetworkTest__Fields fields;
};
struct NetworkTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NetworkTest__StaticFields {
  struct String * HOST;
  struct String * headerType;
  struct String * headerTypeField;
  struct String * XSTSToken;
  struct String * m_fullUrl;
};
struct NetworkTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetworkTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetworkTest__VTable vtable;
};

struct NetworkTest_c {
  struct NetworkTest_c__Class *klass;
  struct MonitorData *monitor;
};
struct NetworkTest_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NetworkTest_c__StaticFields {
  struct NetworkTest_c * __9;
  struct Action_1_StatusCallback_ * __9__6_0;
  struct Action_1_StatusCallback_ * __9__7_0;
};
struct NetworkTest_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetworkTest_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetworkTest_c__VTable vtable;
};

struct __declspec(align(8)) NetworkTest_sendTelemetryCoroutine_d_15__Fields {
  int32_t __1__state;
  struct Object * __2__current;
};
struct NetworkTest_sendTelemetryCoroutine_d_15 {
  struct NetworkTest_sendTelemetryCoroutine_d_15__Class *klass;
  struct MonitorData *monitor;
  struct NetworkTest_sendTelemetryCoroutine_d_15__Fields fields;
};
struct NetworkTest_sendTelemetryCoroutine_d_15__VTable {
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
struct NetworkTest_sendTelemetryCoroutine_d_15__StaticFields {
};
struct NetworkTest_sendTelemetryCoroutine_d_15__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetworkTest_sendTelemetryCoroutine_d_15__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetworkTest_sendTelemetryCoroutine_d_15__VTable vtable;
};

struct STCDemo__Fields {
  struct SaveSerialize__Fields _;
  struct ActionSequence * Action;
  bool m_executed;
};
struct STCDemo {
  struct STCDemo__Class *klass;
  struct MonitorData *monitor;
  struct STCDemo__Fields fields;
};
struct STCDemo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct STCDemo__StaticFields {
};
struct STCDemo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct STCDemo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct STCDemo__VTable vtable;
};

struct UberStateBoolCondition__Fields {
  struct Condition_1__Fields _;
  struct SerializedBooleanUberState * BooleanDescriptor;
  bool Value;
  bool m_validateResult;
  bool m_evaluatedAtLeastOnce;
  struct IUberState__Array * m_affectingUberStates;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};}