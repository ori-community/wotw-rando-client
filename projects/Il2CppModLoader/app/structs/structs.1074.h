namespace app {
    struct XalAgeGroup__Enum__VTable {
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

    struct XalAgeGroup__Enum__StaticFields {
    };

    struct XalAgeGroup__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalAgeGroup__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalAgeGroup__Enum__VTable vtable;
    };

    enum class XalPrivilege__Enum : int32_t {
        Clubs = 0x000000bc,
        Sessions = 0x000000bd,
        BroadCast = 0x000000be,
        ManageProfilePrivacy = 0x000000c4,
        GameDvr = 0x000000c6,
        MultiplayerParties = 0x000000cb,
        CommsInGameVoice = 0x000000cd,
        CloudManageSession = 0x000000cf,
        CloudJoinSession = 0x000000d0,
        CloudSavedGames = 0x000000d1,
        SocialNetworkSharing = 0x000000dc,
        Ugc = 0x000000f7,
        Comms = 0x000000fc,
        Multiplayer = 0x000000fe,
        AddFriends = 0x000000ff,
    };

    struct XalPrivilege__Enum__Boxed {
        struct XalPrivilege__Enum__Class* klass;
        MonitorData* monitor;
        XalPrivilege__Enum value;
    };

    enum class XalPrivilegeCheckDenyReasons__Enum : int32_t {
        None = 0x00000000,
        PurchaseRequired = 0x00000001,
        Restricted = 0x00000002,
        Banned = 0x00000003,
        Unknown = -1,
    };

    struct XalPrivilegeCheckDenyReasons__Enum__Boxed {
        struct XalPrivilegeCheckDenyReasons__Enum__Class* klass;
        MonitorData* monitor;
        XalPrivilegeCheckDenyReasons__Enum value;
    };

    struct XalPrivilegeCheckResult {
        XalPrivilege__Enum Privilege;

        bool HasPrivilege;
        XalPrivilegeCheckDenyReasons__Enum DenyReasons;
    };

    struct XalPrivilegeCheckResult__Boxed {
        struct XalPrivilegeCheckResult__Class* klass;
        MonitorData* monitor;
        struct XalPrivilegeCheckResult fields;
    };

    struct XalPrivilege__Enum__VTable {
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

    struct XalPrivilege__Enum__StaticFields {
    };

    struct XalPrivilege__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalPrivilege__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalPrivilege__Enum__VTable vtable;
    };

    struct XalPrivilegeCheckDenyReasons__Enum__VTable {
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

    struct XalPrivilegeCheckDenyReasons__Enum__StaticFields {
    };

    struct XalPrivilegeCheckDenyReasons__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalPrivilegeCheckDenyReasons__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalPrivilegeCheckDenyReasons__Enum__VTable vtable;
    };

    struct XalPrivilegeCheckResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalPrivilegeCheckResult__StaticFields {
    };

    struct XalPrivilegeCheckResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalPrivilegeCheckResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalPrivilegeCheckResult__VTable vtable;
    };

    enum class XalGamerPictureSize__Enum : int32_t {
        Small_64x64 = 0x00000000,
        Medium_208x208 = 0x00000001,
        Large_424x424 = 0x00000002,
        ExtraLarge_1080x1080 = 0x00000003,
    };

    struct XalGamerPictureSize__Enum__Boxed {
        struct XalGamerPictureSize__Enum__Class* klass;
        MonitorData* monitor;
        XalGamerPictureSize__Enum value;
    };

    struct XalGamerPictureSize__Enum__VTable {
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

    struct XalGamerPictureSize__Enum__StaticFields {
    };

    struct XalGamerPictureSize__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalGamerPictureSize__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalGamerPictureSize__Enum__VTable vtable;
    };

    struct XalUser_InternalXalUserLocalId {
        int64_t Value;
    };

    struct XalUser_InternalXalUserLocalId__Boxed {
        struct XalUser_InternalXalUserLocalId__Class* klass;
        MonitorData* monitor;
        struct XalUser_InternalXalUserLocalId fields;
    };

    struct XalUser_InternalXalUserLocalId__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUser_InternalXalUserLocalId__StaticFields {
    };

    struct XalUser_InternalXalUserLocalId__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_InternalXalUserLocalId__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_InternalXalUserLocalId__VTable vtable;
    };

    struct XalUserState___VTable {
    };

    struct XalUserState___StaticFields {
    };

    struct XalUserState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUserState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUserState___VTable vtable;
    };

    struct XalAgeGroup___VTable {
    };

    struct XalAgeGroup___StaticFields {
    };

    struct XalAgeGroup___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalAgeGroup___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalAgeGroup___VTable vtable;
    };

    struct XalPrivilegeCheckDenyReasons___VTable {
    };

    struct XalPrivilegeCheckDenyReasons___StaticFields {
    };

    struct XalPrivilegeCheckDenyReasons___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalPrivilegeCheckDenyReasons___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalPrivilegeCheckDenyReasons___VTable vtable;
    };

    struct XalUser_InternalXalUserGetTokenAndSignatureArgs___VTable {
    };

    struct XalUser_InternalXalUserGetTokenAndSignatureArgs___StaticFields {
    };

    struct XalUser_InternalXalUserGetTokenAndSignatureArgs___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_InternalXalUserGetTokenAndSignatureArgs___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_InternalXalUserGetTokenAndSignatureArgs___VTable vtable;
    };

    struct XalUser_XalUserChangeEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct XalUser_XalUserChangeEventHandler {
        struct XalUser_XalUserChangeEventHandler__Class* klass;
        MonitorData* monitor;
        struct XalUser_XalUserChangeEventHandler__Fields fields;
    };

    struct XalUser_XalUserChangeEventHandler__VTable {
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

    struct XalUser_XalUserChangeEventHandler__StaticFields {
    };

    struct XalUser_XalUserChangeEventHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_XalUserChangeEventHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_XalUserChangeEventHandler__VTable vtable;
    };

    struct __declspec(align(8)) XalUser_c_DisplayClass22_0__Fields {
        struct TaskCompletionSource_1_System_Boolean_* tcs;
    };

    struct XalUser_c_DisplayClass22_0 {
        struct XalUser_c_DisplayClass22_0__Class* klass;
        MonitorData* monitor;
        struct XalUser_c_DisplayClass22_0__Fields fields;
    };

    struct XalUser_c_DisplayClass22_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUser_c_DisplayClass22_0__StaticFields {
    };

    struct XalUser_c_DisplayClass22_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_c_DisplayClass22_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_c_DisplayClass22_0__VTable vtable;
    };

    struct __declspec(align(8)) XalUser_c_DisplayClass25_0__Fields {
        struct Action_1_Int32_* onError;
        struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_* onComplete;
    };

    struct XalUser_c_DisplayClass25_0 {
        struct XalUser_c_DisplayClass25_0__Class* klass;
        MonitorData* monitor;
        struct XalUser_c_DisplayClass25_0__Fields fields;
    };

    struct XalUser_c_DisplayClass25_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUser_c_DisplayClass25_0__StaticFields {
    };

    struct XalUser_c_DisplayClass25_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_c_DisplayClass25_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_c_DisplayClass25_0__VTable vtable;
    };

    struct __declspec(align(8)) XalUser_c_DisplayClass26_0__Fields {
        struct TaskCompletionSource_1_System_Boolean_* tcs;
    };

    struct XalUser_c_DisplayClass26_0 {
        struct XalUser_c_DisplayClass26_0__Class* klass;
        MonitorData* monitor;
        struct XalUser_c_DisplayClass26_0__Fields fields;
    };

    struct XalUser_c_DisplayClass26_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUser_c_DisplayClass26_0__StaticFields {
    };

    struct XalUser_c_DisplayClass26_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_c_DisplayClass26_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_c_DisplayClass26_0__VTable vtable;
    };

    struct __declspec(align(8)) XalUser_c_DisplayClass27_0__Fields {
        struct TaskCompletionSource_1_System_Byte_* tcs;
    };

    struct XalUser_c_DisplayClass27_0 {
        struct XalUser_c_DisplayClass27_0__Class* klass;
        MonitorData* monitor;
        struct XalUser_c_DisplayClass27_0__Fields fields;
    };

    struct XalUser_c_DisplayClass27_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUser_c_DisplayClass27_0__StaticFields {
    };

    struct XalUser_c_DisplayClass27_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_c_DisplayClass27_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_c_DisplayClass27_0__VTable vtable;
    };

    struct Action_1_XGamingRuntime_XblAchievement___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_XGamingRuntime_XblAchievement_ {
        struct Action_1_XGamingRuntime_XblAchievement___Class* klass;
        MonitorData* monitor;
        struct Action_1_XGamingRuntime_XblAchievement___Fields fields;
    };

    struct Action_1_XGamingRuntime_XblAchievement___VTable {
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

    struct Action_1_XGamingRuntime_XblAchievement___StaticFields {
    };

    struct Action_1_XGamingRuntime_XblAchievement___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_XGamingRuntime_XblAchievement___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_XGamingRuntime_XblAchievement___VTable vtable;
    };

    struct Action_2_String_Int32___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_String_Int32_ {
        struct Action_2_String_Int32___Class* klass;
        MonitorData* monitor;
        struct Action_2_String_Int32___Fields fields;
    };

    struct Action_2_String_Int32___VTable {
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

    struct Action_2_String_Int32___StaticFields {
    };

    struct Action_2_String_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_2_String_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_2_String_Int32___VTable vtable;
    };

    struct Wrapper {
        struct Wrapper__Class* klass;
        MonitorData* monitor;
    };

    struct Wrapper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wrapper__StaticFields {
        bool _InitializedOk_k__BackingField;
        bool _Initialized_k__BackingField;
        uint64_t m_userId;
        struct Action* SavesUpdates;
        struct Action* m_signedOutCallback;
        int32_t _SaveDataStateVersion_k__BackingField;
        struct XblContextHandle* m_xblContext;
        struct XUserHandle* m_userHandle;
        struct XRegistrationToken* m_userChangeToken;
        struct Action* m_signInComplete;
        struct Action* m_signInFailed;
        struct XGameSaveContainerHandle* m_blobContainer;
        struct XGameSaveProviderHandle* m_gameSaveProvider;
        bool m_canCheckGRDK;
        struct XGameSaveUpdateHandle* m_deleteUpdateHandle;
        bool m_downloadingSaves;
        struct Dictionary_2_System_String_System_Byte_* m_blobsCache;
        int32_t m_savesInProgress;
    };

    struct Wrapper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper__VTable vtable;
    };

    struct Wrapper_TaskQueueDispatcher {
        struct Wrapper_TaskQueueDispatcher__Class* klass;
        MonitorData* monitor;
    };

    struct Wrapper_TaskQueueDispatcher__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Update;
    };

    struct Wrapper_TaskQueueDispatcher__StaticFields {
    };

    struct Wrapper_TaskQueueDispatcher__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper_TaskQueueDispatcher__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper_TaskQueueDispatcher__VTable vtable;
    };

    struct __declspec(align(8)) Wrapper_c_DisplayClass38_0__Fields {
        struct Action_1_Int32_* uploaded;
    };

    struct Wrapper_c_DisplayClass38_0 {
        struct Wrapper_c_DisplayClass38_0__Class* klass;
        MonitorData* monitor;
        struct Wrapper_c_DisplayClass38_0__Fields fields;
    };

    struct Wrapper_c_DisplayClass38_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wrapper_c_DisplayClass38_0__StaticFields {
    };

    struct Wrapper_c_DisplayClass38_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper_c_DisplayClass38_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper_c_DisplayClass38_0__VTable vtable;
    };

    struct __declspec(align(8)) Wrapper_c_DisplayClass45_0__Fields {
        struct Action_1_XGamingRuntime_XblAchievement_* obtained;
    };

    struct Wrapper_c_DisplayClass45_0 {
        struct Wrapper_c_DisplayClass45_0__Class* klass;
        MonitorData* monitor;
        struct Wrapper_c_DisplayClass45_0__Fields fields;
    };

    struct Wrapper_c_DisplayClass45_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wrapper_c_DisplayClass45_0__StaticFields {
    };

    struct Wrapper_c_DisplayClass45_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper_c_DisplayClass45_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper_c_DisplayClass45_0__VTable vtable;
    };

    struct Wrapper_c {
        struct Wrapper_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String_ {
        struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String___Class* klass;
        MonitorData* monitor;
        struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String___Fields fields;
    };

    struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String___VTable {
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

    struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String___StaticFields {
    };

    struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String___VTable vtable;
    };

    struct Wrapper_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wrapper_c__StaticFields {
        struct Wrapper_c* __9;
        struct Func_2_XGamingRuntime_XGameSaveBlobInfo_String_* __9__46_0;
        struct XGameSaveReadBlobDataCompleted* __9__46_1;
        struct SDK_XBL_XblCleanupResult* __9__52_0;
        struct Action* __9__68_0;
        struct XGameSaveInitializeProviderCompleted* __9__71_0;
        struct XUserResolveIssueWithUiUtf16Result* __9__75_0;
    };

    struct Wrapper_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper_c__VTable vtable;
    };

    struct __declspec(align(8)) Wrapper_c_DisplayClass50_0__Fields {
        struct Action_1_Byte_* success;
    };

    struct Wrapper_c_DisplayClass50_0 {
        struct Wrapper_c_DisplayClass50_0__Class* klass;
        MonitorData* monitor;
        struct Wrapper_c_DisplayClass50_0__Fields fields;
    };

    struct Wrapper_c_DisplayClass50_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wrapper_c_DisplayClass50_0__StaticFields {
    };

    struct Wrapper_c_DisplayClass50_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper_c_DisplayClass50_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper_c_DisplayClass50_0__VTable vtable;
    };

    struct __declspec(align(8)) Wrapper_c_DisplayClass51_0__Fields {
        struct Action_2_String_Int32_* onObtained;
        struct Action_1_Int32_* onFailed;
    };

    struct Wrapper_c_DisplayClass51_0 {
        struct Wrapper_c_DisplayClass51_0__Class* klass;
        MonitorData* monitor;
        struct Wrapper_c_DisplayClass51_0__Fields fields;
    };

    struct Wrapper_c_DisplayClass51_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wrapper_c_DisplayClass51_0__StaticFields {
    };

    struct Wrapper_c_DisplayClass51_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper_c_DisplayClass51_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper_c_DisplayClass51_0__VTable vtable;
    };

    struct __declspec(align(8)) Wrapper_c_DisplayClass64_0__Fields {
        struct XGameSaveUpdateHandle* handle;
        struct String* name;
    };

    struct Wrapper_c_DisplayClass64_0 {
        struct Wrapper_c_DisplayClass64_0__Class* klass;
        MonitorData* monitor;
        struct Wrapper_c_DisplayClass64_0__Fields fields;
    };

    struct Wrapper_c_DisplayClass64_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wrapper_c_DisplayClass64_0__StaticFields {
    };

    struct Wrapper_c_DisplayClass64_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper_c_DisplayClass64_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper_c_DisplayClass64_0__VTable vtable;
    };

    struct __declspec(align(8)) Wrapper_c_DisplayClass87_0__Fields {
        int32_t result;
        struct String* name;
    };

    struct Wrapper_c_DisplayClass87_0 {
        struct Wrapper_c_DisplayClass87_0__Class* klass;
        MonitorData* monitor;
        struct Wrapper_c_DisplayClass87_0__Fields fields;
    };

    struct Wrapper_c_DisplayClass87_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Wrapper_c_DisplayClass87_0__StaticFields {
    };

    struct Wrapper_c_DisplayClass87_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Wrapper_c_DisplayClass87_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Wrapper_c_DisplayClass87_0__VTable vtable;
    };

    enum class BindingFlags__Enum_1 : int32_t {
        Default = 0x00000000,
        IgnoreCase = 0x00000001,
        DeclaredOnly = 0x00000002,
        Instance = 0x00000004,
        Static = 0x00000008,
        Public = 0x00000010,
        NonPublic = 0x00000020,
        FlattenHierarchy = 0x00000040,
        InvokeMethod = 0x00000080,
        CreateInstance = 0x00000100,
        GetField = 0x00000200,
        SetField = 0x00000400,
        GetProperty = 0x00000800,
        SetProperty = 0x00001000,
        PutDispProperty = 0x00002000,
        PutRefDispProperty = 0x00004000,
        ExactBinding = 0x00008000,
        SuppressChangeType = 0x00010000,
        OptionalParamBinding = 0x00020000,
        IgnoreReturn = 0x00040000,
    };

    struct BindingFlags__Enum_1__Boxed {
        struct BindingFlags__Enum_1__Class* klass;
        MonitorData* monitor;
        BindingFlags__Enum_1 value;
    };

    struct BindingFlags__Enum_1__VTable {
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

    struct BindingFlags__Enum_1__StaticFields {
    };

    struct BindingFlags__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BindingFlags__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BindingFlags__Enum_1__VTable vtable;
    };

    struct TypeExtensions_c {
        struct TypeExtensions_c__Class* klass;
        MonitorData* monitor;
    };

    struct TypeExtensions_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeExtensions_c__StaticFields {
        struct TypeExtensions_c* __9;
        struct Func_2_Object_Type_* __9__7_0;
    };

    struct TypeExtensions_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeExtensions_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeExtensions_c__VTable vtable;
    };

    struct __declspec(align(8)) CompressedLightDirectionMap_BindData__Fields {
        struct Vector4 AtlasUv;
        struct Vector4 AtlasMinMax;
        struct Texture2D* BindTexture;
        bool Flipped;
    };

    struct CompressedLightDirectionMap_BindData {
        struct CompressedLightDirectionMap_BindData__Class* klass;
        MonitorData* monitor;
        struct CompressedLightDirectionMap_BindData__Fields fields;
    };

    struct CompressedLightDirectionMap_BindData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CompressedLightDirectionMap_BindData__StaticFields {
    };

    struct CompressedLightDirectionMap_BindData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CompressedLightDirectionMap_BindData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CompressedLightDirectionMap_BindData__VTable vtable;
    };

} // namespace app
