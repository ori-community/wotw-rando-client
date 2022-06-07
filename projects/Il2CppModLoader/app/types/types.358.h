namespace app {
struct JRaw {
    struct JRaw__Class *klass;
    MonitorData *monitor;
    struct JRaw__Fields fields;
};

struct JValue__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
    VirtualInvokeData System_ICloneable_Clone;
    VirtualInvokeData System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject;
    VirtualInvokeData CloneToken;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_HasValues;
    VirtualInvokeData get_First;
    VirtualInvokeData get_Last;
    VirtualInvokeData Children;
    VirtualInvokeData WriteTo;
    VirtualInvokeData GetMetaObject;
    VirtualInvokeData Equals_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData System_IComparable_CompareTo;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_IConvertible_GetTypeCode;
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

struct JValue__StaticFields {
};

struct JValue__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JValue__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JValue__VTable vtable;
};

struct JRaw__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
    VirtualInvokeData System_ICloneable_Clone;
    VirtualInvokeData System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject;
    VirtualInvokeData CloneToken;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_HasValues;
    VirtualInvokeData get_First;
    VirtualInvokeData get_Last;
    VirtualInvokeData Children;
    VirtualInvokeData WriteTo;
    VirtualInvokeData GetMetaObject;
    VirtualInvokeData Equals_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData System_IComparable_CompareTo;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_IConvertible_GetTypeCode;
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

struct JRaw__StaticFields {
};

struct JRaw__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JRaw__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JRaw__VTable vtable;
};

struct Nullable_1_System_Numerics_BigInteger_ {
    struct BigInteger_2 value;
    bool has_value;
};

struct Nullable_1_System_Numerics_BigInteger___Boxed {
    struct Nullable_1_System_Numerics_BigInteger___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_System_Numerics_BigInteger_ fields;
};

struct Nullable_1_System_Numerics_BigInteger___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_System_Numerics_BigInteger___StaticFields {
};

struct Nullable_1_System_Numerics_BigInteger___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_System_Numerics_BigInteger___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_System_Numerics_BigInteger___VTable vtable;
};

struct __declspec(align(8)) JToken_LineInfoAnnotation__Fields {
    int32_t LineNumber;
    int32_t LinePosition;
};

struct JToken_LineInfoAnnotation {
    struct JToken_LineInfoAnnotation__Class *klass;
    MonitorData *monitor;
    struct JToken_LineInfoAnnotation__Fields fields;
};

struct JToken_LineInfoAnnotation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct JToken_LineInfoAnnotation__StaticFields {
};

struct JToken_LineInfoAnnotation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JToken_LineInfoAnnotation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JToken_LineInfoAnnotation__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_JsonToken_ {
    JsonToken__Enum_1 value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_JsonToken___Boxed {
    struct Nullable_1_Newtonsoft_Json_JsonToken___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_JsonToken_ fields;
};

struct Nullable_1_Newtonsoft_Json_JsonToken___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_JsonToken___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_JsonToken___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_JsonToken___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_JsonToken___VTable vtable;
};

struct JTokenWriter__Fields {
    struct JsonWriter__Fields _;
    struct JContainer *_token;
    struct JContainer *_parent;
    struct JValue *_value;
    struct JToken *_current;
};

struct JTokenWriter {
    struct JTokenWriter__Class *klass;
    MonitorData *monitor;
    struct JTokenWriter__Fields fields;
};

struct JTokenWriter__VTable {
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

struct JTokenWriter__StaticFields {
};

struct JTokenWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JTokenWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JTokenWriter__VTable vtable;
};

struct Nullable_1_Newtonsoft_Json_Linq_JTokenType_ {
    JTokenType__Enum value;
    
    bool has_value;
};

struct Nullable_1_Newtonsoft_Json_Linq_JTokenType___Boxed {
    struct Nullable_1_Newtonsoft_Json_Linq_JTokenType___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Newtonsoft_Json_Linq_JTokenType_ fields;
};

struct Nullable_1_Newtonsoft_Json_Linq_JTokenType___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Newtonsoft_Json_Linq_JTokenType___StaticFields {
};

struct Nullable_1_Newtonsoft_Json_Linq_JTokenType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Newtonsoft_Json_Linq_JTokenType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Newtonsoft_Json_Linq_JTokenType___VTable vtable;
};

