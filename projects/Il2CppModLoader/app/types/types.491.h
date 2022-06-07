namespace app {
struct ClientFocusChangeEventData {
    struct ClientFocusChangeEventData__Class *klass;
    MonitorData *monitor;
    struct ClientFocusChangeEventData__Fields fields;
};

struct __declspec(align(8)) ClientFocusChangePayload__Fields {
    struct String *ClientSessionID;
    struct Nullable_1_DateTime_ EventTimestamp;
    struct String *FocusID;
    bool FocusState;
    double FocusStateDuration;
};

struct ClientFocusChangePayload {
    struct ClientFocusChangePayload__Class *klass;
    MonitorData *monitor;
    struct ClientFocusChangePayload__Fields fields;
};

struct ClientFocusChangePayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ClientFocusChangePayload__StaticFields {
};

struct ClientFocusChangePayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClientFocusChangePayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClientFocusChangePayload__VTable vtable;
};

struct ClientFocusChangeEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ClientFocusChangeEventData__StaticFields {
};

struct ClientFocusChangeEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClientFocusChangeEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClientFocusChangeEventData__VTable vtable;
};

struct ClientSessionStartEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EntityLineage_1 *EntityLineage;
    struct String *OriginalEventId;
    struct DateTime OriginalTimestamp;
    struct ClientSessionStartPayload *Payload;
    struct EntityKey_9 *WriterEntity;
};

struct ClientSessionStartEventData {
    struct ClientSessionStartEventData__Class *klass;
    MonitorData *monitor;
    struct ClientSessionStartEventData__Fields fields;
};

struct __declspec(align(8)) ClientSessionStartPayload__Fields {
    struct String *ClientSessionID;
    struct String *DeviceModel;
    struct String *DeviceType;
    struct String *OS;
    struct String *UserID;
};

struct ClientSessionStartPayload {
    struct ClientSessionStartPayload__Class *klass;
    MonitorData *monitor;
    struct ClientSessionStartPayload__Fields fields;
};

struct ClientSessionStartPayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ClientSessionStartPayload__StaticFields {
};

struct ClientSessionStartPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClientSessionStartPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClientSessionStartPayload__VTable vtable;
};

struct ClientSessionStartEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ClientSessionStartEventData__StaticFields {
};

struct ClientSessionStartEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClientSessionStartEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClientSessionStartEventData__VTable vtable;
};

struct GameLobbyEndedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *GameMode;
    struct Nullable_1_DateTime_ GameStartTime;
    struct String *Region_1;
    struct String *ServerBuildVersion;
    struct String *ServerHost;
    struct String *ServerHostInstanceId;
    struct String *ServerIPV4Address;
    struct String *ServerIPV6Address;
    uint32_t ServerPort;
    struct Dictionary_2_System_String_System_String_ *Tags;
    struct String *TitleId;
};

struct GameLobbyEndedEventData {
    struct GameLobbyEndedEventData__Class *klass;
    MonitorData *monitor;
    struct GameLobbyEndedEventData__Fields fields;
};

struct GameLobbyEndedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameLobbyEndedEventData__StaticFields {
};

struct GameLobbyEndedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameLobbyEndedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameLobbyEndedEventData__VTable vtable;
};

struct GameLobbyStartedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *CustomCommandLineData;
    struct String *CustomMatchmakerEndpoint;
    struct String *GameMode;
    struct String *GameServerData;
    struct Nullable_1_Int32_ MaxPlayers;
    struct String *Region_1;
    struct String *ServerBuildVersion;
    struct String *ServerHost;
    struct String *ServerHostInstanceId;
    struct String *ServerIPV4Address;
    struct String *ServerIPV6Address;
    uint32_t ServerPort;
    struct Dictionary_2_System_String_System_String_ *Tags;
    struct String *TitleId;
};

struct GameLobbyStartedEventData {
    struct GameLobbyStartedEventData__Class *klass;
    MonitorData *monitor;
    struct GameLobbyStartedEventData__Fields fields;
};

struct GameLobbyStartedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameLobbyStartedEventData__StaticFields {
};

struct GameLobbyStartedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameLobbyStartedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameLobbyStartedEventData__VTable vtable;
};

struct GameServerHostStartedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *InstanceId;
    struct String *InstanceProvider;
    struct String *InstanceType;
    struct String *Region_1;
    struct String *ServerBuildVersion;
    struct String *ServerHost;
    struct String *ServerIPV4Address;
    struct String *ServerIPV6Address;
    struct DateTime StartTime;
    struct String *TitleId;
};

struct GameServerHostStartedEventData {
    struct GameServerHostStartedEventData__Class *klass;
    MonitorData *monitor;
    struct GameServerHostStartedEventData__Fields fields;
};

struct GameServerHostStartedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameServerHostStartedEventData__StaticFields {
};

struct GameServerHostStartedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameServerHostStartedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameServerHostStartedEventData__VTable vtable;
};

