namespace app {
struct IEnumerator_1_System_Text_RegularExpressions_CachedCodeEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Text_RegularExpressions_CachedCodeEntry___StaticFields {
};
struct IEnumerator_1_System_Text_RegularExpressions_CachedCodeEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Text_RegularExpressions_CachedCodeEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Text_RegularExpressions_CachedCodeEntry___VTable vtable;
};
struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry___StaticFields {
};
struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry___VTable vtable;
};
struct Regex__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};
struct Regex__StaticFields {
  struct TimeSpan MaximumMatchTimeout;
  struct TimeSpan InfiniteMatchTimeout;
  struct TimeSpan FallbackDefaultMatchTimeout;
  struct TimeSpan DefaultMatchTimeout;
  struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_ * livecode;
  int32_t cacheSize;
};
struct Regex__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Regex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Regex__VTable vtable;
};

struct __declspec(align(8)) MatchCollection__Fields {
  struct Regex * _regex;
  struct ArrayList * _matches;
  bool _done;
  struct String * _input;
  int32_t _beginning;
  int32_t _length;
  int32_t _startat;
  int32_t _prevlen;
};
struct MatchCollection {
  struct MatchCollection__Class *klass;
  struct MonitorData *monitor;
  struct MatchCollection__Fields fields;
};
struct MatchCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Item;
};
struct MatchCollection__StaticFields {
  int32_t infinite;
};
struct MatchCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchCollection__VTable vtable;
};

struct __declspec(align(8)) CaptureEnumerator__Fields {
  struct CaptureCollection * _rcc;
  int32_t _curindex;
};
struct CaptureEnumerator {
  struct CaptureEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct CaptureEnumerator__Fields fields;
};
struct CaptureEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct CaptureEnumerator__StaticFields {
};
struct CaptureEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CaptureEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CaptureEnumerator__VTable vtable;
};

struct __declspec(align(8)) RegexCharClass__Fields {
  struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * _rangelist;
  struct StringBuilder * _categories;
  bool _canonical;
  bool _negate;
  struct RegexCharClass * _subtractor;
};
struct RegexCharClass {
  struct RegexCharClass__Class *klass;
  struct MonitorData *monitor;
  struct RegexCharClass__Fields fields;
};
struct __declspec(align(8)) List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields {
  struct RegexCharClass_SingleRange__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ {
  struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields fields;
};
struct __declspec(align(8)) RegexCharClass_SingleRange__Fields {
  uint16_t _first;
  uint16_t _last;
};
struct RegexCharClass_SingleRange {
  struct RegexCharClass_SingleRange__Class *klass;
  struct MonitorData *monitor;
  struct RegexCharClass_SingleRange__Fields fields;
};
struct RegexCharClass_SingleRange__Array {
  struct RegexCharClass_SingleRange__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RegexCharClass_SingleRange * vector[32];
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ {
  struct IEnumerator_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Class *klass;
  struct MonitorData *monitor;
};
struct String__Array_1 {
  struct String__Array_1__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct String * vector[32];
};
struct RegexCharClass_LowerCaseMapping {
  uint16_t _chMin;
  uint16_t _chMax;
  int32_t _lcOp;
  int32_t _data;
};
struct RegexCharClass_LowerCaseMapping__Boxed {
  struct RegexCharClass_LowerCaseMapping__Class *klass;
  struct MonitorData *monitor;
  struct RegexCharClass_LowerCaseMapping fields;
};
struct RegexCharClass_LowerCaseMapping__Array {
  struct RegexCharClass_LowerCaseMapping__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RegexCharClass_LowerCaseMapping vector[32];
};
struct RegexCharClass_SingleRange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexCharClass_SingleRange__StaticFields {
};
struct RegexCharClass_SingleRange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexCharClass_SingleRange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexCharClass_SingleRange__VTable vtable;
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___StaticFields {
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___VTable vtable;
};
struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___VTable {
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
struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___StaticFields {
  struct RegexCharClass_SingleRange__Array * _emptyArray;
};
struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___VTable vtable;
};
struct RegexCharClass_LowerCaseMapping__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexCharClass_LowerCaseMapping__StaticFields {
};
struct RegexCharClass_LowerCaseMapping__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexCharClass_LowerCaseMapping__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexCharClass_LowerCaseMapping__VTable vtable;
};
struct RegexCharClass__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexCharClass__StaticFields {
  struct String * InternalRegexIgnoreCase;
  struct String * Space;
  struct String * NotSpace;
  struct String * Word;
  struct String * NotWord;
  struct String * SpaceClass;
  struct String * NotSpaceClass;
  struct String * WordClass;
  struct String * NotWordClass;
  struct String * DigitClass;
  struct String * NotDigitClass;
  struct Dictionary_2_System_String_System_String_ * _definedCategories;
  struct String__Array_1 * _propTable;
  struct RegexCharClass_LowerCaseMapping__Array * _lcTable;
};
struct RegexCharClass__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexCharClass__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexCharClass__VTable vtable;
};

