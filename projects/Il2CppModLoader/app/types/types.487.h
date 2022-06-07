namespace app {
struct PlayerDataExportedEventData__StaticFields {
};

struct PlayerDataExportedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerDataExportedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerDataExportedEventData__VTable vtable;
};

struct PlayerDeviceInfoEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Dictionary_2_System_String_System_Object_ *DeviceInfo;
    struct String *TitleId;
};

struct PlayerDeviceInfoEventData {
    struct PlayerDeviceInfoEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerDeviceInfoEventData__Fields fields;
};

struct PlayerDeviceInfoEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerDeviceInfoEventData__StaticFields {
};

struct PlayerDeviceInfoEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerDeviceInfoEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerDeviceInfoEventData__VTable vtable;
};

struct PlayerDisplayNameChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DisplayName;
    struct String *PreviousDisplayName;
    struct String *TitleId;
};

struct PlayerDisplayNameChangedEventData {
    struct PlayerDisplayNameChangedEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerDisplayNameChangedEventData__Fields fields;
};

struct PlayerDisplayNameChangedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerDisplayNameChangedEventData__StaticFields {
};

struct PlayerDisplayNameChangedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerDisplayNameChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerDisplayNameChangedEventData__VTable vtable;
};

struct PlayerExecutedCloudScriptEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct ExecuteCloudScriptResult_3 *CloudScriptExecutionResult;
    struct String *FunctionName;
    struct String *TitleId;
};

struct PlayerExecutedCloudScriptEventData {
    struct PlayerExecutedCloudScriptEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerExecutedCloudScriptEventData__Fields fields;
};

struct PlayerExecutedCloudScriptEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerExecutedCloudScriptEventData__StaticFields {
};

struct PlayerExecutedCloudScriptEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerExecutedCloudScriptEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerExecutedCloudScriptEventData__VTable vtable;
};

struct PlayerInventoryItemAddedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *Annotation;
    struct List_1_System_String_ *BundleContents;
    struct String *CatalogVersion;
    struct String *Class;
    struct String *CouponCode;
    struct String *DisplayName;
    struct Nullable_1_DateTime_ Expiration;
    struct String *InstanceId;
    struct String *ItemId;
    struct Nullable_1_UInt32_ RemainingUses;
    struct String *TitleId;
};

struct PlayerInventoryItemAddedEventData {
    struct PlayerInventoryItemAddedEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerInventoryItemAddedEventData__Fields fields;
};

struct PlayerInventoryItemAddedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerInventoryItemAddedEventData__StaticFields {
};

struct PlayerInventoryItemAddedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerInventoryItemAddedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerInventoryItemAddedEventData__VTable vtable;
};

struct PlayerJoinedLobbyEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *GameMode;
    struct String *LobbyId;
    struct String *Region_1;
    struct String *ServerBuildVersion;
    struct String *ServerHost;
    struct String *ServerHostInstanceId;
    struct String *ServerIPV4Address;
    struct String *ServerIPV6Address;
    uint32_t ServerPort;
    struct String *TitleId;
};

struct PlayerJoinedLobbyEventData {
    struct PlayerJoinedLobbyEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerJoinedLobbyEventData__Fields fields;
};

struct PlayerJoinedLobbyEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerJoinedLobbyEventData__StaticFields {
};

struct PlayerJoinedLobbyEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerJoinedLobbyEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerJoinedLobbyEventData__VTable vtable;
};

struct PlayerLeftLobbyEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *GameMode;
    struct String *LobbyId;
    struct String *Region_1;
    struct String *ServerBuildVersion;
    struct String *ServerHost;
    struct String *ServerHostInstanceId;
    struct String *ServerIPV4Address;
    struct String *ServerIPV6Address;
    uint32_t ServerPort;
    struct String *TitleId;
};

struct PlayerLeftLobbyEventData {
    struct PlayerLeftLobbyEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerLeftLobbyEventData__Fields fields;
};

struct PlayerLeftLobbyEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerLeftLobbyEventData__StaticFields {
};

