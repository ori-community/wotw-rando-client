namespace app {
struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair___VTable {
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

struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair___StaticFields {
    struct GenericPlayFabIdPair__Array *_emptyArray;
};

struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ClientModels_GenericPlayFabIdPair___VTable vtable;
};

struct GetPlayFabIDsFromGenericIDsResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetPlayFabIDsFromGenericIDsResult__StaticFields {
};

struct GetPlayFabIDsFromGenericIDsResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetPlayFabIDsFromGenericIDsResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetPlayFabIDsFromGenericIDsResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult___VTable {
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

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult___VTable vtable;
};

struct GetPlayFabIDsFromGoogleIDsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct List_1_System_String_ *GoogleIDs;
};

struct GetPlayFabIDsFromGoogleIDsRequest {
    struct GetPlayFabIDsFromGoogleIDsRequest__Class *klass;
    MonitorData *monitor;
    struct GetPlayFabIDsFromGoogleIDsRequest__Fields fields;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult_ {
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult___Fields fields;
};

struct GetPlayFabIDsFromGoogleIDsResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair_ *Data;
};

struct GetPlayFabIDsFromGoogleIDsResult {
    struct GetPlayFabIDsFromGoogleIDsResult__Class *klass;
    MonitorData *monitor;
    struct GetPlayFabIDsFromGoogleIDsResult__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ClientModels_GooglePlayFabIdPair___Fields {
    struct GooglePlayFabIdPair__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair_ {
    struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair___Fields fields;
};

struct __declspec(align(8)) GooglePlayFabIdPair__Fields {
    struct String *GoogleId;
    struct String *PlayFabId;
};

struct GooglePlayFabIdPair {
    struct GooglePlayFabIdPair__Class *klass;
    MonitorData *monitor;
    struct GooglePlayFabIdPair__Fields fields;
};

struct GooglePlayFabIdPair__Array {
    struct GooglePlayFabIdPair__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GooglePlayFabIdPair *vector[32];
};

struct IEnumerator_1_PlayFab_ClientModels_GooglePlayFabIdPair_ {
    struct IEnumerator_1_PlayFab_ClientModels_GooglePlayFabIdPair___Class *klass;
    MonitorData *monitor;
};

struct GetPlayFabIDsFromGoogleIDsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetPlayFabIDsFromGoogleIDsRequest__StaticFields {
};

struct GetPlayFabIDsFromGoogleIDsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetPlayFabIDsFromGoogleIDsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetPlayFabIDsFromGoogleIDsRequest__VTable vtable;
};

struct GooglePlayFabIdPair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GooglePlayFabIdPair__StaticFields {
};

struct GooglePlayFabIdPair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GooglePlayFabIdPair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GooglePlayFabIdPair__VTable vtable;
};

struct GooglePlayFabIdPair__Array__VTable {
};

struct GooglePlayFabIdPair__Array__StaticFields {
};

struct GooglePlayFabIdPair__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GooglePlayFabIdPair__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GooglePlayFabIdPair__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ClientModels_GooglePlayFabIdPair___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ClientModels_GooglePlayFabIdPair___StaticFields {
};

struct IEnumerator_1_PlayFab_ClientModels_GooglePlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ClientModels_GooglePlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ClientModels_GooglePlayFabIdPair___VTable vtable;
};

struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair___VTable {
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

struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair___StaticFields {
    struct GooglePlayFabIdPair__Array *_emptyArray;
};

struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ClientModels_GooglePlayFabIdPair___VTable vtable;
};

struct GetPlayFabIDsFromGoogleIDsResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetPlayFabIDsFromGoogleIDsResult__StaticFields {
};

struct GetPlayFabIDsFromGoogleIDsResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetPlayFabIDsFromGoogleIDsResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetPlayFabIDsFromGoogleIDsResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult___VTable {
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

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult___VTable vtable;
};

struct GetPlayFabIDsFromKongregateIDsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct List_1_System_String_ *KongregateIDs;
};

