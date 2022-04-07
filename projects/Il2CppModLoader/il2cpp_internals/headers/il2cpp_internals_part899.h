namespace app {

struct __declspec(align(8)) ConcurrentQueue_1_System_Object___Fields {
  struct Object * _crossSegmentLock;
  struct ConcurrentQueue_1_T_Segment_System_Object_ * _tail;
  struct ConcurrentQueue_1_T_Segment_System_Object_ * _head;
};
struct ConcurrentQueue_1_System_Object_ {
  struct ConcurrentQueue_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentQueue_1_System_Object___Fields fields;
};
struct __declspec(align(8)) ConcurrentQueue_1_T_Segment_System_Object___Fields {
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array * _slots;
  int32_t _slotsMask;
  struct PaddedHeadAndTail _headAndTail;
  bool _preservedForObservation;
  bool _frozenForEnqueues;
  struct ConcurrentQueue_1_T_Segment_System_Object_ * _nextSegment;
};
struct ConcurrentQueue_1_T_Segment_System_Object_ {
  struct ConcurrentQueue_1_T_Segment_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentQueue_1_T_Segment_System_Object___Fields fields;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object_ {
  struct Object * Item;
  int32_t SequenceNumber;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Boxed {
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object_ fields;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array {
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object_ vector[32];
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___StaticFields {
};
struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___VTable vtable;
};
struct ConcurrentQueue_1_T_Segment_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentQueue_1_T_Segment_System_Object___StaticFields {
};
struct ConcurrentQueue_1_T_Segment_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentQueue_1_T_Segment_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentQueue_1_T_Segment_System_Object___VTable vtable;
};
struct ConcurrentQueue_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd;
  VirtualInvokeData System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake;
  VirtualInvokeData ToArray;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData CopyTo;
};
struct ConcurrentQueue_1_System_Object___StaticFields {
};
struct ConcurrentQueue_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentQueue_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentQueue_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) ConcurrentQueue_1_T_Enumerate_d_27_System_Object___Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct ConcurrentQueue_1_T_Segment_System_Object_ * head;
  struct ConcurrentQueue_1_T_Segment_System_Object_ * tail;
  int32_t tailTail;
  int32_t headHead;
  struct ConcurrentQueue_1_System_Object_ * __4__this;
  int32_t _i_5__1;
  int32_t _headTail_5__2;
  int32_t _i_5__3;
  int32_t _i_5__4;
  struct ConcurrentQueue_1_T_Segment_System_Object_ * _s_5__5;
  int32_t _i_5__6;
  int32_t _sTail_5__7;
  int32_t _i_5__8;
};
struct ConcurrentQueue_1_T_Enumerate_d_27_System_Object_ {
  struct ConcurrentQueue_1_T_Enumerate_d_27_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentQueue_1_T_Enumerate_d_27_System_Object___Fields fields;
};
struct ConcurrentQueue_1_T_Enumerate_d_27_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_T__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct ConcurrentQueue_1_T_Enumerate_d_27_System_Object___StaticFields {
};
struct ConcurrentQueue_1_T_Enumerate_d_27_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentQueue_1_T_Enumerate_d_27_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentQueue_1_T_Enumerate_d_27_System_Object___VTable vtable;
};

struct IProducerConsumerCollection_1_System_Object_ {
  struct IProducerConsumerCollection_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IProducerConsumerCollection_1_System_Object___VTable {
  VirtualInvokeData TryAdd;
  VirtualInvokeData TryTake;
  VirtualInvokeData ToArray;
};
struct IProducerConsumerCollection_1_System_Object___StaticFields {
};
struct IProducerConsumerCollection_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IProducerConsumerCollection_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IProducerConsumerCollection_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) IProducerConsumerCollectionDebugView_1_System_Object___Fields {
  struct IProducerConsumerCollection_1_System_Object_ * _collection;
};
struct IProducerConsumerCollectionDebugView_1_System_Object_ {
  struct IProducerConsumerCollectionDebugView_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct IProducerConsumerCollectionDebugView_1_System_Object___Fields fields;
};
struct IProducerConsumerCollectionDebugView_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IProducerConsumerCollectionDebugView_1_System_Object___StaticFields {
};
struct IProducerConsumerCollectionDebugView_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IProducerConsumerCollectionDebugView_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IProducerConsumerCollectionDebugView_1_System_Object___VTable vtable;
};

