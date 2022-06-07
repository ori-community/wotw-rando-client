namespace app {
struct PlayerData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerData__StaticFields {
};

struct PlayerData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerData__VTable vtable;
};

struct __declspec(align(8)) List_1_Moon_Telemetry_GameSession___Fields {
    struct GameSession__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Telemetry_GameSession_ {
    struct List_1_Moon_Telemetry_GameSession___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Telemetry_GameSession___Fields fields;
};

struct List_1_Moon_Telemetry_GameSession___VTable {
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

struct List_1_Moon_Telemetry_GameSession___StaticFields {
    struct GameSession__Array *_emptyArray;
};

struct List_1_Moon_Telemetry_GameSession___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Telemetry_GameSession___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_Telemetry_GameSession___VTable vtable;
};

struct TelemetryComunicator {
    struct TelemetryComunicator__Class *klass;
    MonitorData *monitor;
};

struct TelemetryComunicator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Send;
};

struct TelemetryComunicator__StaticFields {
    struct String *s_webServerUrl;
    struct SwaggerComunicator *s_instance;
};

struct TelemetryComunicator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TelemetryComunicator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TelemetryComunicator__VTable vtable;
};

struct TelemetryComunicator_c {
    struct TelemetryComunicator_c__Class *klass;
    MonitorData *monitor;
};

struct TelemetryComunicator_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TelemetryComunicator_c__StaticFields {
    struct TelemetryComunicator_c *__9;
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ *__9__4_0;
};

struct TelemetryComunicator_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TelemetryComunicator_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TelemetryComunicator_c__VTable vtable;
};

struct AddSession__Fields {
    struct SwaggerRequest_1_StatusCallback___Fields _;
    struct GameSessionRecord *m_gameSession;
};

struct AddSession {
    struct AddSession__Class *klass;
    MonitorData *monitor;
    struct AddSession__Fields fields;
};

struct __declspec(align(8)) GameSessionRecord__Fields {
    struct EnvironmentInfo *m_environmentInfo;
    struct String__Array *m_levelsPlayed;
};

struct GameSessionRecord {
    struct GameSessionRecord__Class *klass;
    MonitorData *monitor;
    struct GameSessionRecord__Fields fields;
};

struct GameSessionRecord__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameSessionRecord__StaticFields {
};

struct GameSessionRecord__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameSessionRecord__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameSessionRecord__VTable vtable;
};

struct AddSession__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Path;
    VirtualInvokeData get_Method;
    VirtualInvokeData get_DataReader;
    VirtualInvokeData get_Headers;
    VirtualInvokeData CreateRequestCallbackObject;
    VirtualInvokeData Finish;
};

struct AddSession__StaticFields {
};

struct AddSession__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AddSession__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AddSession__VTable vtable;
};

struct __declspec(align(8)) TelemetryTimelineScene__Fields {
    struct MoonTelemetrySceneEvent__Array *m_sceneEvents;
    struct Single__Array *m_eventsTimelineLength;
    struct String *m_sceneName;
    float s_startTime;
    float m_pixelsPerSecond;
    float m_scaleFactor;
    struct GUIContent *m_lastTextGuiContent;
};

struct TelemetryTimelineScene {
    struct TelemetryTimelineScene__Class *klass;
    MonitorData *monitor;
    struct TelemetryTimelineScene__Fields fields;
};

struct MoonTelemetrySceneEvent__Array {
    struct MoonTelemetrySceneEvent__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonTelemetrySceneEvent *vector[32];
};

struct MoonTelemetrySceneEvent__Array__VTable {
};

struct MoonTelemetrySceneEvent__Array__StaticFields {
};

struct MoonTelemetrySceneEvent__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetrySceneEvent__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetrySceneEvent__Array__VTable vtable;
};

struct TelemetryTimelineScene__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TelemetryTimelineScene__StaticFields {
    struct Rect s_tempRect;
    bool s_isGUIInited;
    struct GUIStyle *s_labelStyle;
    struct GUIStyle *s_zoneGuiStyle;
    struct Texture2D *s_1x1Texture;
};

struct TelemetryTimelineScene__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TelemetryTimelineScene__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TelemetryTimelineScene__VTable vtable;
};

struct DrawingContext {
    struct Rect Rect;
    float PixelsPerSecond;
    float ScaleFactor;
    float StartTime;
    float StartX;
};

struct DrawingContext__Boxed {
    struct DrawingContext__Class *klass;
    MonitorData *monitor;
    struct DrawingContext fields;
};

struct DrawingContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DrawingContext__StaticFields {
};

struct DrawingContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DrawingContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DrawingContext__VTable vtable;
};

struct DataPointIcon {
    struct DataPointIcon__Class *klass;
    MonitorData *monitor;
};

struct DataPointIcon__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataPointIcon__StaticFields {
};

