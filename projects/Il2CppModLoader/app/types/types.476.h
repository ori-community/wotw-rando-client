namespace app {
struct GenericErrorCodes__Enum__Boxed {
    struct GenericErrorCodes__Enum__Class *klass;
    MonitorData *monitor;
    GenericErrorCodes__Enum value;
    
};

struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes_ {
    GenericErrorCodes__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes___Boxed {
    struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes_ fields;
};

struct __declspec(align(8)) RevokeItemError__Fields {
    struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes_ Error;
    struct RevokeInventoryItem *Item;
};

struct RevokeItemError {
    struct RevokeItemError__Class *klass;
    MonitorData *monitor;
    struct RevokeItemError__Fields fields;
};

struct RevokeItemError__Array {
    struct RevokeItemError__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RevokeItemError *vector[32];
};

struct IEnumerator_1_PlayFab_ServerModels_RevokeItemError_ {
    struct IEnumerator_1_PlayFab_ServerModels_RevokeItemError___Class *klass;
    MonitorData *monitor;
};

struct RevokeInventoryItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RevokeInventoryItem__StaticFields {
};

struct RevokeInventoryItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RevokeInventoryItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RevokeInventoryItem__VTable vtable;
};

struct RevokeInventoryItem__Array__VTable {
};

struct RevokeInventoryItem__Array__StaticFields {
};

struct RevokeInventoryItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RevokeInventoryItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RevokeInventoryItem__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ServerModels_RevokeInventoryItem___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ServerModels_RevokeInventoryItem___StaticFields {
};

struct IEnumerator_1_PlayFab_ServerModels_RevokeInventoryItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ServerModels_RevokeInventoryItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ServerModels_RevokeInventoryItem___VTable vtable;
};

struct List_1_PlayFab_ServerModels_RevokeInventoryItem___VTable {
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

struct List_1_PlayFab_ServerModels_RevokeInventoryItem___StaticFields {
    struct RevokeInventoryItem__Array *_emptyArray;
};

struct List_1_PlayFab_ServerModels_RevokeInventoryItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ServerModels_RevokeInventoryItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ServerModels_RevokeInventoryItem___VTable vtable;
};

struct RevokeInventoryItemsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RevokeInventoryItemsRequest__StaticFields {
};

struct RevokeInventoryItemsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RevokeInventoryItemsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RevokeInventoryItemsRequest__VTable vtable;
};

struct GenericErrorCodes__Enum__VTable {
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

struct GenericErrorCodes__Enum__StaticFields {
};

struct GenericErrorCodes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GenericErrorCodes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GenericErrorCodes__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes___StaticFields {
};

struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_ServerModels_GenericErrorCodes___VTable vtable;
};

struct RevokeItemError__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RevokeItemError__StaticFields {
};

struct RevokeItemError__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RevokeItemError__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RevokeItemError__VTable vtable;
};

struct RevokeItemError__Array__VTable {
};

struct RevokeItemError__Array__StaticFields {
};

struct RevokeItemError__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RevokeItemError__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RevokeItemError__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ServerModels_RevokeItemError___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ServerModels_RevokeItemError___StaticFields {
};

struct IEnumerator_1_PlayFab_ServerModels_RevokeItemError___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ServerModels_RevokeItemError___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ServerModels_RevokeItemError___VTable vtable;
};

struct List_1_PlayFab_ServerModels_RevokeItemError___VTable {
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

struct List_1_PlayFab_ServerModels_RevokeItemError___StaticFields {
    struct RevokeItemError__Array *_emptyArray;
};

struct List_1_PlayFab_ServerModels_RevokeItemError___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ServerModels_RevokeItemError___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ServerModels_RevokeItemError___VTable vtable;
};

struct RevokeInventoryItemsResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RevokeInventoryItemsResult__StaticFields {
};

struct RevokeInventoryItemsResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RevokeInventoryItemsResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RevokeInventoryItemsResult__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult___VTable {
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

struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult___VTable vtable;
};

struct SendCustomAccountRecoveryEmailRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *Email;
    struct String *EmailTemplateId;
    struct String *Username;
};

struct SendCustomAccountRecoveryEmailRequest {
    struct SendCustomAccountRecoveryEmailRequest__Class *klass;
    MonitorData *monitor;
    struct SendCustomAccountRecoveryEmailRequest__Fields fields;
};

struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult_ {
    struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult___Fields fields;
};

struct SendCustomAccountRecoveryEmailResult__Fields {
    struct PlayFabResultCommon__Fields _;
};

struct SendCustomAccountRecoveryEmailResult {
    struct SendCustomAccountRecoveryEmailResult__Class *klass;
    MonitorData *monitor;
    struct SendCustomAccountRecoveryEmailResult__Fields fields;
};

struct SendCustomAccountRecoveryEmailRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SendCustomAccountRecoveryEmailRequest__StaticFields {
};

struct SendCustomAccountRecoveryEmailRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SendCustomAccountRecoveryEmailRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SendCustomAccountRecoveryEmailRequest__VTable vtable;
};

struct SendCustomAccountRecoveryEmailResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SendCustomAccountRecoveryEmailResult__StaticFields {
};

struct SendCustomAccountRecoveryEmailResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SendCustomAccountRecoveryEmailResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SendCustomAccountRecoveryEmailResult__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult___VTable {
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

struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult___VTable vtable;
};

struct SendEmailFromTemplateRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *EmailTemplateId;
    struct String *PlayFabId;
};

struct SendEmailFromTemplateRequest {
    struct SendEmailFromTemplateRequest__Class *klass;
    MonitorData *monitor;
    struct SendEmailFromTemplateRequest__Fields fields;
};

struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult_ {
    struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult___Fields fields;
};

struct SendEmailFromTemplateResult__Fields {
    struct PlayFabResultCommon__Fields _;
};

struct SendEmailFromTemplateResult {
    struct SendEmailFromTemplateResult__Class *klass;
    MonitorData *monitor;
    struct SendEmailFromTemplateResult__Fields fields;
};

struct SendEmailFromTemplateRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SendEmailFromTemplateRequest__StaticFields {
};

struct SendEmailFromTemplateRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SendEmailFromTemplateRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SendEmailFromTemplateRequest__VTable vtable;
};

struct SendEmailFromTemplateResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SendEmailFromTemplateResult__StaticFields {
};

struct SendEmailFromTemplateResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SendEmailFromTemplateResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SendEmailFromTemplateResult__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult___VTable {
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

struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult___VTable vtable;
};

struct SendPushNotificationRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg_ *AdvancedPlatformDelivery;
    struct String *Message;
    struct PushNotificationPackage *Package;
    struct String *Recipient;
    struct String *Subject;
    struct List_1_PlayFab_ServerModels_PushNotificationPlatform_ *TargetPlatforms;
};

