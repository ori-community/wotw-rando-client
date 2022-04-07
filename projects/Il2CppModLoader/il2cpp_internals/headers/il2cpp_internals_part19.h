namespace app {
struct List_1_System_TimeZoneInfo_AdjustmentRule___StaticFields {
  struct TimeZoneInfo_AdjustmentRule__Array * _emptyArray;
};
struct List_1_System_TimeZoneInfo_AdjustmentRule___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_TimeZoneInfo_AdjustmentRule___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_TimeZoneInfo_AdjustmentRule___VTable vtable;
};

struct __declspec(align(8)) TimeZoneInfo__Fields {
  struct TimeSpan baseUtcOffset;
  struct String * daylightDisplayName;
  struct String * displayName;
  struct String * id;
  struct List_1_KeyValuePair_2_System_DateTime_System_TimeType_ * transitions;
  struct String * standardDisplayName;
  bool supportsDaylightSavingTime;
  struct TimeZoneInfo_AdjustmentRule__Array * adjustmentRules;
};
struct TimeZoneInfo {
  struct TimeZoneInfo__Class *klass;
  struct MonitorData *monitor;
  struct TimeZoneInfo__Fields fields;
};
struct __declspec(align(8)) List_1_KeyValuePair_2_System_DateTime_System_TimeType___Fields {
  struct KeyValuePair_2_System_DateTime_System_TimeType___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_KeyValuePair_2_System_DateTime_System_TimeType_ {
  struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___Class *klass;
  struct MonitorData *monitor;
  struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___Fields fields;
};
struct KeyValuePair_2_System_DateTime_System_TimeType_ {
  struct DateTime key;
  struct TimeType * value;
};
struct KeyValuePair_2_System_DateTime_System_TimeType___Boxed {
  struct KeyValuePair_2_System_DateTime_System_TimeType___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_DateTime_System_TimeType_ fields;
};
struct KeyValuePair_2_System_DateTime_System_TimeType___Array {
  struct KeyValuePair_2_System_DateTime_System_TimeType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_DateTime_System_TimeType_ vector[32];
};
struct __declspec(align(8)) TimeType__Fields {
  int32_t Offset;
  bool IsDst;
  struct String * Name;
};
struct TimeType {
  struct TimeType__Class *klass;
  struct MonitorData *monitor;
  struct TimeType__Fields fields;
};
struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType_ {
  struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ReadOnlyCollection_1_System_TimeZoneInfo___Fields {
  struct IList_1_System_TimeZoneInfo_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_System_TimeZoneInfo_ {
  struct ReadOnlyCollection_1_System_TimeZoneInfo___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_System_TimeZoneInfo___Fields fields;
};
struct IList_1_System_TimeZoneInfo_ {
  struct IList_1_System_TimeZoneInfo___Class *klass;
  struct MonitorData *monitor;
};
struct TimeZoneInfo__Array {
  struct TimeZoneInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TimeZoneInfo * vector[32];
};
struct IEnumerator_1_System_TimeZoneInfo_ {
  struct IEnumerator_1_System_TimeZoneInfo___Class *klass;
  struct MonitorData *monitor;
};
struct TimeType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimeType__StaticFields {
};
struct TimeType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeType__VTable vtable;
};
struct KeyValuePair_2_System_DateTime_System_TimeType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_DateTime_System_TimeType___StaticFields {
};
struct KeyValuePair_2_System_DateTime_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_DateTime_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_DateTime_System_TimeType___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___VTable vtable;
};
struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___VTable {
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
struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___StaticFields {
  struct KeyValuePair_2_System_DateTime_System_TimeType___Array * _emptyArray;
};
struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___VTable vtable;
};
struct IList_1_System_TimeZoneInfo___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_System_TimeZoneInfo___StaticFields {
};
struct IList_1_System_TimeZoneInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_System_TimeZoneInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_System_TimeZoneInfo___VTable vtable;
};
struct IEnumerator_1_System_TimeZoneInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_TimeZoneInfo___StaticFields {
};
struct IEnumerator_1_System_TimeZoneInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_TimeZoneInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_TimeZoneInfo___VTable vtable;
};
struct ReadOnlyCollection_1_System_TimeZoneInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_T__Insert;
  VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Count_2;
};
struct ReadOnlyCollection_1_System_TimeZoneInfo___StaticFields {
};
struct ReadOnlyCollection_1_System_TimeZoneInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyCollection_1_System_TimeZoneInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyCollection_1_System_TimeZoneInfo___VTable vtable;
};
struct TimeZoneInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
};
struct TimeZoneInfo__StaticFields {
  struct TimeZoneInfo * local;
  bool readlinkNotFound;
  struct TimeZoneInfo * utc;
  struct String * timeZoneDirectory;
  struct RegistryKey * timeZoneKey;
  struct RegistryKey * localZoneKey;
  struct ReadOnlyCollection_1_System_TimeZoneInfo_ * systemTimeZones;
};
struct TimeZoneInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeZoneInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeZoneInfo__VTable vtable;
};

