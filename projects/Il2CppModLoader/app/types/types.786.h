namespace app {
struct MoonTelemetrySceneEvent_EventSceneState__Enum__VTable {
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

struct MoonTelemetrySceneEvent_EventSceneState__Enum__StaticFields {
};

struct MoonTelemetrySceneEvent_EventSceneState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetrySceneEvent_EventSceneState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetrySceneEvent_EventSceneState__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetrySceneEvent_SceneData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetrySceneEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryCharacterHeartbeatEvent {
    struct MoonTelemetryCharacterHeartbeatEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryCharacterHeartbeatEvent__Fields fields;
};

struct __declspec(align(8)) List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Fields {
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ {
    struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Class *klass;
    MonitorData *monitor;
    struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Fields fields;
};

enum class TelemetryCleanupEvents__Enum : int32_t {
    Cleanup = 0x0000000a,
    Fader = 0x0000000b,
    Gc = 0x0000000c,
    GcAuto = 0x0000000d,
    GcDebug = 0x0000000e,
    GcFader = 0x0000000f,
    GcProactive = 0x00000010,
    HeapGrow = 0x00000011,
    Menu = 0x00000012,
    Panic = 0x00000013,
    PanicHint = 0x00000014,
};

struct TelemetryCleanupEvents__Enum__Boxed {
    struct TelemetryCleanupEvents__Enum__Class *klass;
    MonitorData *monitor;
    TelemetryCleanupEvents__Enum value;
    
};

struct MoonTelemetryCharacterHeartbeatEvent_Cleanup {
    TelemetryCleanupEvents__Enum Event;
    
    struct Vector2 Position;
    struct String *SceneName;
};

struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Boxed {
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup fields;
};

struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array {
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup vector[32];
};

struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ {
    struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Class *klass;
    MonitorData *monitor;
};

struct TelemetryCleanupEvents__Enum__VTable {
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

struct TelemetryCleanupEvents__Enum__StaticFields {
};

struct TelemetryCleanupEvents__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TelemetryCleanupEvents__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TelemetryCleanupEvents__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__VTable vtable;
};

struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__VTable {
};

struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__StaticFields {
};

struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__VTable vtable;
};

struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___StaticFields {
};

struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array *_emptyArray;
};

struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ *s_cleanupEventsIncoming;
    struct List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ *s_cleanupEventsSerialized;
};

struct MoonTelemetryCharacterHeartbeatEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryCharacterHeartbeatEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryCharacterHeartbeatEvent__VTable vtable;
};

struct MoonTelemetryPlayerSessionStartEvent__Fields {
    struct MoonTelemetryClientBaseEvent__Fields _;
    int32_t OS;
    struct String *OSVersion;
    struct String *Language;
    struct String *Region_1;
    int32_t PrimaryDisplayWidth;
    int32_t PrimaryDisplayHeight;
    struct String *CPU;
    struct String *GPU;
    int32_t RAM;
    int32_t VRAM;
    struct String *DxLevel;
    bool GraphicsMultiThreaded;
    int32_t GraphicsShaderLevel;
    int32_t DeviceType;
    int32_t ProcessorCount;
    int32_t ProcessorFrequency;
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryPlayerSessionStartEvent {
    struct MoonTelemetryPlayerSessionStartEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryPlayerSessionStartEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryPlayerSessionStartEvent__VTable vtable;
};

enum class RestartReason__Enum : int32_t {
    NotSpecified = 0x00000000,
    Quit = 0x00000001,
    ProfileSwitch = 0x00000002,
    Error = 0x00000003,
};

struct RestartReason__Enum__Boxed {
    struct RestartReason__Enum__Class *klass;
    MonitorData *monitor;
    RestartReason__Enum value;
    
};

struct MoonTelemetryPlayerSessionEndEvent__Fields {
    struct MoonTelemetryClientBaseEvent__Fields _;
    RestartReason__Enum ExitType;
    
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryPlayerSessionEndEvent {
    struct MoonTelemetryPlayerSessionEndEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryPlayerSessionEndEvent__Fields fields;
};

struct RestartReason__Enum__VTable {
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

struct RestartReason__Enum__StaticFields {
};

struct RestartReason__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RestartReason__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RestartReason__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryPlayerSessionEndEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryPlayerSessionEndEvent__VTable vtable;
};

struct MoonTelemetryAbilityChangeEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    int32_t TargetSlot;
    int32_t PreviousAbility;
    int32_t CurrentAbility;
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryAbilityChangeEvent {
    struct MoonTelemetryAbilityChangeEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryAbilityChangeEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryAbilityChangeEvent__VTable vtable;
};

enum class MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum : int32_t {
    ExpOrbPickup = 0x00000000,
    SkillPointPicku = 0x00000001,
    EnergyOrbPickup = 0x00000002,
    MaxEnergyContainerPickup = 0x00000003,
    KeystonePickup = 0x00000004,
    RestoreHealthPickup = 0x00000005,
    MaxHealthContainerPickup = 0x00000006,
    MapStonePickup = 0x00000007,
    SpiritShardPickup = 0x00000008,
    QuestItemPickup = 0x00000009,
    ShardSlotUpgradePickup = 0x0000000a,
    OrePickup = 0x0000000b,
};

struct MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Boxed {
    struct MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class *klass;
    MonitorData *monitor;
    MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum value;
    
};

struct MoonTelemetryItemTransactionEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum ItemID;
    
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryItemTransactionEvent {
    struct MoonTelemetryItemTransactionEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryItemTransactionEvent__Fields fields;
};

struct MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__VTable {
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

struct MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__StaticFields {
};

struct MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryItemTransactionEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryItemTransactionEvent__VTable vtable;
};

enum class MoonTelemetryShrineStartEvent_ShrineID__Enum : int32_t {
    NotDefined = 0x00000000,
    ShrineHammer = 0x00000001,
    ShrineLaser = 0x00000002,
    ShrineMouldwooDepths = 0x00000003,
    ShrineOfFall = 0x00000004,
    ShrinePortal = 0x00000005,
    ShrineProjectile = 0x00000006,
    ShrineTeleport = 0x00000007,
};

struct MoonTelemetryShrineStartEvent_ShrineID__Enum__Boxed {
    struct MoonTelemetryShrineStartEvent_ShrineID__Enum__Class *klass;
    MonitorData *monitor;
    MoonTelemetryShrineStartEvent_ShrineID__Enum value;
    
};

struct MoonTelemetryShrineStartEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    MoonTelemetryShrineStartEvent_ShrineID__Enum ShrineSceneID;
    
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryShrineStartEvent {
    struct MoonTelemetryShrineStartEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryShrineStartEvent__Fields fields;
};

struct MoonTelemetryShrineStartEvent_ShrineID__Enum__VTable {
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

struct MoonTelemetryShrineStartEvent_ShrineID__Enum__StaticFields {
};

struct MoonTelemetryShrineStartEvent_ShrineID__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryShrineStartEvent_ShrineID__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryShrineStartEvent_ShrineID__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryShrineStartEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryShrineStartEvent__VTable vtable;
};

enum class MoonTelemetryShrineEndEvent_ShrineResult__Enum : int32_t {
    Won = 0x00000000,
    Timeout = 0x00000001,
    Died = 0x00000002,
};

struct MoonTelemetryShrineEndEvent_ShrineResult__Enum__Boxed {
    struct MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class *klass;
    MonitorData *monitor;
    MoonTelemetryShrineEndEvent_ShrineResult__Enum value;
    
};

struct MoonTelemetryShrineEndEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    float ChallengeTime;
    MoonTelemetryShrineEndEvent_ShrineResult__Enum Result;
    