enum class GameServerHostStopReason__Enum : int32_t {
    Other = 0x00000000,
    ExcessCapacity = 0x00000001,
    LimitExceeded = 0x00000002,
    BuildNotActiveInRegion = 0x00000003,
    Unresponsive = 0x00000004,
};

struct GameServerHostStopReason__Enum__Boxed {
    struct GameServerHostStopReason__Enum__Class *klass;
    MonitorData *monitor;
    GameServerHostStopReason__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason_ {
    GameServerHostStopReason__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason_ fields;
};

struct GameServerHostStoppedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *InstanceId;
    struct String *InstanceProvider;
    struct String *InstanceType;
    struct String *Region_1;
    struct String *ServerBuildVersion;
    struct String *ServerHost;
    struct String *ServerIPV4Address;
    struct String *ServerIPV6Address;
    struct DateTime StartTime;
    struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason_ StopReason;
    struct DateTime StopTime;
    struct String *TitleId;
};

struct GameServerHostStoppedEventData {
    struct GameServerHostStoppedEventData__Class *klass;
    MonitorData *monitor;
    struct GameServerHostStoppedEventData__Fields fields;
};

struct GameServerHostStopReason__Enum__VTable {
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

struct GameServerHostStopReason__Enum__StaticFields {
};

struct GameServerHostStopReason__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameServerHostStopReason__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameServerHostStopReason__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___VTable vtable;
};

struct GameServerHostStoppedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameServerHostStoppedEventData__StaticFields {
};

struct GameServerHostStoppedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameServerHostStoppedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameServerHostStoppedEventData__VTable vtable;
};

struct SessionEndedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    bool Crashed;
    struct DateTime EndTime;
    struct Nullable_1_Double_ KilobytesWritten;
    double SessionLengthMs;
    struct String *TitleId;
    struct String *UserId;
};

struct SessionEndedEventData {
    struct SessionEndedEventData__Class *klass;
    MonitorData *monitor;
    struct SessionEndedEventData__Fields fields;
};

struct SessionEndedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SessionEndedEventData__StaticFields {
};

struct SessionEndedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SessionEndedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SessionEndedEventData__VTable vtable;
};

struct SessionStartedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *TemporaryWriteUrl;
    struct String *TitleId;
};

struct SessionStartedEventData {
    struct SessionStartedEventData__Class *klass;
    MonitorData *monitor;
    struct SessionStartedEventData__Fields fields;
};

struct SessionStartedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SessionStartedEventData__StaticFields {
};

struct SessionStartedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SessionStartedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SessionStartedEventData__VTable vtable;
};

struct TitleAbortedTaskEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct String *TaskInstanceId;
    struct String *UserId;
};

struct TitleAbortedTaskEventData {
    struct TitleAbortedTaskEventData__Class *klass;
    MonitorData *monitor;
    struct TitleAbortedTaskEventData__Fields fields;
};

struct TitleAbortedTaskEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleAbortedTaskEventData__StaticFields {
};

struct TitleAbortedTaskEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleAbortedTaskEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleAbortedTaskEventData__VTable vtable;
};

struct TitleAddedCloudScriptEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    bool Published;
    int32_t Revision;
    struct List_1_System_String_ *ScriptNames;
    struct String *UserId;
    int32_t Version;
};

struct TitleAddedCloudScriptEventData {
    struct TitleAddedCloudScriptEventData__Class *klass;
    MonitorData *monitor;
    struct TitleAddedCloudScriptEventData__Fields fields;
};

struct TitleAddedCloudScriptEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleAddedCloudScriptEventData__StaticFields {
};

struct TitleAddedCloudScriptEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleAddedCloudScriptEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleAddedCloudScriptEventData__VTable vtable;
};

struct TitleAddedGameBuildEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *BuildId;
    struct String *DeveloperId;
    int32_t MaxGamesPerHost;
    int32_t MinFreeGameSlots;
    struct List_1_PlayFab_PlayStreamModels_Region_ *Regions;
    struct String *UserId;
};

