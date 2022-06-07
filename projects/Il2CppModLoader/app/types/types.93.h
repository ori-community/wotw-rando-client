namespace app {
struct EventDescriptorCollection__StaticFields {
    struct EventDescriptorCollection *Empty;
};

struct EventDescriptorCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventDescriptorCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CustomTypeDescriptor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CustomTypeDescriptor__VTable vtable;
};

struct __declspec(align(8)) DataErrorsChangedEventArgs__Fields {
    struct String *propertyName;
};

struct DataErrorsChangedEventArgs {
    struct DataErrorsChangedEventArgs__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataErrorsChangedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataErrorsChangedEventArgs__VTable vtable;
};

struct __declspec(align(8)) DataObjectAttribute__Fields {
    bool _isDataObject;
};

struct DataObjectAttribute {
    struct DataObjectAttribute__Class *klass;
    MonitorData *monitor;
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
    struct DataObjectAttribute *DataObject;
    struct DataObjectAttribute *NonDataObject;
    struct DataObjectAttribute *Default;
};

struct DataObjectAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataObjectAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataObjectFieldAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataObjectFieldAttribute__VTable vtable;
};

enum class DataObjectMethodType__Enum : int32_t {
    Fill = 0x00000000,
    Select = 0x00000001,
    Update = 0x00000002,
    Insert = 0x00000003,
    Delete = 0x00000004,
};

struct DataObjectMethodType__Enum__Boxed {
    struct DataObjectMethodType__Enum__Class *klass;
    MonitorData *monitor;
    DataObjectMethodType__Enum value;
    
};

struct __declspec(align(8)) DataObjectMethodAttribute__Fields {
    bool _isDefault;
    DataObjectMethodType__Enum _methodType;
    
};

struct DataObjectMethodAttribute {
    struct DataObjectMethodAttribute__Class *klass;
    MonitorData *monitor;
    struct DataObjectMethodAttribute__Fields fields;
};

struct DataObjectMethodType__Enum__VTable {
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

struct DataObjectMethodType__Enum__StaticFields {
};

struct DataObjectMethodType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataObjectMethodType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataObjectMethodType__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataObjectMethodAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataObjectMethodAttribute__VTable vtable;
};

struct DateTimeConverter {
    struct DateTimeConverter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeConverter__VTable vtable;
};

struct DateTimeOffsetConverter {
    struct DateTimeOffsetConverter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeOffsetConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeOffsetConverter__VTable vtable;
};

struct DecimalConverter {
    struct DecimalConverter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DecimalConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DecimalConverter__VTable vtable;
};

struct __declspec(align(8)) DefaultBindingPropertyAttribute__Fields {
    struct String *name;
};

struct DefaultBindingPropertyAttribute {
    struct DefaultBindingPropertyAttribute__Class *klass;
    MonitorData *monitor;
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
    struct DefaultBindingPropertyAttribute *Default;
};

struct DefaultBindingPropertyAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultBindingPropertyAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultBindingPropertyAttribute__VTable vtable;
};

struct __declspec(align(8)) DefaultEventAttribute__Fields {
    struct String *name;
};

struct DefaultEventAttribute {
    struct DefaultEventAttribute__Class *klass;
    MonitorData *monitor;
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
    struct DefaultEventAttribute *Default;
};

struct DefaultEventAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultEventAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultEventAttribute__VTable vtable;
};

struct __declspec(align(8)) DefaultPropertyAttribute__Fields {
    struct String *name;
};

struct DefaultPropertyAttribute {
    struct DefaultPropertyAttribute__Class *klass;
    MonitorData *monitor;
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
    struct DefaultPropertyAttribute *Default;
};

struct DefaultPropertyAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultPropertyAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultPropertyAttribute__VTable vtable;
};

struct __declspec(align(8)) DefaultValueAttribute__Fields {
    struct Object *value;
};

struct DefaultValueAttribute {
    struct DefaultValueAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultValueAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultValueAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeDescriptionProvider__Fields {
    struct TypeDescriptionProvider *_parent;
    struct TypeDescriptionProvider_EmptyCustomTypeDescriptor *_emptyDescriptor;
};

struct TypeDescriptionProvider {
    struct TypeDescriptionProvider__Class *klass;
    MonitorData *monitor;
    struct TypeDescriptionProvider__Fields fields;
};

struct DelegatingTypeDescriptionProvider__Fields {
    struct TypeDescriptionProvider__Fields _;
    struct Type *_type;
};

struct DelegatingTypeDescriptionProvider {
    struct DelegatingTypeDescriptionProvider__Class *klass;
    MonitorData *monitor;
    struct DelegatingTypeDescriptionProvider__Fields fields;
};

struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__Fields {
    struct CustomTypeDescriptor__Fields _;
};

struct TypeDescriptionProvider_EmptyCustomTypeDescriptor {
    struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class *klass;
    MonitorData *monitor;
    struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__Fields fields;
};

struct IServiceProvider {
    struct IServiceProvider__Class *klass;
    MonitorData *monitor;
};

struct IExtenderProvider {
    struct IExtenderProvider__Class *klass;
    MonitorData *monitor;
};

struct IExtenderProvider__Array {
    struct IExtenderProvider__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IExtenderProvider *vector[32];
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypeDescriptionProvider_EmptyCustomTypeDescriptor__VTable vtable;
};

struct IServiceProvider__VTable {
    VirtualInvokeData GetService;
};

struct IServiceProvider__StaticFields {
};

struct IServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IServiceProvider__VTable vtable;
};