struct PlayerLeftLobbyEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerLeftLobbyEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerLeftLobbyEventData__VTable vtable;
};

struct PlayerLinkedAccountEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *Email;
    struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Origination;
    struct String *OriginationUserId;
    struct String *TitleId;
    struct String *Username;
};

struct PlayerLinkedAccountEventData {
    struct PlayerLinkedAccountEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerLinkedAccountEventData__Fields fields;
};

struct PlayerLinkedAccountEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerLinkedAccountEventData__StaticFields {
};

struct PlayerLinkedAccountEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerLinkedAccountEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerLinkedAccountEventData__VTable vtable;
};

struct PlayerLoggedInEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EventLocation *Location;
    struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Platform;
    struct String *PlatformUserId;
    struct String *PlatformUserName;
    struct String *TitleId;
};

struct PlayerLoggedInEventData {
    struct PlayerLoggedInEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerLoggedInEventData__Fields fields;
};

enum class ContinentCode__Enum_2 : int32_t {
    AF = 0x00000000,
    AN = 0x00000001,
    AS = 0x00000002,
    EU = 0x00000003,
    NA = 0x00000004,
    OC = 0x00000005,
    SA = 0x00000006,
};

struct ContinentCode__Enum_2__Boxed {
    struct ContinentCode__Enum_2__Class *klass;
    MonitorData *monitor;
    ContinentCode__Enum_2 value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode_ {
    ContinentCode__Enum_2 value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode_ fields;
};

enum class CountryCode__Enum_2 : int32_t {
    AF = 0x00000000,
    AX = 0x00000001,
    AL = 0x00000002,
    DZ = 0x00000003,
    AS = 0x00000004,
    AD = 0x00000005,
    AO = 0x00000006,
    AI = 0x00000007,
    AQ = 0x00000008,
    AG = 0x00000009,
    AR = 0x0000000a,
    AM = 0x0000000b,
    AW = 0x0000000c,
    AU = 0x0000000d,
    AT = 0x0000000e,
    AZ = 0x0000000f,
    BS = 0x00000010,
    BH = 0x00000011,
    BD = 0x00000012,
    BB = 0x00000013,
    BY = 0x00000014,
    BE = 0x00000015,
    BZ = 0x00000016,
    BJ = 0x00000017,
    BM = 0x00000018,
    BT = 0x00000019,
    BO = 0x0000001a,
    BQ = 0x0000001b,
    BA = 0x0000001c,
    BW = 0x0000001d,
    BV = 0x0000001e,
    BR = 0x0000001f,
    IO = 0x00000020,
    BN = 0x00000021,
    BG = 0x00000022,
    BF = 0x00000023,
    BI = 0x00000024,
    KH = 0x00000025,
    CM = 0x00000026,
    CA = 0x00000027,
    CV = 0x00000028,
    KY = 0x00000029,
    CF = 0x0000002a,
    TD = 0x0000002b,
    CL = 0x0000002c,
    CN = 0x0000002d,
    CX = 0x0000002e,
    CC = 0x0000002f,
    CO = 0x00000030,
    KM = 0x00000031,
    CG = 0x00000032,
    CD = 0x00000033,
    CK = 0x00000034,
    CR = 0x00000035,
    CI = 0x00000036,
    HR = 0x00000037,
    CU = 0x00000038,
    CW = 0x00000039,
    CY = 0x0000003a,
    CZ = 0x0000003b,
    DK = 0x0000003c,
    DJ = 0x0000003d,
    DM = 0x0000003e,
    DO = 0x0000003f,
    EC = 0x00000040,
    EG = 0x00000041,
    SV = 0x00000042,
    GQ = 0x00000043,
    ER = 0x00000044,
    EE = 0x00000045,
    ET = 0x00000046,
    FK = 0x00000047,
    FO = 0x00000048,
    FJ = 0x00000049,
    FI = 0x0000004a,
    FR = 0x0000004b,
    GF = 0x0000004c,
    PF = 0x0000004d,
    TF = 0x0000004e,
    GA = 0x0000004f,
    GM = 0x00000050,
    GE = 0x00000051,
    DE = 0x00000052,
    GH = 0x00000053,
    GI = 0x00000054,
    GR = 0x00000055,
    GL = 0x00000056,
    GD = 0x00000057,
    GP = 0x00000058,
    GU = 0x00000059,
    GT = 0x0000005a,
    GG = 0x0000005b,
    GN = 0x0000005c,
    GW = 0x0000005d,
    GY = 0x0000005e,
    HT = 0x0000005f,
    HM = 0x00000060,
    VA = 0x00000061,
    HN = 0x00000062,
    HK = 0x00000063,
    HU = 0x00000064,
    IS = 0x00000065,
    IN = 0x00000066,
    ID = 0x00000067,
    IR = 0x00000068,
    IQ = 0x00000069,
    IE = 0x0000006a,
    IM = 0x0000006b,
    IL = 0x0000006c,
    IT = 0x0000006d,
    JM = 0x0000006e,
    JP = 0x0000006f,
    JE = 0x00000070,
    JO = 0x00000071,
    KZ = 0x00000072,
    KE = 0x00000073,
    KI = 0x00000074,
    KP = 0x00000075,
    KR = 0x00000076,
    KW = 0x00000077,
    KG = 0x00000078,
    LA = 0x00000079,
    LV = 0x0000007a,
    LB = 0x0000007b,
    LS = 0x0000007c,
    LR = 0x0000007d,
    LY = 0x0000007e,
    LI = 0x0000007f,
    LT = 0x00000080,
    LU = 0x00000081,
    MO = 0x00000082,
    MK = 0x00000083,
    MG = 0x00000084,
    MW = 0x00000085,
    MY = 0x00000086,
    MV = 0x00000087,
    ML = 0x00000088,
    MT = 0x00000089,
    MH = 0x0000008a,
    MQ = 0x0000008b,
    MR = 0x0000008c,
    MU = 0x0000008d,
    YT = 0x0000008e,
    MX = 0x0000008f,
    FM = 0x00000090,
    MD = 0x00000091,
    MC = 0x00000092,
    MN = 0x00000093,
    ME = 0x00000094,
    MS = 0x00000095,
    MA = 0x00000096,
    MZ = 0x00000097,
    MM = 0x00000098,
    NA = 0x00000099,
    NR = 0x0000009a,
    NP = 0x0000009b,
    NL = 0x0000009c,
    NC = 0x0000009d,
    NZ = 0x0000009e,
    NI = 0x0000009f,
    NE = 0x000000a0,
    NG = 0x000000a1,
    NU = 0x000000a2,
    NF = 0x000000a3,
    MP = 0x000000a4,
    NO = 0x000000a5,
    OM = 0x000000a6,
    PK = 0x000000a7,
    PW = 0x000000a8,
    PS = 0x000000a9,
    PA = 0x000000aa,
    PG = 0x000000ab,
    PY = 0x000000ac,
    PE = 0x000000ad,
    PH = 0x000000ae,
    PN = 0x000000af,
    PL = 0x000000b0,
    PT = 0x000000b1,
    PR = 0x000000b2,
    QA = 0x000000b3,
    RE = 0x000000b4,
    RO = 0x000000b5,
    RU = 0x000000b6,
    RW = 0x000000b7,
    BL = 0x000000b8,
    SH = 0x000000b9,
    KN = 0x000000ba,
    LC = 0x000000bb,
    MF = 0x000000bc,
    PM = 0x000000bd,
    VC = 0x000000be,
    WS = 0x000000bf,
    SM = 0x000000c0,
    ST = 0x000000c1,
    SA = 0x000000c2,
    SN = 0x000000c3,
    RS = 0x000000c4,
    SC = 0x000000c5,
    SL = 0x000000c6,
    SG = 0x000000c7,
    SX = 0x000000c8,
    SK = 0x000000c9,
    SI = 0x000000ca,
    SB = 0x000000cb,
    SO = 0x000000cc,
    ZA = 0x000000cd,
    GS = 0x000000ce,
    SS = 0x000000cf,
    ES = 0x000000d0,
    LK = 0x000000d1,
    SD = 0x000000d2,
    SR = 0x000000d3,
    SJ = 0x000000d4,
    SZ = 0x000000d5,
    SE = 0x000000d6,
    CH = 0x000000d7,
    SY = 0x000000d8,
    TW = 0x000000d9,
    TJ = 0x000000da,
    TZ = 0x000000db,
    TH = 0x000000dc,
    TL = 0x000000dd,
    TG = 0x000000de,
    TK = 0x000000df,
    TO = 0x000000e0,
    TT = 0x000000e1,
    TN = 0x000000e2,
    TR = 0x000000e3,
    TM = 0x000000e4,
    TC = 0x000000e5,
    TV = 0x000000e6,
    UG = 0x000000e7,
    UA = 0x000000e8,
    AE = 0x000000e9,
    GB = 0x000000ea,
    US = 0x000000eb,
    UM = 0x000000ec,
    UY = 0x000000ed,
    UZ = 0x000000ee,
    VU = 0x000000ef,
    VE = 0x000000f0,
    VN = 0x000000f1,
    VG = 0x000000f2,
    VI = 0x000000f3,
    WF = 0x000000f4,
    EH = 0x000000f5,
    YE = 0x000000f6,
    ZM = 0x000000f7,
    ZW = 0x000000f8,
};

struct CountryCode__Enum_2__Boxed {
    struct CountryCode__Enum_2__Class *klass;
    MonitorData *monitor;
    CountryCode__Enum_2 value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_CountryCode_ {
    CountryCode__Enum_2 value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_CountryCode_ fields;
};

struct __declspec(align(8)) EventLocation__Fields {
    struct String *City;
    struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode_ ContinentCode;
    struct Nullable_1_PlayFab_PlayStreamModels_CountryCode_ CountryCode;
    struct Nullable_1_Double_ Latitude;
    struct Nullable_1_Double_ Longitude;
};

struct EventLocation {
    struct EventLocation__Class *klass;
    MonitorData *monitor;
    struct EventLocation__Fields fields;
};

struct ContinentCode__Enum_2__VTable {
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

struct ContinentCode__Enum_2__StaticFields {
};

struct ContinentCode__Enum_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ContinentCode__Enum_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ContinentCode__Enum_2__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___VTable vtable;
};

struct CountryCode__Enum_2__VTable {
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

struct CountryCode__Enum_2__StaticFields {
};

struct CountryCode__Enum_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CountryCode__Enum_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CountryCode__Enum_2__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___VTable vtable;
};

struct EventLocation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EventLocation__StaticFields {
};

struct EventLocation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventLocation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventLocation__VTable vtable;
};

struct PlayerLoggedInEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerLoggedInEventData__StaticFields {
};

struct PlayerLoggedInEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerLoggedInEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerLoggedInEventData__VTable vtable;
};

struct PlayerMatchedWithLobbyEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *GameMode;
    struct String *LobbyId;
    struct String *Region_1;
    struct String *ServerBuildVersion;
    struct String *ServerHost;
    struct String *ServerHostInstanceId;
    struct String *ServerIPV4Address;
    struct String *ServerIPV6Address;
    uint32_t ServerPort;
    struct String *TitleId;
};

struct PlayerMatchedWithLobbyEventData {
    struct PlayerMatchedWithLobbyEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerMatchedWithLobbyEventData__Fields fields;
};

struct PlayerMatchedWithLobbyEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerMatchedWithLobbyEventData__StaticFields {
};

struct PlayerMatchedWithLobbyEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerMatchedWithLobbyEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerMatchedWithLobbyEventData__VTable vtable;
};

struct PlayerPasswordResetLinkSentEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ InitiatedBy;
    struct String *InitiatedFromIPAddress;
    struct DateTime LinkExpiration;
    struct String *PasswordResetId;
    struct String *RecoveryEmailAddress;
    struct String *TitleId;
};

struct PlayerPasswordResetLinkSentEventData {
    struct PlayerPasswordResetLinkSentEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerPasswordResetLinkSentEventData__Fields fields;
};

struct PlayerPasswordResetLinkSentEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerPasswordResetLinkSentEventData__StaticFields {
};

struct PlayerPasswordResetLinkSentEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerPasswordResetLinkSentEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerPasswordResetLinkSentEventData__VTable vtable;
};

enum class TransactionStatus__Enum_1 : int32_t {
    CreateCart = 0x00000000,
    Init = 0x00000001,
    Approved = 0x00000002,
    Succeeded = 0x00000003,
    FailedByProvider = 0x00000004,
    DisputePending = 0x00000005,
    RefundPending = 0x00000006,
    Refunded = 0x00000007,
    RefundFailed = 0x00000008,
    ChargedBack = 0x00000009,
    FailedByUber = 0x0000000a,
    FailedByPlayFab = 0x0000000b,
    Revoked = 0x0000000c,
    TradePending = 0x0000000d,
    Traded = 0x0000000e,
    Upgraded = 0x0000000f,
    StackPending = 0x00000010,
    Stacked = 0x00000011,
    Other = 0x00000012,
    Failed = 0x00000013,
};

struct TransactionStatus__Enum_1__Boxed {
    struct TransactionStatus__Enum_1__Class *klass;
    MonitorData *monitor;
    TransactionStatus__Enum_1 value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus_ {
    TransactionStatus__Enum_1 value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus_ fields;
};

struct PlayerPayForPurchaseEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *OrderId;
    struct String *ProviderData;
    struct String *ProviderName;
    struct String *ProviderToken;
    struct String *PurchaseConfirmationPageURL;
    struct String *PurchaseCurrency;
    uint32_t PurchasePrice;
    struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus_ Status;
    struct String *TitleId;
    struct Dictionary_2_System_String_System_Int32_ *VirtualCurrencyBalances;
    struct Dictionary_2_System_String_System_Int32_ *VirtualCurrencyGrants;
};

