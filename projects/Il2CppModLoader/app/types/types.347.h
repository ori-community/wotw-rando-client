namespace app {
struct Nullable_1_Guid___Boxed {
    struct Nullable_1_Guid___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Guid_ fields;
};

struct __declspec(align(8)) JsonSerializer__Fields {
    TypeNameHandling__Enum _typeNameHandling;
    
    TypeNameAssemblyFormatHandling__Enum _typeNameAssemblyFormatHandling;
    
    PreserveReferencesHandling__Enum _preserveReferencesHandling;
    
    ReferenceLoopHandling__Enum _referenceLoopHandling;
    
    MissingMemberHandling__Enum _missingMemberHandling;
    
    ObjectCreationHandling__Enum _objectCreationHandling;
    
    NullValueHandling__Enum _nullValueHandling;
    
    DefaultValueHandling__Enum _defaultValueHandling;
    
    ConstructorHandling__Enum _constructorHandling;
    
    MetadataPropertyHandling__Enum _metadataPropertyHandling;
    
    struct JsonConverterCollection *_converters;
    struct IContractResolver *_contractResolver;
    struct ITraceWriter *_traceWriter;
    struct IEqualityComparer *_equalityComparer;
    struct ISerializationBinder *_serializationBinder;
    struct StreamingContext _context;
    struct IReferenceResolver *_referenceResolver;
    struct Nullable_1_Newtonsoft_Json_Formatting_ _formatting;
    struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ _dateFormatHandling;
    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ _dateTimeZoneHandling;
    struct Nullable_1_Newtonsoft_Json_DateParseHandling_ _dateParseHandling;
    struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ _floatFormatHandling;
    struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ _floatParseHandling;
    struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ _stringEscapeHandling;
    struct CultureInfo *_culture;
    struct Nullable_1_Int32_ _maxDepth;
    bool _maxDepthSet;
    struct Nullable_1_Boolean_ _checkAdditionalContent;
    struct String *_dateFormatString;
    bool _dateFormatStringSet;
    struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *Error;
};

struct JsonSerializer {
    struct JsonSerializer__Class *klass;
    MonitorData *monitor;
    struct JsonSerializer__Fields fields;
};

struct __declspec(align(8)) Collection_1_Newtonsoft_Json_JsonConverter___Fields {
    struct IList_1_Newtonsoft_Json_JsonConverter_ *items;
    struct Object *_syncRoot;
};

struct Collection_1_Newtonsoft_Json_JsonConverter_ {
    struct Collection_1_Newtonsoft_Json_JsonConverter___Class *klass;
    MonitorData *monitor;
    struct Collection_1_Newtonsoft_Json_JsonConverter___Fields fields;
};

struct JsonConverterCollection__Fields {
    struct Collection_1_Newtonsoft_Json_JsonConverter___Fields _;
};

struct JsonConverterCollection {
    struct JsonConverterCollection__Class *klass;
    MonitorData *monitor;
    struct JsonConverterCollection__Fields fields;
};

struct JsonConverter__Array {
    struct JsonConverter__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct JsonConverter *vector[32];
};

struct IEnumerator_1_Newtonsoft_Json_JsonConverter_ {
    struct IEnumerator_1_Newtonsoft_Json_JsonConverter___Class *klass;
    MonitorData *monitor;
};

struct ObjectConstructor_1_System_Object___VTable {
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

struct ObjectConstructor_1_System_Object___StaticFields {
};

struct ObjectConstructor_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjectConstructor_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjectConstructor_1_System_Object___VTable vtable;
};

struct IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
};

struct IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember___StaticFields {
};

struct IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember___VTable vtable;
};

struct ReflectionObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionObject__StaticFields {
};

struct ReflectionObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionObject__VTable vtable;
};

struct JsonWriter_State__Enum__VTable {
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

struct JsonWriter_State__Enum__StaticFields {
};

struct JsonWriter_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonWriter_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonWriter_State__Enum__VTable vtable;
};

struct JsonWriter_State__Enum__Array__VTable {
};