struct TimeZoneInfo_SYSTEMTIME {
  uint16_t wYear;
  uint16_t wMonth;
  uint16_t wDayOfWeek;
  uint16_t wDay;
  uint16_t wHour;
  uint16_t wMinute;
  uint16_t wSecond;
  uint16_t wMilliseconds;
};
struct TimeZoneInfo_SYSTEMTIME__Boxed {
  struct TimeZoneInfo_SYSTEMTIME__Class *klass;
  struct MonitorData *monitor;
  struct TimeZoneInfo_SYSTEMTIME fields;
};
struct TimeZoneInfo_TIME_ZONE_INFORMATION {
  int32_t Bias;
  struct String * StandardName;
  struct TimeZoneInfo_SYSTEMTIME StandardDate;
  int32_t StandardBias;
  struct String * DaylightName;
  struct TimeZoneInfo_SYSTEMTIME DaylightDate;
  int32_t DaylightBias;
};
struct TimeZoneInfo_TIME_ZONE_INFORMATION__Boxed {
  struct TimeZoneInfo_TIME_ZONE_INFORMATION__Class *klass;
  struct MonitorData *monitor;
  struct TimeZoneInfo_TIME_ZONE_INFORMATION fields;
};
struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION {
  struct TimeZoneInfo_TIME_ZONE_INFORMATION TZI;
  struct String * TimeZoneKeyName;
  uint8_t DynamicDaylightTimeDisabled;
};
struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Boxed {
  struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Class *klass;
  struct MonitorData *monitor;
  struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION fields;
};
struct TimeZoneInfo_SYSTEMTIME__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimeZoneInfo_SYSTEMTIME__StaticFields {
};
struct TimeZoneInfo_SYSTEMTIME__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeZoneInfo_SYSTEMTIME__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeZoneInfo_SYSTEMTIME__VTable vtable;
};
struct TimeZoneInfo_TIME_ZONE_INFORMATION__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimeZoneInfo_TIME_ZONE_INFORMATION__StaticFields {
};
struct TimeZoneInfo_TIME_ZONE_INFORMATION__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeZoneInfo_TIME_ZONE_INFORMATION__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeZoneInfo_TIME_ZONE_INFORMATION__VTable vtable;
};
struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__StaticFields {
};
struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__VTable vtable;
};