struct GetPlayFabIDsFromKongregateIDsRequest {
    struct GetPlayFabIDsFromKongregateIDsRequest__Class *klass;
    MonitorData *monitor;
    struct GetPlayFabIDsFromKongregateIDsRequest__Fields fields;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult_ {
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult___Fields fields;
};

struct GetPlayFabIDsFromKongregateIDsResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair_ *Data;
};

struct GetPlayFabIDsFromKongregateIDsResult {
    struct GetPlayFabIDsFromKongregateIDsResult__Class *klass;
    MonitorData *monitor;
    struct GetPlayFabIDsFromKongregateIDsResult__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ClientModels_KongregatePlayFabIdPair___Fields {
    struct KongregatePlayFabIdPair__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair_ {
    struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair___Fields fields;
};

struct __declspec(align(8)) KongregatePlayFabIdPair__Fields {
    struct String *KongregateId;
    struct String *PlayFabId;
};

struct KongregatePlayFabIdPair {
    struct KongregatePlayFabIdPair__Class *klass;
    MonitorData *monitor;
    struct KongregatePlayFabIdPair__Fields fields;
};

struct KongregatePlayFabIdPair__Array {
    struct KongregatePlayFabIdPair__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KongregatePlayFabIdPair *vector[32];
};

struct IEnumerator_1_PlayFab_ClientModels_KongregatePlayFabIdPair_ {
    struct IEnumerator_1_PlayFab_ClientModels_KongregatePlayFabIdPair___Class *klass;
    MonitorData *monitor;
};

struct GetPlayFabIDsFromKongregateIDsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetPlayFabIDsFromKongregateIDsRequest__StaticFields {
};

struct GetPlayFabIDsFromKongregateIDsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetPlayFabIDsFromKongregateIDsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetPlayFabIDsFromKongregateIDsRequest__VTable vtable;
};

struct KongregatePlayFabIdPair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KongregatePlayFabIdPair__StaticFields {
};

struct KongregatePlayFabIdPair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KongregatePlayFabIdPair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KongregatePlayFabIdPair__VTable vtable;
};

struct KongregatePlayFabIdPair__Array__VTable {
};

struct KongregatePlayFabIdPair__Array__StaticFields {
};

struct KongregatePlayFabIdPair__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KongregatePlayFabIdPair__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KongregatePlayFabIdPair__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ClientModels_KongregatePlayFabIdPair___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ClientModels_KongregatePlayFabIdPair___StaticFields {
};

struct IEnumerator_1_PlayFab_ClientModels_KongregatePlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ClientModels_KongregatePlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ClientModels_KongregatePlayFabIdPair___VTable vtable;
};

struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair___VTable {
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

struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair___StaticFields {
    struct KongregatePlayFabIdPair__Array *_emptyArray;
};

struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ClientModels_KongregatePlayFabIdPair___VTable vtable;
};

struct GetPlayFabIDsFromKongregateIDsResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetPlayFabIDsFromKongregateIDsResult__StaticFields {
};