struct RegexCharClass_SingleRangeComparer {
  struct RegexCharClass_SingleRangeComparer__Class *klass;
  struct MonitorData *monitor;
};
struct RegexCharClass_SingleRangeComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct RegexCharClass_SingleRangeComparer__StaticFields {
};
struct RegexCharClass_SingleRangeComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexCharClass_SingleRangeComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexCharClass_SingleRangeComparer__VTable vtable;
};

struct __declspec(align(8)) RegexTree__Fields {
  struct RegexNode * _root;
  struct Hashtable * _caps;
  struct Int32__Array * _capnumlist;
  struct Hashtable * _capnames;
  struct String__Array * _capslist;
  enum RegexOptions__Enum _options;
  int32_t _captop;
};
struct RegexTree {
  struct RegexTree__Class *klass;
  struct MonitorData *monitor;
  struct RegexTree__Fields fields;
};
struct __declspec(align(8)) RegexNode__Fields {
  int32_t _type;
  struct List_1_System_Text_RegularExpressions_RegexNode_ * _children;
  struct String * _str;
  uint16_t _ch;
  int32_t _m;
  int32_t _n;
  enum RegexOptions__Enum _options;
  struct RegexNode * _next;
};
struct RegexNode {
  struct RegexNode__Class *klass;
  struct MonitorData *monitor;
  struct RegexNode__Fields fields;
};
struct __declspec(align(8)) List_1_System_Text_RegularExpressions_RegexNode___Fields {
  struct RegexNode__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Text_RegularExpressions_RegexNode_ {
  struct List_1_System_Text_RegularExpressions_RegexNode___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Text_RegularExpressions_RegexNode___Fields fields;
};
struct RegexNode__Array {
  struct RegexNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RegexNode * vector[32];
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexNode_ {
  struct IEnumerator_1_System_Text_RegularExpressions_RegexNode___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexNode___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexNode___StaticFields {
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Text_RegularExpressions_RegexNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Text_RegularExpressions_RegexNode___VTable vtable;
};
struct List_1_System_Text_RegularExpressions_RegexNode___VTable {
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
struct List_1_System_Text_RegularExpressions_RegexNode___StaticFields {
  struct RegexNode__Array * _emptyArray;
};
struct List_1_System_Text_RegularExpressions_RegexNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Text_RegularExpressions_RegexNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Text_RegularExpressions_RegexNode___VTable vtable;
};
struct RegexNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexNode__StaticFields {
};
struct RegexNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexNode__VTable vtable;
};
struct RegexTree__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexTree__StaticFields {
};
struct RegexTree__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexTree__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexTree__VTable vtable;
};

struct __declspec(align(8)) RegexFCD__Fields {
  struct Int32__Array * _intStack;
  int32_t _intDepth;
  struct RegexFC__Array * _fcStack;
  int32_t _fcDepth;
  bool _skipAllChildren;
  bool _skipchild;
  bool _failed;
};
struct RegexFCD {
  struct RegexFCD__Class *klass;
  struct MonitorData *monitor;
  struct RegexFCD__Fields fields;
};
struct __declspec(align(8)) RegexFC__Fields {
  struct RegexCharClass * _cc;
  bool _nullable;
  bool _caseInsensitive;
};
struct RegexFC {
  struct RegexFC__Class *klass;
  struct MonitorData *monitor;
  struct RegexFC__Fields fields;
};
struct RegexFC__Array {
  struct RegexFC__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RegexFC * vector[32];
};
struct RegexFC__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexFC__StaticFields {
};
struct RegexFC__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexFC__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexFC__VTable vtable;
};
struct RegexFCD__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexFCD__StaticFields {
};
struct RegexFCD__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexFCD__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexFCD__VTable vtable;
};

