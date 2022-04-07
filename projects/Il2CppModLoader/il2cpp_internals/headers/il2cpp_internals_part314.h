namespace app {
struct ConfirmPurchaseResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_ItemInstance_ * Items;
  struct String * OrderId;
  struct DateTime PurchaseDate;
};
struct ConfirmPurchaseResult {
  struct ConfirmPurchaseResult__Class *klass;
  struct MonitorData *monitor;
  struct ConfirmPurchaseResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_ItemInstance___Fields {
  struct ItemInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_ItemInstance_ {
  struct List_1_PlayFab_ClientModels_ItemInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_ItemInstance___Fields fields;
};
struct __declspec(align(8)) ItemInstance__Fields {
  struct String * Annotation;
  struct List_1_System_String_ * BundleContents;
  struct String * BundleParent;
  struct String * CatalogVersion;
  struct Dictionary_2_System_String_System_String_ * CustomData;
  struct String * DisplayName;
  struct Nullable_1_DateTime_ Expiration;
  struct String * ItemClass;
  struct String * ItemId;
  struct String * ItemInstanceId;
  struct Nullable_1_DateTime_ PurchaseDate;
  struct Nullable_1_Int32_ RemainingUses;
  struct String * UnitCurrency;
  uint32_t UnitPrice;
  struct Nullable_1_Int32_ UsesIncrementedBy;
};
struct ItemInstance {
  struct ItemInstance__Class *klass;
  struct MonitorData *monitor;
  struct ItemInstance__Fields fields;
};
struct ItemInstance__Array {
  struct ItemInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ItemInstance * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_ItemInstance_ {
  struct IEnumerator_1_PlayFab_ClientModels_ItemInstance___Class *klass;
  struct MonitorData *monitor;
};
struct ConfirmPurchaseRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConfirmPurchaseRequest__StaticFields {
};
struct ConfirmPurchaseRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfirmPurchaseRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfirmPurchaseRequest__VTable vtable;
};
struct ItemInstance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ItemInstance__StaticFields {
};
struct ItemInstance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ItemInstance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ItemInstance__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_ItemInstance___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_ItemInstance___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_ItemInstance___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_ItemInstance___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_ItemInstance___VTable vtable;
};
struct List_1_PlayFab_ClientModels_ItemInstance___VTable {
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
struct List_1_PlayFab_ClientModels_ItemInstance___StaticFields {
  struct ItemInstance__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_ItemInstance___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_ItemInstance___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_ItemInstance___VTable vtable;
};
struct ConfirmPurchaseResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConfirmPurchaseResult__StaticFields {
};
struct ConfirmPurchaseResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfirmPurchaseResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfirmPurchaseResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult___VTable {
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
struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult___VTable vtable;
};

struct ConsumeItemRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CharacterId;
  int32_t ConsumeCount;
  struct String * ItemInstanceId;
};
struct ConsumeItemRequest {
  struct ConsumeItemRequest__Class *klass;
  struct MonitorData *monitor;
  struct ConsumeItemRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_ConsumeItemResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_ConsumeItemResult_ {
  struct Action_1_PlayFab_ClientModels_ConsumeItemResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_ConsumeItemResult___Fields fields;
};
struct ConsumeItemResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * ItemInstanceId;
  int32_t RemainingUses;
};
struct ConsumeItemResult {
  struct ConsumeItemResult__Class *klass;
  struct MonitorData *monitor;
  struct ConsumeItemResult__Fields fields;
};
struct ConsumeItemRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsumeItemRequest__StaticFields {
};
struct ConsumeItemRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsumeItemRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsumeItemRequest__VTable vtable;
};
struct ConsumeItemResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsumeItemResult__StaticFields {
};
struct ConsumeItemResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsumeItemResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsumeItemResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_ConsumeItemResult___VTable {
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
struct Action_1_PlayFab_ClientModels_ConsumeItemResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_ConsumeItemResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_ConsumeItemResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_ConsumeItemResult___VTable vtable;
};

struct ConsumePSNEntitlementsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CatalogVersion;
  int32_t ServiceLabel;
};
struct ConsumePSNEntitlementsRequest {
  struct ConsumePSNEntitlementsRequest__Class *klass;
  struct MonitorData *monitor;
  struct ConsumePSNEntitlementsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult_ {
  struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult___Fields fields;
};
struct ConsumePSNEntitlementsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_ItemInstance_ * ItemsGranted;
};
struct ConsumePSNEntitlementsResult {
  struct ConsumePSNEntitlementsResult__Class *klass;
  struct MonitorData *monitor;
  struct ConsumePSNEntitlementsResult__Fields fields;
};
struct ConsumePSNEntitlementsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsumePSNEntitlementsRequest__StaticFields {
};
struct ConsumePSNEntitlementsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsumePSNEntitlementsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsumePSNEntitlementsRequest__VTable vtable;
};
struct ConsumePSNEntitlementsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsumePSNEntitlementsResult__StaticFields {
};
struct ConsumePSNEntitlementsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsumePSNEntitlementsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsumePSNEntitlementsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult___VTable vtable;
};

struct ConsumeXboxEntitlementsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CatalogVersion;
  struct String * XboxToken;
};
struct ConsumeXboxEntitlementsRequest {
  struct ConsumeXboxEntitlementsRequest__Class *klass;
  struct MonitorData *monitor;
  struct ConsumeXboxEntitlementsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult_ {
  struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult___Fields fields;
};
struct ConsumeXboxEntitlementsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_ItemInstance_ * Items;
};
struct ConsumeXboxEntitlementsResult {
  struct ConsumeXboxEntitlementsResult__Class *klass;
  struct MonitorData *monitor;
  struct ConsumeXboxEntitlementsResult__Fields fields;
};
struct ConsumeXboxEntitlementsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsumeXboxEntitlementsRequest__StaticFields {
};
struct ConsumeXboxEntitlementsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsumeXboxEntitlementsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsumeXboxEntitlementsRequest__VTable vtable;
};
struct ConsumeXboxEntitlementsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsumeXboxEntitlementsResult__StaticFields {
};
struct ConsumeXboxEntitlementsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsumeXboxEntitlementsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsumeXboxEntitlementsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult___VTable vtable;
};

struct CreateSharedGroupRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * SharedGroupId;
};
struct CreateSharedGroupRequest {
  struct CreateSharedGroupRequest__Class *klass;
  struct MonitorData *monitor;
  struct CreateSharedGroupRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult_ {
  struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult___Fields fields;
};
struct CreateSharedGroupResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * SharedGroupId;
};
struct CreateSharedGroupResult {
  struct CreateSharedGroupResult__Class *klass;
  struct MonitorData *monitor;
  struct CreateSharedGroupResult__Fields fields;
};
struct CreateSharedGroupRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CreateSharedGroupRequest__StaticFields {
};
struct CreateSharedGroupRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CreateSharedGroupRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CreateSharedGroupRequest__VTable vtable;
};
struct CreateSharedGroupResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CreateSharedGroupResult__StaticFields {
};
struct CreateSharedGroupResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CreateSharedGroupResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CreateSharedGroupResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult___VTable {
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
struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_CreateSharedGroupResult___VTable vtable;
};

