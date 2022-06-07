namespace app {
struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract_ {
    struct Type *key;
    struct JsonContract *value;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Boxed {
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract_ fields;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array {
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonContract_ {
    struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonContract___Class *klass;
    MonitorData *monitor;
};

struct Func_2_Type_Newtonsoft_Json_Serialization_JsonContract___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_Type_Newtonsoft_Json_Serialization_JsonContract_ {
    struct Func_2_Type_Newtonsoft_Json_Serialization_JsonContract___Class *klass;
    MonitorData *monitor;
    struct Func_2_Type_Newtonsoft_Json_Serialization_JsonContract___Fields fields;
};

struct JsonContainerContract__Fields {
    struct JsonContract__Fields _;
    struct JsonContract *_itemContract;
    struct JsonContract *_finalItemContract;
    struct JsonConverter *_ItemConverter_k__BackingField;
    struct Nullable_1_Boolean_ _ItemIsReference_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _ItemReferenceLoopHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _ItemTypeNameHandling_k__BackingField;
};

struct JsonContainerContract {
    struct JsonContainerContract__Class *klass;
    MonitorData *monitor;
    struct JsonContainerContract__Fields fields;
};

struct JsonObjectContract__Fields {
    struct JsonContainerContract__Fields _;
    MemberSerialization__Enum _MemberSerialization_k__BackingField;
    
    struct Nullable_1_Newtonsoft_Json_Required_ _ItemRequired_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _ItemNullValueHandling_k__BackingField;
    struct JsonPropertyCollection *_Properties_k__BackingField;
    struct ExtensionDataSetter *_ExtensionDataSetter_k__BackingField;
    struct ExtensionDataGetter *_ExtensionDataGetter_k__BackingField;
    struct Func_2_String_String_ *_ExtensionDataNameResolver_k__BackingField;
    bool ExtensionDataIsJToken;
    struct Nullable_1_Boolean_ _hasRequiredOrDefaultValueProperties;
    struct ObjectConstructor_1_System_Object_ *_overrideCreator;
    struct ObjectConstructor_1_System_Object_ *_parameterizedCreator;
    struct JsonPropertyCollection *_creatorParameters;
    struct Type *_extensionDataValueType;
};

struct JsonObjectContract {
    struct JsonObjectContract__Class *klass;
    MonitorData *monitor;
    struct JsonObjectContract__Fields fields;
};

struct __declspec(align(8)) Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Fields {
    struct IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *items;
    struct Object *_syncRoot;
};

struct Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
    struct Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Fields fields;
};

struct KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields {
    struct Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Fields _;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *dict;
    int32_t keyCount;
    int32_t threshold;
};

struct KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
    struct KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields fields;
};

struct JsonPropertyCollection__Fields {
    struct KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields _;
    struct Type *_type;
    struct List_1_Newtonsoft_Json_Serialization_JsonProperty_ *_list;
};

struct JsonPropertyCollection {
    struct JsonPropertyCollection__Class *klass;
    MonitorData *monitor;
    struct JsonPropertyCollection__Fields fields;
};

struct IList_1_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct IList_1_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) JsonProperty__Fields {
    struct Nullable_1_Newtonsoft_Json_Required_ _required;
    bool _hasExplicitDefaultValue;
    struct Object *_defaultValue;
    bool _hasGeneratedDefaultValue;
    struct String *_propertyName;
    bool _skipPropertyNameEscape;
    struct Type *_propertyType;
    struct JsonContract *_PropertyContract_k__BackingField;
    struct Type *_DeclaringType_k__BackingField;
    struct Nullable_1_Int32_ _Order_k__BackingField;
    struct String *_UnderlyingName_k__BackingField;
    struct IValueProvider *_ValueProvider_k__BackingField;
    struct IAttributeProvider *_AttributeProvider_k__BackingField;
    struct JsonConverter *_Converter_k__BackingField;
    bool _Ignored_k__BackingField;
    bool _Readable_k__BackingField;
    bool _Writable_k__BackingField;
    bool _HasMemberAttribute_k__BackingField;
    struct Nullable_1_Boolean_ _IsReference_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _NullValueHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ _DefaultValueHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _ReferenceLoopHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ _ObjectCreationHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _TypeNameHandling_k__BackingField;
    struct Predicate_1_Object_ *_ShouldSerialize_k__BackingField;
    struct Predicate_1_Object_ *_ShouldDeserialize_k__BackingField;
    struct Predicate_1_Object_ *_GetIsSpecified_k__BackingField;
    struct Action_2_Object_Object_ *_SetIsSpecified_k__BackingField;
    struct JsonConverter *_ItemConverter_k__BackingField;
    struct Nullable_1_Boolean_ _ItemIsReference_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _ItemTypeNameHandling_k__BackingField;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _ItemReferenceLoopHandling_k__BackingField;
};

struct JsonProperty {
    struct JsonProperty__Class *klass;
    MonitorData *monitor;
    struct JsonProperty__Fields fields;
};

struct IValueProvider {
    struct IValueProvider__Class *klass;
    MonitorData *monitor;
};

struct IAttributeProvider {
    struct IAttributeProvider__Class *klass;
    MonitorData *monitor;
};

struct JsonProperty__Array {
    struct JsonProperty__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct JsonProperty *vector[32];
};

struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct IEnumerator_1_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Serialization_JsonProperty___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct Dictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Serialization_JsonProperty_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct JsonProperty *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Serialization_JsonProperty___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Serialization_JsonProperty_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Serialization_JsonProperty___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Serialization_JsonProperty___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Serialization_JsonProperty_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields {
    struct Dictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields {
    struct Dictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Serialization_JsonProperty___Fields fields;
};

struct ICollection_1_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct ICollection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct String *key;
    struct JsonProperty *value;
};

struct KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Boxed {
    struct KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ fields;
};

struct KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Array {
    struct KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Newtonsoft_Json_Serialization_JsonProperty___Fields {
    struct JsonProperty__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Newtonsoft_Json_Serialization_JsonProperty_ {
    struct List_1_Newtonsoft_Json_Serialization_JsonProperty___Class *klass;
    MonitorData *monitor;
    struct List_1_Newtonsoft_Json_Serialization_JsonProperty___Fields fields;
};

struct ExtensionDataSetter__Fields {
    struct MulticastDelegate__Fields _;
};

struct ExtensionDataSetter {
    struct ExtensionDataSetter__Class *klass;
    MonitorData *monitor;
    struct ExtensionDataSetter__Fields fields;
};

struct ExtensionDataGetter__Fields {
    struct MulticastDelegate__Fields _;
};

struct ExtensionDataGetter {
    struct ExtensionDataGetter__Class *klass;
    MonitorData *monitor;
    struct ExtensionDataGetter__Fields fields;
};

struct IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ {
    struct IEnumerable_1_KeyValuePair_2_System_Object_System_Object___Class *klass;
    MonitorData *monitor;
};

struct Func_2_String_String___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_String_String_ {
    struct Func_2_String_String___Class *klass;
    MonitorData *monitor;
    struct Func_2_String_String___Fields fields;
};

struct JsonDictionaryContract__Fields {
    struct JsonContainerContract__Fields _;
    struct Func_2_String_String_ *_DictionaryKeyResolver_k__BackingField;
    struct Type *_DictionaryKeyType_k__BackingField;
    struct Type *_DictionaryValueType_k__BackingField;
    struct JsonContract *_KeyContract_k__BackingField;
    struct Type *_genericCollectionDefinitionType;
    struct Type *_genericWrapperType;
    struct ObjectConstructor_1_System_Object_ *_genericWrapperCreator;
    struct Func_1_Object_ *_genericTemporaryDictionaryCreator;
    bool _ShouldCreateWrapper_k__BackingField;
    struct ConstructorInfo *_parameterizedConstructor;
    struct ObjectConstructor_1_System_Object_ *_overrideCreator;
    struct ObjectConstructor_1_System_Object_ *_parameterizedCreator;
    bool _HasParameterizedCreator_k__BackingField;
};

struct JsonDictionaryContract {
    struct JsonDictionaryContract__Class *klass;
    MonitorData *monitor;
    struct JsonDictionaryContract__Fields fields;
};

struct JsonArrayContract__Fields {
    struct JsonContainerContract__Fields _;
    struct Type *_CollectionItemType_k__BackingField;
    bool _IsMultidimensionalArray_k__BackingField;
    struct Type *_genericCollectionDefinitionType;
    struct Type *_genericWrapperType;
    struct ObjectConstructor_1_System_Object_ *_genericWrapperCreator;
    struct Func_1_Object_ *_genericTemporaryCollectionCreator;
    bool _IsArray_k__BackingField;
    bool _ShouldCreateWrapper_k__BackingField;
    bool _CanDeserialize_k__BackingField;
    struct ConstructorInfo *_parameterizedConstructor;
    struct ObjectConstructor_1_System_Object_ *_parameterizedCreator;
    struct ObjectConstructor_1_System_Object_ *_overrideCreator;
    bool _HasParameterizedCreator_k__BackingField;
};

struct JsonArrayContract {
    struct JsonArrayContract__Class *klass;
    MonitorData *monitor;
    struct JsonArrayContract__Fields fields;
};

struct JsonPrimitiveContract__Fields {
    struct JsonContract__Fields _;
    PrimitiveTypeCode__Enum _TypeCode_k__BackingField;
    
};

struct JsonPrimitiveContract {
    struct JsonPrimitiveContract__Class *klass;
    MonitorData *monitor;
    struct JsonPrimitiveContract__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Type_Newtonsoft_Json_ReadType___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Newtonsoft_Json_ReadType___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Newtonsoft_Json_ReadType_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Newtonsoft_Json_ReadType_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_Newtonsoft_Json_ReadType_ {
    struct Dictionary_2_System_Type_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_Newtonsoft_Json_ReadType___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Newtonsoft_Json_ReadType_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    ReadType__Enum value;
    
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Newtonsoft_Json_ReadType___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Newtonsoft_Json_ReadType_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Newtonsoft_Json_ReadType___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Newtonsoft_Json_ReadType___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Newtonsoft_Json_ReadType_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Newtonsoft_Json_ReadType___Fields {
    struct Dictionary_2_System_Type_Newtonsoft_Json_ReadType_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Newtonsoft_Json_ReadType_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Newtonsoft_Json_ReadType___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Newtonsoft_Json_ReadType___Fields {
    struct Dictionary_2_System_Type_Newtonsoft_Json_ReadType_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Newtonsoft_Json_ReadType_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Newtonsoft_Json_ReadType___Fields fields;
};

struct ReadType__Enum__Array {
    struct ReadType__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    ReadType__Enum vector[32];
};

struct IEnumerator_1_Newtonsoft_Json_ReadType_ {
    struct IEnumerator_1_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Newtonsoft_Json_ReadType_ {
    struct ICollection_1_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType_ {
    struct Type *key;
    ReadType__Enum value;
    
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType___Boxed {
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType_ fields;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType___Array {
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Newtonsoft_Json_ReadType_ {
    struct IEnumerable_1_Newtonsoft_Json_ReadType___Class *klass;
    MonitorData *monitor;
};

struct JsonLinqContract__Fields {
    struct JsonContract__Fields _;
};

struct JsonLinqContract {
    struct JsonLinqContract__Class *klass;
    MonitorData *monitor;
    struct JsonLinqContract__Fields fields;
};

struct JsonISerializableContract__Fields {
    struct JsonContainerContract__Fields _;
    struct ObjectConstructor_1_System_Object_ *_ISerializableCreator_k__BackingField;
};

struct JsonISerializableContract {
    struct JsonISerializableContract__Class *klass;
    MonitorData *monitor;
    struct JsonISerializableContract__Fields fields;
};

struct JsonDynamicContract__Fields {
    struct JsonContainerContract__Fields _;
    struct JsonPropertyCollection *_Properties_k__BackingField;
    struct Func_2_String_String_ *_PropertyNameResolver_k__BackingField;
    struct ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1_ *_callSiteGetters;
    struct ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1__1 *_callSiteSetters;
};

struct JsonDynamicContract {
    struct JsonDynamicContract__Class *klass;
    MonitorData *monitor;
    struct JsonDynamicContract__Fields fields;
};

struct __declspec(align(8)) ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1___Fields {
    struct ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1_ *_concurrentStore;
    struct Func_2_String_System_Runtime_CompilerServices_CallSite_1_ *_creator;
};

struct ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1_ {
    struct ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
    struct ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1___Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1_ *_tables;
    struct IEqualityComparer_1_System_String_ *_comparer;
    bool _growLockArray;
    int32_t _budget;
};

struct ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1_ {
    struct ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1___Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1___Array *_buckets;
    struct Object__Array *_locks;
    struct Int32__Array *_countPerLock;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1_ {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1___Fields {
    struct String *_key;
    struct CallSite_1_System_Func_3_ *_value;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1_ *_next;
    int32_t _hashcode;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1_ {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1___Fields fields;
};

struct CallSite_1_System_Func_3___Fields {
    struct CallSite__Fields _;
    struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object_ *Target;
    struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object___Array *Rules;
};

struct CallSite_1_System_Func_3_ {
    struct CallSite_1_System_Func_3___Class *klass;
    MonitorData *monitor;
    struct CallSite_1_System_Func_3___Fields fields;
};

struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object_ {
    struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object___Class *klass;
    MonitorData *monitor;
    struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object___Fields fields;
};

struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object___Array {
    struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Func_3_System_Runtime_CompilerServices_CallSite_Object_Object_ *vector[32];
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1___Array {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1_ *vector[32];
};

struct ICollection_1_System_Runtime_CompilerServices_CallSite_1_ {
    struct ICollection_1_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1_ {
    struct String *key;
    struct CallSite_1_System_Func_3_ *value;
};

struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1___Boxed {
    struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1_ fields;
};

struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1___Array {
    struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Runtime_CompilerServices_CallSite_1_ {
    struct IEnumerable_1_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
};

struct Func_2_String_System_Runtime_CompilerServices_CallSite_1___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_String_System_Runtime_CompilerServices_CallSite_1_ {
    struct Func_2_String_System_Runtime_CompilerServices_CallSite_1___Class *klass;
    MonitorData *monitor;
    struct Func_2_String_System_Runtime_CompilerServices_CallSite_1___Fields fields;
};

struct __declspec(align(8)) ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Fields {
    struct ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1__1 *_concurrentStore;
    struct Func_2_String_System_Runtime_CompilerServices_CallSite_1__1 *_creator;
};

struct ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1__1 {
    struct ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
    struct ThreadSafeStore_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1__1 *_tables;
    struct IEqualityComparer_1_System_String_ *_comparer;
    bool _growLockArray;
    int32_t _budget;
};

struct ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1__1 {
    struct ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1__1__Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1__Array *_buckets;
    struct Object__Array *_locks;
    struct Int32__Array *_countPerLock;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1__1 {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Runtime_CompilerServices_CallSite_1__1__Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1__Fields {
    struct String *_key;
    struct CallSite_1_System_Func_4_ *_value;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1 *_next;
    int32_t _hashcode;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1 {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1__Fields fields;
};

struct CallSite_1_System_Func_4___Fields {
    struct CallSite__Fields _;
    struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object_ *Target;
    struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array *Rules;
};

struct CallSite_1_System_Func_4_ {
    struct CallSite_1_System_Func_4___Class *klass;
    MonitorData *monitor;
    struct CallSite_1_System_Func_4___Fields fields;
};

struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object_ {
    struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Class *klass;
    MonitorData *monitor;
    struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Fields fields;
};

struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array {
    struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object_ *vector[32];
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1__Array {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Runtime_CompilerServices_CallSite_1__1 *vector[32];
};

struct ICollection_1_System_Runtime_CompilerServices_CallSite_1__1 {
    struct ICollection_1_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1 {
    struct String *key;
    struct CallSite_1_System_Func_4_ *value;
};

struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Boxed {
    struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1 fields;
};

struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Array {
    struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1 vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1 {
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Runtime_CompilerServices_CallSite_1__1 {
    struct IEnumerable_1_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
};

struct Func_2_String_System_Runtime_CompilerServices_CallSite_1__1__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_String_System_Runtime_CompilerServices_CallSite_1__1 {
    struct Func_2_String_System_Runtime_CompilerServices_CallSite_1__1__Class *klass;
    MonitorData *monitor;
    struct Func_2_String_System_Runtime_CompilerServices_CallSite_1__1__Fields fields;
};

struct JsonStringContract__Fields {
    struct JsonPrimitiveContract__Fields _;
};

struct JsonStringContract {
    struct JsonStringContract__Class *klass;
    MonitorData *monitor;
    struct JsonStringContract__Fields fields;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable vtable;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__VTable {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__VTable vtable;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Serialization_JsonContract___StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Serialization_JsonContract___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Serialization_JsonContract___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable vtable;
};

struct ICollection_1_Newtonsoft_Json_Serialization_JsonContract___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Newtonsoft_Json_Serialization_JsonContract___StaticFields {
};

struct ICollection_1_Newtonsoft_Json_Serialization_JsonContract___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Newtonsoft_Json_Serialization_JsonContract___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Newtonsoft_Json_Serialization_JsonContract___VTable vtable;
};

struct JsonContract___VTable {
};

struct JsonContract___StaticFields {
};

struct JsonContract___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonContract___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonContract___VTable vtable;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___StaticFields {
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable vtable;
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__VTable {
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__StaticFields {
};

struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable vtable;
};

struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonContract___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonContract___StaticFields {
};

struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonContract___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonContract___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Newtonsoft_Json_Serialization_JsonContract___VTable vtable;
};

struct ConcurrentDictionary_2_System_Type_Newtonsoft_Json_Serialization_JsonContract___VTable {
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
