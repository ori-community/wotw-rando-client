namespace app {
struct RunWorkerCompletedEventHandler {
  struct RunWorkerCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct RunWorkerCompletedEventHandler__Fields fields;
};
struct RunWorkerCompletedEventHandler__VTable {
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
struct RunWorkerCompletedEventHandler__StaticFields {
};
struct RunWorkerCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RunWorkerCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RunWorkerCompletedEventHandler__VTable vtable;
};

struct ComponentEditor {
  struct ComponentEditor__Class *klass;
  struct MonitorData *monitor;
};
struct ComponentEditor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct ComponentEditor__StaticFields {
};
struct ComponentEditor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComponentEditor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComponentEditor__VTable vtable;
};

enum BindingDirection__Enum : int32_t {
  BindingDirection__Enum_OneWay = 0,
  BindingDirection__Enum_TwoWay = 1,
};
struct BindingDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BindingDirection__Enum value;
};
struct __declspec(align(8)) BindableAttribute__Fields {
  bool bindable;
  bool isDefault;
  enum BindingDirection__Enum direction;
};
struct BindableAttribute {
  struct BindableAttribute__Class *klass;
  struct MonitorData *monitor;
  struct BindableAttribute__Fields fields;
};
struct BindableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct BindableAttribute__StaticFields {
  struct BindableAttribute * Yes;
  struct BindableAttribute * No;
  struct BindableAttribute * Default;
};
struct BindableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BindableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BindableAttribute__VTable vtable;
};

enum BindableSupport__Enum : int32_t {
  BindableSupport__Enum_No = 0,
  BindableSupport__Enum_Yes = 1,
  BindableSupport__Enum_Default = 2,
};
struct BindableSupport__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BindableSupport__Enum value;
};

struct BooleanConverter {
  struct BooleanConverter__Class *klass;
  struct MonitorData *monitor;
};
struct BooleanConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
};
struct BooleanConverter__StaticFields {
  struct TypeConverter_StandardValuesCollection * values;
};
struct BooleanConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BooleanConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BooleanConverter__VTable vtable;
};

struct __declspec(align(8)) BrowsableAttribute__Fields {
  bool browsable;
};
struct BrowsableAttribute {
  struct BrowsableAttribute__Class *klass;
  struct MonitorData *monitor;
  struct BrowsableAttribute__Fields fields;
};
struct BrowsableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct BrowsableAttribute__StaticFields {
  struct BrowsableAttribute * Yes;
  struct BrowsableAttribute * No;
  struct BrowsableAttribute * Default;
};
struct BrowsableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrowsableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrowsableAttribute__VTable vtable;
};

struct BaseNumberConverter {
  struct BaseNumberConverter__Class *klass;
  struct MonitorData *monitor;
};
struct ByteConverter {
  struct ByteConverter__Class *klass;
  struct MonitorData *monitor;
};
struct BaseNumberConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
  VirtualInvokeData get_AllowHex;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData FromStringError;
  VirtualInvokeData __unknown_4;
};
struct BaseNumberConverter__StaticFields {
};
struct BaseNumberConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseNumberConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseNumberConverter__VTable vtable;
};
struct ByteConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
  VirtualInvokeData get_AllowHex;
  VirtualInvokeData get_TargetType;
  VirtualInvokeData FromString;
  VirtualInvokeData FromString_1;
  VirtualInvokeData FromString_2;
  VirtualInvokeData FromStringError;
  VirtualInvokeData ToString_1;
};
struct ByteConverter__StaticFields {
};
struct ByteConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ByteConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ByteConverter__VTable vtable;
};

struct CancelEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct CancelEventHandler {
  struct CancelEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct CancelEventHandler__Fields fields;
};
struct CancelEventHandler__VTable {
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
struct CancelEventHandler__StaticFields {
};
struct CancelEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancelEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancelEventHandler__VTable vtable;
};

struct __declspec(align(8)) CategoryAttribute__Fields {
  bool localized;
  struct String * categoryValue;
};
struct CategoryAttribute {
  struct CategoryAttribute__Class *klass;
  struct MonitorData *monitor;
  struct CategoryAttribute__Fields fields;
};
struct CategoryAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData GetLocalizedString;
};
struct CategoryAttribute__StaticFields {
  struct CategoryAttribute * appearance;
  struct CategoryAttribute * asynchronous;
  struct CategoryAttribute * behavior;
  struct CategoryAttribute * data;
  struct CategoryAttribute * design;
  struct CategoryAttribute * action;
  struct CategoryAttribute * format;
  struct CategoryAttribute * layout;
  struct CategoryAttribute * mouse;
  struct CategoryAttribute * key;
  struct CategoryAttribute * focus;
  struct CategoryAttribute * windowStyle;
  struct CategoryAttribute * dragDrop;
  struct CategoryAttribute * defAttr;
};
struct CategoryAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CategoryAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CategoryAttribute__VTable vtable;
};