struct DataPointIcon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataPointIcon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataPointIcon__VTable vtable;
};

struct __declspec(align(8)) DataPointIcon_Icons_AssetDatabaseTexture__Fields {
    struct String *m_path;
    struct Texture2D *m_texture;
};

struct DataPointIcon_Icons_AssetDatabaseTexture {
    struct DataPointIcon_Icons_AssetDatabaseTexture__Class *klass;
    MonitorData *monitor;
    struct DataPointIcon_Icons_AssetDatabaseTexture__Fields fields;
};

struct DataPointIcon_Icons_AssetDatabaseTexture__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataPointIcon_Icons_AssetDatabaseTexture__StaticFields {
};

struct DataPointIcon_Icons_AssetDatabaseTexture__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataPointIcon_Icons_AssetDatabaseTexture__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataPointIcon_Icons_AssetDatabaseTexture__VTable vtable;
};

struct __declspec(align(8)) IProfilingSetting__Fields {
    bool m_defaultState;
};

struct IProfilingSetting {
    struct IProfilingSetting__Class *klass;
    MonitorData *monitor;
    struct IProfilingSetting__Fields fields;
};

struct SimpleBoolToggleProfilingSetting__Fields {
    struct IProfilingSetting__Fields _;
};

struct SimpleBoolToggleProfilingSetting {
    struct SimpleBoolToggleProfilingSetting__Class *klass;
    MonitorData *monitor;
    struct SimpleBoolToggleProfilingSetting__Fields fields;
};

struct WwiseEnabledProfilingSetting__Fields {
    struct SimpleBoolToggleProfilingSetting__Fields _;
};

struct WwiseEnabledProfilingSetting {
    struct WwiseEnabledProfilingSetting__Class *klass;
    MonitorData *monitor;
    struct WwiseEnabledProfilingSetting__Fields fields;
};

enum class ProfilingSettings_SettingAction__Enum : int32_t {
    DoNothing = 0x00000000,
    Enable = 0x00000001,
    Disable = 0x00000002,
    ResetToDefault = 0x00000003,
};

struct ProfilingSettings_SettingAction__Enum__Boxed {
    struct ProfilingSettings_SettingAction__Enum__Class *klass;
    MonitorData *monitor;
    ProfilingSettings_SettingAction__Enum value;
    
};

struct ProfilingSettings_SettingAction__Enum__VTable {
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

struct ProfilingSettings_SettingAction__Enum__StaticFields {
};

struct ProfilingSettings_SettingAction__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProfilingSettings_SettingAction__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProfilingSettings_SettingAction__Enum__VTable vtable;
};

struct SimpleBoolToggleProfilingSetting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData CacheDefault;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData ApplyState;
    VirtualInvokeData Enable;
    VirtualInvokeData Disable;
    VirtualInvokeData __unknown_2;
};

struct SimpleBoolToggleProfilingSetting__StaticFields {
};

struct SimpleBoolToggleProfilingSetting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleBoolToggleProfilingSetting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleBoolToggleProfilingSetting__VTable vtable;
};

struct WwiseEnabledProfilingSetting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_SettingType;
    VirtualInvokeData CacheDefault;
    VirtualInvokeData GetState;
    VirtualInvokeData ApplyState;
    VirtualInvokeData Enable;
    VirtualInvokeData Disable;
    VirtualInvokeData SetState;
};

struct WwiseEnabledProfilingSetting__StaticFields {
};

struct WwiseEnabledProfilingSetting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WwiseEnabledProfilingSetting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WwiseEnabledProfilingSetting__VTable vtable;
};

struct IProfilingSetting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData CacheDefault;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData ApplyState;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
};

struct IProfilingSetting__StaticFields {
};

struct IProfilingSetting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IProfilingSetting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IProfilingSetting__VTable vtable;
};

struct ProfilingSettings_SettingType__Enum__Array__Array {
    struct ProfilingSettings_SettingType__Enum__Array__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ProfilingSettings_SettingType__Enum__Array *vector[32];
};

struct ProfilingSettings_SettingType__Enum__Array__Array__VTable {
};

struct ProfilingSettings_SettingType__Enum__Array__Array__StaticFields {
};

struct ProfilingSettings_SettingType__Enum__Array__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProfilingSettings_SettingType__Enum__Array__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProfilingSettings_SettingType__Enum__Array__Array__VTable vtable;
};

struct __declspec(align(8)) ProfilingSettings_BulkSettings__Fields {
    struct ProfilingSettings_SettingType__Enum__Array *SettingsToDisable;
    struct ProfilingSettings_SettingType__Enum__Array *SettingsToEnable;
};

struct ProfilingSettings_BulkSettings {
    struct ProfilingSettings_BulkSettings__Class *klass;
    MonitorData *monitor;
    struct ProfilingSettings_BulkSettings__Fields fields;
};

