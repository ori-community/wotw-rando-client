namespace app {
    struct XmlTypeMapping {
        struct XmlTypeMapping__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapping__Fields fields;
    };

    struct ObjectMap_1 {
        struct ObjectMap_1__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SerializationSource__Fields {
        struct Type__Array* includedTypes;
        struct String* namspace;
        bool canBeGenerated;
    };

    struct SerializationSource {
        struct SerializationSource__Class* klass;
        MonitorData* monitor;
        struct SerializationSource__Fields fields;
    };

    enum class SchemaTypes__Enum : int32_t {
        NotSet = 0x00000000,
        Primitive = 0x00000001,
        Enum = 0x00000002,
        Array = 0x00000003,
        Class = 0x00000004,
        XmlSerializable = 0x00000005,
        XmlNode = 0x00000006,
        Void = 0x00000007,
    };

    struct SchemaTypes__Enum__Boxed {
        struct SchemaTypes__Enum__Class* klass;
        MonitorData* monitor;
        SchemaTypes__Enum value;
    };

    struct __declspec(align(8)) TypeData__Fields {
        struct Type* type;
        struct String* elementName;
        SchemaTypes__Enum sType;

        struct Type* listItemType;
        struct String* typeName;
        struct String* fullTypeName;
        struct TypeData* listItemTypeData;
        struct TypeData* mappedType;
        struct XmlSchemaPatternFacet* facet;
        struct MethodInfo_1* typeConvertor;
        bool hasPublicConstructor;
        bool nullableOverride;
    };

    struct TypeData {
        struct TypeData__Class* klass;
        MonitorData* monitor;
        struct TypeData__Fields fields;
    };

    enum class FacetType__Enum : int32_t {
        None = 0x00000000,
        Length = 0x00000001,
        MinLength = 0x00000002,
        MaxLength = 0x00000003,
        Pattern = 0x00000004,
        Whitespace = 0x00000005,
        Enumeration = 0x00000006,
        MinExclusive = 0x00000007,
        MinInclusive = 0x00000008,
        MaxExclusive = 0x00000009,
        MaxInclusive = 0x0000000a,
        TotalDigits = 0x0000000b,
        FractionDigits = 0x0000000c,
    };

    struct FacetType__Enum__Boxed {
        struct FacetType__Enum__Class* klass;
        MonitorData* monitor;
        FacetType__Enum value;
    };

    struct XmlSchemaFacet__Fields {
        struct XmlSchemaAnnotated__Fields _;
        struct String* value;
        bool isFixed;
        FacetType__Enum facetType;
    };

    struct XmlSchemaFacet {
        struct XmlSchemaFacet__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaFacet__Fields fields;
    };

    struct XmlSchemaPatternFacet__Fields {
        struct XmlSchemaFacet__Fields _;
    };

    struct XmlSchemaPatternFacet {
        struct XmlSchemaPatternFacet__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaPatternFacet__Fields fields;
    };

    struct ReflectionHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ReflectionHelper__StaticFields {
        struct ParameterModifier__Array* empty_modifiers;
    };

    struct ReflectionHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReflectionHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReflectionHelper__VTable vtable;
    };

    struct ObjectMap_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ObjectMap_1__StaticFields {
    };

    struct ObjectMap_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ObjectMap_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ObjectMap_1__VTable vtable;
    };

    struct SerializationFormat__Enum__VTable {
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

    struct SerializationFormat__Enum__StaticFields {
    };

    struct SerializationFormat__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationFormat__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationFormat__Enum__VTable vtable;
    };

    struct SerializationSource__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SerializationSource__StaticFields {
    };

    struct SerializationSource__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationSource__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationSource__VTable vtable;
    };

    struct XmlMapping__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlMapping__StaticFields {
    };

    struct XmlMapping__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlMapping__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlMapping__VTable vtable;
    };

    struct SchemaTypes__Enum__VTable {
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

    struct SchemaTypes__Enum__StaticFields {
    };

    struct SchemaTypes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SchemaTypes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SchemaTypes__Enum__VTable vtable;
    };

    struct FacetType__Enum__VTable {
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

    struct FacetType__Enum__StaticFields {
    };

    struct FacetType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FacetType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FacetType__Enum__VTable vtable;
    };

    struct XmlSchemaFacet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAdd;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnClear;
        VirtualInvokeData get_IdAttribute;
        VirtualInvokeData set_IdAttribute;
        VirtualInvokeData SetUnhandledAttributes;
        VirtualInvokeData AddAnnotation;
        VirtualInvokeData get_NameAttribute;
        VirtualInvokeData set_NameAttribute;
        VirtualInvokeData Clone;
        VirtualInvokeData get_IsFixed;
        VirtualInvokeData set_IsFixed;
    };

    struct XmlSchemaFacet__StaticFields {
    };

    struct XmlSchemaFacet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaFacet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaFacet__VTable vtable;
    };

    struct XmlSchemaPatternFacet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAdd;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnClear;
        VirtualInvokeData get_IdAttribute;
        VirtualInvokeData set_IdAttribute;
        VirtualInvokeData SetUnhandledAttributes;
        VirtualInvokeData AddAnnotation;
        VirtualInvokeData get_NameAttribute;
        VirtualInvokeData set_NameAttribute;
        VirtualInvokeData Clone;
        VirtualInvokeData get_IsFixed;
        VirtualInvokeData set_IsFixed;
    };

    struct XmlSchemaPatternFacet__StaticFields {
    };

    struct XmlSchemaPatternFacet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaPatternFacet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaPatternFacet__VTable vtable;
    };

    struct TypeData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeData__StaticFields {
        struct String__Array* keywords;
    };

    struct TypeData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeData__VTable vtable;
    };

    struct XmlTypeMapping__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapping__StaticFields {
    };

    struct XmlTypeMapping__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapping__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapping__VTable vtable;
    };

    struct XmlTypeSerializationSource__Fields {
        struct SerializationSource__Fields _;
        struct String* attributeOverridesHash;
        struct Type* type;
        struct String* rootHash;
    };

    struct XmlTypeSerializationSource {
        struct XmlTypeSerializationSource__Class* klass;
        MonitorData* monitor;
        struct XmlTypeSerializationSource__Fields fields;
    };

    struct __declspec(align(8)) XmlRootAttribute__Fields {
        struct String* dataType;
        struct String* elementName;
        bool isNullable;
        struct String* ns;
    };

    struct XmlRootAttribute {
        struct XmlRootAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlRootAttribute__Fields fields;
    };

    struct __declspec(align(8)) XmlAttributeOverrides__Fields {
        struct Hashtable* overrides;
    };

    struct XmlAttributeOverrides {
        struct XmlAttributeOverrides__Class* klass;
        MonitorData* monitor;
        struct XmlAttributeOverrides__Fields fields;
    };

    struct XmlTypeSerializationSource__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeSerializationSource__StaticFields {
    };

    struct XmlTypeSerializationSource__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeSerializationSource__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeSerializationSource__VTable vtable;
    };

    struct XmlRootAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlRootAttribute__StaticFields {
    };

    struct XmlRootAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlRootAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlRootAttribute__VTable vtable;
    };

    struct XmlAttributeOverrides__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlAttributeOverrides__StaticFields {
    };

    struct XmlAttributeOverrides__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAttributeOverrides__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAttributeOverrides__VTable vtable;
    };

    struct __declspec(align(8)) XmlTypeConvertorAttribute__Fields {
        struct String* _Method_k__BackingField;
    };

    struct XmlTypeConvertorAttribute {
        struct XmlTypeConvertorAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlTypeConvertorAttribute__Fields fields;
    };

    struct XmlTypeConvertorAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlTypeConvertorAttribute__StaticFields {
    };

    struct XmlTypeConvertorAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeConvertorAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeConvertorAttribute__VTable vtable;
    };

    struct __declspec(align(8)) TypeMember__Fields {
        struct Type* type;
        struct String* member;
    };

    struct TypeMember {
        struct TypeMember__Class* klass;
        MonitorData* monitor;
        struct TypeMember__Fields fields;
    };

    struct TypeMember__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeMember__StaticFields {
    };

    struct TypeMember__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeMember__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeMember__VTable vtable;
    };

    struct XmlAnyAttributeAttribute {
        struct XmlAnyAttributeAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct XmlAnyAttributeAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlAnyAttributeAttribute__StaticFields {
    };

    struct XmlAnyAttributeAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAnyAttributeAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAnyAttributeAttribute__VTable vtable;
    };

    struct __declspec(align(8)) XmlAnyElementAttribute__Fields {
        struct String* elementName;
        struct String* ns;
        int32_t order;
    };

    struct XmlAnyElementAttribute {
        struct XmlAnyElementAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlAnyElementAttribute__Fields fields;
    };

    struct XmlAnyElementAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlAnyElementAttribute__StaticFields {
    };

    struct XmlAnyElementAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAnyElementAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAnyElementAttribute__VTable vtable;
    };

    struct XmlAnyElementAttributes__Fields {
        struct CollectionBase__Fields _;
    };

    struct XmlAnyElementAttributes {
        struct XmlAnyElementAttributes__Class* klass;
        MonitorData* monitor;
        struct XmlAnyElementAttributes__Fields fields;
    };

    struct XmlAnyElementAttributes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData OnSet;
        VirtualInvokeData OnInsert;
        VirtualInvokeData OnClear;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnSetComplete;
        VirtualInvokeData OnInsertComplete;
        VirtualInvokeData OnClearComplete;
        VirtualInvokeData OnRemoveComplete;
    };

    struct XmlAnyElementAttributes__StaticFields {
    };

    struct XmlAnyElementAttributes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAnyElementAttributes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAnyElementAttributes__VTable vtable;
    };

    struct __declspec(align(8)) XmlArrayAttribute__Fields {
        struct String* elementName;
        XmlSchemaForm__Enum form;

        bool isNullable;
        struct String* ns;
        int32_t order;
    };

    struct XmlArrayAttribute {
        struct XmlArrayAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlArrayAttribute__Fields fields;
    };

    struct XmlArrayAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlArrayAttribute__StaticFields {
    };

    struct XmlArrayAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlArrayAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlArrayAttribute__VTable vtable;
    };

    struct __declspec(align(8)) XmlArrayItemAttribute__Fields {
        struct String* dataType;
        struct String* elementName;
        XmlSchemaForm__Enum form;

        struct String* ns;
        bool isNullable;
        bool isNullableSpecified;
        int32_t nestingLevel;
        struct Type* type;
    };

    struct XmlArrayItemAttribute {
        struct XmlArrayItemAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlArrayItemAttribute__Fields fields;
    };

    struct XmlArrayItemAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlArrayItemAttribute__StaticFields {
    };

    struct XmlArrayItemAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlArrayItemAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlArrayItemAttribute__VTable vtable;
    };

    struct XmlArrayItemAttributes__Fields {
        struct CollectionBase__Fields _;
    };

    struct XmlArrayItemAttributes {
        struct XmlArrayItemAttributes__Class* klass;
        MonitorData* monitor;
        struct XmlArrayItemAttributes__Fields fields;
    };

    struct XmlArrayItemAttributes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData OnSet;
        VirtualInvokeData OnInsert;
        VirtualInvokeData OnClear;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnSetComplete;
        VirtualInvokeData OnInsertComplete;
        VirtualInvokeData OnClearComplete;
        VirtualInvokeData OnRemoveComplete;
    };

    struct XmlArrayItemAttributes__StaticFields {
    };

    struct XmlArrayItemAttributes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlArrayItemAttributes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlArrayItemAttributes__VTable vtable;
    };

    struct __declspec(align(8)) XmlAttributeAttribute__Fields {
        struct String* attributeName;
        struct String* dataType;
        struct Type* type;
        XmlSchemaForm__Enum form;

        struct String* ns;
    };

    struct XmlAttributeAttribute {
        struct XmlAttributeAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlAttributeAttribute__Fields fields;
    };

    struct XmlAttributeAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlAttributeAttribute__StaticFields {
    };

    struct XmlAttributeAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAttributeAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAttributeAttribute__VTable vtable;
    };

    struct __declspec(align(8)) XmlAttributes__Fields {
        struct XmlAnyAttributeAttribute* xmlAnyAttribute;
        struct XmlAnyElementAttributes* xmlAnyElements;
        struct XmlArrayAttribute* xmlArray;
        struct XmlArrayItemAttributes* xmlArrayItems;
        struct XmlAttributeAttribute* xmlAttribute;
        struct XmlChoiceIdentifierAttribute* xmlChoiceIdentifier;
        struct Object* xmlDefaultValue;
        struct XmlElementAttributes* xmlElements;
        struct XmlEnumAttribute* xmlEnum;
        bool xmlIgnore;
        bool xmlns;
        struct XmlRootAttribute* xmlRoot;
        struct XmlTextAttribute* xmlText;
        struct XmlTypeAttribute* xmlType;
    };

    struct XmlAttributes {
        struct XmlAttributes__Class* klass;
        MonitorData* monitor;
        struct XmlAttributes__Fields fields;
    };

    struct __declspec(align(8)) XmlChoiceIdentifierAttribute__Fields {
        struct String* memberName;
    };

    struct XmlChoiceIdentifierAttribute {
        struct XmlChoiceIdentifierAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlChoiceIdentifierAttribute__Fields fields;
    };

    struct XmlElementAttributes__Fields {
        struct CollectionBase__Fields _;
    };

    struct XmlElementAttributes {
        struct XmlElementAttributes__Class* klass;
        MonitorData* monitor;
        struct XmlElementAttributes__Fields fields;
    };

    struct __declspec(align(8)) XmlEnumAttribute__Fields {
        struct String* name;
    };

    struct XmlEnumAttribute {
        struct XmlEnumAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlEnumAttribute__Fields fields;
    };

    struct __declspec(align(8)) XmlTextAttribute__Fields {
        struct String* dataType;
        struct Type* type;
    };

    struct XmlTextAttribute {
        struct XmlTextAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlTextAttribute__Fields fields;
    };

    struct __declspec(align(8)) XmlTypeAttribute__Fields {
        bool includeInSchema;
        struct String* ns;
        struct String* typeName;
    };

    struct XmlTypeAttribute {
        struct XmlTypeAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlTypeAttribute__Fields fields;
    };

    struct XmlChoiceIdentifierAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlChoiceIdentifierAttribute__StaticFields {
    };

    struct XmlChoiceIdentifierAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlChoiceIdentifierAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlChoiceIdentifierAttribute__VTable vtable;
    };

    struct XmlElementAttributes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData OnSet;
        VirtualInvokeData OnInsert;
        VirtualInvokeData OnClear;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnSetComplete;
        VirtualInvokeData OnInsertComplete;
        VirtualInvokeData OnClearComplete;
        VirtualInvokeData OnRemoveComplete;
    };

    struct XmlElementAttributes__StaticFields {
    };

    struct XmlElementAttributes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlElementAttributes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlElementAttributes__VTable vtable;
    };

    struct XmlEnumAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct XmlEnumAttribute__StaticFields {
    };

    struct XmlEnumAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlEnumAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlEnumAttribute__VTable vtable;
    };

} // namespace app