struct __declspec(align(8)) GroupEnumerator__Fields {
  struct GroupCollection * _rgc;
  int32_t _curindex;
};
struct GroupEnumerator {
  struct GroupEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct GroupEnumerator__Fields fields;
};
struct GroupEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct GroupEnumerator__StaticFields {
};
struct GroupEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroupEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroupEnumerator__VTable vtable;
};

struct MatchSparse__Fields {
  struct Match__Fields _;
  struct Hashtable * _caps;
};
struct MatchSparse {
  struct MatchSparse__Class *klass;
  struct MonitorData *monitor;
  struct MatchSparse__Fields fields;
};
struct MatchSparse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData get_Groups;
  VirtualInvokeData GroupToStringImpl;
  VirtualInvokeData AddMatch;
  VirtualInvokeData BalanceMatch;
  VirtualInvokeData RemoveMatch;
  VirtualInvokeData IsMatched;
  VirtualInvokeData MatchIndex;
  VirtualInvokeData MatchLength;
  VirtualInvokeData Tidy;
};
struct MatchSparse__StaticFields {
};
struct MatchSparse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchSparse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchSparse__VTable vtable;
};

struct __declspec(align(8)) MatchEnumerator__Fields {
  struct MatchCollection * _matchcoll;
  struct Match * _match;
  int32_t _curindex;
  bool _done;
};
struct MatchEnumerator {
  struct MatchEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct MatchEnumerator__Fields fields;
};
struct MatchEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct MatchEnumerator__StaticFields {
};
struct MatchEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchEnumerator__VTable vtable;
};

struct RegexMatchTimeoutException__Fields {
  struct TimeoutException__Fields _;
  struct String * regexInput;
  struct String * regexPattern;
  struct TimeSpan matchTimeout;
};
struct RegexMatchTimeoutException {
  struct RegexMatchTimeoutException__Class *klass;
  struct MonitorData *monitor;
  struct RegexMatchTimeoutException__Fields fields;
};
struct RegexMatchTimeoutException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData GetType;
};
struct RegexMatchTimeoutException__StaticFields {
};
struct RegexMatchTimeoutException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexMatchTimeoutException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexMatchTimeoutException__VTable vtable;
};

struct __declspec(align(8)) RegexReplacement__Fields {
  struct String * _rep;
  struct List_1_System_String_ * _strings;
  struct List_1_System_Int32_ * _rules;
};
struct RegexReplacement {
  struct RegexReplacement__Class *klass;
  struct MonitorData *monitor;
  struct RegexReplacement__Fields fields;
};
struct RegexReplacement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexReplacement__StaticFields {
};
struct RegexReplacement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexReplacement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexReplacement__VTable vtable;
};

