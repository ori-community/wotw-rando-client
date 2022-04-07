namespace app {
struct NamedValue_1_System_Object___Array {
  struct NamedValue_1_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NamedValue_1_System_Object_ * vector[32];
};
struct NamedValues_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamedValues_1_System_Object___StaticFields {
};
struct NamedValues_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamedValues_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamedValues_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) RBTree_1_System_Object___Fields {
  struct RBTree_1_K_TreePage_System_Object___Array * _pageTable;
  struct Int32__Array * _pageTableMap;
  int32_t _inUsePageCount;
  int32_t _nextFreePageLine;
  int32_t root;
  int32_t _version;
  int32_t _inUseNodeCount;
  int32_t _inUseSatelliteTreeCount;
  enum TreeAccessMethod__Enum _accessMethod;
};
struct RBTree_1_System_Object_ {
  struct RBTree_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_System_Object___Fields fields;
};
struct __declspec(align(8)) RBTree_1_K_TreePage_System_Object___Fields {
  struct RBTree_1_K_Node_System_Object___Array * _slots;
  struct Int32__Array * _slotMap;
  int32_t _inUseCount;
  int32_t _pageId;
  int32_t _nextFreeSlotLine;
};
struct RBTree_1_K_TreePage_System_Object_ {
  struct RBTree_1_K_TreePage_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_TreePage_System_Object___Fields fields;
};
struct RBTree_1_K_TreePage_System_Object___Array {
  struct RBTree_1_K_TreePage_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RBTree_1_K_TreePage_System_Object_ * vector[32];
};
struct RBTree_1_K_Node_System_Object_ {
  int32_t _selfId;
  int32_t _leftId;
  int32_t _rightId;
  int32_t _parentId;
  int32_t _nextId;
  int32_t _subTreeSize;
  struct Object * _keyOfNode;
  struct RBTree_1_K_NodeColor_System_Object_ * _nodeColor;
};
struct RBTree_1_K_Node_System_Object___Boxed {
  struct RBTree_1_K_Node_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_Node_System_Object_ fields;
};
struct RBTree_1_K_Node_System_Object___Array {
  struct RBTree_1_K_Node_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RBTree_1_K_Node_System_Object_ vector[32];
};
struct __declspec(align(8)) RBTree_1_K_NodeColor_System_Object___Fields {
  int32_t value__;
};
struct RBTree_1_K_NodeColor_System_Object_ {
  struct RBTree_1_K_NodeColor_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_NodeColor_System_Object___Fields fields;
};
struct RBTree_1_K_NodeColor_System_Object___VTable {
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
struct RBTree_1_K_NodeColor_System_Object___StaticFields {
};
struct RBTree_1_K_NodeColor_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RBTree_1_K_NodeColor_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RBTree_1_K_NodeColor_System_Object___VTable vtable;
};
struct RBTree_1_K_Node_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RBTree_1_K_Node_System_Object___StaticFields {
};
struct RBTree_1_K_Node_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RBTree_1_K_Node_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RBTree_1_K_Node_System_Object___VTable vtable;
};
struct RBTree_1_K_TreePage_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RBTree_1_K_TreePage_System_Object___StaticFields {
};
struct RBTree_1_K_TreePage_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RBTree_1_K_TreePage_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RBTree_1_K_TreePage_System_Object___VTable vtable;
};
struct RBTree_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct RBTree_1_System_Object___StaticFields {
};
struct RBTree_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RBTree_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RBTree_1_System_Object___VTable vtable;
};

struct RBTree_1_K_NodePath_System_Object_ {
  int32_t _nodeID;
  int32_t _mainTreeNodeID;
};
struct RBTree_1_K_NodePath_System_Object___Boxed {
  struct RBTree_1_K_NodePath_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_NodePath_System_Object_ fields;
};
struct RBTree_1_K_NodePath_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RBTree_1_K_NodePath_System_Object___StaticFields {
};
struct RBTree_1_K_NodePath_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RBTree_1_K_NodePath_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RBTree_1_K_NodePath_System_Object___VTable vtable;
};