struct CharConverter {
  struct CharConverter__Class *klass;
  struct MonitorData *monitor;
};
struct CharConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
};
struct CharConverter__StaticFields {
};
struct CharConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharConverter__VTable vtable;
};

enum CollectionChangeAction__Enum : int32_t {
  CollectionChangeAction__Enum_Add = 1,
  CollectionChangeAction__Enum_Remove = 2,
  CollectionChangeAction__Enum_Refresh = 3,
};
struct CollectionChangeAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CollectionChangeAction__Enum value;
};
struct __declspec(align(8)) CollectionChangeEventArgs__Fields {
  enum CollectionChangeAction__Enum action;
  struct Object * element;
};
struct CollectionChangeEventArgs {
  struct CollectionChangeEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct CollectionChangeEventArgs__Fields fields;
};
struct CollectionChangeEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Action;
  VirtualInvokeData get_Element;
};
struct CollectionChangeEventArgs__StaticFields {
};
struct CollectionChangeEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollectionChangeEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollectionChangeEventArgs__VTable vtable;
};

struct CollectionChangeEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct CollectionChangeEventHandler {
  struct CollectionChangeEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct CollectionChangeEventHandler__Fields fields;
};
struct CollectionChangeEventHandler__VTable {
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
struct CollectionChangeEventHandler__StaticFields {
};
struct CollectionChangeEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollectionChangeEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollectionChangeEventHandler__VTable vtable;
};

struct __declspec(align(8)) ComplexBindingPropertiesAttribute__Fields {
  struct String * dataSource;
  struct String * dataMember;
};
struct ComplexBindingPropertiesAttribute {
  struct ComplexBindingPropertiesAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ComplexBindingPropertiesAttribute__Fields fields;
};
struct ComplexBindingPropertiesAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ComplexBindingPropertiesAttribute__StaticFields {
  struct ComplexBindingPropertiesAttribute * Default;
};
struct ComplexBindingPropertiesAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComplexBindingPropertiesAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComplexBindingPropertiesAttribute__VTable vtable;
};

struct IContainer {
  struct IContainer__Class *klass;
  struct MonitorData *monitor;
};
struct IContainer__VTable {
  VirtualInvokeData Add;
  VirtualInvokeData Add_1;
  VirtualInvokeData get_Components;
  VirtualInvokeData Remove;
};
struct IContainer__StaticFields {
};
struct IContainer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IContainer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IContainer__VTable vtable;
};

struct ComponentCollection__Fields {
  struct ReadOnlyCollectionBase__Fields _;
};
struct ComponentCollection {
  struct ComponentCollection__Class *klass;
  struct MonitorData *monitor;
  struct ComponentCollection__Fields fields;
};
struct IComponent {
  struct IComponent__Class *klass;
  struct MonitorData *monitor;
};
struct IComponent__Array {
  struct IComponent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IComponent * vector[32];
};
struct IComponent__VTable {
  VirtualInvokeData get_Site;
  VirtualInvokeData set_Site;
  VirtualInvokeData add_Disposed;
  VirtualInvokeData remove_Disposed;
};
struct IComponent__StaticFields {
};
struct IComponent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComponent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComponent__VTable vtable;
};
struct ComponentCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Item_1;
};
struct ComponentCollection__StaticFields {
};
struct ComponentCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComponentCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComponentCollection__VTable vtable;
};

struct __declspec(align(8)) ReferenceConverter__Fields {
  struct Type * type;
};
struct ReferenceConverter {
  struct ReferenceConverter__Class *klass;
  struct MonitorData *monitor;
  struct ReferenceConverter__Fields fields;
};
struct ComponentConverter__Fields {
  struct ReferenceConverter__Fields _;
};
struct ComponentConverter {
  struct ComponentConverter__Class *klass;
  struct MonitorData *monitor;
  struct ComponentConverter__Fields fields;
};
struct ReferenceConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
  VirtualInvokeData IsValueAllowed;
};
struct ReferenceConverter__StaticFields {
  struct String * none;
};
struct ReferenceConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReferenceConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReferenceConverter__VTable vtable;
};
struct ComponentConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
  VirtualInvokeData IsValueAllowed;
};
struct ComponentConverter__StaticFields {
};
struct ComponentConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComponentConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComponentConverter__VTable vtable;
};

struct ComponentResourceManager__Fields {
  struct ResourceManager__Fields _;
  struct Hashtable * _resourceSets;
  struct CultureInfo * _neutralResourcesCulture;
};
struct ComponentResourceManager {
  struct ComponentResourceManager__Class *klass;
  struct MonitorData *monitor;
  struct ComponentResourceManager__Fields fields;
};
struct ComponentResourceManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_BaseName;
  VirtualInvokeData get_IgnoreCase;
  VirtualInvokeData GetResourceFileName;
  VirtualInvokeData GetResourceSet;
  VirtualInvokeData InternalGetResourceSet;
  VirtualInvokeData GetString;
  VirtualInvokeData ApplyResources;
};
struct ComponentResourceManager__StaticFields {
};
struct ComponentResourceManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComponentResourceManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComponentResourceManager__VTable vtable;
};