struct IReadOnlyDictionary_2_System_Object_System_Object_ {
  struct IReadOnlyDictionary_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IReadOnlyDictionary_2_System_Object_System_Object___VTable {
  VirtualInvokeData ContainsKey;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
};
struct IReadOnlyDictionary_2_System_Object_System_Object___StaticFields {
};
struct IReadOnlyDictionary_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IReadOnlyDictionary_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IReadOnlyDictionary_2_System_Object_System_Object___VTable vtable;
};

struct ArraySortHelper_2_System_Object_System_Object_ {
  struct ArraySortHelper_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ArraySortHelper_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ArraySortHelper_2_System_Object_System_Object___StaticFields {
  struct ArraySortHelper_2_System_Object_System_Object_ * s_defaultArraySortHelper;
};
struct ArraySortHelper_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArraySortHelper_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArraySortHelper_2_System_Object_System_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ {
  struct Dictionary_2_System_Object_System_Object_ * dictionary;
  int32_t version;
  int32_t index;
  struct KeyValuePair_2_System_Object_System_Object_ current;
  int32_t getEnumeratorRetType;
};
struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object___Boxed {
  struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ fields;
};
struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Key;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Value;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Entry;
};
struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object___StaticFields {
};
struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object___VTable vtable;
};

enum InsertionBehavior__Enum : uint8_t {
  InsertionBehavior__Enum_None = 0,
  InsertionBehavior__Enum_OverwriteExisting = 1,
  InsertionBehavior__Enum_ThrowOnExisting = 2,
};
struct InsertionBehavior__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InsertionBehavior__Enum value;
};

struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_ {
  struct Dictionary_2_System_Object_System_Object_ * dictionary;
  int32_t index;
  int32_t version;
  struct Object * currentKey;
};
struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object___Boxed {
  struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_ fields;
};
struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_ {
  struct Dictionary_2_System_Object_System_Object_ * dictionary;
  int32_t index;
  int32_t version;
  struct Object * currentValue;
};
struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object___Boxed {
  struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_ fields;
};
struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) IDictionaryDebugView_2_System_Object_System_Object__1__Fields {
  struct IDictionary_2_System_Object_System_Object_ * _dict;
};
struct IDictionaryDebugView_2_System_Object_System_Object__1 {
  struct IDictionaryDebugView_2_System_Object_System_Object__1__Class *klass;
  struct MonitorData *monitor;
  struct IDictionaryDebugView_2_System_Object_System_Object__1__Fields fields;
};
struct IDictionaryDebugView_2_System_Object_System_Object__1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IDictionaryDebugView_2_System_Object_System_Object__1__StaticFields {
};
struct IDictionaryDebugView_2_System_Object_System_Object__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionaryDebugView_2_System_Object_System_Object__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionaryDebugView_2_System_Object_System_Object__1__VTable vtable;
};

