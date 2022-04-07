namespace app {
struct JContainer__StaticFields {
};
struct JContainer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JContainer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JContainer__VTable vtable;
};
struct JToken__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
  VirtualInvokeData System_ICloneable_Clone;
  VirtualInvokeData System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData get_First;
  VirtualInvokeData get_Last;
  VirtualInvokeData Children;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData GetMetaObject;
};
struct JToken__StaticFields {
  struct JTokenType__Enum__Array * BooleanTypes;
  struct JTokenType__Enum__Array * NumberTypes;
  struct JTokenType__Enum__Array * BigIntegerTypes;
  struct JTokenType__Enum__Array * StringTypes;
  struct JTokenType__Enum__Array * GuidTypes;
  struct JTokenType__Enum__Array * TimeSpanTypes;
  struct JTokenType__Enum__Array * UriTypes;
  struct JTokenType__Enum__Array * CharTypes;
  struct JTokenType__Enum__Array * DateTimeTypes;
  struct JTokenType__Enum__Array * BytesTypes;
};
struct JToken__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JToken__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JToken__VTable vtable;
};

struct JTokenReader__Fields {
  struct JsonReader__Fields _;
  struct JToken * _root;
  struct String * _initialPath;
  struct JToken * _parent;
  struct JToken * _current;
};
struct JTokenReader {
  struct JTokenReader__Class *klass;
  struct MonitorData *monitor;
  struct JTokenReader__Fields fields;
};
struct JTokenReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData get_TokenType;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_Depth;
  VirtualInvokeData get_Path;
  VirtualInvokeData Read;
  VirtualInvokeData ReadAsInt32;
  VirtualInvokeData ReadAsString;
  VirtualInvokeData ReadAsBytes;
  VirtualInvokeData ReadAsDouble;
  VirtualInvokeData ReadAsBoolean;
  VirtualInvokeData ReadAsDecimal;
  VirtualInvokeData ReadAsDateTime;
  VirtualInvokeData ReadAsDateTimeOffset;
  VirtualInvokeData Dispose;
  VirtualInvokeData Close;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
};
struct JTokenReader__StaticFields {
};
struct JTokenReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JTokenReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JTokenReader__VTable vtable;
};

struct __declspec(align(8)) List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___Fields {
  struct JsonSerializerInternalReader_CreatorPropertyContext__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_ {
  struct List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___Fields fields;
};
enum JsonSerializerInternalReader_PropertyPresence__Enum : int32_t {
  JsonSerializerInternalReader_PropertyPresence__Enum_None = 0,
  JsonSerializerInternalReader_PropertyPresence__Enum_Null = 1,
  JsonSerializerInternalReader_PropertyPresence__Enum_Value = 2,
};
struct JsonSerializerInternalReader_PropertyPresence__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum JsonSerializerInternalReader_PropertyPresence__Enum value;
};
struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  enum JsonSerializerInternalReader_PropertyPresence__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Boxed {
  struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ fields;
};
struct __declspec(align(8)) JsonSerializerInternalReader_CreatorPropertyContext__Fields {
  struct String * Name;
  struct JsonProperty * Property;
  struct JsonProperty * ConstructorProperty;
  struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ Presence;
  struct Object * Value;
  bool Used;
};
struct JsonSerializerInternalReader_CreatorPropertyContext {
  struct JsonSerializerInternalReader_CreatorPropertyContext__Class *klass;
  struct MonitorData *monitor;
  struct JsonSerializerInternalReader_CreatorPropertyContext__Fields fields;
};
struct JsonSerializerInternalReader_CreatorPropertyContext__Array {
  struct JsonSerializerInternalReader_CreatorPropertyContext__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JsonSerializerInternalReader_CreatorPropertyContext * vector[32];
};
struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_ {
  struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___Class *klass;
  struct MonitorData *monitor;
};
struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct JsonSerializerInternalReader_CreatorPropertyContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JsonSerializerInternalReader_CreatorPropertyContext__StaticFields {
};
struct JsonSerializerInternalReader_CreatorPropertyContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonSerializerInternalReader_CreatorPropertyContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonSerializerInternalReader_CreatorPropertyContext__VTable vtable;
};
struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___StaticFields {
};
struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___VTable vtable;
};
struct List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___VTable {
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
struct List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___StaticFields {
  struct JsonSerializerInternalReader_CreatorPropertyContext__Array * _emptyArray;
};
struct List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___VTable vtable;
};