struct __declspec(align(8)) RegexParser__Fields {
  struct RegexNode * _stack;
  struct RegexNode * _group;
  struct RegexNode * _alternation;
  struct RegexNode * _concatenation;
  struct RegexNode * _unit;
  struct String * _pattern;
  int32_t _currentPos;
  struct CultureInfo * _culture;
  int32_t _autocap;
  int32_t _capcount;
  int32_t _captop;
  int32_t _capsize;
  struct Hashtable * _caps;
  struct Hashtable * _capnames;
  struct Int32__Array * _capnumlist;
  struct List_1_System_String_ * _capnamelist;
  enum RegexOptions__Enum _options;
  struct List_1_System_Text_RegularExpressions_RegexOptions_ * _optionsStack;
  bool _ignoreNextParen;
};
struct RegexParser {
  struct RegexParser__Class *klass;
  struct MonitorData *monitor;
  struct RegexParser__Fields fields;
};
struct __declspec(align(8)) List_1_System_Text_RegularExpressions_RegexOptions___Fields {
  struct RegexOptions__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Text_RegularExpressions_RegexOptions_ {
  struct List_1_System_Text_RegularExpressions_RegexOptions___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Text_RegularExpressions_RegexOptions___Fields fields;
};
struct RegexOptions__Enum__Array {
  struct RegexOptions__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum RegexOptions__Enum vector[32];
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexOptions_ {
  struct IEnumerator_1_System_Text_RegularExpressions_RegexOptions___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexOptions___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexOptions___StaticFields {
};
struct IEnumerator_1_System_Text_RegularExpressions_RegexOptions___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Text_RegularExpressions_RegexOptions___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Text_RegularExpressions_RegexOptions___VTable vtable;
};
struct List_1_System_Text_RegularExpressions_RegexOptions___VTable {
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
struct List_1_System_Text_RegularExpressions_RegexOptions___StaticFields {
  struct RegexOptions__Enum__Array * _emptyArray;
};
struct List_1_System_Text_RegularExpressions_RegexOptions___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Text_RegularExpressions_RegexOptions___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Text_RegularExpressions_RegexOptions___VTable vtable;
};
struct RegexParser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexParser__StaticFields {
  struct Byte__Array * _category;
};
struct RegexParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexParser__VTable vtable;
};

struct __declspec(align(8)) RegexWriter__Fields {
  struct Int32__Array * _intStack;
  int32_t _depth;
  struct Int32__Array * _emitted;
  int32_t _curpos;
  struct Dictionary_2_System_String_System_Int32_ * _stringhash;
  struct List_1_System_String_ * _stringtable;
  bool _counting;
  int32_t _count;
  int32_t _trackcount;
  struct Hashtable * _caps;
};
struct RegexWriter {
  struct RegexWriter__Class *klass;
  struct MonitorData *monitor;
  struct RegexWriter__Fields fields;
};
struct RegexWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegexWriter__StaticFields {
};
struct RegexWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegexWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegexWriter__VTable vtable;
};

struct __declspec(align(8)) Switch__Fields {
  struct String * description;
  struct String * displayName;
  struct String * switchValueString;
  struct String * defaultValue;
};
struct Switch {
  struct Switch__Class *klass;
  struct MonitorData *monitor;
  struct Switch__Fields fields;
};
struct BooleanSwitch__Fields {
  struct Switch__Fields _;
};
struct BooleanSwitch {
  struct BooleanSwitch__Class *klass;
  struct MonitorData *monitor;
  struct BooleanSwitch__Fields fields;
};
struct Switch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Switch__StaticFields {
  struct List_1_System_WeakReference_ * switches;
  int32_t s_LastCollectionCount;
};
struct Switch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Switch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Switch__VTable vtable;
};
struct BooleanSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BooleanSwitch__StaticFields {
};
struct BooleanSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BooleanSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BooleanSwitch__VTable vtable;
};

struct __declspec(align(8)) SwitchLevelAttribute__Fields {
  struct Type * type;
};
struct SwitchLevelAttribute {
  struct SwitchLevelAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SwitchLevelAttribute__Fields fields;
};
struct SwitchLevelAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SwitchLevelAttribute__StaticFields {
};
struct SwitchLevelAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchLevelAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchLevelAttribute__VTable vtable;
};

struct TraceSwitch__Fields {
  struct Switch__Fields _;
};
struct TraceSwitch {
  struct TraceSwitch__Class *klass;
  struct MonitorData *monitor;
  struct TraceSwitch__Fields fields;
};
struct TraceSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TraceSwitch__StaticFields {
};
struct TraceSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TraceSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TraceSwitch__VTable vtable;
};

struct __declspec(align(8)) AsyncStreamReader__Fields {
  struct Stream * stream;
  struct Encoding * encoding;
  struct Decoder * decoder;
  struct Byte__Array * byteBuffer;
  struct Char__Array * charBuffer;
  bool cancelOperation;
  struct ManualResetEvent * eofEvent;
  struct Object * syncObject;
};
struct AsyncStreamReader {
  struct AsyncStreamReader__Class *klass;
  struct MonitorData *monitor;
  struct AsyncStreamReader__Fields fields;
};}