struct __declspec(align(8)) DictionaryKeyCollectionDebugView_2_System_Object_System_Object___Fields {
  struct ICollection_1_System_Object_ * _collection;
};
struct DictionaryKeyCollectionDebugView_2_System_Object_System_Object_ {
  struct DictionaryKeyCollectionDebugView_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct DictionaryKeyCollectionDebugView_2_System_Object_System_Object___Fields fields;
};
struct DictionaryKeyCollectionDebugView_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DictionaryKeyCollectionDebugView_2_System_Object_System_Object___StaticFields {
};
struct DictionaryKeyCollectionDebugView_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DictionaryKeyCollectionDebugView_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DictionaryKeyCollectionDebugView_2_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) DictionaryValueCollectionDebugView_2_System_Object_System_Object___Fields {
  struct ICollection_1_System_Object_ * _collection;
};
struct DictionaryValueCollectionDebugView_2_System_Object_System_Object_ {
  struct DictionaryValueCollectionDebugView_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct DictionaryValueCollectionDebugView_2_System_Object_System_Object___Fields fields;
};
struct DictionaryValueCollectionDebugView_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DictionaryValueCollectionDebugView_2_System_Object_System_Object___StaticFields {
};
struct DictionaryValueCollectionDebugView_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DictionaryValueCollectionDebugView_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DictionaryValueCollectionDebugView_2_System_Object_System_Object___VTable vtable;
};

struct Comparer_1_System_Object_ {
  struct Comparer_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ComparisonComparer_1_System_Object___Fields {
  struct Comparison_1_Object_ * _comparison;
};
struct ComparisonComparer_1_System_Object_ {
  struct ComparisonComparer_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ComparisonComparer_1_System_Object___Fields fields;
};
struct ComparisonComparer_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IComparer_Compare;
  VirtualInvokeData Compare;
  VirtualInvokeData Compare_1;
};
struct ComparisonComparer_1_System_Object___StaticFields {
};
struct ComparisonComparer_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComparisonComparer_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComparisonComparer_1_System_Object___VTable vtable;
};
struct Comparer_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IComparer_Compare;
  VirtualInvokeData Compare;
  VirtualInvokeData __unknown;
};
struct Comparer_1_System_Object___StaticFields {
  struct Comparer_1_System_Object_ * defaultComparer;
};
struct Comparer_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparer_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparer_1_System_Object___VTable vtable;
};

struct GenericComparer_1_System_Object_ {
  struct GenericComparer_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct GenericComparer_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IComparer_Compare;
  VirtualInvokeData Compare;
  VirtualInvokeData Compare_1;
};
struct GenericComparer_1_System_Object___StaticFields {
};
struct GenericComparer_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericComparer_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericComparer_1_System_Object___VTable vtable;
};

struct ObjectComparer_1_System_Object_ {
  struct ObjectComparer_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ObjectComparer_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IComparer_Compare;
  VirtualInvokeData Compare;
  VirtualInvokeData Compare_1;
};
struct ObjectComparer_1_System_Object___StaticFields {
};
struct ObjectComparer_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectComparer_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectComparer_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) Mscorlib_CollectionDebugView_1_System_Object___Fields {
  struct ICollection_1_System_Object_ * collection;
};
struct Mscorlib_CollectionDebugView_1_System_Object_ {
  struct Mscorlib_CollectionDebugView_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Mscorlib_CollectionDebugView_1_System_Object___Fields fields;
};
struct Mscorlib_CollectionDebugView_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Mscorlib_CollectionDebugView_1_System_Object___StaticFields {
};
struct Mscorlib_CollectionDebugView_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Mscorlib_CollectionDebugView_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Mscorlib_CollectionDebugView_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) Mscorlib_DictionaryDebugView_2_System_Object_System_Object___Fields {
  struct IDictionary_2_System_Object_System_Object_ * dict;
};
struct Mscorlib_DictionaryDebugView_2_System_Object_System_Object_ {
  struct Mscorlib_DictionaryDebugView_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Mscorlib_DictionaryDebugView_2_System_Object_System_Object___Fields fields;
};
struct Mscorlib_DictionaryDebugView_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Mscorlib_DictionaryDebugView_2_System_Object_System_Object___StaticFields {
};
struct Mscorlib_DictionaryDebugView_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Mscorlib_DictionaryDebugView_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Mscorlib_DictionaryDebugView_2_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object___Fields {
  struct KeyedCollection_2_System_Object_System_Object_ * kc;
};
struct Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object_ {
  struct Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object___Fields fields;
};
struct Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object___StaticFields {
};
struct Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Mscorlib_KeyedCollectionDebugView_2_System_Object_System_Object___VTable vtable;
};