struct __declspec(align(8)) List_1_System_TimeZoneInfo___Fields {
  struct TimeZoneInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_TimeZoneInfo_ {
  struct List_1_System_TimeZoneInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_TimeZoneInfo___Fields fields;
};
struct List_1_System_TimeZoneInfo___VTable {
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
struct List_1_System_TimeZoneInfo___StaticFields {
  struct TimeZoneInfo__Array * _emptyArray;
};
struct List_1_System_TimeZoneInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_TimeZoneInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_TimeZoneInfo___VTable vtable;
};

enum TimeZoneInfoOptions__Enum : int32_t {
  TimeZoneInfoOptions__Enum_None = 1,
  TimeZoneInfoOptions__Enum_NoThrowOnInvalidTime = 2,
};
struct TimeZoneInfoOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TimeZoneInfoOptions__Enum value;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_System_String___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_String_ {
  struct Dictionary_2_System_Int32_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_String___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct String * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String___Fields {
  struct Dictionary_2_System_Int32_System_String_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String___Fields {
  struct Dictionary_2_System_Int32_System_String_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String___Fields fields;
};
struct KeyValuePair_2_System_Int32_System_String_ {
  int32_t key;
  struct String * value;
};
struct KeyValuePair_2_System_Int32_System_String___Boxed {
  struct KeyValuePair_2_System_Int32_System_String___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_String_ fields;
};
struct KeyValuePair_2_System_Int32_System_String___Array {
  struct KeyValuePair_2_System_Int32_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_String_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_String_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String___VTable vtable;
};
struct KeyValuePair_2_System_Int32_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_System_String___StaticFields {
};
struct KeyValuePair_2_System_Int32_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_System_String___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_String___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_String___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_String___VTable vtable;
};
struct Dictionary_2_System_Int32_System_String___VTable {
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
struct Dictionary_2_System_Int32_System_String___StaticFields {
};
struct Dictionary_2_System_Int32_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_System_String___VTable vtable;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_System_TimeType___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_TimeType_ {
  struct Dictionary_2_System_Int32_System_TimeType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_TimeType___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct TimeType * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType___Fields {
  struct Dictionary_2_System_Int32_System_TimeType_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType___Fields {
  struct Dictionary_2_System_Int32_System_TimeType_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType___Fields fields;
};
struct TimeType__Array {
  struct TimeType__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TimeType * vector[32];
};
struct IEnumerator_1_System_TimeType_ {
  struct IEnumerator_1_System_TimeType___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_TimeType_ {
  struct ICollection_1_System_TimeType___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_System_TimeType_ {
  int32_t key;
  struct TimeType * value;
};
struct KeyValuePair_2_System_Int32_System_TimeType___Boxed {
  struct KeyValuePair_2_System_Int32_System_TimeType___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_TimeType_ fields;
};
struct KeyValuePair_2_System_Int32_System_TimeType___Array {
  struct KeyValuePair_2_System_Int32_System_TimeType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_TimeType_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_TimeType_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_TimeType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_TimeType_ {
  struct IEnumerable_1_System_TimeType___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_TimeType___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_TimeType___VTable vtable;
};
struct IEnumerator_1_System_TimeType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_TimeType___StaticFields {
};
struct IEnumerator_1_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_TimeType___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_TimeType___VTable vtable;
};
struct ICollection_1_System_TimeType___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_TimeType___StaticFields {
};
struct ICollection_1_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_TimeType___VTable vtable;
};
struct KeyValuePair_2_System_Int32_System_TimeType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_System_TimeType___StaticFields {
};
struct KeyValuePair_2_System_Int32_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_System_TimeType___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_TimeType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_TimeType___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_TimeType___VTable vtable;
};
struct IEnumerable_1_System_TimeType___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_TimeType___StaticFields {
};
struct IEnumerable_1_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_TimeType___VTable vtable;
};
struct Dictionary_2_System_Int32_System_TimeType___VTable {
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
struct Dictionary_2_System_Int32_System_TimeType___StaticFields {
};
struct Dictionary_2_System_Int32_System_TimeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_System_TimeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_System_TimeType___VTable vtable;
};

struct TimeZoneInfo_c {
  struct TimeZoneInfo_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_TimeZoneInfo_AdjustmentRule___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_TimeZoneInfo_AdjustmentRule_ {
  struct Comparison_1_TimeZoneInfo_AdjustmentRule___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_TimeZoneInfo_AdjustmentRule___Fields fields;
};
struct Comparison_1_TimeZoneInfo_AdjustmentRule___VTable {
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
};}