namespace app {
struct XalSignInProvider_SignIn_b_31_0_d {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct XalSignInProvider *__4__this;
    struct TaskAwaiter __u__1;
};

struct XalSignInProvider_SignIn_b_31_0_d__Boxed {
    struct XalSignInProvider_SignIn_b_31_0_d__Class *klass;
    MonitorData *monitor;
    struct XalSignInProvider_SignIn_b_31_0_d fields;
};

struct XalSignInProvider_SignIn_b_31_0_d__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct XalSignInProvider_SignIn_b_31_0_d__StaticFields {
};

struct XalSignInProvider_SignIn_b_31_0_d__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalSignInProvider_SignIn_b_31_0_d__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalSignInProvider_SignIn_b_31_0_d__VTable vtable;
};

struct __declspec(align(8)) XboxSignInProvider__Fields {
    struct INetworkConnectivityChecker *m_networkConnectivityChecker;
    struct XboxUser *m_xboxUser;
    bool m_userPicked;
    float m_tokenTimer;
    struct String *_LinkToken_k__BackingField;
};

struct XboxSignInProvider {
    struct XboxSignInProvider__Class *klass;
    MonitorData *monitor;
    struct XboxSignInProvider__Fields fields;
};

struct XboxSignInProvider__VTable {
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
    VirtualInvokeData Update;
};

struct XboxSignInProvider__StaticFields {
};

struct XboxSignInProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XboxSignInProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XboxSignInProvider__VTable vtable;
};

struct __declspec(align(8)) NintendoPlayFabSynchronizer__Fields {
    bool m_hasSynced;
    float m_lastSyncTime;
    bool m_linkStarted;
    bool m_linked;
    bool m_syncing;
};

struct NintendoPlayFabSynchronizer {
    struct NintendoPlayFabSynchronizer__Class *klass;
    MonitorData *monitor;
    struct NintendoPlayFabSynchronizer__Fields fields;
};

struct NintendoPlayFabSynchronizer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoPlayFabSynchronizer__StaticFields {
    struct NintendoPlayFabSynchronizer *m_instance;
    bool Active;
    bool SyncSpamMode;
};

struct NintendoPlayFabSynchronizer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoPlayFabSynchronizer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoPlayFabSynchronizer__VTable vtable;
};

struct __declspec(align(8)) NintendoPlayFabSynchronizer_c_DisplayClass18_0__Fields {
    struct String *playFabId;
};

struct NintendoPlayFabSynchronizer_c_DisplayClass18_0 {
    struct NintendoPlayFabSynchronizer_c_DisplayClass18_0__Class *klass;
    MonitorData *monitor;
    struct NintendoPlayFabSynchronizer_c_DisplayClass18_0__Fields fields;
};

struct NintendoPlayFabSynchronizer_c_DisplayClass18_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoPlayFabSynchronizer_c_DisplayClass18_0__StaticFields {
};

struct NintendoPlayFabSynchronizer_c_DisplayClass18_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoPlayFabSynchronizer_c_DisplayClass18_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoPlayFabSynchronizer_c_DisplayClass18_0__VTable vtable;
};

struct NintendoPlayFabSynchronizer_c {
    struct NintendoPlayFabSynchronizer_c__Class *klass;
    MonitorData *monitor;
};

struct NintendoPlayFabSynchronizer_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoPlayFabSynchronizer_c__StaticFields {
    struct NintendoPlayFabSynchronizer_c *__9;
    struct Action_1_PlayFab_ClientModels_AddFriendResult_ *__9__18_0;
    struct Action_1_PlayFab_ClientModels_RemoveFriendResult_ *__9__19_0;
};

struct NintendoPlayFabSynchronizer_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoPlayFabSynchronizer_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoPlayFabSynchronizer_c__VTable vtable;
};

struct __declspec(align(8)) NintendoPlayFabSynchronizer_c_DisplayClass19_0__Fields {
    struct String *playFabId;
};

struct NintendoPlayFabSynchronizer_c_DisplayClass19_0 {
    struct NintendoPlayFabSynchronizer_c_DisplayClass19_0__Class *klass;
    MonitorData *monitor;
    struct NintendoPlayFabSynchronizer_c_DisplayClass19_0__Fields fields;
};

