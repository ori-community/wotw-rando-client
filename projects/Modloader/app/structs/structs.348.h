namespace app {
    struct JsonSerializer__StaticFields {
    };

    struct JsonSerializer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonSerializer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonSerializer__VTable vtable;
    };

    struct BinaryConverter_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData WriteJson;
        VirtualInvokeData ReadJson;
        VirtualInvokeData CanConvert;
        VirtualInvokeData get_CanRead;
        VirtualInvokeData get_CanWrite;
    };

    struct BinaryConverter_1__StaticFields {
        struct ReflectionObject* _reflectionObject;
    };

    struct BinaryConverter_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BinaryConverter_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BinaryConverter_1__VTable vtable;
    };

    struct JsonConverter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData get_CanRead;
        VirtualInvokeData get_CanWrite;
    };

    struct JsonConverter__StaticFields {
    };

    struct JsonConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonConverter__VTable vtable;
    };

    struct __declspec(align(8)) JsonConverterAttribute__Fields {
        struct Type* _converterType;
        struct Object__Array* _ConverterParameters_k__BackingField;
    };

    struct JsonConverterAttribute {
        struct JsonConverterAttribute__Class* klass;
        MonitorData* monitor;
        struct JsonConverterAttribute__Fields fields;
    };

    struct JsonConverterAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct JsonConverterAttribute__StaticFields {
    };

    struct JsonConverterAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonConverterAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonConverterAttribute__VTable vtable;
    };

    struct JsonException__Fields {
        struct Exception__Fields _;
    };

    struct JsonException {
        struct JsonException__Class* klass;
        MonitorData* monitor;
        struct JsonException__Fields fields;
    };

    struct JsonException__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetType;
    };

    struct JsonException__StaticFields {
    };

    struct JsonException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonException__VTable vtable;
    };

    struct __declspec(align(8)) JsonExtensionDataAttribute__Fields {
        bool _WriteData_k__BackingField;
        bool _ReadData_k__BackingField;
    };

    struct JsonExtensionDataAttribute {
        struct JsonExtensionDataAttribute__Class* klass;
        MonitorData* monitor;
        struct JsonExtensionDataAttribute__Fields fields;
    };

    struct JsonExtensionDataAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct JsonExtensionDataAttribute__StaticFields {
    };

    struct JsonExtensionDataAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonExtensionDataAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonExtensionDataAttribute__VTable vtable;
    };

    enum class MemberSerialization__Enum : int32_t {
        OptOut = 0x00000000,
        OptIn = 0x00000001,
        Fields = 0x00000002,
    };

    struct MemberSerialization__Enum__Boxed {
        struct MemberSerialization__Enum__Class* klass;
        MonitorData* monitor;
        MemberSerialization__Enum value;
    };

    enum class Required__Enum : int32_t {
        Default = 0x00000000,
        AllowNull = 0x00000001,
        Always = 0x00000002,
        DisallowNull = 0x00000003,
    };

    struct Required__Enum__Boxed {
        struct Required__Enum__Class* klass;
        MonitorData* monitor;
        Required__Enum value;
    };

    struct Nullable_1_Newtonsoft_Json_Required_ {
        Required__Enum value;

        bool has_value;
    };

    struct Nullable_1_Newtonsoft_Json_Required___Boxed {
        struct Nullable_1_Newtonsoft_Json_Required___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_Newtonsoft_Json_Required_ fields;
    };

    struct JsonObjectAttribute__Fields {
        struct JsonContainerAttribute__Fields _;
        MemberSerialization__Enum _memberSerialization;

        struct Nullable_1_Newtonsoft_Json_Required_ _itemRequired;
        struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _itemNullValueHandling;
    };

    struct JsonObjectAttribute {
        struct JsonObjectAttribute__Class* klass;
        MonitorData* monitor;
        struct JsonObjectAttribute__Fields fields;
    };

    struct MemberSerialization__Enum__VTable {
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

    struct MemberSerialization__Enum__StaticFields {
    };

    struct MemberSerialization__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MemberSerialization__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MemberSerialization__Enum__VTable vtable;
    };

    struct Required__Enum__VTable {
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

    struct Required__Enum__StaticFields {
    };

    struct Required__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Required__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Required__Enum__VTable vtable;
    };

    struct Nullable_1_Newtonsoft_Json_Required___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_Newtonsoft_Json_Required___StaticFields {
    };

    struct Nullable_1_Newtonsoft_Json_Required___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_Newtonsoft_Json_Required___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_Newtonsoft_Json_Required___VTable vtable;
    };

    struct JsonObjectAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct JsonObjectAttribute__StaticFields {
    };

    struct JsonObjectAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonObjectAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonObjectAttribute__VTable vtable;
    };

    struct StringWriter___VTable {
    };

    struct StringWriter___StaticFields {
    };

    struct StringWriter___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StringWriter___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StringWriter___VTable vtable;
    };

    struct Nullable_1_Newtonsoft_Json_JsonPosition_ {
        struct JsonPosition value;
        bool has_value;
    };

    struct Nullable_1_Newtonsoft_Json_JsonPosition___Boxed {
        struct Nullable_1_Newtonsoft_Json_JsonPosition___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_Newtonsoft_Json_JsonPosition_ fields;
    };

    struct Nullable_1_Newtonsoft_Json_JsonPosition___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_Newtonsoft_Json_JsonPosition___StaticFields {
    };

    struct Nullable_1_Newtonsoft_Json_JsonPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_Newtonsoft_Json_JsonPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_Newtonsoft_Json_JsonPosition___VTable vtable;
    };

    struct IJsonLineInfo {
        struct IJsonLineInfo__Class* klass;
        MonitorData* monitor;
    };

    struct IJsonLineInfo__VTable {
        VirtualInvokeData HasLineInfo;
        VirtualInvokeData get_LineNumber;
        VirtualInvokeData get_LinePosition;
    };

    struct IJsonLineInfo__StaticFields {
    };

    struct IJsonLineInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IJsonLineInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IJsonLineInfo__VTable vtable;
    };

    struct __declspec(align(8)) JsonPropertyAttribute__Fields {
        struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _nullValueHandling;
        struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ _defaultValueHandling;
        struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _referenceLoopHandling;
        struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ _objectCreationHandling;
        struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _typeNameHandling;
        struct Nullable_1_Boolean_ _isReference;
        struct Nullable_1_Int32_ _order;
        struct Nullable_1_Newtonsoft_Json_Required_ _required;
        struct Nullable_1_Boolean_ _itemIsReference;
        struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _itemReferenceLoopHandling;
        struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _itemTypeNameHandling;
        struct Type* _ItemConverterType_k__BackingField;
        struct Object__Array* _ItemConverterParameters_k__BackingField;
        struct Type* _NamingStrategyType_k__BackingField;
        struct Object__Array* _NamingStrategyParameters_k__BackingField;
        struct String* _PropertyName_k__BackingField;
    };

    struct JsonPropertyAttribute {
        struct JsonPropertyAttribute__Class* klass;
        MonitorData* monitor;
        struct JsonPropertyAttribute__Fields fields;
    };

    struct JsonPropertyAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct JsonPropertyAttribute__StaticFields {
    };

    struct JsonPropertyAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonPropertyAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonPropertyAttribute__VTable vtable;
    };

    struct JsonReaderException__Fields {
        struct JsonException__Fields _;
        int32_t _LineNumber_k__BackingField;
        int32_t _LinePosition_k__BackingField;
        struct String* _Path_k__BackingField;
    };

    struct JsonReaderException {
        struct JsonReaderException__Class* klass;
        MonitorData* monitor;
        struct JsonReaderException__Fields fields;
    };

    struct JsonReaderException__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetType;
    };

    struct JsonReaderException__StaticFields {
    };

    struct JsonReaderException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonReaderException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonReaderException__VTable vtable;
    };

    enum class ReadType__Enum : int32_t {
        Read = 0x00000000,
        ReadAsInt32 = 0x00000001,
        ReadAsInt64 = 0x00000002,
        ReadAsBytes = 0x00000003,
        ReadAsString = 0x00000004,
        ReadAsDecimal = 0x00000005,
        ReadAsDateTime = 0x00000006,
        ReadAsDateTimeOffset = 0x00000007,
        ReadAsDouble = 0x00000008,
        ReadAsBoolean = 0x00000009,
    };

    struct ReadType__Enum__Boxed {
        struct ReadType__Enum__Class* klass;
        MonitorData* monitor;
        ReadType__Enum value;
    };

    enum class JsonContractType__Enum : int32_t {
        None = 0x00000000,
        Object = 0x00000001,
        Array = 0x00000002,
        Primitive = 0x00000003,
        String = 0x00000004,
        Dictionary = 0x00000005,
        Dynamic = 0x00000006,
        Serializable = 0x00000007,
        Linq = 0x00000008,
    };

    struct JsonContractType__Enum__Boxed {
        struct JsonContractType__Enum__Class* klass;
        MonitorData* monitor;
        JsonContractType__Enum value;
    };

    struct __declspec(align(8)) JsonContract__Fields {
        bool IsNullable;
        bool IsConvertable;
        bool IsEnum;
        struct Type* NonNullableUnderlyingType;
        ReadType__Enum InternalReadType;

        JsonContractType__Enum ContractType;

        bool IsReadOnlyOrFixedSize;
        bool IsSealed;
        bool IsInstantiable;
        struct List_1_Newtonsoft_Json_Serialization_SerializationCallback_* _onDeserializedCallbacks;
        struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback_* _onDeserializingCallbacks;
        struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback_* _onSerializedCallbacks;
        struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback_* _onSerializingCallbacks;
        struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_* _onErrorCallbacks;
        struct Type* _createdType;
        struct Type* _UnderlyingType_k__BackingField;
        struct Nullable_1_Boolean_ _IsReference_k__BackingField;
        struct JsonConverter* _Converter_k__BackingField;
        struct JsonConverter* _InternalConverter_k__BackingField;
        struct Func_1_Object_* _DefaultCreator_k__BackingField;
        bool _DefaultCreatorNonPublic_k__BackingField;
    };

    struct JsonContract {
        struct JsonContract__Class* klass;
        MonitorData* monitor;
        struct JsonContract__Fields fields;
    };

    struct __declspec(align(8)) List_1_Newtonsoft_Json_Serialization_SerializationCallback___Fields {
        struct SerializationCallback__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Newtonsoft_Json_Serialization_SerializationCallback_ {
        struct List_1_Newtonsoft_Json_Serialization_SerializationCallback___Class* klass;
        MonitorData* monitor;
        struct List_1_Newtonsoft_Json_Serialization_SerializationCallback___Fields fields;
    };

    struct SerializationCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct SerializationCallback {
        struct SerializationCallback__Class* klass;
        MonitorData* monitor;
        struct SerializationCallback__Fields fields;
    };

    struct SerializationCallback__Array {
        struct SerializationCallback__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SerializationCallback* vector[32];
    };

    struct IEnumerator_1_Newtonsoft_Json_Serialization_SerializationCallback_ {
        struct IEnumerator_1_Newtonsoft_Json_Serialization_SerializationCallback___Class* klass;
        MonitorData* monitor;
    };

    struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback_ {
        struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback___Class* klass;
        MonitorData* monitor;
    };

    struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_ {
        struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback___Class* klass;
        MonitorData* monitor;
    };

    struct Func_1_Object___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_1_Object_ {
        struct Func_1_Object___Class* klass;
        MonitorData* monitor;
        struct Func_1_Object___Fields fields;
    };

    struct ReadType__Enum__VTable {
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

    struct ReadType__Enum__StaticFields {
    };

    struct ReadType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReadType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReadType__Enum__VTable vtable;
    };

    struct JsonContractType__Enum__VTable {
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

    struct JsonContractType__Enum__StaticFields {
    };

    struct JsonContractType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonContractType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonContractType__Enum__VTable vtable;
    };

    struct SerializationCallback__VTable {
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

    struct SerializationCallback__StaticFields {
    };

    struct SerializationCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationCallback__VTable vtable;
    };

    struct SerializationCallback__Array__VTable {
    };

    struct SerializationCallback__Array__StaticFields {
    };

    struct SerializationCallback__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationCallback__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationCallback__Array__VTable vtable;
    };

    struct IEnumerator_1_Newtonsoft_Json_Serialization_SerializationCallback___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Newtonsoft_Json_Serialization_SerializationCallback___StaticFields {
    };

    struct IEnumerator_1_Newtonsoft_Json_Serialization_SerializationCallback___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Newtonsoft_Json_Serialization_SerializationCallback___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Newtonsoft_Json_Serialization_SerializationCallback___VTable vtable;
    };

    struct List_1_Newtonsoft_Json_Serialization_SerializationCallback___VTable {
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

    struct List_1_Newtonsoft_Json_Serialization_SerializationCallback___StaticFields {
        struct SerializationCallback__Array* _emptyArray;
    };

    struct List_1_Newtonsoft_Json_Serialization_SerializationCallback___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Newtonsoft_Json_Serialization_SerializationCallback___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Newtonsoft_Json_Serialization_SerializationCallback___VTable vtable;
    };

    struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback___StaticFields {
    };

    struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_Newtonsoft_Json_Serialization_SerializationCallback___VTable vtable;
    };

    struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback___StaticFields {
    };

    struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback___VTable vtable;
    };

    struct Func_1_Object___VTable {
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

    struct Func_1_Object___StaticFields {
    };

    struct Func_1_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_1_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_1_Object___VTable vtable;
    };

    struct JsonContract__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JsonContract__StaticFields {
    };

    struct JsonContract__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonContract__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonContract__VTable vtable;
    };

    struct JsonSerializationException__Fields {
        struct JsonException__Fields _;
        int32_t _LineNumber_k__BackingField;
        int32_t _LinePosition_k__BackingField;
        struct String* _Path_k__BackingField;
    };

    struct JsonSerializationException {
        struct JsonSerializationException__Class* klass;
        MonitorData* monitor;
        struct JsonSerializationException__Fields fields;
    };

    struct JsonSerializationException__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetType;
    };

    struct JsonSerializationException__StaticFields {
    };

    struct JsonSerializationException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JsonSerializationException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JsonSerializationException__VTable vtable;
    };

    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling__1__VTable {
    };

    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling__1__StaticFields {
    };

    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling__1__VTable vtable;
    };

    struct Nullable_1_Newtonsoft_Json_DateParseHandling__1__VTable {
    };

    struct Nullable_1_Newtonsoft_Json_DateParseHandling__1__StaticFields {
    };

    struct Nullable_1_Newtonsoft_Json_DateParseHandling__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_Newtonsoft_Json_DateParseHandling__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_Newtonsoft_Json_DateParseHandling__1__VTable vtable;
    };

    struct Nullable_1_Newtonsoft_Json_FloatParseHandling__1__VTable {
    };

    struct Nullable_1_Newtonsoft_Json_FloatParseHandling__1__StaticFields {
    };

    struct Nullable_1_Newtonsoft_Json_FloatParseHandling__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_Newtonsoft_Json_FloatParseHandling__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_Newtonsoft_Json_FloatParseHandling__1__VTable vtable;
    };

    struct Nullable_1_Int32__1__VTable {
    };

    struct Nullable_1_Int32__1__StaticFields {
    };

    struct Nullable_1_Int32__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_Int32__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_Int32__1__VTable vtable;
    };

    struct TraceJsonReader__Fields {
        struct JsonReader__Fields _;
        struct JsonReader* _innerReader;
        struct JsonTextWriter* _textWriter;
        struct StringWriter* _sw;
    };

    struct TraceJsonReader {
        struct TraceJsonReader__Class* klass;
        MonitorData* monitor;
        struct TraceJsonReader__Fields fields;
    };

} // namespace app