struct JsonWriter_State__Enum__Array__StaticFields {
};

struct JsonWriter_State__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonWriter_State__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonWriter_State__Enum__Array__VTable vtable;
};

struct JsonWriter_State__Enum__Array__Array__VTable {
};

struct JsonWriter_State__Enum__Array__Array__StaticFields {
};

struct JsonWriter_State__Enum__Array__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonWriter_State__Enum__Array__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonWriter_State__Enum__Array__Array__VTable vtable;
};

struct JsonContainerType__Enum__VTable {
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

struct JsonContainerType__Enum__StaticFields {
};

struct JsonContainerType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonContainerType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonContainerType__Enum__VTable vtable;
};

struct JsonPosition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct JsonPosition__StaticFields {
    struct Char__Array *SpecialCharacters;
};

struct JsonPosition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonPosition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonPosition__VTable vtable;
};

struct JsonPosition__Array__VTable {
};

struct JsonPosition__Array__StaticFields {
};

struct JsonPosition__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonPosition__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonPosition__Array__VTable vtable;
};

struct IEnumerator_1_Newtonsoft_Json_JsonPosition___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Newtonsoft_Json_JsonPosition___StaticFields {
};

struct IEnumerator_1_Newtonsoft_Json_JsonPosition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Newtonsoft_Json_JsonPosition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Newtonsoft_Json_JsonPosition___VTable vtable;
};

struct List_1_Newtonsoft_Json_JsonPosition___VTable {
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

struct List_1_Newtonsoft_Json_JsonPosition___StaticFields {
    struct JsonPosition__Array *_emptyArray;
};

struct List_1_Newtonsoft_Json_JsonPosition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Newtonsoft_Json_JsonPosition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Newtonsoft_Json_JsonPosition___VTable vtable;
};

struct JsonToken__Enum_1__VTable {
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

struct JsonToken__Enum_1__StaticFields {
};

struct JsonToken__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonToken__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonToken__Enum_1__VTable vtable;
};

struct JsonReader_State__Enum__VTable {
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

struct JsonReader_State__Enum__StaticFields {
};

struct JsonReader_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonReader_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonReader_State__Enum__VTable vtable;
};

struct StringBuffer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StringBuffer__StaticFields {
};

struct StringBuffer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StringBuffer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StringBuffer__VTable vtable;
};

struct StringReference__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StringReference__StaticFields {
};

struct StringReference__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StringReference__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StringReference__VTable vtable;
};

struct IArrayPool_1_System_Char___VTable {
    VirtualInvokeData Rent;
    VirtualInvokeData Return;
};

struct IArrayPool_1_System_Char___StaticFields {
};

struct IArrayPool_1_System_Char___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IArrayPool_1_System_Char___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IArrayPool_1_System_Char___VTable vtable;
};

struct Nullable_1_Decimal___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Decimal___StaticFields {
};

struct Nullable_1_Decimal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Decimal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Decimal___VTable vtable;
};

struct JsonTextReader__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData get_TokenType;
    VirtualInvokeData get_Value;
    VirtualInvokeData get_ValueType;
    VirtualInvokeData get_Depth;
    VirtualInvokeData get_Path;
    VirtualInvokeData Read;
    VirtualInvokeData ReadAsInt32;
    VirtualInvokeData ReadAsString;
    VirtualInvokeData ReadAsBytes;
    VirtualInvokeData ReadAsDouble;
    VirtualInvokeData ReadAsBoolean;
    VirtualInvokeData ReadAsDecimal;
    VirtualInvokeData ReadAsDateTime;
    VirtualInvokeData ReadAsDateTimeOffset;
    VirtualInvokeData Dispose;
    VirtualInvokeData Close;
    VirtualInvokeData HasLineInfo;
    VirtualInvokeData get_LineNumber;
    VirtualInvokeData get_LinePosition;
};

struct JsonTextReader__StaticFields {
};

struct JsonTextReader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonTextReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonTextReader__VTable vtable;
};

