namespace app {

struct __declspec(align(8)) ListBindableAttribute__Fields {
  bool listBindable;
  bool isDefault;
};
struct ListBindableAttribute {
  struct ListBindableAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ListBindableAttribute__Fields fields;
};
struct ListBindableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ListBindableAttribute__StaticFields {
  struct ListBindableAttribute * Yes;
  struct ListBindableAttribute * No;
  struct ListBindableAttribute * Default;
};
struct ListBindableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListBindableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListBindableAttribute__VTable vtable;
};

enum ListChangedType__Enum : int32_t {
  ListChangedType__Enum_Reset = 0,
  ListChangedType__Enum_ItemAdded = 1,
  ListChangedType__Enum_ItemDeleted = 2,
  ListChangedType__Enum_ItemMoved = 3,
  ListChangedType__Enum_ItemChanged = 4,
  ListChangedType__Enum_PropertyDescriptorAdded = 5,
  ListChangedType__Enum_PropertyDescriptorDeleted = 6,
  ListChangedType__Enum_PropertyDescriptorChanged = 7,
};
struct ListChangedType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ListChangedType__Enum value;
};
struct __declspec(align(8)) ListChangedEventArgs__Fields {
  enum ListChangedType__Enum listChangedType;
  int32_t newIndex;
  int32_t oldIndex;
  struct PropertyDescriptor * propDesc;
};
struct ListChangedEventArgs {
  struct ListChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct ListChangedEventArgs__Fields fields;
};
struct ListChangedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ListChangedEventArgs__StaticFields {
};
struct ListChangedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListChangedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListChangedEventArgs__VTable vtable;
};

struct ListChangedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct ListChangedEventHandler {
  struct ListChangedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct ListChangedEventHandler__Fields fields;
};
struct ListChangedEventHandler__VTable {
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
struct ListChangedEventHandler__StaticFields {
};
struct ListChangedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListChangedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListChangedEventHandler__VTable vtable;
};

enum ListSortDirection__Enum : int32_t {
  ListSortDirection__Enum_Ascending = 0,
  ListSortDirection__Enum_Descending = 1,
};
struct ListSortDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ListSortDirection__Enum value;
};
struct __declspec(align(8)) ListSortDescription__Fields {
  struct PropertyDescriptor * property;
  enum ListSortDirection__Enum sortDirection;
};
struct ListSortDescription {
  struct ListSortDescription__Class *klass;
  struct MonitorData *monitor;
  struct ListSortDescription__Fields fields;
};
struct ListSortDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ListSortDescription__StaticFields {
};
struct ListSortDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListSortDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListSortDescription__VTable vtable;
};

struct __declspec(align(8)) ListSortDescriptionCollection__Fields {
  struct ArrayList * sorts;
};
struct ListSortDescriptionCollection {
  struct ListSortDescriptionCollection__Class *klass;
  struct MonitorData *monitor;
  struct ListSortDescriptionCollection__Fields fields;
};
struct ListSortDescriptionCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct ListSortDescriptionCollection__StaticFields {
};
struct ListSortDescriptionCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListSortDescriptionCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListSortDescriptionCollection__VTable vtable;
};

struct ListSortDescription__Array {
  struct ListSortDescription__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ListSortDescription * vector[32];
};

struct __declspec(align(8)) LocalizableAttribute__Fields {
  bool isLocalizable;
};
struct LocalizableAttribute {
  struct LocalizableAttribute__Class *klass;
  struct MonitorData *monitor;
  struct LocalizableAttribute__Fields fields;
};
struct LocalizableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct LocalizableAttribute__StaticFields {
  struct LocalizableAttribute * Yes;
  struct LocalizableAttribute * No;
  struct LocalizableAttribute * Default;
};
struct LocalizableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LocalizableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LocalizableAttribute__VTable vtable;
};

struct __declspec(align(8)) LookupBindingPropertiesAttribute__Fields {
  struct String * dataSource;
  struct String * displayMember;
  struct String * valueMember;
  struct String * lookupMember;
};
struct LookupBindingPropertiesAttribute {
  struct LookupBindingPropertiesAttribute__Class *klass;
  struct MonitorData *monitor;
  struct LookupBindingPropertiesAttribute__Fields fields;
};
struct LookupBindingPropertiesAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct LookupBindingPropertiesAttribute__StaticFields {
  struct LookupBindingPropertiesAttribute * Default;
};
struct LookupBindingPropertiesAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LookupBindingPropertiesAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LookupBindingPropertiesAttribute__VTable vtable;
};