struct GetPlayFabIDsFromKongregateIDsResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetPlayFabIDsFromKongregateIDsResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetPlayFabIDsFromKongregateIDsResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult___VTable {
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

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult___VTable vtable;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct List_1_System_String_ *NintendoSwitchDeviceIds;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest {
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class *klass;
    MonitorData *monitor;
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Fields fields;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_ {
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult___Fields fields;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair_ *Data;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult {
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__Class *klass;
    MonitorData *monitor;
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___Fields {
    struct NintendoSwitchPlayFabIdPair__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair_ {
    struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___Fields fields;
};

struct __declspec(align(8)) NintendoSwitchPlayFabIdPair__Fields {
    struct String *NintendoSwitchDeviceId;
    struct String *PlayFabId;
};

struct NintendoSwitchPlayFabIdPair {
    struct NintendoSwitchPlayFabIdPair__Class *klass;
    MonitorData *monitor;
    struct NintendoSwitchPlayFabIdPair__Fields fields;
};

struct NintendoSwitchPlayFabIdPair__Array {
    struct NintendoSwitchPlayFabIdPair__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct NintendoSwitchPlayFabIdPair *vector[32];
};

struct IEnumerator_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair_ {
    struct IEnumerator_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___Class *klass;
    MonitorData *monitor;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__StaticFields {
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__VTable vtable;
};

struct NintendoSwitchPlayFabIdPair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoSwitchPlayFabIdPair__StaticFields {
};

struct NintendoSwitchPlayFabIdPair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSwitchPlayFabIdPair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSwitchPlayFabIdPair__VTable vtable;
};

struct NintendoSwitchPlayFabIdPair__Array__VTable {
};

struct NintendoSwitchPlayFabIdPair__Array__StaticFields {
};

struct NintendoSwitchPlayFabIdPair__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoSwitchPlayFabIdPair__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoSwitchPlayFabIdPair__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___StaticFields {
};

struct IEnumerator_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___VTable vtable;
};

struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___VTable {
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

struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___StaticFields {
    struct NintendoSwitchPlayFabIdPair__Array *_emptyArray;
};

struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair___VTable vtable;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__StaticFields {
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult___VTable {
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

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult___VTable vtable;
};

struct GetPlayFabIDsFromPSNAccountIDsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Int32_ IssuerId;
    struct List_1_System_String_ *PSNAccountIDs;
};

struct GetPlayFabIDsFromPSNAccountIDsRequest {
    struct GetPlayFabIDsFromPSNAccountIDsRequest__Class *klass;
    MonitorData *monitor;
    struct GetPlayFabIDsFromPSNAccountIDsRequest__Fields fields;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult_ {
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult___Fields fields;
};

struct GetPlayFabIDsFromPSNAccountIDsResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair_ *Data;
};

struct GetPlayFabIDsFromPSNAccountIDsResult {
    struct GetPlayFabIDsFromPSNAccountIDsResult__Class *klass;
    MonitorData *monitor;
    struct GetPlayFabIDsFromPSNAccountIDsResult__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___Fields {
    struct PSNAccountPlayFabIdPair__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair_ {
    struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___Fields fields;
};

struct __declspec(align(8)) PSNAccountPlayFabIdPair__Fields {
    struct String *PlayFabId;
    struct String *PSNAccountId;
};

struct PSNAccountPlayFabIdPair {
    struct PSNAccountPlayFabIdPair__Class *klass;
    MonitorData *monitor;
    struct PSNAccountPlayFabIdPair__Fields fields;
};

struct PSNAccountPlayFabIdPair__Array {
    struct PSNAccountPlayFabIdPair__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PSNAccountPlayFabIdPair *vector[32];
};

struct IEnumerator_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair_ {
    struct IEnumerator_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___Class *klass;
    MonitorData *monitor;
};

struct GetPlayFabIDsFromPSNAccountIDsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetPlayFabIDsFromPSNAccountIDsRequest__StaticFields {
};

struct GetPlayFabIDsFromPSNAccountIDsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetPlayFabIDsFromPSNAccountIDsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetPlayFabIDsFromPSNAccountIDsRequest__VTable vtable;
};

struct PSNAccountPlayFabIdPair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PSNAccountPlayFabIdPair__StaticFields {
};

struct PSNAccountPlayFabIdPair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PSNAccountPlayFabIdPair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PSNAccountPlayFabIdPair__VTable vtable;
};

struct PSNAccountPlayFabIdPair__Array__VTable {
};

struct PSNAccountPlayFabIdPair__Array__StaticFields {
};

struct PSNAccountPlayFabIdPair__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PSNAccountPlayFabIdPair__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PSNAccountPlayFabIdPair__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___StaticFields {
};

struct IEnumerator_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___VTable vtable;
};

struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___VTable {
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

struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___StaticFields {
    struct PSNAccountPlayFabIdPair__Array *_emptyArray;
};

struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ClientModels_PSNAccountPlayFabIdPair___VTable vtable;
};

}
