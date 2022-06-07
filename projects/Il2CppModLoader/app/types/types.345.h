namespace app {
struct JsonContainerAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct JsonContainerAttribute__StaticFields {
};

struct JsonContainerAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonContainerAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonContainerAttribute__VTable vtable;
};

struct Func_1_Newtonsoft_Json_JsonSerializerSettings___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_Newtonsoft_Json_JsonSerializerSettings_ {
    struct Func_1_Newtonsoft_Json_JsonSerializerSettings___Class *klass;
    MonitorData *monitor;
    struct Func_1_Newtonsoft_Json_JsonSerializerSettings___Fields fields;
};

enum class Formatting__Enum_1 : int32_t {
    None = 0x00000000,
    Indented = 0x00000001,
};

struct Formatting__Enum_1__Boxed {
    struct Formatting__Enum_1__Class *klass;
    MonitorData *monitor;
    Formatting__Enum_1 value;
    
};

struct Nullable_1_Newtonsoft_Json_Formatting_ {
    Formatting__Enum_1 value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_Formatting___Boxed {
    struct Nullable_1_Newtonsoft_Json_Formatting___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_Formatting_ fields;
};

enum class DateFormatHandling__Enum : int32_t {
    IsoDateFormat = 0x00000000,
    MicrosoftDateFormat = 0x00000001,
};

struct DateFormatHandling__Enum__Boxed {
    struct DateFormatHandling__Enum__Class *klass;
    MonitorData *monitor;
    DateFormatHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ {
    DateFormatHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_DateFormatHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_DateFormatHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ fields;
};

enum class DateTimeZoneHandling__Enum : int32_t {
    Local = 0x00000000,
    Utc = 0x00000001,
    Unspecified = 0x00000002,
    RoundtripKind = 0x00000003,
};

struct DateTimeZoneHandling__Enum__Boxed {
    struct DateTimeZoneHandling__Enum__Class *klass;
    MonitorData *monitor;
    DateTimeZoneHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ {
    DateTimeZoneHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ fields;
};

enum class DateParseHandling__Enum : int32_t {
    None = 0x00000000,
    DateTime = 0x00000001,
    DateTimeOffset = 0x00000002,
};

struct DateParseHandling__Enum__Boxed {
    struct DateParseHandling__Enum__Class *klass;
    MonitorData *monitor;
    DateParseHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_DateParseHandling_ {
    DateParseHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_DateParseHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_DateParseHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_DateParseHandling_ fields;
};

enum class FloatFormatHandling__Enum : int32_t {
    String = 0x00000000,
    Symbol = 0x00000001,
    DefaultValue = 0x00000002,
};

struct FloatFormatHandling__Enum__Boxed {
    struct FloatFormatHandling__Enum__Class *klass;
    MonitorData *monitor;
    FloatFormatHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ {
    FloatFormatHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ fields;
};

enum class FloatParseHandling__Enum : int32_t {
    Double = 0x00000000,
    Decimal = 0x00000001,
};

struct FloatParseHandling__Enum__Boxed {
    struct FloatParseHandling__Enum__Class *klass;
    MonitorData *monitor;
    FloatParseHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ {
    FloatParseHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_FloatParseHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_FloatParseHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ fields;
};

enum class StringEscapeHandling__Enum : int32_t {
    Default = 0x00000000,
    EscapeNonAscii = 0x00000001,
    EscapeHtml = 0x00000002,
};

struct StringEscapeHandling__Enum__Boxed {
    struct StringEscapeHandling__Enum__Class *klass;
    MonitorData *monitor;
    StringEscapeHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ {
    StringEscapeHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ fields;
};

enum class TypeNameAssemblyFormatHandling__Enum : int32_t {
    Simple = 0x00000000,
    Full = 0x00000001,
};

struct TypeNameAssemblyFormatHandling__Enum__Boxed {
    struct TypeNameAssemblyFormatHandling__Enum__Class *klass;
    MonitorData *monitor;
    TypeNameAssemblyFormatHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling_ {
    TypeNameAssemblyFormatHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling_ fields;
};

enum class DefaultValueHandling__Enum : int32_t {
    Include = 0x00000000,
    Ignore = 0x00000001,
    Populate = 0x00000002,
    IgnoreAndPopulate = 0x00000003,
};

struct DefaultValueHandling__Enum__Boxed {
    struct DefaultValueHandling__Enum__Class *klass;
    MonitorData *monitor;
    DefaultValueHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ {
    DefaultValueHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ fields;
};

enum class PreserveReferencesHandling__Enum : int32_t {
    None = 0x00000000,
    Objects = 0x00000001,
    Arrays = 0x00000002,
    All = 0x00000003,
};

struct PreserveReferencesHandling__Enum__Boxed {
    struct PreserveReferencesHandling__Enum__Class *klass;
    MonitorData *monitor;
    PreserveReferencesHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling_ {
    PreserveReferencesHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling_ fields;
};

enum class NullValueHandling__Enum : int32_t {
    Include = 0x00000000,
    Ignore = 0x00000001,
};

struct NullValueHandling__Enum__Boxed {
    struct NullValueHandling__Enum__Class *klass;
    MonitorData *monitor;
    NullValueHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_NullValueHandling_ {
    NullValueHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_NullValueHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_NullValueHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ fields;
};

enum class ObjectCreationHandling__Enum : int32_t {
    Auto = 0x00000000,
    Reuse = 0x00000001,
    Replace = 0x00000002,
};

struct ObjectCreationHandling__Enum__Boxed {
    struct ObjectCreationHandling__Enum__Class *klass;
    MonitorData *monitor;
    ObjectCreationHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ {
    ObjectCreationHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ fields;
};

enum class MissingMemberHandling__Enum : int32_t {
    Ignore = 0x00000000,
    Error = 0x00000001,
};

struct MissingMemberHandling__Enum__Boxed {
    struct MissingMemberHandling__Enum__Class *klass;
    MonitorData *monitor;
    MissingMemberHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_MissingMemberHandling_ {
    MissingMemberHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_MissingMemberHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_MissingMemberHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_MissingMemberHandling_ fields;
};

struct Nullable_1_System_Runtime_Serialization_StreamingContext_ {
    struct StreamingContext value;
    bool has_value;
};

struct Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed {
    struct Nullable_1_System_Runtime_Serialization_StreamingContext___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_System_Runtime_Serialization_StreamingContext_ fields;
};

enum class ConstructorHandling__Enum : int32_t {
    Default = 0x00000000,
    AllowNonPublicDefaultConstructor = 0x00000001,
};

struct ConstructorHandling__Enum__Boxed {
    struct ConstructorHandling__Enum__Class *klass;
    MonitorData *monitor;
    ConstructorHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_ConstructorHandling_ {
    ConstructorHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_ConstructorHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_ConstructorHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_ConstructorHandling_ fields;
};

enum class MetadataPropertyHandling__Enum : int32_t {
    Default = 0x00000000,
    ReadAhead = 0x00000001,
    Ignore = 0x00000002,
};

struct MetadataPropertyHandling__Enum__Boxed {
    struct MetadataPropertyHandling__Enum__Class *klass;
    MonitorData *monitor;
    MetadataPropertyHandling__Enum value;
    
};

struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling_ {
    MetadataPropertyHandling__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling___Boxed {
    struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling_ fields;
};

struct __declspec(align(8)) JsonSerializerSettings__Fields {
    struct Nullable_1_Newtonsoft_Json_Formatting_ _formatting;
    struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ _dateFormatHandling;
    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ _dateTimeZoneHandling;
    struct Nullable_1_Newtonsoft_Json_DateParseHandling_ _dateParseHandling;
    struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ _floatFormatHandling;
    struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ _floatParseHandling;
    struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ _stringEscapeHandling;
    struct CultureInfo *_culture;
    struct Nullable_1_Boolean_ _checkAdditionalContent;
    struct Nullable_1_Int32_ _maxDepth;
    bool _maxDepthSet;
    struct String *_dateFormatString;
    bool _dateFormatStringSet;
    struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling_ _typeNameAssemblyFormatHandling;
    struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ _defaultValueHandling;
    struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling_ _preserveReferencesHandling;
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _nullValueHandling;
    struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ _objectCreationHandling;
    struct Nullable_1_Newtonsoft_Json_MissingMemberHandling_ _missingMemberHandling;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _referenceLoopHandling;
    struct Nullable_1_System_Runtime_Serialization_StreamingContext_ _context;
    struct Nullable_1_Newtonsoft_Json_ConstructorHandling_ _constructorHandling;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _typeNameHandling;
    struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling_ _metadataPropertyHandling;
    struct IList_1_Newtonsoft_Json_JsonConverter_ *_Converters_k__BackingField;
    struct IContractResolver *_ContractResolver_k__BackingField;
    struct IEqualityComparer *_EqualityComparer_k__BackingField;
    struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_ *_ReferenceResolverProvider_k__BackingField;
    struct ITraceWriter *_TraceWriter_k__BackingField;
    struct ISerializationBinder *_SerializationBinder_k__BackingField;
    struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *_Error_k__BackingField;
};

struct JsonSerializerSettings {
    struct JsonSerializerSettings__Class *klass;
    MonitorData *monitor;
    struct JsonSerializerSettings__Fields fields;
};

struct IList_1_Newtonsoft_Json_JsonConverter_ {
    struct IList_1_Newtonsoft_Json_JsonConverter___Class *klass;
    MonitorData *monitor;
};

struct IContractResolver {
    struct IContractResolver__Class *klass;
    MonitorData *monitor;
};

struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_ {
    struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver___Class *klass;
    MonitorData *monitor;
    struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver___Fields fields;
};

struct IReferenceResolver {
    struct IReferenceResolver__Class *klass;
    MonitorData *monitor;
};

struct ITraceWriter {
    struct ITraceWriter__Class *klass;
    MonitorData *monitor;
};

struct ISerializationBinder {
    struct ISerializationBinder__Class *klass;
    MonitorData *monitor;
};

struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ {
    struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs___Class *klass;
    MonitorData *monitor;
    struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs___Fields fields;
};

struct __declspec(align(8)) ErrorEventArgs__Fields {
    struct Object *_CurrentObject_k__BackingField;
    struct ErrorContext *_ErrorContext_k__BackingField;
};

struct ErrorEventArgs {
    struct ErrorEventArgs__Class *klass;
    MonitorData *monitor;
    struct ErrorEventArgs__Fields fields;
};

struct __declspec(align(8)) ErrorContext__Fields {
    bool _Traced_k__BackingField;
    struct Exception *_Error_k__BackingField;
    struct Object *_OriginalObject_k__BackingField;
    struct Object *_Member_k__BackingField;
    struct String *_Path_k__BackingField;
    bool _Handled_k__BackingField;
};

struct ErrorContext {
    struct ErrorContext__Class *klass;
    MonitorData *monitor;
    struct ErrorContext__Fields fields;
};

struct Formatting__Enum_1__VTable {
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

struct Formatting__Enum_1__StaticFields {
};

struct Formatting__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Formatting__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Formatting__Enum_1__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_Formatting___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_Formatting___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_Formatting___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_Formatting___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_Formatting___VTable vtable;
};

struct DateFormatHandling__Enum__VTable {
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

struct DateFormatHandling__Enum__StaticFields {
};

struct DateFormatHandling__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateFormatHandling__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateFormatHandling__Enum__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_DateFormatHandling___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_DateFormatHandling___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_DateFormatHandling___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_DateFormatHandling___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_DateFormatHandling___VTable vtable;
};

struct DateTimeZoneHandling__Enum__VTable {
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

struct DateTimeZoneHandling__Enum__StaticFields {
};

struct DateTimeZoneHandling__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeZoneHandling__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeZoneHandling__Enum__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___VTable vtable;
};

struct DateParseHandling__Enum__VTable {
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

struct DateParseHandling__Enum__StaticFields {
};

struct DateParseHandling__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateParseHandling__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateParseHandling__Enum__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_DateParseHandling___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_DateParseHandling___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_DateParseHandling___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_DateParseHandling___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_DateParseHandling___VTable vtable;
};

struct FloatFormatHandling__Enum__VTable {
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

struct FloatFormatHandling__Enum__StaticFields {
};

struct FloatFormatHandling__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FloatFormatHandling__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FloatFormatHandling__Enum__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___VTable vtable;
};

struct FloatParseHandling__Enum__VTable {
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

struct FloatParseHandling__Enum__StaticFields {
};

struct FloatParseHandling__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FloatParseHandling__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FloatParseHandling__Enum__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_FloatParseHandling___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_FloatParseHandling___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_FloatParseHandling___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_FloatParseHandling___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_FloatParseHandling___VTable vtable;
};

struct StringEscapeHandling__Enum__VTable {
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

struct StringEscapeHandling__Enum__StaticFields {
};

struct StringEscapeHandling__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StringEscapeHandling__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StringEscapeHandling__Enum__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___VTable vtable;
};

struct TypeNameAssemblyFormatHandling__Enum__VTable {
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

struct TypeNameAssemblyFormatHandling__Enum__StaticFields {
};

struct TypeNameAssemblyFormatHandling__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeNameAssemblyFormatHandling__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypeNameAssemblyFormatHandling__Enum__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___VTable vtable;
};

struct DefaultValueHandling__Enum__VTable {
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

}