    MoonTelemetryShrineStartEvent_ShrineID__Enum ShrineSceneID;
    
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryShrineEndEvent {
    struct MoonTelemetryShrineEndEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryShrineEndEvent__Fields fields;
};

struct MoonTelemetryShrineEndEvent_ShrineResult__Enum__VTable {
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

struct MoonTelemetryShrineEndEvent_ShrineResult__Enum__StaticFields {
};

struct MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryShrineEndEvent_ShrineResult__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryShrineEndEvent_ShrineResult__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryShrineEndEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryShrineEndEvent__VTable vtable;
};

enum class MoonTelemetryRacesStartEvent_RaceID__Enum : int32_t {
    NotDefined = 0x00000000,
    lumaPools = 0x00000001,
    wellspringGlades = 0x00000002,
    baursReach = 0x00000003,
    kwolokDrop = 0x00000004,
    inkwaterMarsh = 0x00000005,
    silentWoodland = 0x00000006,
    desert = 0x00000007,
    mouldwoodDepths = 0x00000008,
};

struct MoonTelemetryRacesStartEvent_RaceID__Enum__Boxed {
    struct MoonTelemetryRacesStartEvent_RaceID__Enum__Class *klass;
    MonitorData *monitor;
    MoonTelemetryRacesStartEvent_RaceID__Enum value;
    
};

struct MoonTelemetryRacesStartEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    MoonTelemetryRacesStartEvent_RaceID__Enum RaceSceneID;
    
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryRacesStartEvent {
    struct MoonTelemetryRacesStartEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryRacesStartEvent__Fields fields;
};

struct MoonTelemetryRacesStartEvent_RaceID__Enum__VTable {
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

struct MoonTelemetryRacesStartEvent_RaceID__Enum__StaticFields {
};

struct MoonTelemetryRacesStartEvent_RaceID__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryRacesStartEvent_RaceID__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryRacesStartEvent_RaceID__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryRacesStartEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryRacesStartEvent__VTable vtable;
};

struct MoonTelemetryRacesEndEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    float RaceTime;
    int32_t LeaderboardPlacing;
    MoonTelemetryRacesStartEvent_RaceID__Enum RaceSceneID;
    
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryRacesEndEvent {
    struct MoonTelemetryRacesEndEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryRacesEndEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryRacesEndEvent__VTable vtable;
};

struct MoonTelemetryDebugLogEvent__Fields {
    struct MoonTelemetryClientBaseEvent__Fields _;
    struct String *Info;
    struct String *_Name_k__BackingField;
};

struct MoonTelemetryDebugLogEvent {
    struct MoonTelemetryDebugLogEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryDebugLogEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryDebugLogEvent__VTable vtable;
};

struct MoonTelemetrySettingsEvent__Fields {
    struct MoonTelemetryClientBaseEvent__Fields _;
    bool VSync;
    int32_t ScreenWidth;
    int32_t ScreenHeight;
    bool FullScreen;
    struct String *_Name_k__BackingField;
};

struct MoonTelemetrySettingsEvent {
    struct MoonTelemetrySettingsEvent__Class *klass;
    MonitorData *monitor;
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

}