struct EqualityComparer_1_System_Object_ {
  struct EqualityComparer_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ObjectEqualityComparer_1_System_Object_ {
  struct ObjectEqualityComparer_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ObjectEqualityComparer_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
  VirtualInvokeData IndexOf;
  VirtualInvokeData LastIndexOf;
};
struct ObjectEqualityComparer_1_System_Object___StaticFields {
};
struct ObjectEqualityComparer_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectEqualityComparer_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectEqualityComparer_1_System_Object___VTable vtable;
};
struct EqualityComparer_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData IndexOf;
  VirtualInvokeData LastIndexOf;
};
struct EqualityComparer_1_System_Object___StaticFields {
  struct EqualityComparer_1_System_Object_ * defaultComparer;
};
struct EqualityComparer_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EqualityComparer_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EqualityComparer_1_System_Object___VTable vtable;
};

struct GenericEqualityComparer_1_System_Object_ {
  struct GenericEqualityComparer_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct GenericEqualityComparer_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
  VirtualInvokeData IndexOf;
  VirtualInvokeData LastIndexOf;
};
struct GenericEqualityComparer_1_System_Object___StaticFields {
};
struct GenericEqualityComparer_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericEqualityComparer_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericEqualityComparer_1_System_Object___VTable vtable;
};

struct IReadOnlyCollection_1_System_Object_ {
  struct IReadOnlyCollection_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IReadOnlyCollection_1_System_Object___VTable {
  VirtualInvokeData get_Count;
};
struct IReadOnlyCollection_1_System_Object___StaticFields {
};
struct IReadOnlyCollection_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IReadOnlyCollection_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IReadOnlyCollection_1_System_Object___VTable vtable;
};

