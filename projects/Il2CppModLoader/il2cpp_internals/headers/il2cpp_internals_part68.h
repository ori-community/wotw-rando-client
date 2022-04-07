namespace app {
struct CustomTypeDescriptor {
  struct CustomTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct CustomTypeDescriptor__Fields fields;
};
struct ICustomTypeDescriptor {
  struct ICustomTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
};
struct EventDescriptor_1__Fields {
  struct MemberDescriptor__Fields _;
};
struct EventDescriptor_1 {
  struct EventDescriptor_1__Class *klass;
  struct MonitorData *monitor;
  struct EventDescriptor_1__Fields fields;
};
struct ReflectEventDescriptor__Fields {
  struct EventDescriptor_1__Fields _;
  struct Type * type;
  struct Type * componentClass;
  struct MethodInfo_1 * addMethod;
  struct MethodInfo_1 * removeMethod;
  struct EventInfo_1 * realEvent;
  bool filledMethods;
};
struct ReflectEventDescriptor {
  struct ReflectEventDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct ReflectEventDescriptor__Fields fields;
};
struct __declspec(align(8)) EventDescriptorCollection__Fields {
  struct EventDescriptor_1__Array * events;
  struct String__Array * namedSort;
  struct IComparer * comparer;
  bool eventsOwned;
  bool needSort;
  int32_t eventCount;
  bool readOnly;
};
struct EventDescriptorCollection {
  struct EventDescriptorCollection__Class *klass;
  struct MonitorData *monitor;
  struct EventDescriptorCollection__Fields fields;
};
struct EventDescriptor_1__Array {
  struct EventDescriptor_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EventDescriptor_1 * vector[32];
};
struct ICustomTypeDescriptor__VTable {
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
};
struct ICustomTypeDescriptor__StaticFields {
};
struct ICustomTypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICustomTypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICustomTypeDescriptor__VTable vtable;
};
struct ReflectEventDescriptor__VTable {
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
  VirtualInvokeData get_EventType;
  VirtualInvokeData get_IsMulticast;
  VirtualInvokeData AddEventHandler;
  VirtualInvokeData RemoveEventHandler;
};
struct ReflectEventDescriptor__StaticFields {
};
struct ReflectEventDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectEventDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectEventDescriptor__VTable vtable;
};
struct EventDescriptor_1__VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
};
struct EventDescriptor_1__StaticFields {
};
struct EventDescriptor_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventDescriptor_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventDescriptor_1__VTable vtable;
};
struct EventDescriptorCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData System_Collections_ICollection_get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
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
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData Find;
  VirtualInvokeData Sort;
  VirtualInvokeData Sort_1;
  VirtualInvokeData Sort_2;
  VirtualInvokeData Sort_3;
};
struct EventDescriptorCollection__StaticFields {
  struct EventDescriptorCollection * Empty;
};
struct EventDescriptorCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventDescriptorCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventDescriptorCollection__VTable vtable;
};
struct CustomTypeDescriptor__VTable {
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
struct CustomTypeDescriptor__StaticFields {
};
struct CustomTypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomTypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomTypeDescriptor__VTable vtable;
};

struct __declspec(align(8)) DataErrorsChangedEventArgs__Fields {
  struct String * propertyName;
};
struct DataErrorsChangedEventArgs {
  struct DataErrorsChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DataErrorsChangedEventArgs__Fields fields;
};
struct DataErrorsChangedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_PropertyName;
};
struct DataErrorsChangedEventArgs__StaticFields {
};
struct DataErrorsChangedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataErrorsChangedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataErrorsChangedEventArgs__VTable vtable;
};

struct __declspec(align(8)) DataObjectAttribute__Fields {
  bool _isDataObject;
};
struct DataObjectAttribute {
  struct DataObjectAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DataObjectAttribute__Fields fields;
};
struct DataObjectAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DataObjectAttribute__StaticFields {
  struct DataObjectAttribute * DataObject;
  struct DataObjectAttribute * NonDataObject;
  struct DataObjectAttribute * Default;
};
struct DataObjectAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataObjectAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataObjectAttribute__VTable vtable;
};

struct __declspec(align(8)) DataObjectFieldAttribute__Fields {
  bool _primaryKey;
  bool _isIdentity;
  bool _isNullable;
  int32_t _length;
};
struct DataObjectFieldAttribute {
  struct DataObjectFieldAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DataObjectFieldAttribute__Fields fields;
};
struct DataObjectFieldAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DataObjectFieldAttribute__StaticFields {
};
struct DataObjectFieldAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataObjectFieldAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataObjectFieldAttribute__VTable vtable;
};