struct __declspec(align(8)) MarshalByValueComponent__Fields {
  struct ISite * site;
  struct EventHandlerList * events;
};
struct MarshalByValueComponent {
  struct MarshalByValueComponent__Class *klass;
  struct MonitorData *monitor;
  struct MarshalByValueComponent__Fields fields;
};
struct MarshalByValueComponent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Site;
  VirtualInvokeData set_Site;
  VirtualInvokeData add_Disposed;
  VirtualInvokeData remove_Disposed;
  VirtualInvokeData Dispose;
  VirtualInvokeData GetService;
  VirtualInvokeData get_Site_1;
  VirtualInvokeData set_Site_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_Container;
  VirtualInvokeData GetService_1;
  VirtualInvokeData get_DesignMode;
};
struct MarshalByValueComponent__StaticFields {
  struct Object * EventDisposed;
};
struct MarshalByValueComponent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MarshalByValueComponent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MarshalByValueComponent__VTable vtable;
};

struct __declspec(align(8)) MaskedTextProvider__Fields {
  struct BitVector32 flagState;
  struct CultureInfo * culture;
  struct StringBuilder * testString;
  int32_t assignedCharCount;
  int32_t requiredCharCount;
  int32_t requiredEditChars;
  int32_t optionalEditChars;
  struct String * mask;
  uint16_t passwordChar;
  uint16_t promptChar;
  struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ * stringDescriptor;
};
struct MaskedTextProvider {
  struct MaskedTextProvider__Class *klass;
  struct MonitorData *monitor;
  struct MaskedTextProvider__Fields fields;
};
struct __declspec(align(8)) List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Fields {
  struct MaskedTextProvider_CharDescriptor__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ {
  struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Fields fields;
};
enum MaskedTextProvider_CaseConversion__Enum : int32_t {
  MaskedTextProvider_CaseConversion__Enum_None = 0,
  MaskedTextProvider_CaseConversion__Enum_ToLower = 1,
  MaskedTextProvider_CaseConversion__Enum_ToUpper = 2,
};
struct MaskedTextProvider_CaseConversion__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MaskedTextProvider_CaseConversion__Enum value;
};
enum MaskedTextProvider_CharType__Enum : int32_t {
  MaskedTextProvider_CharType__Enum_EditOptional = 1,
  MaskedTextProvider_CharType__Enum_EditRequired = 2,
  MaskedTextProvider_CharType__Enum_Separator = 4,
  MaskedTextProvider_CharType__Enum_Literal = 8,
  MaskedTextProvider_CharType__Enum_Modifier = 16,
};
struct MaskedTextProvider_CharType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MaskedTextProvider_CharType__Enum value;
};
struct __declspec(align(8)) MaskedTextProvider_CharDescriptor__Fields {
  int32_t MaskPosition;
  enum MaskedTextProvider_CaseConversion__Enum CaseConversion;
  enum MaskedTextProvider_CharType__Enum CharType;
  bool IsAssigned;
};
struct MaskedTextProvider_CharDescriptor {
  struct MaskedTextProvider_CharDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct MaskedTextProvider_CharDescriptor__Fields fields;
};
struct MaskedTextProvider_CharDescriptor__Array {
  struct MaskedTextProvider_CharDescriptor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MaskedTextProvider_CharDescriptor * vector[32];
};
struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ {
  struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Class *klass;
  struct MonitorData *monitor;
};
struct MaskedTextProvider_CharDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MaskedTextProvider_CharDescriptor__StaticFields {
};
struct MaskedTextProvider_CharDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskedTextProvider_CharDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskedTextProvider_CharDescriptor__VTable vtable;
};
struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___StaticFields {
};
struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___VTable vtable;
};
struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___VTable {
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
struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___StaticFields {
  struct MaskedTextProvider_CharDescriptor__Array * _emptyArray;
};
struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___VTable vtable;
};
struct MaskedTextProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
};
struct MaskedTextProvider__StaticFields {
  int32_t ASCII_ONLY;
  int32_t ALLOW_PROMPT_AS_INPUT;
  int32_t INCLUDE_PROMPT;
  int32_t INCLUDE_LITERALS;
  int32_t RESET_ON_PROMPT;
  int32_t RESET_ON_LITERALS;
  int32_t SKIP_SPACE;
  struct Type * maskTextProviderType;
};
struct MaskedTextProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskedTextProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskedTextProvider__VTable vtable;
};