struct NintendoPlayFabSynchronizer_c_DisplayClass19_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NintendoPlayFabSynchronizer_c_DisplayClass19_0__StaticFields {
};

struct NintendoPlayFabSynchronizer_c_DisplayClass19_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NintendoPlayFabSynchronizer_c_DisplayClass19_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NintendoPlayFabSynchronizer_c_DisplayClass19_0__VTable vtable;
};

struct SystemIntegrationMainThreadRunner__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_SystemIntegration_IUpdateable_ *m_updateable;
    struct Queue_1_System_Action_ *m_queue;
};

struct SystemIntegrationMainThreadRunner {
    struct SystemIntegrationMainThreadRunner__Class *klass;
    MonitorData *monitor;
    struct SystemIntegrationMainThreadRunner__Fields fields;
};

struct __declspec(align(8)) List_1_SystemIntegration_IUpdateable___Fields {
    struct IUpdateable__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SystemIntegration_IUpdateable_ {
    struct List_1_SystemIntegration_IUpdateable___Class *klass;
    MonitorData *monitor;
    struct List_1_SystemIntegration_IUpdateable___Fields fields;
};

struct IUpdateable {
    struct IUpdateable__Class *klass;
    MonitorData *monitor;
};

struct IUpdateable__Array {
    struct IUpdateable__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IUpdateable *vector[32];
};

struct IEnumerator_1_SystemIntegration_IUpdateable_ {
    struct IEnumerator_1_SystemIntegration_IUpdateable___Class *klass;
    MonitorData *monitor;
};

struct IUpdateable__VTable {
    VirtualInvokeData Update;
};

struct IUpdateable__StaticFields {
};

struct IUpdateable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IUpdateable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IUpdateable__VTable vtable;
};

struct IUpdateable__Array__VTable {
};

struct IUpdateable__Array__StaticFields {
};

struct IUpdateable__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IUpdateable__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IUpdateable__Array__VTable vtable;
};

struct IEnumerator_1_SystemIntegration_IUpdateable___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SystemIntegration_IUpdateable___StaticFields {
};

struct IEnumerator_1_SystemIntegration_IUpdateable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SystemIntegration_IUpdateable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SystemIntegration_IUpdateable___VTable vtable;
};

struct List_1_SystemIntegration_IUpdateable___VTable {
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

struct List_1_SystemIntegration_IUpdateable___StaticFields {
    struct IUpdateable__Array *_emptyArray;
};

struct List_1_SystemIntegration_IUpdateable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SystemIntegration_IUpdateable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SystemIntegration_IUpdateable___VTable vtable;
};

struct SystemIntegrationMainThreadRunner__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SystemIntegrationMainThreadRunner__StaticFields {
    struct SystemIntegrationMainThreadRunner *m_instance;
};

struct SystemIntegrationMainThreadRunner__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SystemIntegrationMainThreadRunner__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SystemIntegrationMainThreadRunner__VTable vtable;
};

struct __declspec(align(8)) DataProvider__Fields {
    bool m_firstTime;
    struct String *m_sourceKey;
    struct IServiceSynchronizer *m_serviceSynchronizer;
    struct IPlatformStorageEventHandler *m_platformStorageEventHandler;
    struct List_1_SystemIntegration_CacheData_ *m_localData;
};

struct DataProvider {
    struct DataProvider__Class *klass;
    MonitorData *monitor;
    struct DataProvider__Fields fields;
};

struct IServiceSynchronizer {
    struct IServiceSynchronizer__Class *klass;
    MonitorData *monitor;
};

struct IServiceSynchronizer__VTable {
    VirtualInvokeData get_Name;
    VirtualInvokeData get_IsSynchronising;
    VirtualInvokeData get_HasSynchronised;
    VirtualInvokeData AwardedOnServer;
    VirtualInvokeData AwardOnServer;
    VirtualInvokeData UpdateFromServer;
    VirtualInvokeData Clear;
};

struct IServiceSynchronizer__StaticFields {
};

struct IServiceSynchronizer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IServiceSynchronizer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IServiceSynchronizer__VTable vtable;
};