struct TitleAddedGameBuildEventData {
    struct TitleAddedGameBuildEventData__Class *klass;
    MonitorData *monitor;
    struct TitleAddedGameBuildEventData__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_Region___Fields {
    struct Region__Enum_3__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_PlayStreamModels_Region_ {
    struct List_1_PlayFab_PlayStreamModels_Region___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_Region___Fields fields;
};

enum class Region__Enum_3 : int32_t {
    USCentral = 0x00000000,
    USEast = 0x00000001,
    EUWest = 0x00000002,
    Singapore = 0x00000003,
    Japan = 0x00000004,
    Brazil = 0x00000005,
    Australia = 0x00000006,
};

struct Region__Enum_3__Boxed {
    struct Region__Enum_3__Class *klass;
    MonitorData *monitor;
    Region__Enum_3 value;
    
};

struct Region__Enum_3__Array {
    struct Region__Enum_3__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    Region__Enum_3 vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_Region_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_Region___Class *klass;
    MonitorData *monitor;
};

struct Region__Enum_3__VTable {
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

struct Region__Enum_3__StaticFields {
};

struct Region__Enum_3__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Region__Enum_3__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Region__Enum_3__VTable vtable;
};

struct Region__Enum_3__Array__VTable {
};

struct Region__Enum_3__Array__StaticFields {
};

struct Region__Enum_3__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Region__Enum_3__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Region__Enum_3__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_Region___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_Region___StaticFields {
};

struct IEnumerator_1_PlayFab_PlayStreamModels_Region___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_PlayStreamModels_Region___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_PlayStreamModels_Region___VTable vtable;
};

struct List_1_PlayFab_PlayStreamModels_Region___VTable {
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

struct List_1_PlayFab_PlayStreamModels_Region___StaticFields {
    struct Region__Enum_3__Array *_emptyArray;
};

struct List_1_PlayFab_PlayStreamModels_Region___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_PlayStreamModels_Region___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_PlayStreamModels_Region___VTable vtable;
};

struct TitleAddedGameBuildEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleAddedGameBuildEventData__StaticFields {
};

struct TitleAddedGameBuildEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleAddedGameBuildEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleAddedGameBuildEventData__VTable vtable;
};

struct TitleAPISettingsChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct APISettings *PreviousSettingsValues;
    struct APISettings *SettingsValues;
    struct String *UserId;
};

struct TitleAPISettingsChangedEventData {
    struct TitleAPISettingsChangedEventData__Class *klass;
    MonitorData *monitor;
    struct TitleAPISettingsChangedEventData__Fields fields;
};

struct __declspec(align(8)) APISettings__Fields {
    bool AllowClientToAddVirtualCurrency;
    bool AllowClientToPostPlayerStatistics;
    bool AllowClientToStartGames;
    bool AllowClientToSubtractVirtualCurrency;
    bool AllowNonUniquePlayerDisplayNames;
    bool AllowServerToDeleteUsers;
    struct String *DefaultLanguage;
    bool DisableAPIAccess;
    struct Nullable_1_Int32_ DisplayNameRandomSuffixLength;
    bool EnableClientIPAddressObfuscation;
    bool RequireCustomDataJSONFormat;
    bool UseExternalGameServerProvider;
    bool UseSandboxPayments;
};

struct APISettings {
    struct APISettings__Class *klass;
    MonitorData *monitor;
    struct APISettings__Fields fields;
};

struct APISettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct APISettings__StaticFields {
};

struct APISettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct APISettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct APISettings__VTable vtable;
};

struct TitleAPISettingsChangedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleAPISettingsChangedEventData__StaticFields {
};

struct TitleAPISettingsChangedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleAPISettingsChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleAPISettingsChangedEventData__VTable vtable;
};

struct TitleCatalogUpdatedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *CatalogVersion;
    bool Deleted;
    struct String *DeveloperId;
    struct String *UserId;
};

struct TitleCatalogUpdatedEventData {
    struct TitleCatalogUpdatedEventData__Class *klass;
    MonitorData *monitor;
    struct TitleCatalogUpdatedEventData__Fields fields;
};

struct TitleCatalogUpdatedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleCatalogUpdatedEventData__StaticFields {
};

struct TitleCatalogUpdatedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleCatalogUpdatedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleCatalogUpdatedEventData__VTable vtable;
};

enum class AlertStates__Enum : int32_t {
    Triggered = 0x00000000,
    Recovered = 0x00000001,
    ReTriggered = 0x00000002,
};

struct AlertStates__Enum__Boxed {
    struct AlertStates__Enum__Class *klass;
    MonitorData *monitor;
    AlertStates__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ {
    AlertStates__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ fields;
};

enum class AlertLevel__Enum_2 : int32_t {
    Warn = 0x00000000,
    Alert = 0x00000001,
    Critical = 0x00000002,
};

struct AlertLevel__Enum_2__Boxed {
    struct AlertLevel__Enum_2__Class *klass;
    MonitorData *monitor;
    AlertLevel__Enum_2 value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ {
    AlertLevel__Enum_2 value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ fields;
};

struct TitleClientRateLimitedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *AlertEventId;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ AlertState;
    struct String *API;
    struct String *ErrorCode;
    struct String *GraphUrl;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ Level;
};

struct TitleClientRateLimitedEventData {
    struct TitleClientRateLimitedEventData__Class *klass;
    MonitorData *monitor;
    struct TitleClientRateLimitedEventData__Fields fields;
};

struct AlertStates__Enum__VTable {
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

struct AlertStates__Enum__StaticFields {
};

struct AlertStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AlertStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AlertStates__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___VTable vtable;
};

struct AlertLevel__Enum_2__VTable {
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

struct AlertLevel__Enum_2__StaticFields {
};

struct AlertLevel__Enum_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AlertLevel__Enum_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AlertLevel__Enum_2__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___VTable vtable;
};

struct TitleClientRateLimitedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleClientRateLimitedEventData__StaticFields {
};

struct TitleClientRateLimitedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleClientRateLimitedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleClientRateLimitedEventData__VTable vtable;
};

}
