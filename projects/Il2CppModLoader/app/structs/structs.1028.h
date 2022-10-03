namespace app {
    struct GrdkSignInProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrdkSignInProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrdkSignInProvider__VTable vtable;
    };

    struct __declspec(align(8)) PlayFabSignInProvider_c_DisplayClass49_0__Fields {
        struct PlayFabSignInProvider* __4__this;
        struct String* entityKey;
    };

    struct PlayFabSignInProvider_c_DisplayClass49_0 {
        struct PlayFabSignInProvider_c_DisplayClass49_0__Class* klass;
        MonitorData* monitor;
        struct PlayFabSignInProvider_c_DisplayClass49_0__Fields fields;
    };

    struct PlayFabSignInProvider_c_DisplayClass49_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabSignInProvider_c_DisplayClass49_0__StaticFields {
    };

    struct PlayFabSignInProvider_c_DisplayClass49_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabSignInProvider_c_DisplayClass49_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabSignInProvider_c_DisplayClass49_0__VTable vtable;
    };

    struct PlayFabSignInProvider_c {
        struct PlayFabSignInProvider_c__Class* klass;
        MonitorData* monitor;
    };

    struct PlayFabSignInProvider_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabSignInProvider_c__StaticFields {
        struct PlayFabSignInProvider_c* __9;
        struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_* __9__49_0;
        struct Action_1_PlayFab_PlayFabError_* __9__51_1;
    };

    struct PlayFabSignInProvider_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabSignInProvider_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabSignInProvider_c__VTable vtable;
    };

    struct __declspec(align(8)) PlayFabSignInProvider_c_DisplayClass54_0__Fields {
        struct PlayFabSignInProvider* __4__this;
        struct String* service;
    };

    struct PlayFabSignInProvider_c_DisplayClass54_0 {
        struct PlayFabSignInProvider_c_DisplayClass54_0__Class* klass;
        MonitorData* monitor;
        struct PlayFabSignInProvider_c_DisplayClass54_0__Fields fields;
    };

    struct PlayFabSignInProvider_c_DisplayClass54_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabSignInProvider_c_DisplayClass54_0__StaticFields {
    };

    struct PlayFabSignInProvider_c_DisplayClass54_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabSignInProvider_c_DisplayClass54_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabSignInProvider_c_DisplayClass54_0__VTable vtable;
    };

    struct __declspec(align(8)) SteamSignInProvider__Fields {
        struct INetworkConnectivityChecker* m_netConnectivityChecker;
        bool m_isSignedIn;
        struct IPlatformUser* _User_k__BackingField;
        bool _HasSignInError_k__BackingField;
        struct String* _LinkToken_k__BackingField;
    };

    struct SteamSignInProvider {
        struct SteamSignInProvider__Class* klass;
        MonitorData* monitor;
        struct SteamSignInProvider__Fields fields;
    };

    struct SteamSignInProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsSignedIn;
        VirtualInvokeData get_IsSigningIn;
        VirtualInvokeData get_User;
        VirtualInvokeData get_HasSignInError;
        VirtualInvokeData get_ShowSignInUi;
        VirtualInvokeData get_ShowAchievementUi;
        VirtualInvokeData get_LinkToken;
        VirtualInvokeData get_SignInOnPressAnyButton;
        VirtualInvokeData SignInSilently;
        VirtualInvokeData SignIn;
    };

    struct SteamSignInProvider__StaticFields {
    };

    struct SteamSignInProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamSignInProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamSignInProvider__VTable vtable;
    };

    struct __declspec(align(8)) SteamUser__Fields {
        struct Texture2D* _Image_k__BackingField;
        struct String* _GamerTag_k__BackingField;
        struct String* _Uid_k__BackingField;
    };

    struct SteamUser {
        struct SteamUser__Class* klass;
        MonitorData* monitor;
        struct SteamUser__Fields fields;
    };

    struct SteamUser__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Image;
        VirtualInvokeData get_GamerTag;
        VirtualInvokeData get_Uid;
        VirtualInvokeData get_SignInPrefix;
    };

    struct SteamUser__StaticFields {
    };

    struct SteamUser__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamUser__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamUser__VTable vtable;
    };

    struct __declspec(align(8)) XalUser__Fields {
        struct XalUser_1* m_xalUser;
        struct Action* m_onSignOut;
        bool m_doneImageLoading;
        struct String* m_cachedGamerTag;
        struct Texture2D* _Image_k__BackingField;
    };

    struct XalUser {
        struct XalUser__Class* klass;
        MonitorData* monitor;
        struct XalUser__Fields fields;
    };

    struct XalUser_InternalXalUserGetTokenAndSignatureArgs {
        struct String* Method;
        struct String* Url;
        uint32_t HeaderCount;
        void* Headers;
        void* BodySize;
        void* Body;
        bool ForceRefresh;
    };

    struct XalUser_InternalXalUserGetTokenAndSignatureArgs__Boxed {
        struct XalUser_InternalXalUserGetTokenAndSignatureArgs__Class* klass;
        MonitorData* monitor;
        struct XalUser_InternalXalUserGetTokenAndSignatureArgs fields;
    };

    struct __declspec(align(8)) XalUser_1__Fields {
        struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_* UserChanged;
        void* pUserHandle;
        void* pAsyncQueue;
        uint64_t pUserChangeHandlerToken;
        struct GCHandle userGCHandle;
        struct XalUser_InternalXalUserGetTokenAndSignatureArgs result;
    };

    struct XalUser_1 {
        struct XalUser_1__Class* klass;
        MonitorData* monitor;
        struct XalUser_1__Fields fields;
    };

    struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_ {
        struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs___Class* klass;
        MonitorData* monitor;
        struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs___Fields fields;
    };

    enum class XalUserChangeType__Enum : int32_t {
        SignedOutUserSignedInAgain = 0x00000000,
        SigningOut = 0x00000001,
        SignedOut = 0x00000002,
        Gamertag = 0x00000003,
        Privileges = 0x00000004,
    };

    struct XalUserChangeType__Enum__Boxed {
        struct XalUserChangeType__Enum__Class* klass;
        MonitorData* monitor;
        XalUserChangeType__Enum value;
    };

    struct __declspec(align(8)) UserChangeEventArgs__Fields {
        XalUserChangeType__Enum ChangeType;
    };

    struct UserChangeEventArgs {
        struct UserChangeEventArgs__Class* klass;
        MonitorData* monitor;
        struct UserChangeEventArgs__Fields fields;
    };

    struct XalUserChangeType__Enum__VTable {
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

    struct XalUserChangeType__Enum__StaticFields {
    };

    struct XalUserChangeType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUserChangeType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUserChangeType__Enum__VTable vtable;
    };

    struct UserChangeEventArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UserChangeEventArgs__StaticFields {
    };

    struct UserChangeEventArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UserChangeEventArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UserChangeEventArgs__VTable vtable;
    };

    struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs___VTable {
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

    struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs___StaticFields {
    };

    struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs___VTable vtable;
    };

    struct XalUser_InternalXalUserGetTokenAndSignatureArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUser_InternalXalUserGetTokenAndSignatureArgs__StaticFields {
    };

    struct XalUser_InternalXalUserGetTokenAndSignatureArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_InternalXalUserGetTokenAndSignatureArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_InternalXalUserGetTokenAndSignatureArgs__VTable vtable;
    };

    struct XalUser_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Dispose_1;
    };

    struct XalUser_1__StaticFields {
    };

    struct XalUser_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_1__VTable vtable;
    };

    struct XalUser__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Image;
        VirtualInvokeData get_GamerTag;
        VirtualInvokeData get_Uid;
        VirtualInvokeData get_SignInPrefix;
    };

    struct XalUser__StaticFields {
    };

    struct XalUser__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser__VTable vtable;
    };

    struct XalUserGetTokenAndSignatureArgs {
        struct String* Method;
        struct String* Url;
        struct XalHttpHeader__Array* Headers;
        struct Byte__Array* Body;
        bool ForceRefresh;
    };

    struct XalUserGetTokenAndSignatureArgs__Boxed {
        struct XalUserGetTokenAndSignatureArgs__Class* klass;
        MonitorData* monitor;
        struct XalUserGetTokenAndSignatureArgs fields;
    };

    struct XalHttpHeader {
        struct String* Name;
        struct String* Value;
    };

    struct XalHttpHeader__Boxed {
        struct XalHttpHeader__Class* klass;
        MonitorData* monitor;
        struct XalHttpHeader fields;
    };

    struct XalHttpHeader__Array {
        struct XalHttpHeader__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XalHttpHeader vector[32];
    };

    struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ {
        struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___Class* klass;
        MonitorData* monitor;
        struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___Fields fields;
    };

    struct XalUserGetTokenAndSignatureData {
        void* TokenSize;
        void* SignatureSize;
        struct String* Token;
        struct String* Signature;
    };

    struct XalUserGetTokenAndSignatureData__Boxed {
        struct XalUserGetTokenAndSignatureData__Class* klass;
        MonitorData* monitor;
        struct XalUserGetTokenAndSignatureData fields;
    };

    struct XalHttpHeader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalHttpHeader__StaticFields {
    };

    struct XalHttpHeader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalHttpHeader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalHttpHeader__VTable vtable;
    };

    struct XalHttpHeader__Array__VTable {
    };

    struct XalHttpHeader__Array__StaticFields {
    };

    struct XalHttpHeader__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalHttpHeader__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalHttpHeader__Array__VTable vtable;
    };

    struct XalUserGetTokenAndSignatureArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUserGetTokenAndSignatureArgs__StaticFields {
    };

    struct XalUserGetTokenAndSignatureArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUserGetTokenAndSignatureArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUserGetTokenAndSignatureArgs__VTable vtable;
    };

    struct XalUserGetTokenAndSignatureData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUserGetTokenAndSignatureData__StaticFields {
    };

    struct XalUserGetTokenAndSignatureData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUserGetTokenAndSignatureData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUserGetTokenAndSignatureData__VTable vtable;
    };

    struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___VTable {
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

    struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___StaticFields {
    };

    struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___VTable vtable;
    };

    struct XalUser_c {
        struct XalUser_c__Class* klass;
        MonitorData* monitor;
    };

    struct Action_1_System_Threading_Tasks_Task_1__1__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_System_Threading_Tasks_Task_1__1 {
        struct Action_1_System_Threading_Tasks_Task_1__1__Class* klass;
        MonitorData* monitor;
        struct Action_1_System_Threading_Tasks_Task_1__1__Fields fields;
    };

    struct Task_1_Task_1_System_Boolean___Fields {
        struct Task__Fields _;
        struct Task_1_System_Boolean_* m_result;
    };

    struct Task_1_Task_1_System_Boolean_ {
        struct Task_1_Task_1_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Task_1_Task_1_System_Boolean___Fields fields;
    };

    struct __declspec(align(8)) TaskFactory_1_Task_1_System_Boolean___Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory_1_Task_1_System_Boolean_ {
        struct TaskFactory_1_Task_1_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct TaskFactory_1_Task_1_System_Boolean___Fields fields;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23 {
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23__Fields fields;
    };

    struct TaskFactory_1_Task_1_System_Boolean___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskFactory_1_Task_1_System_Boolean___StaticFields {
    };

    struct TaskFactory_1_Task_1_System_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskFactory_1_Task_1_System_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskFactory_1_Task_1_System_Boolean___VTable vtable;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23__VTable {
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

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23__StaticFields {
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23__VTable vtable;
    };

    struct Task_1_Task_1_System_Boolean___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
        VirtualInvokeData get_IsCompleted;
        VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
        VirtualInvokeData get_AsyncState;
        VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData ShouldReplicate;
        VirtualInvokeData CreateReplicaTask;
        VirtualInvokeData get_SavedStateForNextReplica;
        VirtualInvokeData set_SavedStateFromPreviousReplica;
        VirtualInvokeData get_HandedOverChildReplica;
        VirtualInvokeData set_HandedOverChildReplica;
        VirtualInvokeData InnerInvoke;
    };

    struct Task_1_Task_1_System_Boolean___StaticFields {
        struct TaskFactory_1_Task_1_System_Boolean_* s_Factory;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__23* TaskWhenAnyCast;
    };

    struct Task_1_Task_1_System_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Task_1_Task_1_System_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Task_1_Task_1_System_Boolean___VTable vtable;
    };

    struct Action_1_System_Threading_Tasks_Task_1__1__VTable {
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

    struct Action_1_System_Threading_Tasks_Task_1__1__StaticFields {
    };

    struct Action_1_System_Threading_Tasks_Task_1__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_System_Threading_Tasks_Task_1__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_System_Threading_Tasks_Task_1__1__VTable vtable;
    };

    struct XalUser_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUser_c__StaticFields {
        struct XalUser_c* __9;
        struct Action_1_System_Threading_Tasks_Task_1__1* __9__17_0;
    };

    struct XalUser_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_c__VTable vtable;
    };

    struct __declspec(align(8)) XalUser_c_DisplayClass18_0__Fields {
        struct XalUser* __4__this;
        struct Task_1_System_Byte_* buffer;
        struct TaskCompletionSource_1_System_Boolean_* tcs;
    };

    struct XalUser_c_DisplayClass18_0 {
        struct XalUser_c_DisplayClass18_0__Class* klass;
        MonitorData* monitor;
        struct XalUser_c_DisplayClass18_0__Fields fields;
    };

    struct __declspec(align(8)) TaskCompletionSource_1_System_Boolean___Fields {
        struct Task_1_System_Boolean_* m_task;
    };

    struct TaskCompletionSource_1_System_Boolean_ {
        struct TaskCompletionSource_1_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct TaskCompletionSource_1_System_Boolean___Fields fields;
    };

    struct TaskCompletionSource_1_System_Boolean___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskCompletionSource_1_System_Boolean___StaticFields {
    };

    struct TaskCompletionSource_1_System_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskCompletionSource_1_System_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskCompletionSource_1_System_Boolean___VTable vtable;
    };

    struct XalUser_c_DisplayClass18_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalUser_c_DisplayClass18_0__StaticFields {
    };

    struct XalUser_c_DisplayClass18_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUser_c_DisplayClass18_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUser_c_DisplayClass18_0__VTable vtable;
    };

    struct __declspec(align(8)) XalBrowserWrapper__Fields {
        struct GameObject* m_browserPrefab;
        struct GameObject* m_browserPrefabInstance;
        struct Browser* m_browser;
        struct MeshRenderer* m_browserMesh;
        bool m_hitTargetUri;
        void* m_showWebOperationPtr;
        struct String* m_targetUri;
        struct String* m_startUri;
    };

    struct XalBrowserWrapper {
        struct XalBrowserWrapper__Class* klass;
        MonitorData* monitor;
        struct XalBrowserWrapper__Fields fields;
    };

    enum class BrowserNative_ContextMenuOrigin__Enum : int32_t {
        Editable = 0x00000002,
        Image = 0x00000004,
        Selection = 0x00000008,
        Other = 0x00000001,
    };

    struct BrowserNative_ContextMenuOrigin__Enum__Boxed {
        struct BrowserNative_ContextMenuOrigin__Enum__Class* klass;
        MonitorData* monitor;
        BrowserNative_ContextMenuOrigin__Enum value;
    };

    enum class Browser_NewWindowAction__Enum : int32_t {
        Ignore = 0x00000001,
        Redirect = 0x00000002,
        NewBrowser = 0x00000003,
        NewWindow = 0x00000004,
    };

    struct Browser_NewWindowAction__Enum__Boxed {
        struct Browser_NewWindowAction__Enum__Class* klass;
        MonitorData* monitor;
        Browser_NewWindowAction__Enum value;
    };

    struct Browser__Fields {
        struct MonoBehaviour__Fields _;
        struct String* _url;
        int32_t _width;
        int32_t _height;
        bool generateMipmap;
        struct Color32 baseColor;
        float _zoom;
        struct Action_2_String_String_* onConsoleMessage;
        BrowserNative_ContextMenuOrigin__Enum allowContextMenuOn;

        Browser_NewWindowAction__Enum newWindowAction;

        struct INewWindowHandler* _NewWindowHandler_k__BackingField;
        bool _EnableRendering_k__BackingField;
        bool _EnableInput_k__BackingField;
        struct Action_1_UnityEngine_Texture2D_* afterResize;
        struct IBrowserUI* _uiHandler;
        bool uiHandlerAssigned;
        struct CookieManager* _CookieManager_k__BackingField;
        int32_t browserId;
        int32_t unsafeBrowserId;
        bool browserIdRequested;
        struct Texture2D* texture;
        bool textureIsOurs;
        bool forceNextRender;
        bool isPopup;
        struct List_1_System_Action_* thingsToDo;
        struct List_1_System_Action_* onloadActions;
        struct List_1_System_Object_* thingsToRemember;
        int32_t nextCallbackId;
        struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_* registeredCallbacks;
        struct BrowserNative_ReadyFunc* onNativeReady;
        struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* onLoad;
        struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* onFetch;
        struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* onFetchError;
        struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* onCertError;
        struct Action* onSadTab;
        struct Action* onTextureUpdated;
        struct Action* onNavStateChange;
        struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_* onDownloadStarted;
        struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_* onDownloadStatus;
        struct Action_3_String_Boolean_String_* onNodeFocus;
        struct Action_2_Boolean_Boolean_* onBrowserFocus;
        struct BrowserFocusState* focusState;
        struct BrowserInput* browserInput;
        struct Browser* overlay;
        bool skipNextLoad;
        bool loadPending;
        struct BrowserNavState* navState;
        bool newWindowHandlerSet;
        struct INewWindowHandler* newWindowHandler;
        struct DialogHandler* dialogHandler;
        struct Action* pageReplacer;
        float pageReplacerPriority;
        struct List_1_System_Action_* thingsToDoClone;
        struct Color32__Array* colorBuffer;
    };

    struct Browser {
        struct Browser__Class* klass;
        MonitorData* monitor;
        struct Browser__Fields fields;
    };

    struct Action_2_String_String___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_String_String_ {
        struct Action_2_String_String___Class* klass;
        MonitorData* monitor;
        struct Action_2_String_String___Fields fields;
    };

    struct INewWindowHandler {
        struct INewWindowHandler__Class* klass;
        MonitorData* monitor;
    };

    struct Action_1_UnityEngine_Texture2D___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_UnityEngine_Texture2D_ {
        struct Action_1_UnityEngine_Texture2D___Class* klass;
        MonitorData* monitor;
        struct Action_1_UnityEngine_Texture2D___Fields fields;
    };

    struct IBrowserUI {
        struct IBrowserUI__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CookieManager__Fields {
        struct Browser* browser;
    };

    struct CookieManager {
        struct CookieManager__Class* klass;
        MonitorData* monitor;
        struct CookieManager__Fields fields;
    };

    struct __declspec(align(8)) CookieManager_CookieFetch__Fields {
        struct BrowserNative_GetCookieFunc* nativeCB;
        struct Promise_1_System_Collections_Generic_List_1_* promise;
        struct CookieManager* manager;
        struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie_* result;
    };

    struct CookieManager_CookieFetch {
        struct CookieManager_CookieFetch__Class* klass;
        MonitorData* monitor;
        struct CookieManager_CookieFetch__Fields fields;
    };

    struct BrowserNative_GetCookieFunc__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct BrowserNative_GetCookieFunc {
        struct BrowserNative_GetCookieFunc__Class* klass;
        MonitorData* monitor;
        struct BrowserNative_GetCookieFunc__Fields fields;
    };

    struct __declspec(align(8)) BrowserNative_NativeCookie__Fields {
        struct String* name;
        struct String* value;
        struct String* domain;
        struct String* path;
        struct String* creation;
        struct String* lastAccess;
        struct String* expires;
        uint8_t secure;
        uint8_t httpOnly;
    };

    struct BrowserNative_NativeCookie {
        struct BrowserNative_NativeCookie__Class* klass;
        MonitorData* monitor;
        struct BrowserNative_NativeCookie__Fields fields;
    };

} // namespace app