struct DataProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Remote;
    VirtualInvokeData get_Local;
    VirtualInvokeData Award;
    VirtualInvokeData SynchronizeWithServer;
    VirtualInvokeData ClearLocalCache;
    VirtualInvokeData BuildFor;
    VirtualInvokeData get_HasSynchronised;
    VirtualInvokeData SetUser;
};

struct DataProvider__StaticFields {
};

struct DataProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataProvider__VTable vtable;
};

struct __declspec(align(8)) DataProvider_c_DisplayClass13_0__Fields {
    struct CacheData *data;
};

struct DataProvider_c_DisplayClass13_0 {
    struct DataProvider_c_DisplayClass13_0__Class *klass;
    MonitorData *monitor;
    struct DataProvider_c_DisplayClass13_0__Fields fields;
};

struct DataProvider_c_DisplayClass13_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataProvider_c_DisplayClass13_0__StaticFields {
};

struct DataProvider_c_DisplayClass13_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataProvider_c_DisplayClass13_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataProvider_c_DisplayClass13_0__VTable vtable;
};

struct __declspec(align(8)) DataProvider_c_DisplayClass14_0__Fields {
    struct CacheData *remote;
};

struct DataProvider_c_DisplayClass14_0 {
    struct DataProvider_c_DisplayClass14_0__Class *klass;
    MonitorData *monitor;
    struct DataProvider_c_DisplayClass14_0__Fields fields;
};

struct DataProvider_c_DisplayClass14_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataProvider_c_DisplayClass14_0__StaticFields {
};

struct DataProvider_c_DisplayClass14_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataProvider_c_DisplayClass14_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataProvider_c_DisplayClass14_0__VTable vtable;
};

struct DataProvider_c {
    struct DataProvider_c__Class *klass;
    MonitorData *monitor;
};

struct DataProvider_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataProvider_c__StaticFields {
    struct DataProvider_c *__9;
    struct Action_1_System_Threading_Tasks_Task_ *__9__17_1;
};

struct DataProvider_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataProvider_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataProvider_c__VTable vtable;
};

struct __declspec(align(8)) TwoDataProviderSynchronizer__Fields {
    struct IDataProvider *m_playFabAchievementProvider;
    struct IDataProvider *m_platformAchievementProvider;
};

struct TwoDataProviderSynchronizer {
    struct TwoDataProviderSynchronizer__Class *klass;
    MonitorData *monitor;
    struct TwoDataProviderSynchronizer__Fields fields;
};

struct TwoDataProviderSynchronizer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Remote;
    VirtualInvokeData get_Local;
    VirtualInvokeData Award;
    VirtualInvokeData SynchronizeWithServer;
    VirtualInvokeData ClearLocalCache;
    VirtualInvokeData BuildFor;
    VirtualInvokeData get_HasSynchronised;
    VirtualInvokeData SetUser;
};

struct TwoDataProviderSynchronizer__StaticFields {
};

struct TwoDataProviderSynchronizer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TwoDataProviderSynchronizer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TwoDataProviderSynchronizer__VTable vtable;
};

struct __declspec(align(8)) PlayFabJsonSerializer__Fields {
    struct ISerializerPlugin *m_underlying;
};

