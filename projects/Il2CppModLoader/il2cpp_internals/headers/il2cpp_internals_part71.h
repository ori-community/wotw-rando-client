namespace app {
struct ReflectTypeDescriptionProvider__StaticFields {
  struct Type__Array * _typeConstructor;
  struct Hashtable * _editorTables;
  struct Hashtable * _intrinsicTypeConverters;
  struct Object * _intrinsicReferenceKey;
  struct Object * _intrinsicNullableKey;
  struct Object * _dictionaryKey;
  struct Hashtable * _propertyCache;
  struct Hashtable * _eventCache;
  struct Hashtable * _attributeCache;
  struct Hashtable * _extendedPropertyCache;
  struct Guid _extenderProviderKey;
  struct Guid _extenderPropertiesKey;
  struct Guid _extenderProviderPropertiesKey;
  struct Type__Array * _skipInterfaceAttributeList;
  struct Object * _internalSyncObject;
};
struct ReflectTypeDescriptionProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectTypeDescriptionProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectTypeDescriptionProvider__VTable vtable;
};

struct __declspec(align(8)) ReflectTypeDescriptionProvider_ReflectedTypeData__Fields {
  struct Type * _type;
  struct AttributeCollection * _attributes;
  struct EventDescriptorCollection * _events;
  struct PropertyDescriptorCollection * _properties;
  struct TypeConverter * _converter;
  struct Object__Array * _editors;
  struct Type__Array * _editorTypes;
  int32_t _editorCount;
};
struct ReflectTypeDescriptionProvider_ReflectedTypeData {
  struct ReflectTypeDescriptionProvider_ReflectedTypeData__Class *klass;
  struct MonitorData *monitor;
  struct ReflectTypeDescriptionProvider_ReflectedTypeData__Fields fields;
};
struct ReflectTypeDescriptionProvider_ReflectedTypeData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReflectTypeDescriptionProvider_ReflectedTypeData__StaticFields {
};
struct ReflectTypeDescriptionProvider_ReflectedTypeData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectTypeDescriptionProvider_ReflectedTypeData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectTypeDescriptionProvider_ReflectedTypeData__VTable vtable;
};

struct __declspec(align(8)) RefreshEventArgs__Fields {
  struct Object * componentChanged;
  struct Type * typeChanged;
};
struct RefreshEventArgs {
  struct RefreshEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct RefreshEventArgs__Fields fields;
};
struct RefreshEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RefreshEventArgs__StaticFields {
};
struct RefreshEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RefreshEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RefreshEventArgs__VTable vtable;
};

struct RefreshEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct RefreshEventHandler {
  struct RefreshEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct RefreshEventHandler__Fields fields;
};
struct RefreshEventHandler__VTable {
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
struct RefreshEventHandler__StaticFields {
};
struct RefreshEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RefreshEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RefreshEventHandler__VTable vtable;
};

struct __declspec(align(8)) RunInstallerAttribute__Fields {
  bool runInstaller;
};
struct RunInstallerAttribute {
  struct RunInstallerAttribute__Class *klass;
  struct MonitorData *monitor;
  struct RunInstallerAttribute__Fields fields;
};
struct RunInstallerAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct RunInstallerAttribute__StaticFields {
  struct RunInstallerAttribute * Yes;
  struct RunInstallerAttribute * No;
  struct RunInstallerAttribute * Default;
};
struct RunInstallerAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RunInstallerAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RunInstallerAttribute__VTable vtable;
};

struct SByteConverter {
  struct SByteConverter__Class *klass;
  struct MonitorData *monitor;
};
struct SByteConverter__VTable {
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
struct SByteConverter__StaticFields {
};
struct SByteConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SByteConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SByteConverter__VTable vtable;
};

struct __declspec(align(8)) SettingsBindableAttribute__Fields {
  bool _bindable;
};
struct SettingsBindableAttribute {
  struct SettingsBindableAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SettingsBindableAttribute__Fields fields;
};
struct SettingsBindableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SettingsBindableAttribute__StaticFields {
  struct SettingsBindableAttribute * Yes;
  struct SettingsBindableAttribute * No;
};
struct SettingsBindableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SettingsBindableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SettingsBindableAttribute__VTable vtable;
};