enum CloudScriptRevisionOption__Enum : int32_t {
  CloudScriptRevisionOption__Enum_Live = 0,
  CloudScriptRevisionOption__Enum_Latest = 1,
  CloudScriptRevisionOption__Enum_Specific = 2,
};
struct CloudScriptRevisionOption__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CloudScriptRevisionOption__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption_ {
  enum CloudScriptRevisionOption__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___Boxed {
  struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption_ fields;
};
struct ExecuteCloudScriptRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * FunctionName;
  struct Object * FunctionParameter;
  struct Nullable_1_Boolean_ GeneratePlayStreamEvent;
  struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption_ RevisionSelection;
  struct Nullable_1_Int32_ SpecificRevision;
};
struct ExecuteCloudScriptRequest {
  struct ExecuteCloudScriptRequest__Class *klass;
  struct MonitorData *monitor;
  struct ExecuteCloudScriptRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_ {
  struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult___Fields fields;
};
struct ExecuteCloudScriptResult__Fields {
  struct PlayFabResultCommon__Fields _;
  int32_t APIRequestsIssued;
  struct ScriptExecutionError * Error;
  double ExecutionTimeSeconds;
  struct String * FunctionName;
  struct Object * FunctionResult;
  struct Nullable_1_Boolean_ FunctionResultTooLarge;
  int32_t HttpRequestsIssued;
  struct List_1_PlayFab_ClientModels_LogStatement_ * Logs;
  struct Nullable_1_Boolean_ LogsTooLarge;
  uint32_t MemoryConsumedBytes;
  double ProcessorTimeSeconds;
  int32_t Revision;
};
struct ExecuteCloudScriptResult {
  struct ExecuteCloudScriptResult__Class *klass;
  struct MonitorData *monitor;
  struct ExecuteCloudScriptResult__Fields fields;
};
struct __declspec(align(8)) ScriptExecutionError__Fields {
  struct String * Error;
  struct String * Message;
  struct String * StackTrace;
};
struct ScriptExecutionError {
  struct ScriptExecutionError__Class *klass;
  struct MonitorData *monitor;
  struct ScriptExecutionError__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_LogStatement___Fields {
  struct LogStatement__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_LogStatement_ {
  struct List_1_PlayFab_ClientModels_LogStatement___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_LogStatement___Fields fields;
};
struct __declspec(align(8)) LogStatement__Fields {
  struct Object * Data;
  struct String * Level;
  struct String * Message;
};
struct LogStatement {
  struct LogStatement__Class *klass;
  struct MonitorData *monitor;
  struct LogStatement__Fields fields;
};
struct LogStatement__Array {
  struct LogStatement__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LogStatement * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_LogStatement_ {
  struct IEnumerator_1_PlayFab_ClientModels_LogStatement___Class *klass;
  struct MonitorData *monitor;
};
struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___StaticFields {
};
struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_ClientModels_CloudScriptRevisionOption___VTable vtable;
};
struct ExecuteCloudScriptRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExecuteCloudScriptRequest__StaticFields {
};
struct ExecuteCloudScriptRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExecuteCloudScriptRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExecuteCloudScriptRequest__VTable vtable;
};
struct ScriptExecutionError__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScriptExecutionError__StaticFields {
};
struct ScriptExecutionError__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScriptExecutionError__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScriptExecutionError__VTable vtable;
};
struct LogStatement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LogStatement__StaticFields {
};
struct LogStatement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LogStatement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LogStatement__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_LogStatement___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_LogStatement___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_LogStatement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_LogStatement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_LogStatement___VTable vtable;
};
struct List_1_PlayFab_ClientModels_LogStatement___VTable {
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
struct List_1_PlayFab_ClientModels_LogStatement___StaticFields {
  struct LogStatement__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_LogStatement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_LogStatement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_LogStatement___VTable vtable;
};
struct ExecuteCloudScriptResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExecuteCloudScriptResult__StaticFields {
};
struct ExecuteCloudScriptResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExecuteCloudScriptResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExecuteCloudScriptResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult___VTable {
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
struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult___VTable vtable;
};

struct GetAccountInfoRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * Email;
  struct String * PlayFabId;
  struct String * TitleDisplayName;
  struct String * Username;
};
struct GetAccountInfoRequest {
  struct GetAccountInfoRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetAccountInfoRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetAccountInfoResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetAccountInfoResult_ {
  struct Action_1_PlayFab_ClientModels_GetAccountInfoResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetAccountInfoResult___Fields fields;
};
struct GetAccountInfoResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct UserAccountInfo * AccountInfo;
};
struct GetAccountInfoResult {
  struct GetAccountInfoResult__Class *klass;
  struct MonitorData *monitor;
  struct GetAccountInfoResult__Fields fields;
};
struct __declspec(align(8)) UserAccountInfo__Fields {
  struct UserAndroidDeviceInfo * AndroidDeviceInfo;
  struct DateTime Created;
  struct UserCustomIdInfo * CustomIdInfo;
  struct UserFacebookInfo * FacebookInfo;
  struct UserFacebookInstantGamesIdInfo * FacebookInstantGamesIdInfo;
  struct UserGameCenterInfo * GameCenterInfo;
  struct UserGoogleInfo * GoogleInfo;
  struct UserIosDeviceInfo * IosDeviceInfo;
  struct UserKongregateInfo * KongregateInfo;
  struct UserNintendoSwitchDeviceIdInfo * NintendoSwitchDeviceIdInfo;
  struct List_1_PlayFab_ClientModels_UserOpenIdInfo_ * OpenIdInfo;
  struct String * PlayFabId;
  struct UserPrivateAccountInfo * PrivateInfo;
  struct UserPsnInfo * PsnInfo;
  struct UserSteamInfo * SteamInfo;
  struct UserTitleInfo * TitleInfo;
  struct UserTwitchInfo * TwitchInfo;
  struct String * Username;
  struct UserWindowsHelloInfo * WindowsHelloInfo;
  struct UserXboxInfo * XboxInfo;
};
struct UserAccountInfo {
  struct UserAccountInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserAccountInfo__Fields fields;
};
struct __declspec(align(8)) UserAndroidDeviceInfo__Fields {
  struct String * AndroidDeviceId;
};
struct UserAndroidDeviceInfo {
  struct UserAndroidDeviceInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserAndroidDeviceInfo__Fields fields;
};
struct __declspec(align(8)) UserCustomIdInfo__Fields {
  struct String * CustomId;
};
struct UserCustomIdInfo {
  struct UserCustomIdInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserCustomIdInfo__Fields fields;
};
struct __declspec(align(8)) UserFacebookInfo__Fields {
  struct String * FacebookId;
  struct String * FullName;
};
struct UserFacebookInfo {
  struct UserFacebookInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserFacebookInfo__Fields fields;
};
struct __declspec(align(8)) UserFacebookInstantGamesIdInfo__Fields {
  struct String * FacebookInstantGamesId;
};
struct UserFacebookInstantGamesIdInfo {
  struct UserFacebookInstantGamesIdInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserFacebookInstantGamesIdInfo__Fields fields;
};
struct __declspec(align(8)) UserGameCenterInfo__Fields {
  struct String * GameCenterId;
};
struct UserGameCenterInfo {
  struct UserGameCenterInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserGameCenterInfo__Fields fields;
};
struct __declspec(align(8)) UserGoogleInfo__Fields {
  struct String * GoogleEmail;
  struct String * GoogleGender;
  struct String * GoogleId;
  struct String * GoogleLocale;
};
struct UserGoogleInfo {
  struct UserGoogleInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserGoogleInfo__Fields fields;
};
struct __declspec(align(8)) UserIosDeviceInfo__Fields {
  struct String * IosDeviceId;
};
struct UserIosDeviceInfo {
  struct UserIosDeviceInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserIosDeviceInfo__Fields fields;
};
struct __declspec(align(8)) UserKongregateInfo__Fields {
  struct String * KongregateId;
  struct String * KongregateName;
};
struct UserKongregateInfo {
  struct UserKongregateInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserKongregateInfo__Fields fields;
};
struct __declspec(align(8)) UserNintendoSwitchDeviceIdInfo__Fields {
  struct String * NintendoSwitchDeviceId;
};
struct UserNintendoSwitchDeviceIdInfo {
  struct UserNintendoSwitchDeviceIdInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserNintendoSwitchDeviceIdInfo__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_UserOpenIdInfo___Fields {
  struct UserOpenIdInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_UserOpenIdInfo_ {
  struct List_1_PlayFab_ClientModels_UserOpenIdInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_UserOpenIdInfo___Fields fields;
};
struct __declspec(align(8)) UserOpenIdInfo__Fields {
  struct String * ConnectionId;
  struct String * Issuer;
  struct String * Subject;
};
struct UserOpenIdInfo {
  struct UserOpenIdInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserOpenIdInfo__Fields fields;
};
struct UserOpenIdInfo__Array {
  struct UserOpenIdInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UserOpenIdInfo * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_UserOpenIdInfo_ {
  struct IEnumerator_1_PlayFab_ClientModels_UserOpenIdInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UserPrivateAccountInfo__Fields {
  struct String * Email;
};
struct UserPrivateAccountInfo {
  struct UserPrivateAccountInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserPrivateAccountInfo__Fields fields;
};
struct __declspec(align(8)) UserPsnInfo__Fields {
  struct String * PsnAccountId;
  struct String * PsnOnlineId;
};
struct UserPsnInfo {
  struct UserPsnInfo__Class *klass;
  struct MonitorData *monitor;
  struct UserPsnInfo__Fields fields;
};
enum TitleActivationStatus__Enum : int32_t {
  TitleActivationStatus__Enum_None = 0,
  TitleActivationStatus__Enum_ActivatedTitleKey = 1,
  TitleActivationStatus__Enum_PendingSteam = 2,
  TitleActivationStatus__Enum_ActivatedSteam = 3,
  TitleActivationStatus__Enum_RevokedSteam = 4,
};}