struct JsonReader__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData get_TokenType;
    VirtualInvokeData get_Value;
    VirtualInvokeData get_ValueType;
    VirtualInvokeData get_Depth;
    VirtualInvokeData get_Path;
    VirtualInvokeData __unknown;
    VirtualInvokeData ReadAsInt32;
    VirtualInvokeData ReadAsString;
    VirtualInvokeData ReadAsBytes;
    VirtualInvokeData ReadAsDouble;
    VirtualInvokeData ReadAsBoolean;
    VirtualInvokeData ReadAsDecimal;
    VirtualInvokeData ReadAsDateTime;
    VirtualInvokeData ReadAsDateTimeOffset;
    VirtualInvokeData Dispose;
    VirtualInvokeData Close;
};

struct JsonReader__StaticFields {
};

struct JsonReader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonReader__VTable vtable;
};

struct Nullable_1_UInt32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_UInt32___StaticFields {
};

struct Nullable_1_UInt32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_UInt32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_UInt32___VTable vtable;
};

struct Nullable_1_UInt64___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_UInt64___StaticFields {
};

struct Nullable_1_UInt64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_UInt64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_UInt64___VTable vtable;
};

struct Nullable_1_Int16___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Int16___StaticFields {
};

struct Nullable_1_Int16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Int16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Int16___VTable vtable;
};

struct Nullable_1_UInt16___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_UInt16___StaticFields {
};

struct Nullable_1_UInt16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_UInt16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_UInt16___VTable vtable;
};

struct Nullable_1_Char___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Char___StaticFields {
};

struct Nullable_1_Char___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Char___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Char___VTable vtable;
};

struct Nullable_1_Byte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Byte___StaticFields {
};

struct Nullable_1_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Byte___VTable vtable;
};

struct Nullable_1_SByte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_SByte___StaticFields {
};

struct Nullable_1_SByte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_SByte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_SByte___VTable vtable;
};

struct Nullable_1_Guid___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Guid___StaticFields {
};

struct Nullable_1_Guid___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Guid___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Guid___VTable vtable;
};

struct JsonWriter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData OnStringEscapeHandlingChanged;
    VirtualInvokeData Close;
    VirtualInvokeData WriteStartObject;
    VirtualInvokeData WriteEndObject;
    VirtualInvokeData WriteStartArray;
    VirtualInvokeData WriteEndArray;
    VirtualInvokeData WriteStartConstructor;
    VirtualInvokeData WriteEndConstructor;
    VirtualInvokeData WritePropertyName;
    VirtualInvokeData WritePropertyName_1;
    VirtualInvokeData WriteEnd;
    VirtualInvokeData WriteToken;
    VirtualInvokeData WriteEnd_1;
    VirtualInvokeData WriteIndent;
    VirtualInvokeData WriteValueDelimiter;
    VirtualInvokeData WriteIndentSpace;
    VirtualInvokeData WriteNull;
    VirtualInvokeData WriteUndefined;
    VirtualInvokeData WriteRaw;
    VirtualInvokeData WriteRawValue;
    VirtualInvokeData WriteValue;
    VirtualInvokeData WriteValue_1;
    VirtualInvokeData WriteValue_2;
    VirtualInvokeData WriteValue_3;
    VirtualInvokeData WriteValue_4;
    VirtualInvokeData WriteValue_5;
    VirtualInvokeData WriteValue_6;
    VirtualInvokeData WriteValue_7;
    VirtualInvokeData WriteValue_8;
    VirtualInvokeData WriteValue_9;
    VirtualInvokeData WriteValue_10;
    VirtualInvokeData WriteValue_11;
    VirtualInvokeData WriteValue_12;
    VirtualInvokeData WriteValue_13;
    VirtualInvokeData WriteValue_14;
    VirtualInvokeData WriteValue_15;
    VirtualInvokeData WriteValue_16;
    VirtualInvokeData WriteValue_17;
    VirtualInvokeData WriteValue_18;
    VirtualInvokeData WriteValue_19;
    VirtualInvokeData WriteValue_20;
    VirtualInvokeData WriteValue_21;
    VirtualInvokeData WriteValue_22;
    VirtualInvokeData WriteValue_23;
    VirtualInvokeData WriteValue_24;
    VirtualInvokeData WriteValue_25;
    VirtualInvokeData WriteValue_26;
    VirtualInvokeData WriteValue_27;
    VirtualInvokeData WriteValue_28;
    VirtualInvokeData WriteValue_29;
    VirtualInvokeData WriteValue_30;
    VirtualInvokeData WriteValue_31;
    VirtualInvokeData WriteValue_32;
    VirtualInvokeData WriteValue_33;
    VirtualInvokeData WriteValue_34;
    VirtualInvokeData WriteValue_35;
    VirtualInvokeData WriteValue_36;
    VirtualInvokeData WriteValue_37;
    VirtualInvokeData WriteComment;
    VirtualInvokeData Dispose;
};