struct PlayerPayForPurchaseEventData {
    struct PlayerPayForPurchaseEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerPayForPurchaseEventData__Fields fields;
};

struct TransactionStatus__Enum_1__VTable {
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

struct TransactionStatus__Enum_1__StaticFields {
};

struct TransactionStatus__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransactionStatus__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransactionStatus__Enum_1__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___VTable vtable;
};

struct PlayerPayForPurchaseEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerPayForPurchaseEventData__StaticFields {
};

struct PlayerPayForPurchaseEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerPayForPurchaseEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerPayForPurchaseEventData__VTable vtable;
};

enum class LeaderboardVersionChangeBehavior__Enum : int32_t {
    ResetValues = 0x00000000,
};

struct LeaderboardVersionChangeBehavior__Enum__Boxed {
    struct LeaderboardVersionChangeBehavior__Enum__Class *klass;
    MonitorData *monitor;
    LeaderboardVersionChangeBehavior__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior_ {
    LeaderboardVersionChangeBehavior__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior_ fields;
};

struct PlayerRankedOnLeaderboardVersionEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct LeaderboardSource *LeaderboardSource;
    uint32_t Rank;
    struct String *TitleId;
    int32_t Value;
    uint32_t Version;
    struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior_ VersionChangeBehavior;
};

struct PlayerRankedOnLeaderboardVersionEventData {
    struct PlayerRankedOnLeaderboardVersionEventData__Class *klass;
    MonitorData *monitor;
    struct PlayerRankedOnLeaderboardVersionEventData__Fields fields;
};

struct __declspec(align(8)) LeaderboardSource__Fields {
    struct StatisticLeaderboardSource *Statistic;
};

struct LeaderboardSource {
    struct LeaderboardSource__Class *klass;
    MonitorData *monitor;
    struct LeaderboardSource__Fields fields;
};

}