struct List_1_T_Enumerator_System_Object_ {
  struct List_1_System_Object_ * list;
  int32_t index;
  int32_t version;
  struct Object * current;
};
struct List_1_T_Enumerator_System_Object___Boxed {
  struct List_1_T_Enumerator_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_System_Object_ fields;
};
struct List_1_T_Enumerator_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_System_Object___StaticFields {
};
struct List_1_T_Enumerator_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_System_Object___VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_Object___Fields {
  struct TraceLoggingTypeInfo__Fields _;
};
struct TraceLoggingTypeInfo_1_System_Object_ {
  struct TraceLoggingTypeInfo_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct TraceLoggingTypeInfo_1_System_Object___Fields fields;
};
struct ArrayTypeInfo_1_System_Object___Fields {
  struct TraceLoggingTypeInfo_1_System_Object___Fields _;
  struct TraceLoggingTypeInfo_1_System_Object__1 * elementInfo;
};
struct ArrayTypeInfo_1_System_Object_ {
  struct ArrayTypeInfo_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ArrayTypeInfo_1_System_Object___Fields fields;
};
struct TraceLoggingTypeInfo_1_System_Object__1__Fields {
  struct TraceLoggingTypeInfo__Fields _;
};
struct TraceLoggingTypeInfo_1_System_Object__1 {
  struct TraceLoggingTypeInfo_1_System_Object__1__Class *klass;
  struct MonitorData *monitor;
  struct TraceLoggingTypeInfo_1_System_Object__1__Fields fields;
};
struct InvokeTypeInfo_1_System_Object___Fields {
  struct TraceLoggingTypeInfo_1_System_Object__1__Fields _;
  struct PropertyAnalysis__Array * properties;
  struct PropertyAccessor_1_System_Object___Array * accessors;
};
struct InvokeTypeInfo_1_System_Object_ {
  struct InvokeTypeInfo_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct InvokeTypeInfo_1_System_Object___Fields fields;
};
struct PropertyAccessor_1_System_Object_ {
  struct PropertyAccessor_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct PropertyAccessor_1_System_Object___Array {
  struct PropertyAccessor_1_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PropertyAccessor_1_System_Object_ * vector[32];
};
struct __declspec(align(8)) ClassPropertyWriter_2_System_Object_System_Int32___Fields {
  struct TraceLoggingTypeInfo_1_System_Int32_ * valueTypeInfo;
  struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32_ * getter;
};
struct ClassPropertyWriter_2_System_Object_System_Int32_ {
  struct ClassPropertyWriter_2_System_Object_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct ClassPropertyWriter_2_System_Object_System_Int32___Fields fields;
};
struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32_ {
  struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32___Fields fields;
};
struct TraceLoggingTypeInfo_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData WriteObjectData;
  VirtualInvokeData GetData;
  VirtualInvokeData __unknown_1;
};
struct TraceLoggingTypeInfo_1_System_Object___StaticFields {
  struct TraceLoggingTypeInfo_1_System_Object_ * instance;
};
struct TraceLoggingTypeInfo_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TraceLoggingTypeInfo_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TraceLoggingTypeInfo_1_System_Object___VTable vtable;
};
struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32___VTable {
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
struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32___StaticFields {
};
struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Object_System_Int32___VTable vtable;
};
struct ClassPropertyWriter_2_System_Object_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Write;
  VirtualInvokeData GetData;
};
struct ClassPropertyWriter_2_System_Object_System_Int32___StaticFields {
};
struct ClassPropertyWriter_2_System_Object_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClassPropertyWriter_2_System_Object_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClassPropertyWriter_2_System_Object_System_Int32___VTable vtable;
};
struct PropertyAccessor_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct PropertyAccessor_1_System_Object___StaticFields {
};
struct PropertyAccessor_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyAccessor_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyAccessor_1_System_Object___VTable vtable;
};
struct InvokeTypeInfo_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData WriteMetadata;
  VirtualInvokeData WriteObjectData;
  VirtualInvokeData GetData;
  VirtualInvokeData WriteData;
};
struct InvokeTypeInfo_1_System_Object___StaticFields {
};
struct InvokeTypeInfo_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvokeTypeInfo_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvokeTypeInfo_1_System_Object___VTable vtable;
};
struct TraceLoggingTypeInfo_1_System_Object__1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData WriteObjectData;
  VirtualInvokeData GetData;
  VirtualInvokeData __unknown_1;
};
struct TraceLoggingTypeInfo_1_System_Object__1__StaticFields {
  struct TraceLoggingTypeInfo_1_System_Object__1 * instance;
};
struct TraceLoggingTypeInfo_1_System_Object__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TraceLoggingTypeInfo_1_System_Object__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TraceLoggingTypeInfo_1_System_Object__1__VTable vtable;
};
struct ArrayTypeInfo_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData WriteMetadata;
  VirtualInvokeData WriteObjectData;
  VirtualInvokeData GetData;
  VirtualInvokeData WriteData;
};
struct ArrayTypeInfo_1_System_Object___StaticFields {
};
struct ArrayTypeInfo_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArrayTypeInfo_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArrayTypeInfo_1_System_Object___VTable vtable;
};

struct ConcurrentSet_2_System_Object_System_Object_ {
  struct Object__Array * items;
};
struct ConcurrentSet_2_System_Object_System_Object___Boxed {
  struct ConcurrentSet_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentSet_2_System_Object_System_Object_ fields;
};
struct ConcurrentSet_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentSet_2_System_Object_System_Object___StaticFields {
};
struct ConcurrentSet_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentSet_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentSet_2_System_Object_System_Object___VTable vtable;
};

struct ConcurrentSetItem_2_System_Object_System_Object_ {
  struct ConcurrentSetItem_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ConcurrentSetItem_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct ConcurrentSetItem_2_System_Object_System_Object___StaticFields {
};
struct ConcurrentSetItem_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentSetItem_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentSetItem_2_System_Object_System_Object___VTable vtable;
};

struct EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object_ {
  struct EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object___Fields fields;
};}