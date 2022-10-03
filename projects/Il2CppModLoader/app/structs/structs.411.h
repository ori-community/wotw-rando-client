namespace app {
    struct Json_Serializer__StaticFields {
    };

    struct Json_Serializer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Json_Serializer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Json_Serializer__VTable vtable;
    };

    struct MakeScriptableObject {
        struct MakeScriptableObject__Class* klass;
        MonitorData* monitor;
    };

    struct MakeScriptableObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MakeScriptableObject__StaticFields {
    };

    struct MakeScriptableObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MakeScriptableObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MakeScriptableObject__VTable vtable;
    };

    enum class WebRequestType__Enum : int32_t {
        HttpWebRequest = 0x00000000,
        UnityWebRequest = 0x00000001,
        CustomHttp = 0x00000002,
    };

    struct WebRequestType__Enum__Boxed {
        struct WebRequestType__Enum__Class* klass;
        MonitorData* monitor;
        WebRequestType__Enum value;
    };

    enum class PlayFabLogLevel__Enum : int32_t {
        None = 0x00000000,
        Debug = 0x00000001,
        Info = 0x00000002,
        Warning = 0x00000004,
        Error = 0x00000008,
        All = 0x0000000f,
    };

    struct PlayFabLogLevel__Enum__Boxed {
        struct PlayFabLogLevel__Enum__Class* klass;
        MonitorData* monitor;
        PlayFabLogLevel__Enum value;
    };

    struct PlayFabSharedSettings__Fields {
        struct ScriptableObject__Fields _;
        struct String* TitleId;
        struct String* VerticalName;
        struct String* DeveloperSecretKey;
        struct String* ProductionEnvironmentUrl;
        WebRequestType__Enum RequestType;

        int32_t RequestTimeout;
        bool RequestKeepAlive;
        bool CompressApiData;
        PlayFabLogLevel__Enum LogLevel;

        struct String* LoggerHost;
        int32_t LoggerPort;
        bool EnableRealTimeLogging;
        int32_t LogCapLimit;
    };

    struct PlayFabSharedSettings {
        struct PlayFabSharedSettings__Class* klass;
        MonitorData* monitor;
        struct PlayFabSharedSettings__Fields fields;
    };

    struct WebRequestType__Enum__VTable {
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

    struct WebRequestType__Enum__StaticFields {
    };

    struct WebRequestType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebRequestType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebRequestType__Enum__VTable vtable;
    };

    struct PlayFabLogLevel__Enum__VTable {
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

    struct PlayFabLogLevel__Enum__StaticFields {
    };

    struct PlayFabLogLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabLogLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabLogLevel__Enum__VTable vtable;
    };

    struct PlayFabSharedSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabSharedSettings__StaticFields {
    };

    struct PlayFabSharedSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabSharedSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabSharedSettings__VTable vtable;
    };

    struct __declspec(align(8)) CsEvent__Fields {
        struct String* _ver_k__BackingField;
        struct String* _name_k__BackingField;
        int64_t _time_k__BackingField;
        double _popSample_k__BackingField;
        struct String* _iKey_k__BackingField;
        int64_t _flags_k__BackingField;
        struct String* _cV_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Ingest_* _extIngest_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Protocol_* _extProtocol_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_User_* _extUser_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Device_* _extDevice_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Os_* _extOs_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_App_* _extApp_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Utc_* _extUtc_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Xbl_* _extXbl_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Javascript_* _extJavascript_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Receipts_* _extReceipts_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Net_* _extNet_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Sdk_* _extSdk_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Loc_* _extLoc_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Cloud_* _extCloud_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Data_* _ext_k__BackingField;
        struct Dictionary_2_System_String_System_String_* _tags_k__BackingField;
        struct String* _baseType_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Data_* _baseData_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_Data_* _data_k__BackingField;
    };

    struct CsEvent {
        struct CsEvent__Class* klass;
        MonitorData* monitor;
        struct CsEvent__Fields fields;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Ingest___Fields {
        struct Ingest__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Ingest_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Ingest___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Ingest___Fields fields;
    };

    struct __declspec(align(8)) Ingest__Fields {
        int64_t _time_k__BackingField;
        struct String* _clientIp_k__BackingField;
        int64_t _auth_k__BackingField;
        int64_t _quality_k__BackingField;
        int64_t _uploadTime_k__BackingField;
        struct String* _userAgent_k__BackingField;
        struct String* _client_k__BackingField;
    };

    struct Ingest {
        struct Ingest__Class* klass;
        MonitorData* monitor;
        struct Ingest__Fields fields;
    };

    struct Ingest__Array {
        struct Ingest__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Ingest* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Ingest_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Ingest___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Protocol___Fields {
        struct Protocol__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Protocol_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Protocol___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Protocol___Fields fields;
    };

    struct __declspec(align(8)) Protocol__Fields {
        int32_t _metadataCrc_k__BackingField;
        struct List_1_List_1_System_String_* _ticketKeys_k__BackingField;
    };

    struct Protocol {
        struct Protocol__Class* klass;
        MonitorData* monitor;
        struct Protocol__Fields fields;
    };

    struct __declspec(align(8)) List_1_List_1_System_String___Fields {
        struct List_1_System_String___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_List_1_System_String_ {
        struct List_1_List_1_System_String___Class* klass;
        MonitorData* monitor;
        struct List_1_List_1_System_String___Fields fields;
    };

    struct List_1_System_String___Array {
        struct List_1_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_System_String_* vector[32];
    };

    struct IEnumerator_1_List_1_System_String_ {
        struct IEnumerator_1_List_1_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct Protocol__Array {
        struct Protocol__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Protocol* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Protocol_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Protocol___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_User___Fields {
        struct User__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_User_ {
        struct List_1_Microsoft_Applications_Events_DataModels_User___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_User___Fields fields;
    };

    struct __declspec(align(8)) User__Fields {
        struct String* _id_k__BackingField;
        struct String* _localId_k__BackingField;
        struct String* _authId_k__BackingField;
        struct String* _locale_k__BackingField;
    };

    struct User {
        struct User__Class* klass;
        MonitorData* monitor;
        struct User__Fields fields;
    };

    struct User__Array {
        struct User__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct User* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_User_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_User___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Device___Fields {
        struct Device__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Device_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Device___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Device___Fields fields;
    };

    struct __declspec(align(8)) Device__Fields {
        struct String* _id_k__BackingField;
        struct String* _localId_k__BackingField;
        struct String* _authId_k__BackingField;
        struct String* _authSecId_k__BackingField;
        struct String* _deviceClass_k__BackingField;
        struct String* _orgId_k__BackingField;
        struct String* _make_k__BackingField;
        struct String* _orgAuthId_k__BackingField;
        struct String* _model_k__BackingField;
    };

    struct Device {
        struct Device__Class* klass;
        MonitorData* monitor;
        struct Device__Fields fields;
    };

    struct Device__Array {
        struct Device__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Device* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Device_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Device___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Os___Fields {
        struct Os__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Os_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Os___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Os___Fields fields;
    };

    struct __declspec(align(8)) Os__Fields {
        struct String* _locale_k__BackingField;
        struct String* _expId_k__BackingField;
        int32_t _bootId_k__BackingField;
        struct String* _name_k__BackingField;
        struct String* _ver_k__BackingField;
    };

    struct Os {
        struct Os__Class* klass;
        MonitorData* monitor;
        struct Os__Fields fields;
    };

    struct Os__Array {
        struct Os__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Os* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Os_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Os___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_App___Fields {
        struct App__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_App_ {
        struct List_1_Microsoft_Applications_Events_DataModels_App___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_App___Fields fields;
    };

    struct __declspec(align(8)) App__Fields {
        struct String* _expId_k__BackingField;
        struct String* _userId_k__BackingField;
        struct String* _env_k__BackingField;
        int32_t _asId_k__BackingField;
        struct String* _id_k__BackingField;
        struct String* _ver_k__BackingField;
        struct String* _locale_k__BackingField;
        struct String* _name_k__BackingField;
    };

    struct App {
        struct App__Class* klass;
        MonitorData* monitor;
        struct App__Fields fields;
    };

    struct App__Array {
        struct App__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct App* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_App_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_App___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Utc___Fields {
        struct Utc__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Utc_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Utc___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Utc___Fields fields;
    };

    struct __declspec(align(8)) Utc__Fields {
        struct String* _stId_k__BackingField;
        struct String* _aId_k__BackingField;
        struct String* _raId_k__BackingField;
        struct String* _op_k__BackingField;
        int64_t _cat_k__BackingField;
        int64_t _flags_k__BackingField;
        struct String* _sqmId_k__BackingField;
        struct String* _mon_k__BackingField;
        int32_t _cpId_k__BackingField;
        struct String* _bSeq_k__BackingField;
        struct String* _epoch_k__BackingField;
        int64_t _seq_k__BackingField;
    };

    struct Utc {
        struct Utc__Class* klass;
        MonitorData* monitor;
        struct Utc__Fields fields;
    };

    struct Utc__Array {
        struct Utc__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Utc* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Utc_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Utc___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Xbl___Fields {
        struct Xbl__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Xbl_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Xbl___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Xbl___Fields fields;
    };

    struct __declspec(align(8)) Xbl__Fields {
        struct Dictionary_2_System_String_System_String_* _claims_k__BackingField;
        struct String* _nbf_k__BackingField;
        struct String* _exp_k__BackingField;
        struct String* _sbx_k__BackingField;
        struct String* _dty_k__BackingField;
        struct String* _did_k__BackingField;
        struct String* _xid_k__BackingField;
        uint64_t _uts_k__BackingField;
        struct String* _pid_k__BackingField;
        struct String* _dvr_k__BackingField;
        uint32_t _tid_k__BackingField;
        struct String* _tvr_k__BackingField;
        struct String* _sty_k__BackingField;
        struct String* _sid_k__BackingField;
        struct Nullable_1_Int64_ _eid_k__BackingField;
        struct String* _ip_k__BackingField;
    };

    struct Xbl {
        struct Xbl__Class* klass;
        MonitorData* monitor;
        struct Xbl__Fields fields;
    };

    struct Xbl__Array {
        struct Xbl__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Xbl* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Xbl_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Xbl___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Javascript___Fields {
        struct Javascript__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Javascript_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Javascript___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Javascript___Fields fields;
    };

    struct __declspec(align(8)) Javascript__Fields {
        struct String* _libVer_k__BackingField;
        struct String* _osName_k__BackingField;
        struct String* _browser_k__BackingField;
        struct String* _browserVersion_k__BackingField;
        struct String* _platform_k__BackingField;
        struct String* _make_k__BackingField;
        struct String* _model_k__BackingField;
        struct String* _screenSize_k__BackingField;
        struct String* _mc1Id_k__BackingField;
        uint64_t _mc1Lu_k__BackingField;
        bool _isMc1New_k__BackingField;
        struct String* _ms0_k__BackingField;
        struct String* _anid_k__BackingField;
        struct String* _a_k__BackingField;
        struct String* _msResearch_k__BackingField;
        struct String* _csrvc_k__BackingField;
        struct String* _rtCell_k__BackingField;
        struct String* _rtEndAction_k__BackingField;
        struct String* _rtPermId_k__BackingField;
        struct String* _r_k__BackingField;
        struct String* _wtFpc_k__BackingField;
        struct String* _omniId_k__BackingField;
        struct String* _gsfxSession_k__BackingField;
        struct String* _domain_k__BackingField;
        struct String* _dnt_k__BackingField;
    };

    struct Javascript {
        struct Javascript__Class* klass;
        MonitorData* monitor;
        struct Javascript__Fields fields;
    };

    struct Javascript__Array {
        struct Javascript__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Javascript* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Javascript_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Javascript___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Receipts___Fields {
        struct Receipts__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Receipts_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Receipts___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Receipts___Fields fields;
    };

    struct __declspec(align(8)) Receipts__Fields {
        int64_t _originalTime_k__BackingField;
        int64_t _uploadTime_k__BackingField;
    };

    struct Receipts {
        struct Receipts__Class* klass;
        MonitorData* monitor;
        struct Receipts__Fields fields;
    };

    struct Receipts__Array {
        struct Receipts__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Receipts* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Receipts_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Receipts___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Net___Fields {
        struct Net__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Net_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Net___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Net___Fields fields;
    };

    struct __declspec(align(8)) Net__Fields {
        struct String* _provider_k__BackingField;
        struct String* _cost_k__BackingField;
        struct String* _type_k__BackingField;
    };

    struct Net {
        struct Net__Class* klass;
        MonitorData* monitor;
        struct Net__Fields fields;
    };

    struct Net__Array {
        struct Net__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Net* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Net_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Net___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Sdk___Fields {
        struct Sdk__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Sdk_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Sdk___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Sdk___Fields fields;
    };

    struct __declspec(align(8)) Sdk__Fields {
        struct String* _libVer_k__BackingField;
        struct String* _epoch_k__BackingField;
        int64_t _seq_k__BackingField;
        struct String* _installId_k__BackingField;
    };

    struct Sdk {
        struct Sdk__Class* klass;
        MonitorData* monitor;
        struct Sdk__Fields fields;
    };

    struct Sdk__Array {
        struct Sdk__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Sdk* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Sdk_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Sdk___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Loc___Fields {
        struct Loc__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Loc_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Loc___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Loc___Fields fields;
    };

    struct __declspec(align(8)) Loc__Fields {
        struct String* _id_k__BackingField;
        struct String* _country_k__BackingField;
        struct String* _timezone_k__BackingField;
    };

    struct Loc {
        struct Loc__Class* klass;
        MonitorData* monitor;
        struct Loc__Fields fields;
    };

    struct Loc__Array {
        struct Loc__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Loc* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Loc_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Loc___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Cloud___Fields {
        struct Cloud__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Cloud_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Cloud___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Cloud___Fields fields;
    };

    struct __declspec(align(8)) Cloud__Fields {
        struct String* _fullEnvName_k__BackingField;
        struct String* _location_k__BackingField;
        struct String* _environment_k__BackingField;
        struct String* _deploymentUnit_k__BackingField;
        struct String* _name_k__BackingField;
        struct String* _roleInstance_k__BackingField;
        struct String* _role_k__BackingField;
    };

    struct Cloud {
        struct Cloud__Class* klass;
        MonitorData* monitor;
        struct Cloud__Fields fields;
    };

    struct Cloud__Array {
        struct Cloud__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Cloud* vector[32];
    };

    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Cloud_ {
        struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Cloud___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Data___Fields {
        struct Data__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Data_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Data___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Data___Fields fields;
    };

    struct __declspec(align(8)) Data__Fields {
        struct Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_* _properties_k__BackingField;
    };

    struct Data {
        struct Data__Class* klass;
        MonitorData* monitor;
        struct Data__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_Microsoft_Applications_Events_DataModels_Value___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Microsoft_Applications_Events_DataModels_Value_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Microsoft_Applications_Events_DataModels_Value_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_ {
        struct Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_Microsoft_Applications_Events_DataModels_Value_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct Value* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_Microsoft_Applications_Events_DataModels_Value___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_Microsoft_Applications_Events_DataModels_Value___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_Microsoft_Applications_Events_DataModels_Value_ fields;
    };

    enum class ValueKind__Enum : int32_t {
        ValueInt64 = 0x00000000,
        ValueUInt64 = 0x00000001,
        ValueInt32 = 0x00000002,
        ValueUInt32 = 0x00000003,
        ValueDouble = 0x00000004,
        ValueString = 0x00000005,
        ValueBool = 0x00000006,
        ValueDateTime = 0x00000007,
        ValueGuid = 0x00000008,
        ValueArrayInt64 = 0x00000009,
        ValueArrayUInt64 = 0x0000000a,
        ValueArrayInt32 = 0x0000000b,
        ValueArrayUInt32 = 0x0000000c,
        ValueArrayDouble = 0x0000000d,
        ValueArrayString = 0x0000000e,
        ValueArrayBool = 0x0000000f,
        ValueArrayDateTime = 0x00000010,
        ValueArrayGuid = 0x00000011,
    };

    struct ValueKind__Enum__Boxed {
        struct ValueKind__Enum__Class* klass;
        MonitorData* monitor;
        ValueKind__Enum value;
    };

    struct __declspec(align(8)) Value__Fields {
        ValueKind__Enum _type_k__BackingField;

        struct List_1_Microsoft_Applications_Events_DataModels_Attributes_* _attributes_k__BackingField;
        struct String* _stringValue_k__BackingField;
        int64_t _longValue_k__BackingField;
        double _doubleValue_k__BackingField;
        struct List_1_List_1_System_Byte_* _guidValue_k__BackingField;
        struct List_1_List_1_System_String_* _stringArray_k__BackingField;
        struct List_1_List_1_System_Int64_* _longArray_k__BackingField;
        struct List_1_List_1_System_Double_* _doubleArray_k__BackingField;
        struct List_1_List_1_List_1_System_Int64_* _guidArray_k__BackingField;
    };

    struct Value {
        struct Value__Class* klass;
        MonitorData* monitor;
        struct Value__Fields fields;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_Attributes___Fields {
        struct Attributes__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_Attributes_ {
        struct List_1_Microsoft_Applications_Events_DataModels_Attributes___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_Attributes___Fields fields;
    };

    struct __declspec(align(8)) Attributes__Fields {
        struct List_1_Microsoft_Applications_Events_DataModels_PII_* _pii_k__BackingField;
        struct List_1_Microsoft_Applications_Events_DataModels_CustomerContent_* _customerContent_k__BackingField;
    };

    struct Attributes {
        struct Attributes__Class* klass;
        MonitorData* monitor;
        struct Attributes__Fields fields;
    };

    struct __declspec(align(8)) List_1_Microsoft_Applications_Events_DataModels_PII___Fields {
        struct PII__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Applications_Events_DataModels_PII_ {
        struct List_1_Microsoft_Applications_Events_DataModels_PII___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Applications_Events_DataModels_PII___Fields fields;
    };

    enum class PIIKind__Enum : int32_t {
        NotSet = 0x00000000,
        DistinguishedName = 0x00000001,
        GenericData = 0x00000002,
        IPV4Address = 0x00000003,
        IPv6Address = 0x00000004,
        MailSubject = 0x00000005,
        PhoneNumber = 0x00000006,
        QueryString = 0x00000007,
        SipAddress = 0x00000008,
        SmtpAddress = 0x00000009,
        Identity = 0x0000000a,
        Uri = 0x0000000b,
        Fqdn = 0x0000000c,
        IPV4AddressLegacy = 0x0000000d,
    };

    struct PIIKind__Enum__Boxed {
        struct PIIKind__Enum__Class* klass;
        MonitorData* monitor;
        PIIKind__Enum value;
    };

} // namespace app