struct IExtenderProvider__VTable {
    VirtualInvokeData CanExtend;
};

struct IExtenderProvider__StaticFields {
};

struct IExtenderProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IExtenderProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IExtenderProvider__VTable vtable;
};

struct IExtenderProvider__Array__VTable {
};

struct IExtenderProvider__Array__StaticFields {
};

struct IExtenderProvider__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IExtenderProvider__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IExtenderProvider__Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeDescriptionProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DelegatingTypeDescriptionProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DelegatingTypeDescriptionProvider__VTable vtable;
};

struct __declspec(align(8)) DesignOnlyAttribute__Fields {
    bool isDesignOnly;
};

struct DesignOnlyAttribute {
    struct DesignOnlyAttribute__Class *klass;
    MonitorData *monitor;
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
    struct DesignOnlyAttribute *Yes;
    struct DesignOnlyAttribute *No;
    struct DesignOnlyAttribute *Default;
};

struct DesignOnlyAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesignOnlyAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesignOnlyAttribute__VTable vtable;
};

struct __declspec(align(8)) DesignTimeVisibleAttribute__Fields {
    bool visible;
};

struct DesignTimeVisibleAttribute {
    struct DesignTimeVisibleAttribute__Class *klass;
    MonitorData *monitor;
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
    struct DesignTimeVisibleAttribute *Yes;
    struct DesignTimeVisibleAttribute *No;
    struct DesignTimeVisibleAttribute *Default;
};

struct DesignTimeVisibleAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesignTimeVisibleAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesignTimeVisibleAttribute__VTable vtable;
};

struct __declspec(align(8)) DesignerAttribute__Fields {
    struct String *designerTypeName;
    struct String *designerBaseTypeName;
    struct String *typeId;
};

struct DesignerAttribute {
    struct DesignerAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesignerAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesignerAttribute__VTable vtable;
};

struct __declspec(align(8)) DesignerCategoryAttribute__Fields {
    struct String *category;
    struct String *typeId;
};

struct DesignerCategoryAttribute {
    struct DesignerCategoryAttribute__Class *klass;
    MonitorData *monitor;
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
    struct DesignerCategoryAttribute *Component;
    struct DesignerCategoryAttribute *Default;
    struct DesignerCategoryAttribute *Form;
    struct DesignerCategoryAttribute *Generic;
};

struct DesignerCategoryAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesignerCategoryAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesignerCategoryAttribute__VTable vtable;
};

enum class DesignerSerializationVisibility__Enum : int32_t {
    Hidden = 0x00000000,
    Visible = 0x00000001,
    Content = 0x00000002,
};

struct DesignerSerializationVisibility__Enum__Boxed {
    struct DesignerSerializationVisibility__Enum__Class *klass;
    MonitorData *monitor;
    DesignerSerializationVisibility__Enum value;
    
};

struct __declspec(align(8)) DesignerSerializationVisibilityAttribute__Fields {
    DesignerSerializationVisibility__Enum visibility;
    
};

struct DesignerSerializationVisibilityAttribute {
    struct DesignerSerializationVisibilityAttribute__Class *klass;
    MonitorData *monitor;
    struct DesignerSerializationVisibilityAttribute__Fields fields;
};

struct DesignerSerializationVisibility__Enum__VTable {
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

struct DesignerSerializationVisibility__Enum__StaticFields {
};

struct DesignerSerializationVisibility__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesignerSerializationVisibility__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesignerSerializationVisibility__Enum__VTable vtable;
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
    struct DesignerSerializationVisibilityAttribute *Content;
    struct DesignerSerializationVisibilityAttribute *Hidden;
    struct DesignerSerializationVisibilityAttribute *Visible;
    struct DesignerSerializationVisibilityAttribute *Default;
};

struct DesignerSerializationVisibilityAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesignerSerializationVisibilityAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesignerSerializationVisibilityAttribute__VTable vtable;
};

struct __declspec(align(8)) DisplayNameAttribute__Fields {
    struct String *_displayName;
};

struct DisplayNameAttribute {
    struct DisplayNameAttribute__Class *klass;
    MonitorData *monitor;
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
    struct DisplayNameAttribute *Default;
};

struct DisplayNameAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DisplayNameAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DisplayNameAttribute__VTable vtable;
};

struct DoubleConverter {
    struct DoubleConverter__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoubleConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoubleConverter__VTable vtable;
};

struct __declspec(align(8)) EditorAttribute__Fields {
    struct String *baseTypeName;
    struct String *typeName;
    struct String *typeId;
};

struct EditorAttribute {
    struct EditorAttribute__Class *klass;
    MonitorData *monitor;
    struct EditorAttribute__Fields fields;
};

}