enum MaskedTextResultHint__Enum : int32_t {
  MaskedTextResultHint__Enum_Unknown = 0,
  MaskedTextResultHint__Enum_CharacterEscaped = 1,
  MaskedTextResultHint__Enum_NoEffect = 2,
  MaskedTextResultHint__Enum_SideEffect = 3,
  MaskedTextResultHint__Enum_Success = 4,
  MaskedTextResultHint__Enum_AsciiCharacterExpected = -1,
  MaskedTextResultHint__Enum_AlphanumericCharacterExpected = -2,
  MaskedTextResultHint__Enum_DigitExpected = -3,
  MaskedTextResultHint__Enum_LetterExpected = -4,
  MaskedTextResultHint__Enum_SignedDigitExpected = -5,
  MaskedTextResultHint__Enum_InvalidInput = -51,
  MaskedTextResultHint__Enum_PromptCharNotAllowed = -52,
  MaskedTextResultHint__Enum_UnavailableEditPosition = -53,
  MaskedTextResultHint__Enum_NonEditPosition = -54,
  MaskedTextResultHint__Enum_PositionOutOfRange = -55,
};
struct MaskedTextResultHint__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MaskedTextResultHint__Enum value;
};

struct __declspec(align(8)) MergablePropertyAttribute__Fields {
  bool allowMerge;
};
struct MergablePropertyAttribute {
  struct MergablePropertyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct MergablePropertyAttribute__Fields fields;
};
struct MergablePropertyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MergablePropertyAttribute__StaticFields {
  struct MergablePropertyAttribute * Yes;
  struct MergablePropertyAttribute * No;
  struct MergablePropertyAttribute * Default;
};
struct MergablePropertyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MergablePropertyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MergablePropertyAttribute__VTable vtable;
};

struct MultilineStringConverter {
  struct MultilineStringConverter__Class *klass;
  struct MonitorData *monitor;
};
struct MultilineStringConverter__VTable {
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
struct MultilineStringConverter__StaticFields {
};
struct MultilineStringConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultilineStringConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultilineStringConverter__VTable vtable;
};

struct NestedContainer__Fields {
  struct Container__Fields _;
  struct IComponent * _owner;
};
struct NestedContainer {
  struct NestedContainer__Class *klass;
  struct MonitorData *monitor;
  struct NestedContainer__Fields fields;
};
struct NestedContainer__VTable {
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
  VirtualInvokeData get_Owner;
  VirtualInvokeData get_OwnerName;
};
struct NestedContainer__StaticFields {
};
struct NestedContainer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NestedContainer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NestedContainer__VTable vtable;
};

struct __declspec(align(8)) NestedContainer_Site__Fields {
  struct IComponent * component;
  struct NestedContainer * container;
  struct String * name;
};
struct NestedContainer_Site {
  struct NestedContainer_Site__Class *klass;
  struct MonitorData *monitor;
  struct NestedContainer_Site__Fields fields;
};
struct NestedContainer_Site__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_FullName;
  VirtualInvokeData get_Component;
  VirtualInvokeData get_Container;
  VirtualInvokeData get_DesignMode;
  VirtualInvokeData get_Name;
  VirtualInvokeData set_Name;
  VirtualInvokeData GetService;
};
struct NestedContainer_Site__StaticFields {
};
struct NestedContainer_Site__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NestedContainer_Site__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NestedContainer_Site__VTable vtable;
};

struct __declspec(align(8)) NullableConverter__Fields {
  struct Type * nullableType;
  struct Type * simpleType;
  struct TypeConverter * simpleTypeConverter;
};
struct NullableConverter {
  struct NullableConverter__Class *klass;
  struct MonitorData *monitor;
  struct NullableConverter__Fields fields;
};
struct NullableConverter__VTable {
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
struct NullableConverter__StaticFields {
};
struct NullableConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NullableConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NullableConverter__VTable vtable;
};

struct __declspec(align(8)) PasswordPropertyTextAttribute__Fields {
  bool _password;
};
struct PasswordPropertyTextAttribute {
  struct PasswordPropertyTextAttribute__Class *klass;
  struct MonitorData *monitor;
  struct PasswordPropertyTextAttribute__Fields fields;
};
struct PasswordPropertyTextAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct PasswordPropertyTextAttribute__StaticFields {
  struct PasswordPropertyTextAttribute * Yes;
  struct PasswordPropertyTextAttribute * No;
  struct PasswordPropertyTextAttribute * Default;
};
struct PasswordPropertyTextAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PasswordPropertyTextAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PasswordPropertyTextAttribute__VTable vtable;
};

struct __declspec(align(8)) PropertyChangedEventArgs__Fields {
  struct String * propertyName;
};
struct PropertyChangedEventArgs {
  struct PropertyChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct PropertyChangedEventArgs__Fields fields;
};
struct PropertyChangedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_PropertyName;
};
struct PropertyChangedEventArgs__StaticFields {
};
struct PropertyChangedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyChangedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyChangedEventArgs__VTable vtable;
};