enum DataObjectMethodType__Enum : int32_t {
  DataObjectMethodType__Enum_Fill = 0,
  DataObjectMethodType__Enum_Select = 1,
  DataObjectMethodType__Enum_Update = 2,
  DataObjectMethodType__Enum_Insert = 3,
  DataObjectMethodType__Enum_Delete = 4,
};
struct DataObjectMethodType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DataObjectMethodType__Enum value;
};
struct __declspec(align(8)) DataObjectMethodAttribute__Fields {
  bool _isDefault;
  enum DataObjectMethodType__Enum _methodType;
};
struct DataObjectMethodAttribute {
  struct DataObjectMethodAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DataObjectMethodAttribute__Fields fields;
};
struct DataObjectMethodAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DataObjectMethodAttribute__StaticFields {
};
struct DataObjectMethodAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataObjectMethodAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataObjectMethodAttribute__VTable vtable;
};

struct DateTimeConverter {
  struct DateTimeConverter__Class *klass;
  struct MonitorData *monitor;
};
struct DateTimeConverter__VTable {
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
struct DateTimeConverter__StaticFields {
};
struct DateTimeConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeConverter__VTable vtable;
};

struct DateTimeOffsetConverter {
  struct DateTimeOffsetConverter__Class *klass;
  struct MonitorData *monitor;
};
struct DateTimeOffsetConverter__VTable {
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
struct DateTimeOffsetConverter__StaticFields {
};
struct DateTimeOffsetConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeOffsetConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeOffsetConverter__VTable vtable;
};

struct DecimalConverter {
  struct DecimalConverter__Class *klass;
  struct MonitorData *monitor;
};
struct DecimalConverter__VTable {
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
struct DecimalConverter__StaticFields {
};
struct DecimalConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecimalConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecimalConverter__VTable vtable;
};

struct __declspec(align(8)) DefaultBindingPropertyAttribute__Fields {
  struct String * name;
};
struct DefaultBindingPropertyAttribute {
  struct DefaultBindingPropertyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DefaultBindingPropertyAttribute__Fields fields;
};
struct DefaultBindingPropertyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DefaultBindingPropertyAttribute__StaticFields {
  struct DefaultBindingPropertyAttribute * Default;
};
struct DefaultBindingPropertyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultBindingPropertyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultBindingPropertyAttribute__VTable vtable;
};

struct __declspec(align(8)) DefaultEventAttribute__Fields {
  struct String * name;
};
struct DefaultEventAttribute {
  struct DefaultEventAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DefaultEventAttribute__Fields fields;
};
struct DefaultEventAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DefaultEventAttribute__StaticFields {
  struct DefaultEventAttribute * Default;
};
struct DefaultEventAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultEventAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultEventAttribute__VTable vtable;
};

struct __declspec(align(8)) DefaultPropertyAttribute__Fields {
  struct String * name;
};
struct DefaultPropertyAttribute {
  struct DefaultPropertyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DefaultPropertyAttribute__Fields fields;
};
struct DefaultPropertyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DefaultPropertyAttribute__StaticFields {
  struct DefaultPropertyAttribute * Default;
};
struct DefaultPropertyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultPropertyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultPropertyAttribute__VTable vtable;
};

struct __declspec(align(8)) DefaultValueAttribute__Fields {
  struct Object * value;
};
struct DefaultValueAttribute {
  struct DefaultValueAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DefaultValueAttribute__Fields fields;
};
struct DefaultValueAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData get_Value;
};
struct DefaultValueAttribute__StaticFields {
};
struct DefaultValueAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultValueAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultValueAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeDescriptionProvider__Fields {
  struct TypeDescriptionProvider * _parent;
  struct TypeDescriptionProvider_EmptyCustomTypeDescriptor * _emptyDescriptor;
};
struct TypeDescriptionProvider {
  struct TypeDescriptionProvider__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptionProvider__Fields fields;
};
struct DelegatingTypeDescriptionProvider__Fields {
  struct TypeDescriptionProvider__Fields _;
  struct Type * _type;
};
struct DelegatingTypeDescriptionProvider {
  struct DelegatingTypeDescriptionProvider__Class *klass;
  struct MonitorData *monitor;
  struct DelegatingTypeDescriptionProvider__Fields fields;
};
struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__Fields {
  struct CustomTypeDescriptor__Fields _;
};
struct TypeDescriptionProvider_EmptyCustomTypeDescriptor {
  struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__Fields fields;
};
struct IServiceProvider {
  struct IServiceProvider__Class *klass;
  struct MonitorData *monitor;
};
struct IExtenderProvider {
  struct IExtenderProvider__Class *klass;
  struct MonitorData *monitor;
};
struct IExtenderProvider__Array {
  struct IExtenderProvider__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IExtenderProvider * vector[32];
};
struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__VTable {
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
struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__StaticFields {
};
struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__VTable vtable;
};
struct IServiceProvider__VTable {
  VirtualInvokeData GetService;
};
struct IServiceProvider__StaticFields {
};
struct IServiceProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IServiceProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IServiceProvider__VTable vtable;
};
struct IExtenderProvider__VTable {
  VirtualInvokeData CanExtend;
};
struct IExtenderProvider__StaticFields {
};
struct IExtenderProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IExtenderProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IExtenderProvider__VTable vtable;
};
struct TypeDescriptionProvider__VTable {
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
struct TypeDescriptionProvider__StaticFields {
};
struct TypeDescriptionProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptionProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptionProvider__VTable vtable;
};
struct DelegatingTypeDescriptionProvider__VTable {
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
struct DelegatingTypeDescriptionProvider__StaticFields {
};
struct DelegatingTypeDescriptionProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DelegatingTypeDescriptionProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DelegatingTypeDescriptionProvider__VTable vtable;
};