struct DynamicProxy_1_Newtonsoft_Json_Linq_JValue_ {
    struct DynamicProxy_1_Newtonsoft_Json_Linq_JValue___Class *klass;
    MonitorData *monitor;
};

struct JValue_JValueDynamicProxy {
    struct JValue_JValueDynamicProxy__Class *klass;
    MonitorData *monitor;
};

struct DynamicProxy_1_Newtonsoft_Json_Linq_JValue___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetDynamicMemberNames;
};

struct DynamicProxy_1_Newtonsoft_Json_Linq_JValue___StaticFields {
};

struct DynamicProxy_1_Newtonsoft_Json_Linq_JValue___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicProxy_1_Newtonsoft_Json_Linq_JValue___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicProxy_1_Newtonsoft_Json_Linq_JValue___VTable vtable;
};

struct JValue_JValueDynamicProxy__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetDynamicMemberNames;
};

struct JValue_JValueDynamicProxy__StaticFields {
};

struct JValue_JValueDynamicProxy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JValue_JValueDynamicProxy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JValue_JValueDynamicProxy__VTable vtable;
};

struct BsonObjectIdConverter {
    struct BsonObjectIdConverter__Class *klass;
    MonitorData *monitor;
};

struct BsonObjectIdConverter__VTable {
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

struct BsonObjectIdConverter__StaticFields {
};

struct BsonObjectIdConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BsonObjectIdConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BsonObjectIdConverter__VTable vtable;
};

struct DataSetConverter {
    struct DataSetConverter__Class *klass;
    MonitorData *monitor;
};

struct DataSetConverter__VTable {
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

struct DataSetConverter__StaticFields {
};

struct DataSetConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataSetConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataSetConverter__VTable vtable;
};

struct DataTableConverter {
    struct DataTableConverter__Class *klass;
    MonitorData *monitor;
};

struct DataTableConverter__VTable {
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

struct DataTableConverter__StaticFields {
};

struct DataTableConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataTableConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataTableConverter__VTable vtable;
};

struct __declspec(align(8)) DiscriminatedUnionConverter_Union__Fields {
    struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_ *Cases;
    struct FSharpFunction *_TagReader_k__BackingField;
};

struct DiscriminatedUnionConverter_Union {
    struct DiscriminatedUnionConverter_Union__Class *klass;
    MonitorData *monitor;
    struct DiscriminatedUnionConverter_Union__Fields fields;
};

struct __declspec(align(8)) List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___Fields {
    struct DiscriminatedUnionConverter_UnionCase__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_ {
    struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___Class *klass;
    MonitorData *monitor;
    struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___Fields fields;
};

struct __declspec(align(8)) DiscriminatedUnionConverter_UnionCase__Fields {
    int32_t Tag;
    struct String *Name;
    struct PropertyInfo_1__Array *Fields;
    struct FSharpFunction *FieldReader;
    struct FSharpFunction *Constructor;
};

struct DiscriminatedUnionConverter_UnionCase {
    struct DiscriminatedUnionConverter_UnionCase__Class *klass;
    MonitorData *monitor;
    struct DiscriminatedUnionConverter_UnionCase__Fields fields;
};

struct DiscriminatedUnionConverter_UnionCase__Array {
    struct DiscriminatedUnionConverter_UnionCase__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DiscriminatedUnionConverter_UnionCase *vector[32];
};

struct IEnumerator_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_ {
    struct IEnumerator_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___Class *klass;
    MonitorData *monitor;
};

struct DiscriminatedUnionConverter_UnionCase__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DiscriminatedUnionConverter_UnionCase__StaticFields {
};

struct DiscriminatedUnionConverter_UnionCase__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DiscriminatedUnionConverter_UnionCase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DiscriminatedUnionConverter_UnionCase__VTable vtable;
};

struct DiscriminatedUnionConverter_UnionCase__Array__VTable {
};

struct DiscriminatedUnionConverter_UnionCase__Array__StaticFields {
};

struct DiscriminatedUnionConverter_UnionCase__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DiscriminatedUnionConverter_UnionCase__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DiscriminatedUnionConverter_UnionCase__Array__VTable vtable;
};

struct IEnumerator_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___StaticFields {
};