struct __declspec(align(8)) Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Newtonsoft_Json_Serialization_JsonProperty_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  int32_t hashCode;
  int32_t next;
  struct JsonProperty * key;
  enum JsonSerializerInternalReader_PropertyPresence__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Array {
  struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ vector[32];
};
struct IEqualityComparer_1_Newtonsoft_Json_Serialization_JsonProperty_ {
  struct IEqualityComparer_1_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Fields {
  struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Fields {
  struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Fields fields;
};
struct JsonSerializerInternalReader_PropertyPresence__Enum__Array {
  struct JsonSerializerInternalReader_PropertyPresence__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum JsonSerializerInternalReader_PropertyPresence__Enum vector[32];
};
struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct ICollection_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct JsonProperty * key;
  enum JsonSerializerInternalReader_PropertyPresence__Enum value;
};
struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Boxed {
  struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ fields;
};
struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Array {
  struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct IEqualityComparer_1_Newtonsoft_Json_Serialization_JsonProperty___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Newtonsoft_Json_Serialization_JsonProperty___StaticFields {
};
struct IEqualityComparer_1_Newtonsoft_Json_Serialization_JsonProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Newtonsoft_Json_Serialization_JsonProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Newtonsoft_Json_Serialization_JsonProperty___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct ICollection_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct ICollection_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
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
struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};

struct __declspec(align(8)) JsonSerializerInternalReader_c_DisplayClass37_0__Fields {
  struct JsonProperty * property;
};
struct JsonSerializerInternalReader_c_DisplayClass37_0 {
  struct JsonSerializerInternalReader_c_DisplayClass37_0__Class *klass;
  struct MonitorData *monitor;
  struct JsonSerializerInternalReader_c_DisplayClass37_0__Fields fields;
};
struct JsonSerializerInternalReader_c_DisplayClass37_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JsonSerializerInternalReader_c_DisplayClass37_0__StaticFields {
};
struct JsonSerializerInternalReader_c_DisplayClass37_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonSerializerInternalReader_c_DisplayClass37_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonSerializerInternalReader_c_DisplayClass37_0__VTable vtable;
};