struct SingleConverter {
  struct SingleConverter__Class *klass;
  struct MonitorData *monitor;
};
struct SingleConverter__VTable {
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
struct SingleConverter__StaticFields {
};
struct SingleConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SingleConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SingleConverter__VTable vtable;
};

struct StringConverter {
  struct StringConverter__Class *klass;
  struct MonitorData *monitor;
};
struct StringConverter__VTable {
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
struct StringConverter__StaticFields {
};
struct StringConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StringConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StringConverter__VTable vtable;
};

struct TimeSpanConverter {
  struct TimeSpanConverter__Class *klass;
  struct MonitorData *monitor;
};
struct TimeSpanConverter__VTable {
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
struct TimeSpanConverter__StaticFields {
};
struct TimeSpanConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeSpanConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeSpanConverter__VTable vtable;
};

enum ToolboxItemFilterType__Enum : int32_t {
  ToolboxItemFilterType__Enum_Allow = 0,
  ToolboxItemFilterType__Enum_Custom = 1,
  ToolboxItemFilterType__Enum_Prevent = 2,
  ToolboxItemFilterType__Enum_Require = 3,
};
struct ToolboxItemFilterType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ToolboxItemFilterType__Enum value;
};
struct __declspec(align(8)) ToolboxItemFilterAttribute__Fields {
  enum ToolboxItemFilterType__Enum filterType;
  struct String * filterString;
  struct String * typeId;
};
struct ToolboxItemFilterAttribute {
  struct ToolboxItemFilterAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ToolboxItemFilterAttribute__Fields fields;
};
struct ToolboxItemFilterAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ToolboxItemFilterAttribute__StaticFields {
};
struct ToolboxItemFilterAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ToolboxItemFilterAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ToolboxItemFilterAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeConverterAttribute__Fields {
  struct String * typeName;
};
struct TypeConverterAttribute {
  struct TypeConverterAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TypeConverterAttribute__Fields fields;
};
struct TypeConverterAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TypeConverterAttribute__StaticFields {
  struct TypeConverterAttribute * Default;
};
struct TypeConverterAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeConverterAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeConverterAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeDescriptionProviderAttribute__Fields {
  struct String * _typeName;
};
struct TypeDescriptionProviderAttribute {
  struct TypeDescriptionProviderAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptionProviderAttribute__Fields fields;
};
struct TypeDescriptionProviderAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TypeDescriptionProviderAttribute__StaticFields {
};
struct TypeDescriptionProviderAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptionProviderAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptionProviderAttribute__VTable vtable;
};

struct TypeDescriptor {
  struct TypeDescriptor__Class *klass;
  struct MonitorData *monitor;
};
struct WeakHashtable__Fields {
  struct Hashtable__Fields _;
  int64_t _lastGlobalMem;
  int32_t _lastHashCount;
};
struct WeakHashtable {
  struct WeakHashtable__Class *klass;
  struct MonitorData *monitor;
  struct WeakHashtable__Fields fields;
};
struct WeakHashtable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData Contains;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_IsFixedSize;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData Remove;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData Clone;
  VirtualInvokeData Add_1;
  VirtualInvokeData Clear_1;
  VirtualInvokeData Clone_1;
  VirtualInvokeData Contains_1;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData CopyTo_1;
  VirtualInvokeData ToKeyValuePairsArray;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData set_Item_1;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData GetHash;
  VirtualInvokeData get_IsReadOnly_1;
  VirtualInvokeData get_IsFixedSize_1;
  VirtualInvokeData get_IsSynchronized_1;
  VirtualInvokeData KeyEquals;
  VirtualInvokeData get_Keys_1;
  VirtualInvokeData get_Values_1;
  VirtualInvokeData Remove_1;
  VirtualInvokeData get_SyncRoot_1;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct WeakHashtable__StaticFields {
  struct IEqualityComparer * _comparer;
};
struct WeakHashtable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeakHashtable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeakHashtable__VTable vtable;
};
struct TypeDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TypeDescriptor__StaticFields {
  struct WeakHashtable * _providerTable;
  struct Hashtable * _providerTypeTable;
  struct Hashtable * _defaultProviders;
  struct WeakHashtable * _associationTable;
  int32_t _metadataVersion;
  int32_t _collisionIndex;
  struct BooleanSwitch * TraceDescriptor;
  struct Guid__Array * _pipelineInitializeKeys;
  struct Guid__Array * _pipelineMergeKeys;
  struct Guid__Array * _pipelineFilterKeys;
  struct Guid__Array * _pipelineAttributeFilterKeys;
  struct Object * _internalSyncObject;
  struct RefreshEventHandler * Refreshed;
};
struct TypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor__VTable vtable;
};