struct PlayFabJsonSerializer {
    struct PlayFabJsonSerializer__Class *klass;
    MonitorData *monitor;
    struct PlayFabJsonSerializer__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Type_System_Action_2___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_System_Action_2_ {
    struct Dictionary_2_System_Type_System_Action_2___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_System_Action_2___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct Action_2_Moon_JsonBuilder_Slot_Object_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2_ fields;
};

struct Action_2_Moon_JsonBuilder_Slot_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_Moon_JsonBuilder_Slot_Object_ {
    struct Action_2_Moon_JsonBuilder_Slot_Object___Class *klass;
    MonitorData *monitor;
    struct Action_2_Moon_JsonBuilder_Slot_Object___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2___Fields {
    struct Dictionary_2_System_Type_System_Action_2_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2___Fields {
    struct Dictionary_2_System_Type_System_Action_2_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2___Fields fields;
};

struct Action_2_Moon_JsonBuilder_Slot_Object___Array {
    struct Action_2_Moon_JsonBuilder_Slot_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Action_2_Moon_JsonBuilder_Slot_Object_ *vector[32];
};

struct IEnumerator_1_System_Action_2_ {
    struct IEnumerator_1_System_Action_2___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Action_2_ {
    struct ICollection_1_System_Action_2___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_System_Action_2_ {
    struct Type *key;
    struct Action_2_Moon_JsonBuilder_Slot_Object_ *value;
};

struct KeyValuePair_2_System_Type_System_Action_2___Boxed {
    struct KeyValuePair_2_System_Type_System_Action_2___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_System_Action_2_ fields;
};

struct KeyValuePair_2_System_Type_System_Action_2___Array {
    struct KeyValuePair_2_System_Type_System_Action_2___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_System_Action_2_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_System_Action_2_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_System_Action_2___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Action_2_ {
    struct IEnumerable_1_System_Action_2___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Type_System_Delegate___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Delegate___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Delegate_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Delegate_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_System_Delegate_ {
    struct Dictionary_2_System_Type_System_Delegate___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_System_Delegate___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Delegate_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct Delegate *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Delegate___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Delegate___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Delegate_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Delegate___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Delegate___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Delegate_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Delegate___Fields {
    struct Dictionary_2_System_Type_System_Delegate_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Delegate_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Delegate___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Delegate___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Delegate___Fields {
    struct Dictionary_2_System_Type_System_Delegate_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Delegate_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Delegate___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Delegate___Fields fields;
};

struct IEnumerator_1_System_Delegate_ {
    struct IEnumerator_1_System_Delegate___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Delegate_ {
    struct ICollection_1_System_Delegate___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_System_Delegate_ {
    struct Type *key;
    struct Delegate *value;
};

struct KeyValuePair_2_System_Type_System_Delegate___Boxed {
    struct KeyValuePair_2_System_Type_System_Delegate___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_System_Delegate_ fields;
};

struct KeyValuePair_2_System_Type_System_Delegate___Array {
    struct KeyValuePair_2_System_Type_System_Delegate___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_System_Delegate_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_System_Delegate_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_System_Delegate___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Delegate_ {
    struct IEnumerable_1_System_Delegate___Class *klass;
    MonitorData *monitor;
};

struct Action_2_Moon_JsonBuilder_Slot_Object___VTable {
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

struct Action_2_Moon_JsonBuilder_Slot_Object___StaticFields {
};

struct Action_2_Moon_JsonBuilder_Slot_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_Moon_JsonBuilder_Slot_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_Moon_JsonBuilder_Slot_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_System_Action_2___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_Action_2___VTable vtable;
};

struct Action_2_Moon_JsonBuilder_Slot_Object___Array__VTable {
};

struct Action_2_Moon_JsonBuilder_Slot_Object___Array__StaticFields {
};

struct Action_2_Moon_JsonBuilder_Slot_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_Moon_JsonBuilder_Slot_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_Moon_JsonBuilder_Slot_Object___Array__VTable vtable;
};

struct IEnumerator_1_System_Action_2___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Action_2___StaticFields {
};

struct IEnumerator_1_System_Action_2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Action_2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Action_2___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_Action_2___VTable vtable;
};

struct ICollection_1_System_Action_2___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Action_2___StaticFields {
};

struct ICollection_1_System_Action_2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Action_2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Action_2___VTable vtable;
};

struct Action_2_Moon_JsonBuilder_Slot_Object__1__VTable {
};

struct Action_2_Moon_JsonBuilder_Slot_Object__1__StaticFields {
};

struct Action_2_Moon_JsonBuilder_Slot_Object__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_Moon_JsonBuilder_Slot_Object__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_Moon_JsonBuilder_Slot_Object__1__VTable vtable;
};

struct KeyValuePair_2_System_Type_System_Action_2___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Type_System_Action_2___StaticFields {
};

struct KeyValuePair_2_System_Type_System_Action_2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_System_Action_2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_System_Action_2___VTable vtable;
};

struct KeyValuePair_2_System_Type_System_Action_2___Array__VTable {
};

struct KeyValuePair_2_System_Type_System_Action_2___Array__StaticFields {
};

struct KeyValuePair_2_System_Type_System_Action_2___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_System_Action_2___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_System_Action_2___Array__VTable vtable;
};

}