struct ProfilingSettings_BulkSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ProfilingSettings_BulkSettings__StaticFields {
};

struct ProfilingSettings_BulkSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProfilingSettings_BulkSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProfilingSettings_BulkSettings__VTable vtable;
};

struct ProfilingSettings {
    struct ProfilingSettings__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_GameController_ProfilingConfiguration_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    struct Dictionary_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    int32_t hashCode;
    int32_t next;
    GameController_ProfilingConfiguration__Enum key;
    
    struct ProfilingSettings_Setting__Array *value;
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ fields;
};

struct __declspec(align(8)) ProfilingSettings_Setting__Fields {
    ProfilingSettings_SettingType__Enum _Type_k__BackingField;
    
    ProfilingSettings_SettingAction__Enum _Action_k__BackingField;
    
};

struct ProfilingSettings_Setting {
    struct ProfilingSettings_Setting__Class *klass;
    MonitorData *monitor;
    struct ProfilingSettings_Setting__Fields fields;
};

struct ProfilingSettings_Setting__Array {
    struct ProfilingSettings_Setting__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ProfilingSettings_Setting *vector[32];
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array {
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ vector[32];
};

struct IEqualityComparer_1_GameController_ProfilingConfiguration_ {
    struct IEqualityComparer_1_GameController_ProfilingConfiguration___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Fields {
    struct Dictionary_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Fields fields;
};

struct GameController_ProfilingConfiguration__Enum__Array {
    struct GameController_ProfilingConfiguration__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    GameController_ProfilingConfiguration__Enum vector[32];
};

struct IEnumerator_1_GameController_ProfilingConfiguration_ {
    struct IEnumerator_1_GameController_ProfilingConfiguration___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Fields {
    struct Dictionary_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Fields fields;
};

struct ProfilingSettings_Setting__Array__Array {
    struct ProfilingSettings_Setting__Array__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ProfilingSettings_Setting__Array *vector[32];
};

struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_GameController_ProfilingConfiguration_ {
    struct ICollection_1_GameController_ProfilingConfiguration___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    struct ICollection_1_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    GameController_ProfilingConfiguration__Enum key;
    
    struct ProfilingSettings_Setting__Array *value;
};

struct KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Boxed {
    struct KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ fields;
};

struct KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array {
    struct KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    struct IEnumerator_1_KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_GameController_ProfilingConfiguration_ {
    struct IEnumerable_1_GameController_ProfilingConfiguration___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    struct Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    int32_t hashCode;
    int32_t next;
    ProfilingSettings_SettingType__Enum key;
    
    struct IProfilingSetting *value;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array {
    struct Dictionary_2_TKey_TValue_Entry_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Fields {
    struct Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Fields {
    struct Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Fields fields;
};

struct IProfilingSetting__Array {
    struct IProfilingSetting__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IProfilingSetting *vector[32];
};

struct IEnumerator_1_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    struct IEnumerator_1_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ {
    struct ICollection_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    struct ICollection_1_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    ProfilingSettings_SettingType__Enum key;
    
    struct IProfilingSetting *value;
};

struct KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Boxed {
    struct KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ fields;
};

struct KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array {
    struct KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    struct IEnumerator_1_KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    struct IEnumerable_1_Moon_Telemetry_Performance_Settings_IProfilingSetting___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Fields {
    struct ProfilingSettings_SettingType__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ {
    struct List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Fields fields;
};

struct ProfilingSettings_Setting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ProfilingSettings_Setting__StaticFields {
};

struct ProfilingSettings_Setting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProfilingSettings_Setting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProfilingSettings_Setting__VTable vtable;
};

struct ProfilingSettings_Setting__Array__VTable {
};

struct ProfilingSettings_Setting__Array__StaticFields {
};

struct ProfilingSettings_Setting__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProfilingSettings_Setting__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProfilingSettings_Setting__Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__VTable vtable;
};

struct IEqualityComparer_1_GameController_ProfilingConfiguration___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_GameController_ProfilingConfiguration___StaticFields {
};

struct IEqualityComparer_1_GameController_ProfilingConfiguration___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_GameController_ProfilingConfiguration___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_GameController_ProfilingConfiguration___VTable vtable;
};

struct GameController_ProfilingConfiguration__Enum__Array__VTable {
};

struct GameController_ProfilingConfiguration__Enum__Array__StaticFields {
};

struct GameController_ProfilingConfiguration__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameController_ProfilingConfiguration__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameController_ProfilingConfiguration__Enum__Array__VTable vtable;
};

struct IEnumerator_1_GameController_ProfilingConfiguration___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_GameController_ProfilingConfiguration___StaticFields {
};

struct IEnumerator_1_GameController_ProfilingConfiguration___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_GameController_ProfilingConfiguration___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_GameController_ProfilingConfiguration___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___VTable vtable;
};

}