struct IComNativeDescriptorHandler {
  struct IComNativeDescriptorHandler__Class *klass;
  struct MonitorData *monitor;
};
struct IComNativeDescriptorHandler__VTable {
  VirtualInvokeData GetAttributes;
  VirtualInvokeData GetClassName;
  VirtualInvokeData GetConverter;
  VirtualInvokeData GetDefaultEvent;
  VirtualInvokeData GetDefaultProperty;
  VirtualInvokeData GetEditor;
  VirtualInvokeData GetName;
  VirtualInvokeData GetEvents;
  VirtualInvokeData GetEvents_1;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertyValue;
  VirtualInvokeData GetPropertyValue_1;
};
struct IComNativeDescriptorHandler__StaticFields {
};
struct IComNativeDescriptorHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComNativeDescriptorHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComNativeDescriptorHandler__VTable vtable;
};

struct IDesigner {
  struct IDesigner__Class *klass;
  struct MonitorData *monitor;
};
struct IDesigner__VTable {
};
struct IDesigner__StaticFields {
};
struct IDesigner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDesigner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDesigner__VTable vtable;
};

struct TypeDescriptor_TypeDescriptionNode__Fields {
  struct TypeDescriptionProvider__Fields _;
  struct TypeDescriptor_TypeDescriptionNode * Next;
  struct TypeDescriptionProvider * Provider;
};
struct TypeDescriptor_TypeDescriptionNode {
  struct TypeDescriptor_TypeDescriptionNode__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_TypeDescriptionNode__Fields fields;
};
struct TypeDescriptor_TypeDescriptionNode__VTable {
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
struct TypeDescriptor_TypeDescriptionNode__StaticFields {
};
struct TypeDescriptor_TypeDescriptionNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_TypeDescriptionNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_TypeDescriptionNode__VTable vtable;
};

struct TypeDescriptor_AttributeProvider__Fields {
  struct TypeDescriptionProvider__Fields _;
  struct Attribute__Array * _attrs;
};
struct TypeDescriptor_AttributeProvider {
  struct TypeDescriptor_AttributeProvider__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_AttributeProvider__Fields fields;
};
struct TypeDescriptor_AttributeProvider__VTable {
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
struct TypeDescriptor_AttributeProvider__StaticFields {
};
struct TypeDescriptor_AttributeProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_AttributeProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_AttributeProvider__VTable vtable;
};

struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Fields {
  struct CustomTypeDescriptor__Fields _;
  struct Attribute__Array * _attributeArray;
};
struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor {
  struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Fields fields;
};
struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__VTable {
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
struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__StaticFields {
};
struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__VTable vtable;
};

struct TypeDescriptor_ComNativeDescriptionProvider__Fields {
  struct TypeDescriptionProvider__Fields _;
  struct IComNativeDescriptorHandler * _handler;
};
struct TypeDescriptor_ComNativeDescriptionProvider {
  struct TypeDescriptor_ComNativeDescriptionProvider__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_ComNativeDescriptionProvider__Fields fields;
};
struct TypeDescriptor_ComNativeDescriptionProvider__VTable {
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
struct TypeDescriptor_ComNativeDescriptionProvider__StaticFields {
};
struct TypeDescriptor_ComNativeDescriptionProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_ComNativeDescriptionProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_ComNativeDescriptionProvider__VTable vtable;
};

struct __declspec(align(8)) TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Fields {
  struct IComNativeDescriptorHandler * _handler;
  struct Object * _instance;
};
struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor {
  struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Fields fields;
};
struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
};
struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__StaticFields {
};
struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__VTable vtable;
};

