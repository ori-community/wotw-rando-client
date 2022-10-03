namespace app {
    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult_ {
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult___Fields fields;
    };

    struct SetGameServerInstanceDataResult__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct SetGameServerInstanceDataResult {
        struct SetGameServerInstanceDataResult__Class* klass;
        MonitorData* monitor;
        struct SetGameServerInstanceDataResult__Fields fields;
    };

    struct SetGameServerInstanceDataRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetGameServerInstanceDataRequest__StaticFields {
    };

    struct SetGameServerInstanceDataRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetGameServerInstanceDataRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetGameServerInstanceDataRequest__VTable vtable;
    };

    struct SetGameServerInstanceDataResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetGameServerInstanceDataResult__StaticFields {
    };

    struct SetGameServerInstanceDataResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetGameServerInstanceDataResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetGameServerInstanceDataResult__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult___VTable vtable;
    };

    enum class GameInstanceState__Enum_1 : int32_t {
        Open = 0x00000000,
        Closed = 0x00000001,
    };

    struct GameInstanceState__Enum_1__Boxed {
        struct GameInstanceState__Enum_1__Class* klass;
        MonitorData* monitor;
        GameInstanceState__Enum_1 value;
    };

    struct SetGameServerInstanceStateRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* LobbyId;
        GameInstanceState__Enum_1 State;
    };

    struct SetGameServerInstanceStateRequest {
        struct SetGameServerInstanceStateRequest__Class* klass;
        MonitorData* monitor;
        struct SetGameServerInstanceStateRequest__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult_ {
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult___Fields fields;
    };

    struct SetGameServerInstanceStateResult__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct SetGameServerInstanceStateResult {
        struct SetGameServerInstanceStateResult__Class* klass;
        MonitorData* monitor;
        struct SetGameServerInstanceStateResult__Fields fields;
    };

    struct GameInstanceState__Enum_1__VTable {
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

    struct GameInstanceState__Enum_1__StaticFields {
    };

    struct GameInstanceState__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameInstanceState__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameInstanceState__Enum_1__VTable vtable;
    };

    struct SetGameServerInstanceStateRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetGameServerInstanceStateRequest__StaticFields {
    };

    struct SetGameServerInstanceStateRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetGameServerInstanceStateRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetGameServerInstanceStateRequest__VTable vtable;
    };

    struct SetGameServerInstanceStateResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetGameServerInstanceStateResult__StaticFields {
    };

    struct SetGameServerInstanceStateResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetGameServerInstanceStateResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetGameServerInstanceStateResult__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult___VTable vtable;
    };

    struct SetGameServerInstanceTagsRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* LobbyId;
        struct Dictionary_2_System_String_System_String_* Tags;
    };

    struct SetGameServerInstanceTagsRequest {
        struct SetGameServerInstanceTagsRequest__Class* klass;
        MonitorData* monitor;
        struct SetGameServerInstanceTagsRequest__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_ {
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult___Fields fields;
    };

    struct SetGameServerInstanceTagsResult__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct SetGameServerInstanceTagsResult {
        struct SetGameServerInstanceTagsResult__Class* klass;
        MonitorData* monitor;
        struct SetGameServerInstanceTagsResult__Fields fields;
    };

    struct SetGameServerInstanceTagsRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetGameServerInstanceTagsRequest__StaticFields {
    };

    struct SetGameServerInstanceTagsRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetGameServerInstanceTagsRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetGameServerInstanceTagsRequest__VTable vtable;
    };

    struct SetGameServerInstanceTagsResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetGameServerInstanceTagsResult__StaticFields {
    };

    struct SetGameServerInstanceTagsResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetGameServerInstanceTagsResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetGameServerInstanceTagsResult__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult___VTable vtable;
    };

    struct SetPlayerSecretRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* PlayerSecret;
        struct String* PlayFabId;
    };

    struct SetPlayerSecretRequest_1 {
        struct SetPlayerSecretRequest_1__Class* klass;
        MonitorData* monitor;
        struct SetPlayerSecretRequest_1__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult_ {
        struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult___Fields fields;
    };

    struct SetPlayerSecretResult_1__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct SetPlayerSecretResult_1 {
        struct SetPlayerSecretResult_1__Class* klass;
        MonitorData* monitor;
        struct SetPlayerSecretResult_1__Fields fields;
    };

    struct SetPlayerSecretRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetPlayerSecretRequest_1__StaticFields {
    };

    struct SetPlayerSecretRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetPlayerSecretRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetPlayerSecretRequest_1__VTable vtable;
    };

    struct SetPlayerSecretResult_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetPlayerSecretResult_1__StaticFields {
    };

    struct SetPlayerSecretResult_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetPlayerSecretResult_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetPlayerSecretResult_1__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_SetPlayerSecretResult___VTable vtable;
    };

    struct SetPublisherDataRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* Key;
        struct String* Value;
    };

    struct SetPublisherDataRequest {
        struct SetPublisherDataRequest__Class* klass;
        MonitorData* monitor;
        struct SetPublisherDataRequest__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_SetPublisherDataResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_SetPublisherDataResult_ {
        struct Action_1_PlayFab_ServerModels_SetPublisherDataResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_SetPublisherDataResult___Fields fields;
    };

    struct SetPublisherDataResult__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct SetPublisherDataResult {
        struct SetPublisherDataResult__Class* klass;
        MonitorData* monitor;
        struct SetPublisherDataResult__Fields fields;
    };

    struct SetPublisherDataRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetPublisherDataRequest__StaticFields {
    };

    struct SetPublisherDataRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetPublisherDataRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetPublisherDataRequest__VTable vtable;
    };

    struct SetPublisherDataResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetPublisherDataResult__StaticFields {
    };

    struct SetPublisherDataResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetPublisherDataResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetPublisherDataResult__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_SetPublisherDataResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_SetPublisherDataResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_SetPublisherDataResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_SetPublisherDataResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_SetPublisherDataResult___VTable vtable;
    };

    struct SetTitleDataRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* Key;
        struct String* Value;
    };

    struct SetTitleDataRequest {
        struct SetTitleDataRequest__Class* klass;
        MonitorData* monitor;
        struct SetTitleDataRequest__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_SetTitleDataResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_SetTitleDataResult_ {
        struct Action_1_PlayFab_ServerModels_SetTitleDataResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_SetTitleDataResult___Fields fields;
    };

    struct SetTitleDataResult__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct SetTitleDataResult {
        struct SetTitleDataResult__Class* klass;
        MonitorData* monitor;
        struct SetTitleDataResult__Fields fields;
    };

    struct SetTitleDataRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetTitleDataRequest__StaticFields {
    };

    struct SetTitleDataRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetTitleDataRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetTitleDataRequest__VTable vtable;
    };

    struct SetTitleDataResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetTitleDataResult__StaticFields {
    };

    struct SetTitleDataResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetTitleDataResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetTitleDataResult__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_SetTitleDataResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_SetTitleDataResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_SetTitleDataResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_SetTitleDataResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_SetTitleDataResult___VTable vtable;
    };

    struct SubtractCharacterVirtualCurrencyRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        int32_t Amount;
        struct String* CharacterId;
        struct String* PlayFabId;
        struct String* VirtualCurrency;
    };

    struct SubtractCharacterVirtualCurrencyRequest {
        struct SubtractCharacterVirtualCurrencyRequest__Class* klass;
        MonitorData* monitor;
        struct SubtractCharacterVirtualCurrencyRequest__Fields fields;
    };

    struct SubtractCharacterVirtualCurrencyRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SubtractCharacterVirtualCurrencyRequest__StaticFields {
    };

    struct SubtractCharacterVirtualCurrencyRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SubtractCharacterVirtualCurrencyRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SubtractCharacterVirtualCurrencyRequest__VTable vtable;
    };

    struct SubtractUserVirtualCurrencyRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        int32_t Amount;
        struct String* PlayFabId;
        struct String* VirtualCurrency;
    };

    struct SubtractUserVirtualCurrencyRequest_1 {
        struct SubtractUserVirtualCurrencyRequest_1__Class* klass;
        MonitorData* monitor;
        struct SubtractUserVirtualCurrencyRequest_1__Fields fields;
    };

    struct SubtractUserVirtualCurrencyRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SubtractUserVirtualCurrencyRequest_1__StaticFields {
    };

    struct SubtractUserVirtualCurrencyRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SubtractUserVirtualCurrencyRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SubtractUserVirtualCurrencyRequest_1__VTable vtable;
    };

    struct UnlinkXboxAccountRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* PlayFabId;
        struct String* XboxToken;
    };

    struct UnlinkXboxAccountRequest_1 {
        struct UnlinkXboxAccountRequest_1__Class* klass;
        MonitorData* monitor;
        struct UnlinkXboxAccountRequest_1__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult_ {
        struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult___Fields fields;
    };

    struct UnlinkXboxAccountResult_1__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct UnlinkXboxAccountResult_1 {
        struct UnlinkXboxAccountResult_1__Class* klass;
        MonitorData* monitor;
        struct UnlinkXboxAccountResult_1__Fields fields;
    };

    struct UnlinkXboxAccountRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UnlinkXboxAccountRequest_1__StaticFields {
    };

    struct UnlinkXboxAccountRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnlinkXboxAccountRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnlinkXboxAccountRequest_1__VTable vtable;
    };

    struct UnlinkXboxAccountResult_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UnlinkXboxAccountResult_1__StaticFields {
    };

    struct UnlinkXboxAccountResult_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnlinkXboxAccountResult_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnlinkXboxAccountResult_1__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult___VTable vtable;
    };

    struct UnlockContainerInstanceRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* CatalogVersion;
        struct String* CharacterId;
        struct String* ContainerItemInstanceId;
        struct String* KeyItemInstanceId;
        struct String* PlayFabId;
    };

    struct UnlockContainerInstanceRequest_1 {
        struct UnlockContainerInstanceRequest_1__Class* klass;
        MonitorData* monitor;
        struct UnlockContainerInstanceRequest_1__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult_ {
        struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult___Fields fields;
    };

    struct UnlockContainerItemResult_1__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ServerModels_ItemInstance_* GrantedItems;
        struct String* UnlockedItemInstanceId;
        struct String* UnlockedWithItemInstanceId;
        struct Dictionary_2_System_String_System_UInt32_* VirtualCurrency;
    };

    struct UnlockContainerItemResult_1 {
        struct UnlockContainerItemResult_1__Class* klass;
        MonitorData* monitor;
        struct UnlockContainerItemResult_1__Fields fields;
    };

    struct UnlockContainerInstanceRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UnlockContainerInstanceRequest_1__StaticFields {
    };

    struct UnlockContainerInstanceRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnlockContainerInstanceRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnlockContainerInstanceRequest_1__VTable vtable;
    };

    struct UnlockContainerItemResult_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UnlockContainerItemResult_1__StaticFields {
    };

    struct UnlockContainerItemResult_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnlockContainerItemResult_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnlockContainerItemResult_1__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_UnlockContainerItemResult___VTable vtable;
    };

    struct UnlockContainerItemRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* CatalogVersion;
        struct String* CharacterId;
        struct String* ContainerItemId;
        struct String* PlayFabId;
    };

    struct UnlockContainerItemRequest_1 {
        struct UnlockContainerItemRequest_1__Class* klass;
        MonitorData* monitor;
        struct UnlockContainerItemRequest_1__Fields fields;
    };

    struct UnlockContainerItemRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UnlockContainerItemRequest_1__StaticFields {
    };

    struct UnlockContainerItemRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnlockContainerItemRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnlockContainerItemRequest_1__VTable vtable;
    };

    struct UpdateAvatarUrlRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* ImageUrl;
        struct String* PlayFabId;
    };

    struct UpdateAvatarUrlRequest_1 {
        struct UpdateAvatarUrlRequest_1__Class* klass;
        MonitorData* monitor;
        struct UpdateAvatarUrlRequest_1__Fields fields;
    };

    struct UpdateAvatarUrlRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UpdateAvatarUrlRequest_1__StaticFields {
    };

    struct UpdateAvatarUrlRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UpdateAvatarUrlRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UpdateAvatarUrlRequest_1__VTable vtable;
    };

    struct UpdateBansRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct List_1_PlayFab_ServerModels_UpdateBanRequest_* Bans;
    };

    struct UpdateBansRequest {
        struct UpdateBansRequest__Class* klass;
        MonitorData* monitor;
        struct UpdateBansRequest__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_UpdateBanRequest___Fields {
        struct UpdateBanRequest__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_UpdateBanRequest_ {
        struct List_1_PlayFab_ServerModels_UpdateBanRequest___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_UpdateBanRequest___Fields fields;
    };

    struct UpdateBanRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct Nullable_1_Boolean_ Active;
        struct String* BanId;
        struct Nullable_1_DateTime_ Expires;
        struct String* IPAddress;
        struct String* MACAddress;
        struct Nullable_1_Boolean_ Permanent;
        struct String* Reason;
    };

} // namespace app