struct JsonSerializerInternalReader_c {
  struct JsonSerializerInternalReader_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String_ {
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String___Fields fields;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty_ {
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty___Fields fields;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Fields fields;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String___VTable {
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
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String___StaticFields {
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String___VTable vtable;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty___VTable {
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
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty___StaticFields {
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty___VTable vtable;
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable {
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
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields {
};
struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___VTable vtable;
};
struct JsonSerializerInternalReader_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JsonSerializerInternalReader_c__StaticFields {
  struct JsonSerializerInternalReader_c * __9;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String_ * __9__37_0;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_String_ * __9__37_2;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty_ * __9__41_0;
  struct Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ * __9__41_1;
};
struct JsonSerializerInternalReader_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonSerializerInternalReader_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonSerializerInternalReader_c__VTable vtable;
};

struct ISerializable {
  struct ISerializable__Class *klass;
  struct MonitorData *monitor;
};
struct ISerializable__VTable {
  VirtualInvokeData GetObjectData;
};
struct ISerializable__StaticFields {
};
struct ISerializable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISerializable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISerializable__VTable vtable;
};

struct Func_2_Object_Object__1__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Object_Object__1 {
  struct Func_2_Object_Object__1__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Object_Object__1__Fields fields;
};
struct Func_2_Object_Object__1__VTable {
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
struct Func_2_Object_Object__1__StaticFields {
};
struct Func_2_Object_Object__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Object_Object__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Object_Object__1__VTable vtable;
};

struct __declspec(align(8)) JsonTypeReflector_c_DisplayClass22_0__Fields {
  struct Type * type;
  struct Func_1_Object_ * defaultConstructor;
};
struct JsonTypeReflector_c_DisplayClass22_0 {
  struct JsonTypeReflector_c_DisplayClass22_0__Class *klass;
  struct MonitorData *monitor;
  struct JsonTypeReflector_c_DisplayClass22_0__Fields fields;
};
struct JsonTypeReflector_c_DisplayClass22_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JsonTypeReflector_c_DisplayClass22_0__StaticFields {
};
struct JsonTypeReflector_c_DisplayClass22_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonTypeReflector_c_DisplayClass22_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonTypeReflector_c_DisplayClass22_0__VTable vtable;
};

struct JsonTypeReflector_c {
  struct JsonTypeReflector_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_Object_Type___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Object_Type_ {
  struct Func_2_Object_Type___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Object_Type___Fields fields;
};
struct Func_2_Object_Type___VTable {
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
struct Func_2_Object_Type___StaticFields {
};
struct Func_2_Object_Type___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Object_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Object_Type___VTable vtable;
};
struct JsonTypeReflector_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JsonTypeReflector_c__StaticFields {
  struct JsonTypeReflector_c * __9;
  struct Func_2_Object_Type_ * __9__22_1;
};
struct JsonTypeReflector_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonTypeReflector_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonTypeReflector_c__VTable vtable;
};

struct __declspec(align(8)) ReflectionAttributeProvider__Fields {
  struct Object * _attributeProvider;
};
struct ReflectionAttributeProvider {
  struct ReflectionAttributeProvider__Class *klass;
  struct MonitorData *monitor;
  struct ReflectionAttributeProvider__Fields fields;
};
struct ReflectionAttributeProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReflectionAttributeProvider__StaticFields {
};
struct ReflectionAttributeProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionAttributeProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionAttributeProvider__VTable vtable;
};

struct __declspec(align(8)) ReflectionValueProvider__Fields {
  struct MemberInfo_1 * _memberInfo;
};
struct ReflectionValueProvider {
  struct ReflectionValueProvider__Class *klass;
  struct MonitorData *monitor;
  struct ReflectionValueProvider__Fields fields;
};
struct ReflectionValueProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetValue;
  VirtualInvokeData GetValue;
};
struct ReflectionValueProvider__StaticFields {
};
struct ReflectionValueProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionValueProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionValueProvider__VTable vtable;
};

struct TraceJsonWriter__Fields {
  struct JsonWriter__Fields _;
  struct JsonWriter * _innerWriter;
  struct JsonTextWriter * _textWriter;
  struct StringWriter * _sw;
};
struct TraceJsonWriter {
  struct TraceJsonWriter__Class *klass;
  struct MonitorData *monitor;
  struct TraceJsonWriter__Fields fields;
};
struct TraceJsonWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData OnStringEscapeHandlingChanged;
  VirtualInvokeData Close;
  VirtualInvokeData WriteStartObject;
  VirtualInvokeData WriteEndObject;
  VirtualInvokeData WriteStartArray;
  VirtualInvokeData WriteEndArray;
  VirtualInvokeData WriteStartConstructor;
  VirtualInvokeData WriteEndConstructor;
  VirtualInvokeData WritePropertyName;
  VirtualInvokeData WritePropertyName_1;
  VirtualInvokeData WriteEnd;
  VirtualInvokeData WriteToken;
  VirtualInvokeData WriteEnd_1;
  VirtualInvokeData WriteIndent;
  VirtualInvokeData WriteValueDelimiter;
  VirtualInvokeData WriteIndentSpace;
  VirtualInvokeData WriteNull;
  VirtualInvokeData WriteUndefined;
  VirtualInvokeData WriteRaw;
  VirtualInvokeData WriteRawValue;
  VirtualInvokeData WriteValue;
  VirtualInvokeData WriteValue_1;
  VirtualInvokeData WriteValue_2;
  VirtualInvokeData WriteValue_3;
  VirtualInvokeData WriteValue_4;
  VirtualInvokeData WriteValue_5;
  VirtualInvokeData WriteValue_6;
  VirtualInvokeData WriteValue_7;
  VirtualInvokeData WriteValue_8;
  VirtualInvokeData WriteValue_9;
  VirtualInvokeData WriteValue_10;
  VirtualInvokeData WriteValue_11;
  VirtualInvokeData WriteValue_12;
  VirtualInvokeData WriteValue_13;
  VirtualInvokeData WriteValue_14;
  VirtualInvokeData WriteValue_15;
  VirtualInvokeData WriteValue_16;
  VirtualInvokeData WriteValue_17;
  VirtualInvokeData WriteValue_18;
  VirtualInvokeData WriteValue_19;
  VirtualInvokeData WriteValue_20;
  VirtualInvokeData WriteValue_21;
  VirtualInvokeData WriteValue_22;
  VirtualInvokeData WriteValue_23;
  VirtualInvokeData WriteValue_24;
  VirtualInvokeData WriteValue_25;
  VirtualInvokeData WriteValue_26;
  VirtualInvokeData WriteValue_27;
  VirtualInvokeData WriteValue_28;
  VirtualInvokeData WriteValue_29;
  VirtualInvokeData WriteValue_30;
  VirtualInvokeData WriteValue_31;
  VirtualInvokeData WriteValue_32;
  VirtualInvokeData WriteValue_33;
  VirtualInvokeData WriteValue_34;
  VirtualInvokeData WriteValue_35;
  VirtualInvokeData WriteValue_36;
  VirtualInvokeData WriteValue_37;
  VirtualInvokeData WriteComment;
  VirtualInvokeData Dispose;
};
struct TraceJsonWriter__StaticFields {
};
struct TraceJsonWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TraceJsonWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TraceJsonWriter__VTable vtable;
};}