struct __declspec(align(8)) TypeDescriptor_AttributeFilterCacheItem__Fields {
  struct Attribute__Array * _filter;
  struct ICollection * FilteredMembers;
};
struct TypeDescriptor_AttributeFilterCacheItem {
  struct TypeDescriptor_AttributeFilterCacheItem__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_AttributeFilterCacheItem__Fields fields;
};
struct TypeDescriptor_AttributeFilterCacheItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TypeDescriptor_AttributeFilterCacheItem__StaticFields {
};
struct TypeDescriptor_AttributeFilterCacheItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_AttributeFilterCacheItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_AttributeFilterCacheItem__VTable vtable;
};

struct __declspec(align(8)) TypeDescriptor_FilterCacheItem__Fields {
  struct ITypeDescriptorFilterService * _filterService;
  struct ICollection * FilteredMembers;
};
struct TypeDescriptor_FilterCacheItem {
  struct TypeDescriptor_FilterCacheItem__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_FilterCacheItem__Fields fields;
};
struct ITypeDescriptorFilterService {
  struct ITypeDescriptorFilterService__Class *klass;
  struct MonitorData *monitor;
};
struct ITypeDescriptorFilterService__VTable {
  VirtualInvokeData FilterAttributes;
  VirtualInvokeData FilterEvents;
  VirtualInvokeData FilterProperties;
};
struct ITypeDescriptorFilterService__StaticFields {
};
struct ITypeDescriptorFilterService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITypeDescriptorFilterService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITypeDescriptorFilterService__VTable vtable;
};
struct TypeDescriptor_FilterCacheItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TypeDescriptor_FilterCacheItem__StaticFields {
};
struct TypeDescriptor_FilterCacheItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_FilterCacheItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_FilterCacheItem__VTable vtable;
};

struct TypeDescriptor_MemberDescriptorComparer {
  struct TypeDescriptor_MemberDescriptorComparer__Class *klass;
  struct MonitorData *monitor;
};
struct TypeDescriptor_MemberDescriptorComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct TypeDescriptor_MemberDescriptorComparer__StaticFields {
  struct TypeDescriptor_MemberDescriptorComparer * Instance;
};
struct TypeDescriptor_MemberDescriptorComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_MemberDescriptorComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_MemberDescriptorComparer__VTable vtable;
};

struct __declspec(align(8)) TypeDescriptor_MergedTypeDescriptor__Fields {
  struct ICustomTypeDescriptor * _primary;
  struct ICustomTypeDescriptor * _secondary;
};
struct TypeDescriptor_MergedTypeDescriptor {
  struct TypeDescriptor_MergedTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_MergedTypeDescriptor__Fields fields;
};
struct TypeDescriptor_MergedTypeDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
};
struct TypeDescriptor_MergedTypeDescriptor__StaticFields {
};
struct TypeDescriptor_MergedTypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_MergedTypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_MergedTypeDescriptor__VTable vtable;
};

struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor {
  struct TypeDescriptor_TypeDescriptionNode * _node;
  struct Object * _instance;
};
struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Boxed {
  struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor fields;
};
struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
};
struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__StaticFields {
};
struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__VTable vtable;
};

struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor {
  struct TypeDescriptor_TypeDescriptionNode * _node;
  struct Type * _objectType;
  struct Object * _instance;
};
struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed {
  struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor fields;
};
struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
};
struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__StaticFields {
};
struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__VTable vtable;
};

struct TypeDescriptor_TypeDescriptorComObject {
  struct TypeDescriptor_TypeDescriptorComObject__Class *klass;
  struct MonitorData *monitor;
};
struct TypeDescriptor_TypeDescriptorComObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TypeDescriptor_TypeDescriptorComObject__StaticFields {
};
struct TypeDescriptor_TypeDescriptorComObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDescriptor_TypeDescriptorComObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDescriptor_TypeDescriptorComObject__VTable vtable;
};

struct TypeDescriptor_TypeDescriptorInterface {
  struct TypeDescriptor_TypeDescriptorInterface__Class *klass;
  struct MonitorData *monitor;
};}