namespace app {
struct EntityProfileBody {
  struct EntityProfileBody__Class *klass;
  struct MonitorData *monitor;
  struct EntityProfileBody__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct EntityProfileFileMetadata * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ vector[32];
};
struct __declspec(align(8)) EntityProfileFileMetadata__Fields {
  struct String * Checksum;
  struct String * FileName;
  struct DateTime LastModified;
  int32_t Size;
};
struct EntityProfileFileMetadata {
  struct EntityProfileFileMetadata__Class *klass;
  struct MonitorData *monitor;
  struct EntityProfileFileMetadata__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Fields {
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Fields {
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Fields fields;
};
struct EntityProfileFileMetadata__Array {
  struct EntityProfileFileMetadata__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityProfileFileMetadata * vector[32];
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  struct ICollection_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  struct String * key;
  struct EntityProfileFileMetadata * value;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Boxed {
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ fields;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Array {
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_PlayFab_ProfilesModels_EntityProfileFileMetadata_ {
  struct IEnumerable_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) EntityLineage__Fields {
  struct String * CharacterId;
  struct String * GroupId;
  struct String * MasterPlayerAccountId;
  struct String * NamespaceId;
  struct String * TitleId;
  struct String * TitlePlayerAccountId;
};
struct EntityLineage {
  struct EntityLineage__Class *klass;
  struct MonitorData *monitor;
  struct EntityLineage__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject_ {
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct EntityDataObject * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject_ vector[32];
};
struct __declspec(align(8)) EntityDataObject__Fields {
  struct Object * DataObject;
  struct String * EscapedDataObject;
  struct String * ObjectName;
};
struct EntityDataObject {
  struct EntityDataObject__Class *klass;
  struct MonitorData *monitor;
  struct EntityDataObject__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___Fields {
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___Fields {
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___Fields fields;
};
struct EntityDataObject__Array {
  struct EntityDataObject__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityDataObject * vector[32];
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityDataObject_ {
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_PlayFab_ProfilesModels_EntityDataObject_ {
  struct ICollection_1_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject_ {
  struct String * key;
  struct EntityDataObject * value;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Boxed {
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject_ fields;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Array {
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_PlayFab_ProfilesModels_EntityDataObject_ {
  struct IEnumerable_1_PlayFab_ProfilesModels_EntityDataObject___Class *klass;
  struct MonitorData *monitor;
};
struct EntityKey_7__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityKey_7__StaticFields {
};
struct EntityKey_7__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityKey_7__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityKey_7__VTable vtable;
};
struct GetEntityProfileRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetEntityProfileRequest__StaticFields {
};
struct GetEntityProfileRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetEntityProfileRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetEntityProfileRequest__VTable vtable;
};
struct EntityProfileFileMetadata__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityProfileFileMetadata__StaticFields {
};
struct EntityProfileFileMetadata__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityProfileFileMetadata__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityProfileFileMetadata__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct ICollection_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct ICollection_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct IEnumerable_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct IEnumerable_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields {
};
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata___VTable vtable;
};
struct EntityLineage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityLineage__StaticFields {
};
struct EntityLineage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityLineage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityLineage__VTable vtable;
};
struct EntityDataObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityDataObject__StaticFields {
};
struct EntityDataObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityDataObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityDataObject__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityDataObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct ICollection_1_PlayFab_ProfilesModels_EntityDataObject___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct ICollection_1_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct IEnumerable_1_PlayFab_ProfilesModels_EntityDataObject___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct IEnumerable_1_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields {
};
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject___VTable vtable;
};
struct EntityProfileBody__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityProfileBody__StaticFields {
};
struct EntityProfileBody__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityProfileBody__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityProfileBody__VTable vtable;
};
struct GetEntityProfileResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetEntityProfileResponse__StaticFields {
};
struct GetEntityProfileResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetEntityProfileResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetEntityProfileResponse__VTable vtable;
};
struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse___VTable {
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
struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse___StaticFields {
};
struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse___VTable vtable;
};

struct GetEntityProfilesRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Boolean_ DataAsObject;
  struct List_1_PlayFab_ProfilesModels_EntityKey_ * Entities;
};
struct GetEntityProfilesRequest {
  struct GetEntityProfilesRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetEntityProfilesRequest__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ProfilesModels_EntityKey___Fields {
  struct EntityKey_7__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ProfilesModels_EntityKey_ {
  struct List_1_PlayFab_ProfilesModels_EntityKey___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ProfilesModels_EntityKey___Fields fields;
};
struct EntityKey_7__Array {
  struct EntityKey_7__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityKey_7 * vector[32];
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityKey_ {
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityKey___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_ {
  struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse___Fields fields;
};
struct GetEntityProfilesResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ProfilesModels_EntityProfileBody_ * Profiles;
};
struct GetEntityProfilesResponse {
  struct GetEntityProfilesResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetEntityProfilesResponse__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ProfilesModels_EntityProfileBody___Fields {
  struct EntityProfileBody__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ProfilesModels_EntityProfileBody_ {
  struct List_1_PlayFab_ProfilesModels_EntityProfileBody___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ProfilesModels_EntityProfileBody___Fields fields;
};
struct EntityProfileBody__Array {
  struct EntityProfileBody__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityProfileBody * vector[32];
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileBody_ {
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileBody___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityKey___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityKey___StaticFields {
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityKey___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityKey___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityKey___VTable vtable;
};
struct List_1_PlayFab_ProfilesModels_EntityKey___VTable {
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
struct List_1_PlayFab_ProfilesModels_EntityKey___StaticFields {
  struct EntityKey_7__Array * _emptyArray;
};
struct List_1_PlayFab_ProfilesModels_EntityKey___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ProfilesModels_EntityKey___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ProfilesModels_EntityKey___VTable vtable;
};
struct GetEntityProfilesRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetEntityProfilesRequest__StaticFields {
};
struct GetEntityProfilesRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetEntityProfilesRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetEntityProfilesRequest__VTable vtable;
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileBody___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileBody___StaticFields {
};
struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileBody___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileBody___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ProfilesModels_EntityProfileBody___VTable vtable;
};
struct List_1_PlayFab_ProfilesModels_EntityProfileBody___VTable {
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
struct List_1_PlayFab_ProfilesModels_EntityProfileBody___StaticFields {
  struct EntityProfileBody__Array * _emptyArray;
};
struct List_1_PlayFab_ProfilesModels_EntityProfileBody___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ProfilesModels_EntityProfileBody___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ProfilesModels_EntityProfileBody___VTable vtable;
};
struct GetEntityProfilesResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetEntityProfilesResponse__StaticFields {
};
struct GetEntityProfilesResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetEntityProfilesResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetEntityProfilesResponse__VTable vtable;
};}