struct IEnumerator_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___VTable vtable;
};

struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___VTable {
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

struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___StaticFields {
    struct DiscriminatedUnionConverter_UnionCase__Array *_emptyArray;
};

struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___VTable vtable;
};

struct DiscriminatedUnionConverter_Union__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DiscriminatedUnionConverter_Union__StaticFields {
};

struct DiscriminatedUnionConverter_Union__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DiscriminatedUnionConverter_Union__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DiscriminatedUnionConverter_Union__VTable vtable;
};

struct DiscriminatedUnionConverter {
    struct DiscriminatedUnionConverter__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ThreadSafeStore_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields {
    struct ConcurrentDictionary_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ *_concurrentStore;
    struct Func_2_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ *_creator;
};

struct ThreadSafeStore_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct ThreadSafeStore_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
    struct ThreadSafeStore_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ *_tables;
    struct IEqualityComparer_1_System_Type_ *_comparer;
    bool _growLockArray;
    int32_t _budget;
};

struct ConcurrentDictionary_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct ConcurrentDictionary_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array *_buckets;
    struct Object__Array *_locks;
    struct Int32__Array *_countPerLock;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields {
    struct Type *_key;
    struct DiscriminatedUnionConverter_Union *_value;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ *_next;
    int32_t _hashcode;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields fields;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ *vector[32];
};

struct ICollection_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct ICollection_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct Type *key;
    struct DiscriminatedUnionConverter_Union *value;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Boxed {
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ fields;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array {
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
};

struct Func_2_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_ {
    struct Func_2_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class *klass;
    MonitorData *monitor;
    struct Func_2_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Fields fields;
};

struct __declspec(align(8)) ThreadSafeStore_2_System_Type_System_Type___Fields {
    struct ConcurrentDictionary_2_System_Type_System_Type_ *_concurrentStore;
    struct Func_2_Type_Type_ *_creator;
};

struct ThreadSafeStore_2_System_Type_System_Type_ {
    struct ThreadSafeStore_2_System_Type_System_Type___Class *klass;
    MonitorData *monitor;
    struct ThreadSafeStore_2_System_Type_System_Type___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_System_Type_System_Type___Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Type_ *_tables;
    struct IEqualityComparer_1_System_Type_ *_comparer;
    bool _growLockArray;
    int32_t _budget;
};

struct ConcurrentDictionary_2_System_Type_System_Type_ {
    struct ConcurrentDictionary_2_System_Type_System_Type___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_System_Type_System_Type___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Type___Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type___Array *_buckets;
    struct Object__Array *_locks;
    struct Int32__Array *_countPerLock;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Type_ {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Type___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Type___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type___Fields {
    struct Type *_key;
    struct Type *_value;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type_ *_next;
    int32_t _hashcode;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type_ {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type___Fields fields;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type___Array {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Type_ *vector[32];
};

struct KeyValuePair_2_System_Type_System_Type_ {
    struct Type *key;
    struct Type *value;
};

struct KeyValuePair_2_System_Type_System_Type___Boxed {
    struct KeyValuePair_2_System_Type_System_Type___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_System_Type_ fields;
};

struct KeyValuePair_2_System_Type_System_Type___Array {
    struct KeyValuePair_2_System_Type_System_Type___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_System_Type_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_System_Type_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_System_Type___Class *klass;
    MonitorData *monitor;
};

struct Func_2_Type_Type___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_Type_Type_ {
    struct Func_2_Type_Type___Class *klass;
    MonitorData *monitor;
    struct Func_2_Type_Type___Fields fields;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable vtable;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__VTable {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__VTable vtable;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable vtable;
};

struct ICollection_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields {
};

struct ICollection_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable vtable;
};

struct DiscriminatedUnionConverter_Union___VTable {
};

struct DiscriminatedUnionConverter_Union___StaticFields {
};

struct DiscriminatedUnionConverter_Union___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DiscriminatedUnionConverter_Union___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DiscriminatedUnionConverter_Union___VTable vtable;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields {
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable vtable;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__VTable {
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__StaticFields {
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable vtable;
};

struct IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields {
};

struct IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable vtable;
};

struct ConcurrentDictionary_2_System_Type_Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__Add;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData GetEnumerator;
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

}