struct RBTree_1_K_RBTreeEnumerator_System_Object_ {
  struct RBTree_1_System_Object_ * _tree;
  int32_t _version;
  int32_t _index;
  int32_t _mainTreeNodeId;
  struct Object * _current;
};
struct RBTree_1_K_RBTreeEnumerator_System_Object___Boxed {
  struct RBTree_1_K_RBTreeEnumerator_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_RBTreeEnumerator_System_Object_ fields;
};
struct RBTree_1_K_RBTreeEnumerator_System_Object___VTable {
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
struct RBTree_1_K_RBTreeEnumerator_System_Object___StaticFields {
};
struct RBTree_1_K_RBTreeEnumerator_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RBTree_1_K_RBTreeEnumerator_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RBTree_1_K_RBTreeEnumerator_System_Object___VTable vtable;
};

struct __declspec(align(8)) Listeners_1_System_Object___Fields {
  struct List_1_System_Object_ * _listeners;
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_ * _filter;
  int32_t _objectID;
  int32_t _listenerReaderCount;
};
struct Listeners_1_System_Object_ {
  struct Listeners_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Listeners_1_System_Object___Fields fields;
};
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_ {
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean___Fields fields;
};
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean___VTable {
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
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean___StaticFields {
};
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean___VTable vtable;
};
struct Listeners_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Listeners_1_System_Object___StaticFields {
};
struct Listeners_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Listeners_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Listeners_1_System_Object___VTable vtable;
};

struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object_ {
  struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object___Fields fields;
};
struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object___VTable {
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
struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object___StaticFields {
};
struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object___VTable vtable;
};

struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object_ {
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object___Fields fields;
};
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object___VTable {
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
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object___StaticFields {
};
struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Listeners_1_TElem_Func_2_System_Object_System_Object_System_Object___VTable vtable;
};

struct ElementTryParser_1_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct ElementTryParser_1_System_Object_ {
  struct ElementTryParser_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ElementTryParser_1_System_Object___Fields fields;
};
struct ElementTryParser_1_System_Object___VTable {
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
struct ElementTryParser_1_System_Object___StaticFields {
};
struct ElementTryParser_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ElementTryParser_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ElementTryParser_1_System_Object___VTable vtable;
};

struct TryParseDelegate_1_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct TryParseDelegate_1_System_Object_ {
  struct TryParseDelegate_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct TryParseDelegate_1_System_Object___Fields fields;
};
struct TryParseDelegate_1_System_Object___VTable {
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
struct TryParseDelegate_1_System_Object___StaticFields {
};
struct TryParseDelegate_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TryParseDelegate_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TryParseDelegate_1_System_Object___VTable vtable;
};

struct TryParseListDelegate_1_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct TryParseListDelegate_1_System_Object_ {
  struct TryParseListDelegate_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct TryParseListDelegate_1_System_Object___Fields fields;
};
struct TryParseListDelegate_1_System_Object___VTable {
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
struct TryParseListDelegate_1_System_Object___StaticFields {
};
struct TryParseListDelegate_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TryParseListDelegate_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TryParseListDelegate_1_System_Object___VTable vtable;
};

struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___Fields {
  struct HeaderInfo_1__Fields _;
  struct TryParseDelegate_1_System_Object_ * parser;
};
struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object_ {
  struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___Fields fields;
};
struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Separator;
  VirtualInvokeData ToStringCollection;
};
struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___StaticFields {
};
struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___VTable vtable;
};

struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object___Fields {
  struct HeaderInfo_HeaderTypeInfo_2_System_Object_System_Object___Fields _;
  int32_t minimalCount;
  struct String * separator;
  struct TryParseListDelegate_1_System_Object_ * parser;
};
struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object_ {
  struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object___Fields fields;
};
struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Separator;
  VirtualInvokeData ToStringCollection;
};
struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object___StaticFields {
};
struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) HttpHeaderValueCollection_1_System_Object___Fields {
  struct List_1_System_Object_ * list;
  struct HeaderInfo_1 * headerInfo;
  struct List_1_System_String_ * invalidValues;
};
struct HttpHeaderValueCollection_1_System_Object_ {
  struct HttpHeaderValueCollection_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct HttpHeaderValueCollection_1_System_Object___Fields fields;
};
struct HttpHeaderValueCollection_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct HttpHeaderValueCollection_1_System_Object___StaticFields {
};
struct HttpHeaderValueCollection_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpHeaderValueCollection_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpHeaderValueCollection_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) XHashtable_1_System_Object___Fields {
  struct XHashtable_1_TValue_XHashtableState_System_Object_ * state;
};
struct XHashtable_1_System_Object_ {
  struct XHashtable_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XHashtable_1_System_Object___Fields fields;
};
struct __declspec(align(8)) XHashtable_1_TValue_XHashtableState_System_Object___Fields {
  struct Int32__Array * buckets;
  struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array * entries;
  int32_t numEntries;
  struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object_ * extractKey;
};
struct XHashtable_1_TValue_XHashtableState_System_Object_ {
  struct XHashtable_1_TValue_XHashtableState_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XHashtable_1_TValue_XHashtableState_System_Object___Fields fields;
};
struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object_ {
  struct Object * Value;
  int32_t HashCode;
  int32_t Next;
};
struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Boxed {
  struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object_ fields;
};
struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array {
  struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object_ vector[32];
};
struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object_ {
  struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object___Fields fields;
};
struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___StaticFields {
};
struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___VTable vtable;
};
struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object___VTable {
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
struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object___StaticFields {
};
struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XHashtable_1_TValue_ExtractKeyDelegate_System_Object___VTable vtable;
};
struct XHashtable_1_TValue_XHashtableState_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XHashtable_1_TValue_XHashtableState_System_Object___StaticFields {
};
struct XHashtable_1_TValue_XHashtableState_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XHashtable_1_TValue_XHashtableState_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XHashtable_1_TValue_XHashtableState_System_Object___VTable vtable;
};
struct XHashtable_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XHashtable_1_System_Object___StaticFields {
};
struct XHashtable_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XHashtable_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XHashtable_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) XObject_Annotations_d_16_1_System_Object___Fields {
  int32_t __1__state;
  struct Object * __2__current;
  int32_t __l__initialThreadId;
  struct XObject * __4__this;
  struct Object__Array * _a_5__1;
  int32_t _i_5__2;
};
struct XObject_Annotations_d_16_1_System_Object_ {
  struct XObject_Annotations_d_16_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XObject_Annotations_d_16_1_System_Object___Fields fields;
};
struct XObject_Annotations_d_16_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_T__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct XObject_Annotations_d_16_1_System_Object___StaticFields {
};
struct XObject_Annotations_d_16_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XObject_Annotations_d_16_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XObject_Annotations_d_16_1_System_Object___VTable vtable;
};

struct XTypeDescriptionProvider_1_System_Object___Fields {
  struct TypeDescriptionProvider__Fields _;
};
struct XTypeDescriptionProvider_1_System_Object_ {
  struct XTypeDescriptionProvider_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XTypeDescriptionProvider_1_System_Object___Fields fields;
};
struct XTypeDescriptionProvider_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCache;
  VirtualInvokeData GetExtendedTypeDescriptor;
  VirtualInvokeData GetExtenderProviders;
  VirtualInvokeData GetFullComponentName;
  VirtualInvokeData GetReflectionType;
  VirtualInvokeData GetRuntimeType;
  VirtualInvokeData GetTypeDescriptor;
  VirtualInvokeData IsSupportedType;
};
struct XTypeDescriptionProvider_1_System_Object___StaticFields {
};
struct XTypeDescriptionProvider_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XTypeDescriptionProvider_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XTypeDescriptionProvider_1_System_Object___VTable vtable;
};