struct JsonWriter__StaticFields {
    struct JsonWriter_State__Enum__Array__Array *StateArray;
    struct JsonWriter_State__Enum__Array__Array *StateArrayTempate;
};

struct JsonWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonWriter__VTable vtable;
};

struct JsonConverter__Array__VTable {
};

struct JsonConverter__Array__StaticFields {
};

struct JsonConverter__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonConverter__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonConverter__Array__VTable vtable;
};

struct IEnumerator_1_Newtonsoft_Json_JsonConverter___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Newtonsoft_Json_JsonConverter___StaticFields {
};

struct IEnumerator_1_Newtonsoft_Json_JsonConverter___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Newtonsoft_Json_JsonConverter___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Newtonsoft_Json_JsonConverter___VTable vtable;
};

struct Collection_1_Newtonsoft_Json_JsonConverter___VTable {
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
    VirtualInvokeData GetEnumerator;
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
    VirtualInvokeData ClearItems;
    VirtualInvokeData InsertItem;
    VirtualInvokeData RemoveItem;
    VirtualInvokeData SetItem;
};

struct Collection_1_Newtonsoft_Json_JsonConverter___StaticFields {
};

struct Collection_1_Newtonsoft_Json_JsonConverter___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Collection_1_Newtonsoft_Json_JsonConverter___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Collection_1_Newtonsoft_Json_JsonConverter___VTable vtable;
};

struct JsonConverterCollection__VTable {
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
    VirtualInvokeData GetEnumerator;
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
    VirtualInvokeData ClearItems;
    VirtualInvokeData InsertItem;
    VirtualInvokeData RemoveItem;
    VirtualInvokeData SetItem;
};

struct JsonConverterCollection__StaticFields {
};

struct JsonConverterCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonConverterCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonConverterCollection__VTable vtable;
};

struct JsonSerializer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData add_Error;
    VirtualInvokeData remove_Error;
    VirtualInvokeData set_ReferenceResolver;
    VirtualInvokeData set_SerializationBinder;
    VirtualInvokeData get_TraceWriter;
    VirtualInvokeData set_TraceWriter;
    VirtualInvokeData set_EqualityComparer;
    VirtualInvokeData set_TypeNameHandling;
    VirtualInvokeData set_TypeNameAssemblyFormatHandling;
    VirtualInvokeData set_PreserveReferencesHandling;
    VirtualInvokeData set_ReferenceLoopHandling;
    VirtualInvokeData set_MissingMemberHandling;
    VirtualInvokeData get_NullValueHandling;
    VirtualInvokeData set_NullValueHandling;
    VirtualInvokeData set_DefaultValueHandling;
    VirtualInvokeData set_ObjectCreationHandling;
    VirtualInvokeData set_ConstructorHandling;
    VirtualInvokeData get_MetadataPropertyHandling;
    VirtualInvokeData set_MetadataPropertyHandling;
    VirtualInvokeData get_Converters;
    VirtualInvokeData get_ContractResolver;
    VirtualInvokeData set_ContractResolver;
    VirtualInvokeData get_Context;
    VirtualInvokeData set_Context;
    VirtualInvokeData get_CheckAdditionalContent;
    VirtualInvokeData DeserializeInternal;
    VirtualInvokeData SerializeInternal;
};

}