struct __declspec(align(8)) DesignOnlyAttribute__Fields {
  bool isDesignOnly;
};
struct DesignOnlyAttribute {
  struct DesignOnlyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DesignOnlyAttribute__Fields fields;
};
struct DesignOnlyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DesignOnlyAttribute__StaticFields {
  struct DesignOnlyAttribute * Yes;
  struct DesignOnlyAttribute * No;
  struct DesignOnlyAttribute * Default;
};
struct DesignOnlyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesignOnlyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesignOnlyAttribute__VTable vtable;
};

struct __declspec(align(8)) DesignTimeVisibleAttribute__Fields {
  bool visible;
};
struct DesignTimeVisibleAttribute {
  struct DesignTimeVisibleAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DesignTimeVisibleAttribute__Fields fields;
};
struct DesignTimeVisibleAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DesignTimeVisibleAttribute__StaticFields {
  struct DesignTimeVisibleAttribute * Yes;
  struct DesignTimeVisibleAttribute * No;
  struct DesignTimeVisibleAttribute * Default;
};
struct DesignTimeVisibleAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesignTimeVisibleAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesignTimeVisibleAttribute__VTable vtable;
};

struct __declspec(align(8)) DesignerAttribute__Fields {
  struct String * designerTypeName;
  struct String * designerBaseTypeName;
  struct String * typeId;
};
struct DesignerAttribute {
  struct DesignerAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DesignerAttribute__Fields fields;
};
struct DesignerAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DesignerAttribute__StaticFields {
};
struct DesignerAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesignerAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesignerAttribute__VTable vtable;
};

struct __declspec(align(8)) DesignerCategoryAttribute__Fields {
  struct String * category;
  struct String * typeId;
};
struct DesignerCategoryAttribute {
  struct DesignerCategoryAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DesignerCategoryAttribute__Fields fields;
};
struct DesignerCategoryAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DesignerCategoryAttribute__StaticFields {
  struct DesignerCategoryAttribute * Component;
  struct DesignerCategoryAttribute * Default;
  struct DesignerCategoryAttribute * Form;
  struct DesignerCategoryAttribute * Generic;
};
struct DesignerCategoryAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesignerCategoryAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesignerCategoryAttribute__VTable vtable;
};

enum DesignerSerializationVisibility__Enum : int32_t {
  DesignerSerializationVisibility__Enum_Hidden = 0,
  DesignerSerializationVisibility__Enum_Visible = 1,
  DesignerSerializationVisibility__Enum_Content = 2,
};
struct DesignerSerializationVisibility__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DesignerSerializationVisibility__Enum value;
};
struct __declspec(align(8)) DesignerSerializationVisibilityAttribute__Fields {
  enum DesignerSerializationVisibility__Enum visibility;
};
struct DesignerSerializationVisibilityAttribute {
  struct DesignerSerializationVisibilityAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DesignerSerializationVisibilityAttribute__Fields fields;
};
struct DesignerSerializationVisibilityAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DesignerSerializationVisibilityAttribute__StaticFields {
  struct DesignerSerializationVisibilityAttribute * Content;
  struct DesignerSerializationVisibilityAttribute * Hidden;
  struct DesignerSerializationVisibilityAttribute * Visible;
  struct DesignerSerializationVisibilityAttribute * Default;
};
struct DesignerSerializationVisibilityAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesignerSerializationVisibilityAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesignerSerializationVisibilityAttribute__VTable vtable;
};

struct __declspec(align(8)) DisplayNameAttribute__Fields {
  struct String * _displayName;
};
struct DisplayNameAttribute {
  struct DisplayNameAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DisplayNameAttribute__Fields fields;
};
struct DisplayNameAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData get_DisplayName;
};
struct DisplayNameAttribute__StaticFields {
  struct DisplayNameAttribute * Default;
};
struct DisplayNameAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisplayNameAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisplayNameAttribute__VTable vtable;
};

struct DoubleConverter {
  struct DoubleConverter__Class *klass;
  struct MonitorData *monitor;
};
struct DoubleConverter__VTable {
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
struct DoubleConverter__StaticFields {
};
struct DoubleConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoubleConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoubleConverter__VTable vtable;
};

struct __declspec(align(8)) EditorAttribute__Fields {
  struct String * baseTypeName;
  struct String * typeName;
  struct String * typeId;
};
struct EditorAttribute {
  struct EditorAttribute__Class *klass;
  struct MonitorData *monitor;
  struct EditorAttribute__Fields fields;
};
struct EditorAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct EditorAttribute__StaticFields {
};
struct EditorAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EditorAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EditorAttribute__VTable vtable;
};}