struct XTypeDescriptor_1_System_Object___Fields {
  struct CustomTypeDescriptor__Fields _;
};
struct XTypeDescriptor_1_System_Object_ {
  struct XTypeDescriptor_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XTypeDescriptor_1_System_Object___Fields fields;
};
struct XTypeDescriptor_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetAttributes;
  VirtualInvokeData GetClassName;
  VirtualInvokeData GetComponentName;
  VirtualInvokeData GetConverter;
  VirtualInvokeData GetDefaultEvent;
  VirtualInvokeData GetDefaultProperty;
  VirtualInvokeData GetEditor;
  VirtualInvokeData GetEvents;
  VirtualInvokeData GetEvents_1;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetProperties_1;
  VirtualInvokeData GetPropertyOwner;
  VirtualInvokeData GetAttributes_1;
  VirtualInvokeData GetClassName_1;
  VirtualInvokeData GetComponentName_1;
  VirtualInvokeData GetConverter_1;
  VirtualInvokeData GetDefaultEvent_1;
  VirtualInvokeData GetDefaultProperty_1;
  VirtualInvokeData GetEditor_1;
  VirtualInvokeData GetEvents_2;
  VirtualInvokeData GetEvents_3;
  VirtualInvokeData GetProperties_2;
  VirtualInvokeData GetProperties_3;
  VirtualInvokeData GetPropertyOwner_1;
};
struct XTypeDescriptor_1_System_Object___StaticFields {
};
struct XTypeDescriptor_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XTypeDescriptor_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XTypeDescriptor_1_System_Object___VTable vtable;
};

struct XPropertyDescriptor_2_System_Object_System_Object___Fields {
  struct PropertyDescriptor__Fields _;
};
struct XPropertyDescriptor_2_System_Object_System_Object_ {
  struct XPropertyDescriptor_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XPropertyDescriptor_2_System_Object_System_Object___Fields fields;
};
struct XPropertyDescriptor_2_System_Object_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AttributeArray;
  VirtualInvokeData set_AttributeArray;
  VirtualInvokeData get_Attributes;
  VirtualInvokeData get_Category;
  VirtualInvokeData get_Description;
  VirtualInvokeData get_IsBrowsable;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_NameHashCode;
  VirtualInvokeData get_DesignTimeOnly;
  VirtualInvokeData get_DisplayName;
  VirtualInvokeData CreateAttributeCollection;
  VirtualInvokeData FillAttributes;
  VirtualInvokeData GetInvocationTarget;
  VirtualInvokeData get_ComponentType;
  VirtualInvokeData get_Converter;
  VirtualInvokeData get_IsLocalizable;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PropertyType;
  VirtualInvokeData AddValueChanged;
  VirtualInvokeData CanResetValue;
  VirtualInvokeData GetChildProperties;
  VirtualInvokeData GetEditor;
  VirtualInvokeData __unknown;
  VirtualInvokeData OnValueChanged;
  VirtualInvokeData RemoveValueChanged;
  VirtualInvokeData ResetValue;
  VirtualInvokeData SetValue;
  VirtualInvokeData ShouldSerializeValue;
  VirtualInvokeData get_SupportsChangeEvents;
  VirtualInvokeData OnChanged;
  VirtualInvokeData OnChanging;
};
struct XPropertyDescriptor_2_System_Object_System_Object___StaticFields {
};
struct XPropertyDescriptor_2_System_Object_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPropertyDescriptor_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPropertyDescriptor_2_System_Object_System_Object___VTable vtable;
};

struct __declspec(align(8)) XDeferredAxis_1_System_Object___Fields {
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1 * func;
  struct XElement * element;
  struct XName * name;
};
struct XDeferredAxis_1_System_Object_ {
  struct XDeferredAxis_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XDeferredAxis_1_System_Object___Fields fields;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1 {
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1__Fields fields;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1__VTable {
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
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1__StaticFields {
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1__1__VTable vtable;
};
struct XDeferredAxis_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct XDeferredAxis_1_System_Object___StaticFields {
};
struct XDeferredAxis_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XDeferredAxis_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XDeferredAxis_1_System_Object___VTable vtable;
};

struct __declspec(align(8)) XDeferredSingleton_1_System_Object___Fields {
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object_ * func;
  struct XElement * element;
  struct XName * name;
};
struct XDeferredSingleton_1_System_Object_ {
  struct XDeferredSingleton_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XDeferredSingleton_1_System_Object___Fields fields;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object_ {
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object___Class *klass;
  struct MonitorData *monitor;
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object___Fields fields;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object___VTable {
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
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object___StaticFields {
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_Object___VTable vtable;
};
struct XDeferredSingleton_1_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XDeferredSingleton_1_System_Object___StaticFields {
};
struct XDeferredSingleton_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XDeferredSingleton_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XDeferredSingleton_1_System_Object___VTable vtable;
};

struct IComponentTracker_1_System_Object_ {
  struct IComponentTracker_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IComponentTracker_1_System_Object___VTable {
  VirtualInvokeData Register;
};}