struct SendPushNotificationRequest {
    struct SendPushNotificationRequest__Class *klass;
    MonitorData *monitor;
    struct SendPushNotificationRequest__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___Fields {
    struct AdvancedPushPlatformMsg__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg_ {
    struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___Fields fields;
};

struct __declspec(align(8)) AdvancedPushPlatformMsg__Fields {
    struct String *Json;
    PushNotificationPlatform__Enum_1 Platform;
    
};

struct AdvancedPushPlatformMsg {
    struct AdvancedPushPlatformMsg__Class *klass;
    MonitorData *monitor;
    struct AdvancedPushPlatformMsg__Fields fields;
};

struct AdvancedPushPlatformMsg__Array {
    struct AdvancedPushPlatformMsg__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AdvancedPushPlatformMsg *vector[32];
};

struct IEnumerator_1_PlayFab_ServerModels_AdvancedPushPlatformMsg_ {
    struct IEnumerator_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PushNotificationPackage__Fields {
    int32_t Badge;
    struct String *CustomData;
    struct String *Icon;
    struct String *Message;
    struct String *Sound;
    struct String *Title;
};

struct PushNotificationPackage {
    struct PushNotificationPackage__Class *klass;
    MonitorData *monitor;
    struct PushNotificationPackage__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ServerModels_PushNotificationPlatform___Fields {
    struct PushNotificationPlatform__Enum_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ServerModels_PushNotificationPlatform_ {
    struct List_1_PlayFab_ServerModels_PushNotificationPlatform___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ServerModels_PushNotificationPlatform___Fields fields;
};

struct PushNotificationPlatform__Enum_1__Array {
    struct PushNotificationPlatform__Enum_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    PushNotificationPlatform__Enum_1 vector[32];
};

struct IEnumerator_1_PlayFab_ServerModels_PushNotificationPlatform_ {
    struct IEnumerator_1_PlayFab_ServerModels_PushNotificationPlatform___Class *klass;
    MonitorData *monitor;
};

struct Action_1_PlayFab_ServerModels_SendPushNotificationResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ServerModels_SendPushNotificationResult_ {
    struct Action_1_PlayFab_ServerModels_SendPushNotificationResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ServerModels_SendPushNotificationResult___Fields fields;
};

struct SendPushNotificationResult__Fields {
    struct PlayFabResultCommon__Fields _;
};

struct SendPushNotificationResult {
    struct SendPushNotificationResult__Class *klass;
    MonitorData *monitor;
    struct SendPushNotificationResult__Fields fields;
};

struct AdvancedPushPlatformMsg__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AdvancedPushPlatformMsg__StaticFields {
};

struct AdvancedPushPlatformMsg__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdvancedPushPlatformMsg__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdvancedPushPlatformMsg__VTable vtable;
};

struct AdvancedPushPlatformMsg__Array__VTable {
};

struct AdvancedPushPlatformMsg__Array__StaticFields {
};

struct AdvancedPushPlatformMsg__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdvancedPushPlatformMsg__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdvancedPushPlatformMsg__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___StaticFields {
};

struct IEnumerator_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___VTable vtable;
};

struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___VTable {
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

struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___StaticFields {
    struct AdvancedPushPlatformMsg__Array *_emptyArray;
};

struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg___VTable vtable;
};

struct PushNotificationPackage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PushNotificationPackage__StaticFields {
};

struct PushNotificationPackage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PushNotificationPackage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PushNotificationPackage__VTable vtable;
};

struct PushNotificationPlatform__Enum_1__Array__VTable {
};

struct PushNotificationPlatform__Enum_1__Array__StaticFields {
};

struct PushNotificationPlatform__Enum_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PushNotificationPlatform__Enum_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PushNotificationPlatform__Enum_1__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ServerModels_PushNotificationPlatform___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ServerModels_PushNotificationPlatform___StaticFields {
};

struct IEnumerator_1_PlayFab_ServerModels_PushNotificationPlatform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ServerModels_PushNotificationPlatform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ServerModels_PushNotificationPlatform___VTable vtable;
};

struct List_1_PlayFab_ServerModels_PushNotificationPlatform___VTable {
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

struct List_1_PlayFab_ServerModels_PushNotificationPlatform___StaticFields {
    struct PushNotificationPlatform__Enum_1__Array *_emptyArray;
};

struct List_1_PlayFab_ServerModels_PushNotificationPlatform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ServerModels_PushNotificationPlatform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ServerModels_PushNotificationPlatform___VTable vtable;
};

struct SendPushNotificationRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SendPushNotificationRequest__StaticFields {
};

struct SendPushNotificationRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SendPushNotificationRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SendPushNotificationRequest__VTable vtable;
};

struct SendPushNotificationResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SendPushNotificationResult__StaticFields {
};

struct SendPushNotificationResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SendPushNotificationResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SendPushNotificationResult__VTable vtable;
};

struct Action_1_PlayFab_ServerModels_SendPushNotificationResult___VTable {
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

struct Action_1_PlayFab_ServerModels_SendPushNotificationResult___StaticFields {
};

struct Action_1_PlayFab_ServerModels_SendPushNotificationResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_SendPushNotificationResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_SendPushNotificationResult___VTable vtable;
};

struct SetFriendTagsRequest_1__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *FriendPlayFabId;
    struct String *PlayFabId;
    struct List_1_System_String_ *Tags;
};

struct SetFriendTagsRequest_1 {
    struct SetFriendTagsRequest_1__Class *klass;
    MonitorData *monitor;
    struct SetFriendTagsRequest_1__Fields fields;
};

struct SetFriendTagsRequest_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SetFriendTagsRequest_1__StaticFields {
};

struct SetFriendTagsRequest_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetFriendTagsRequest_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetFriendTagsRequest_1__VTable vtable;
};

struct SetGameServerInstanceDataRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *GameServerData;
    struct String *LobbyId;
};

struct SetGameServerInstanceDataRequest {
    struct SetGameServerInstanceDataRequest__Class *klass;
    MonitorData *monitor;
    struct SetGameServerInstanceDataRequest__Fields fields;
};

struct Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult___Fields {
    struct MulticastDelegate__Fields _;
};

}