struct PropertyChangedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct PropertyChangedEventHandler {
  struct PropertyChangedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct PropertyChangedEventHandler__Fields fields;
};
struct PropertyChangedEventHandler__VTable {
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
struct PropertyChangedEventHandler__StaticFields {
};
struct PropertyChangedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyChangedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyChangedEventHandler__VTable vtable;
};

struct __declspec(align(8)) PropertyChangingEventArgs__Fields {
  struct String * propertyName;
};
struct PropertyChangingEventArgs {
  struct PropertyChangingEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct PropertyChangingEventArgs__Fields fields;
};
struct PropertyChangingEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_PropertyName;
};
struct PropertyChangingEventArgs__StaticFields {
};
struct PropertyChangingEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyChangingEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyChangingEventArgs__VTable vtable;
};

struct PropertyChangingEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct PropertyChangingEventHandler {
  struct PropertyChangingEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct PropertyChangingEventHandler__Fields fields;
};
struct PropertyChangingEventHandler__VTable {
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
struct PropertyChangingEventHandler__StaticFields {
};
struct PropertyChangingEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyChangingEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyChangingEventHandler__VTable vtable;
};

struct __declspec(align(8)) PropertyDescriptorCollection_PropertyDescriptorEnumerator__Fields {
  struct PropertyDescriptorCollection * owner;
  int32_t index;
};
struct PropertyDescriptorCollection_PropertyDescriptorEnumerator {
  struct PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct PropertyDescriptorCollection_PropertyDescriptorEnumerator__Fields fields;
};
struct PropertyDescriptorCollection_PropertyDescriptorEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Key;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Entry;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct PropertyDescriptorCollection_PropertyDescriptorEnumerator__StaticFields {
};
struct PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyDescriptorCollection_PropertyDescriptorEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyDescriptorCollection_PropertyDescriptorEnumerator__VTable vtable;
};

struct __declspec(align(8)) ProvidePropertyAttribute__Fields {
  struct String * propertyName;
  struct String * receiverTypeName;
};
struct ProvidePropertyAttribute {
  struct ProvidePropertyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ProvidePropertyAttribute__Fields fields;
};
struct ProvidePropertyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ProvidePropertyAttribute__StaticFields {
};
struct ProvidePropertyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProvidePropertyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProvidePropertyAttribute__VTable vtable;
};

struct __declspec(align(8)) ReadOnlyAttribute__Fields {
  bool isReadOnly;
};
struct ReadOnlyAttribute {
  struct ReadOnlyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyAttribute__Fields fields;
};
struct ReadOnlyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ReadOnlyAttribute__StaticFields {
  struct ReadOnlyAttribute * Yes;
  struct ReadOnlyAttribute * No;
  struct ReadOnlyAttribute * Default;
};
struct ReadOnlyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyAttribute__VTable vtable;
};

struct __declspec(align(8)) RecommendedAsConfigurableAttribute__Fields {
  bool recommendedAsConfigurable;
};
struct RecommendedAsConfigurableAttribute {
  struct RecommendedAsConfigurableAttribute__Class *klass;
  struct MonitorData *monitor;
  struct RecommendedAsConfigurableAttribute__Fields fields;
};
struct RecommendedAsConfigurableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct RecommendedAsConfigurableAttribute__StaticFields {
  struct RecommendedAsConfigurableAttribute * No;
  struct RecommendedAsConfigurableAttribute * Yes;
  struct RecommendedAsConfigurableAttribute * Default;
};
struct RecommendedAsConfigurableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecommendedAsConfigurableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecommendedAsConfigurableAttribute__VTable vtable;
};

struct __declspec(align(8)) ReferenceConverter_ReferenceComparer__Fields {
  struct ReferenceConverter * converter;
};
struct ReferenceConverter_ReferenceComparer {
  struct ReferenceConverter_ReferenceComparer__Class *klass;
  struct MonitorData *monitor;
  struct ReferenceConverter_ReferenceComparer__Fields fields;
};
struct ReferenceConverter_ReferenceComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct ReferenceConverter_ReferenceComparer__StaticFields {
};
struct ReferenceConverter_ReferenceComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReferenceConverter_ReferenceComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReferenceConverter_ReferenceComparer__VTable vtable;
};

struct ReflectTypeDescriptionProvider__Fields {
  struct TypeDescriptionProvider__Fields _;
  struct Hashtable * _typeData;
};
struct ReflectTypeDescriptionProvider {
  struct ReflectTypeDescriptionProvider__Class *klass;
  struct MonitorData *monitor;
  struct ReflectTypeDescriptionProvider__Fields fields;
};
struct ReflectTypeDescriptionProvider__VTable {
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
};}