struct __declspec(align(8)) SortedList_2_System_String_System_Object___Fields {
  struct String__Array * keys;
  struct Object__Array * values;
  int32_t _size;
  int32_t version;
  struct IComparer_1_System_String_ * comparer;
  struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object_ * keyList;
  struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object_ * valueList;
  struct Object * _syncRoot;
};
struct SortedList_2_System_String_System_Object_ {
  struct SortedList_2_System_String_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct SortedList_2_System_String_System_Object___Fields fields;
};
struct IComparer_1_System_String_ {
  struct IComparer_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SortedList_2_TKey_TValue_KeyList_System_String_System_Object___Fields {
  struct SortedList_2_System_String_System_Object_ * _dict;
};
struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object_ {
  struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___Fields fields;
};
struct __declspec(align(8)) SortedList_2_TKey_TValue_ValueList_System_String_System_Object___Fields {
  struct SortedList_2_System_String_System_Object_ * _dict;
};
struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object_ {
  struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___Fields fields;
};
struct IComparer_1_System_String___VTable {
  VirtualInvokeData Compare;
};
struct IComparer_1_System_String___StaticFields {
};
struct IComparer_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComparer_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComparer_1_System_String___VTable vtable;
};
struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___VTable {
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
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
};
struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___StaticFields {
};
struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___VTable vtable;
};
struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___VTable {
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
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
};
struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___StaticFields {
};
struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___VTable vtable;
};
struct SortedList_2_System_String_System_Object___VTable {
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
};
struct SortedList_2_System_String_System_Object___StaticFields {
};
struct SortedList_2_System_String_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SortedList_2_System_String_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SortedList_2_System_String_System_Object___VTable vtable;
};

struct __declspec(align(8)) Container__Fields {
  struct ISite__Array * sites;
  int32_t siteCount;
  struct ComponentCollection * components;
  struct ContainerFilterService * filter;
  bool checkedFilter;
  struct Object * syncObj;
};
struct Container {
  struct Container__Class *klass;
  struct MonitorData *monitor;
  struct Container__Fields fields;
};
struct ISite__Array {
  struct ISite__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ISite * vector[32];
};
struct ContainerFilterService {
  struct ContainerFilterService__Class *klass;
  struct MonitorData *monitor;
};
struct ContainerFilterService__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData FilterComponents;
};
struct ContainerFilterService__StaticFields {
};
struct ContainerFilterService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContainerFilterService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContainerFilterService__VTable vtable;
};
struct Container__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Add;
  VirtualInvokeData Add_1;
  VirtualInvokeData get_Components;
  VirtualInvokeData Remove;
  VirtualInvokeData Dispose;
  VirtualInvokeData Add_2;
  VirtualInvokeData Add_3;
  VirtualInvokeData CreateSite;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData GetService;
  VirtualInvokeData get_Components_1;
  VirtualInvokeData Remove_1;
  VirtualInvokeData ValidateName;
};
struct Container__StaticFields {
};
struct Container__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Container__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Container__VTable vtable;
};

struct __declspec(align(8)) Container_Site__Fields {
  struct IComponent * component;
  struct Container * container;
  struct String * name;
};
struct Container_Site {
  struct Container_Site__Class *klass;
  struct MonitorData *monitor;
  struct Container_Site__Fields fields;
};
struct Container_Site__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Component;
  VirtualInvokeData get_Container;
  VirtualInvokeData get_DesignMode;
  VirtualInvokeData get_Name;
  VirtualInvokeData set_Name;
  VirtualInvokeData GetService;
};
struct Container_Site__StaticFields {
};
struct Container_Site__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Container_Site__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Container_Site__VTable vtable;
};

struct __declspec(align(8)) CultureInfoConverter__Fields {
  struct TypeConverter_StandardValuesCollection * values;
};
struct CultureInfoConverter {
  struct CultureInfoConverter__Class *klass;
  struct MonitorData *monitor;
  struct CultureInfoConverter__Fields fields;
};
struct CultureInfoConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
  VirtualInvokeData GetCultureName;
};
struct CultureInfoConverter__StaticFields {
};
struct CultureInfoConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CultureInfoConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CultureInfoConverter__VTable vtable;
};

struct __declspec(align(8)) CultureInfoConverter_CultureComparer__Fields {
  struct CultureInfoConverter * converter;
};
struct CultureInfoConverter_CultureComparer {
  struct CultureInfoConverter_CultureComparer__Class *klass;
  struct MonitorData *monitor;
  struct CultureInfoConverter_CultureComparer__Fields fields;
};
struct CultureInfoConverter_CultureComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct CultureInfoConverter_CultureComparer__StaticFields {
};
struct CultureInfoConverter_CultureComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CultureInfoConverter_CultureComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CultureInfoConverter_CultureComparer__VTable vtable;
};

struct __declspec(align(8)) CustomTypeDescriptor__Fields {
  struct ICustomTypeDescriptor * _parent;
};}