namespace app {
    struct ConstraintStruct__Array {
        struct ConstraintStruct__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ConstraintStruct* vector[32];
    };

    struct __declspec(align(8)) BitSet__Fields {
        int32_t count;
        struct UInt32__Array* bits;
    };

    struct BitSet {
        struct BitSet__Class* klass;
        MonitorData* monitor;
        struct BitSet__Fields fields;
    };

    struct BitSet__Array {
        struct BitSet__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BitSet* vector[32];
    };

    struct __declspec(align(8)) List_1_System_Xml_Schema_RangePositionInfo___Fields {
        struct RangePositionInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Xml_Schema_RangePositionInfo_ {
        struct List_1_System_Xml_Schema_RangePositionInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Xml_Schema_RangePositionInfo___Fields fields;
    };

    struct RangePositionInfo {
        struct BitSet* curpos;
        struct Decimal__Array* rangeCounters;
    };

    struct RangePositionInfo__Boxed {
        struct RangePositionInfo__Class* klass;
        MonitorData* monitor;
        struct RangePositionInfo fields;
    };

    struct Decimal__Array {
        struct Decimal__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Decimal vector[32];
    };

    struct RangePositionInfo__Array {
        struct RangePositionInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RangePositionInfo vector[32];
    };

    struct IEnumerator_1_System_Xml_Schema_RangePositionInfo_ {
        struct IEnumerator_1_System_Xml_Schema_RangePositionInfo___Class* klass;
        MonitorData* monitor;
    };

    struct XmlSchemaAnyAttribute__Fields {
        struct XmlSchemaAnnotated__Fields _;
        struct String* ns;
        XmlSchemaContentProcessing__Enum processContents;

        struct NamespaceList* namespaceList;
    };

    struct XmlSchemaAnyAttribute {
        struct XmlSchemaAnyAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaAnyAttribute__Fields fields;
    };

    enum class NamespaceList_ListType__Enum : int32_t {
        Any = 0x00000000,
        Other = 0x00000001,
        Set = 0x00000002,
    };

    struct NamespaceList_ListType__Enum__Boxed {
        struct NamespaceList_ListType__Enum__Class* klass;
        MonitorData* monitor;
        NamespaceList_ListType__Enum value;
    };

    struct __declspec(align(8)) NamespaceList__Fields {
        NamespaceList_ListType__Enum type;

        struct Hashtable* set;
        struct String* targetNamespace;
    };

    struct NamespaceList {
        struct NamespaceList__Class* klass;
        MonitorData* monitor;
        struct NamespaceList__Fields fields;
    };

    struct CompiledIdentityConstraint__Array {
        struct CompiledIdentityConstraint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CompiledIdentityConstraint* vector[32];
    };

    enum class XmlSchemaParticle_Occurs__Enum : int32_t {
        None = 0x00000000,
        Min = 0x00000001,
        Max = 0x00000002,
    };

    struct XmlSchemaParticle_Occurs__Enum__Boxed {
        struct XmlSchemaParticle_Occurs__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaParticle_Occurs__Enum value;
    };

    struct XmlSchemaParticle__Fields {
        struct XmlSchemaAnnotated__Fields _;
        struct Decimal minOccurs;
        struct Decimal maxOccurs;
        XmlSchemaParticle_Occurs__Enum flags;
    };

    struct XmlSchemaParticle {
        struct XmlSchemaParticle__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaParticle__Fields fields;
    };

    struct XmlSchemaElement__Fields {
        struct XmlSchemaParticle__Fields _;
        bool isAbstract;
        bool hasAbstractAttribute;
        bool isNillable;
        bool hasNillableAttribute;
        bool isLocalTypeDerivationChecked;
        XmlSchemaDerivationMethod__Enum block;

        XmlSchemaDerivationMethod__Enum final_1;

        XmlSchemaForm__Enum form;

        struct String* defaultValue;
        struct String* fixedValue;
        struct String* name;
        struct XmlQualifiedName* refName;
        struct XmlQualifiedName* substitutionGroup;
        struct XmlQualifiedName* typeName;
        struct XmlSchemaType* type;
        struct XmlQualifiedName* qualifiedName;
        struct XmlSchemaType* elementType;
        XmlSchemaDerivationMethod__Enum blockResolved;

        XmlSchemaDerivationMethod__Enum finalResolved;

        struct XmlSchemaObjectCollection* constraints;
        struct SchemaElementDecl* elementDecl;
    };

    struct XmlSchemaElement {
        struct XmlSchemaElement__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaElement__Fields fields;
    };

    struct IDtdAttributeInfo {
        struct IDtdAttributeInfo__Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_IDtdDefaultAttributeInfo_ {
        struct IEnumerable_1_System_Xml_IDtdDefaultAttributeInfo___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields fields;
    };

    struct SchemaElementDecl__Array {
        struct SchemaElementDecl__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SchemaElementDecl* vector[32];
    };

    struct IEnumerator_1_System_Xml_Schema_SchemaElementDecl_ {
        struct IEnumerator_1_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Xml_Schema_SchemaElementDecl_ {
        struct ICollection_1_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
        struct XmlQualifiedName* key;
        struct SchemaElementDecl* value;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Boxed {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ fields;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
        struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_Schema_SchemaElementDecl_ {
        struct IEnumerable_1_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Xml_XmlQualifiedName_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
        int32_t hashCode;
        int32_t next;
        struct XmlQualifiedName* key;
        struct SchemaEntity* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ fields;
    };

    struct __declspec(align(8)) SchemaEntity__Fields {
        struct XmlQualifiedName* qname;
        struct String* url;
        struct String* pubid;
        struct String* text;
        struct XmlQualifiedName* ndata;
        int32_t lineNumber;
        int32_t linePosition;
        bool isParameter;
        bool isExternal;
        bool parsingInProgress;
        bool isDeclaredInExternal;
        struct String* baseURI;
        struct String* declaredURI;
    };

    struct SchemaEntity {
        struct SchemaEntity__Class* klass;
        MonitorData* monitor;
        struct SchemaEntity__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields fields;
    };

    struct SchemaEntity__Array {
        struct SchemaEntity__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SchemaEntity* vector[32];
    };

    struct IEnumerator_1_System_Xml_Schema_SchemaEntity_ {
        struct IEnumerator_1_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Xml_Schema_SchemaEntity_ {
        struct ICollection_1_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
        struct XmlQualifiedName* key;
        struct SchemaEntity* value;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Boxed {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ fields;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
        struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_Schema_SchemaEntity_ {
        struct IEnumerable_1_System_Xml_Schema_SchemaEntity___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Boolean___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Boolean_ {
        struct Dictionary_2_System_String_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Boolean___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        bool value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean___Fields {
        struct Dictionary_2_System_String_System_Boolean_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean___Fields {
        struct Dictionary_2_System_String_System_Boolean_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean___Fields fields;
    };

    struct IEnumerator_1_System_Boolean_ {
        struct IEnumerator_1_System_Boolean___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Boolean_ {
        struct ICollection_1_System_Boolean___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_System_Boolean_ {
        struct String* key;
        bool value;
    };

    struct KeyValuePair_2_System_String_System_Boolean___Boxed {
        struct KeyValuePair_2_System_String_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Boolean_ fields;
    };

    struct KeyValuePair_2_System_String_System_Boolean___Array {
        struct KeyValuePair_2_System_String_System_Boolean___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Boolean_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Boolean_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Boolean___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Boolean_ {
        struct IEnumerable_1_System_Boolean___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Xml_Schema_SchemaNotation___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_ {
        struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct SchemaNotation* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation_ fields;
    };

    struct __declspec(align(8)) SchemaNotation__Fields {
        struct XmlQualifiedName* name;
        struct String* systemLiteral;
        struct String* pubid;
    };

    struct SchemaNotation {
        struct SchemaNotation__Class* klass;
        MonitorData* monitor;
        struct SchemaNotation__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation___Fields {
        struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation___Fields {
        struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation___Fields fields;
    };

    struct SchemaNotation__Array {
        struct SchemaNotation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SchemaNotation* vector[32];
    };

    struct IEnumerator_1_System_Xml_Schema_SchemaNotation_ {
        struct IEnumerator_1_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Xml_Schema_SchemaNotation_ {
        struct ICollection_1_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation_ {
        struct String* key;
        struct SchemaNotation* value;
    };

    struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Boxed {
        struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation_ fields;
    };

    struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Array {
        struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_Schema_SchemaNotation_ {
        struct IEnumerable_1_System_Xml_Schema_SchemaNotation___Class* klass;
        MonitorData* monitor;
    };

    struct IDtdAttributeListInfo {
        struct IDtdAttributeListInfo__Class* klass;
        MonitorData* monitor;
    };

    struct IDtdEntityInfo {
        struct IDtdEntityInfo__Class* klass;
        MonitorData* monitor;
    };

    struct XmlSchema__Fields {
        struct XmlSchemaObject__Fields _;
        XmlSchemaForm__Enum attributeFormDefault;

        XmlSchemaForm__Enum elementFormDefault;

        XmlSchemaDerivationMethod__Enum blockDefault;

        XmlSchemaDerivationMethod__Enum finalDefault;

        struct String* targetNs;
        struct String* version;
        struct XmlSchemaObjectCollection* includes;
        struct XmlSchemaObjectCollection* items;
        struct String* id;
        struct XmlAttribute__Array* moreAttributes;
        bool isCompiled;
        bool isCompiledBySet;
        bool isPreprocessed;
        bool isRedefined;
        int32_t errorCount;
        struct XmlSchemaObjectTable* attributes;
        struct XmlSchemaObjectTable* attributeGroups;
        struct XmlSchemaObjectTable* elements;
        struct XmlSchemaObjectTable* types;
        struct XmlSchemaObjectTable* groups;
        struct XmlSchemaObjectTable* notations;
        struct XmlSchemaObjectTable* identityConstraints;
        struct ArrayList* importedSchemas;
        struct ArrayList* importedNamespaces;
        int32_t schemaId;
        struct Uri* baseUri;
        bool isChameleon;
        struct Hashtable* ids;
        struct XmlDocument* document;
    };

    struct XmlSchema {
        struct XmlSchema__Class* klass;
        MonitorData* monitor;
        struct XmlSchema__Fields fields;
    };

    struct __declspec(align(8)) XmlSchemaCompilationSettings__Fields {
        bool enableUpaCheck;
    };

    struct XmlSchemaCompilationSettings {
        struct XmlSchemaCompilationSettings__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaCompilationSettings__Fields fields;
    };

    struct XmlSqlBinaryReader_SymbolTables {
        struct String__Array* symtable;
        int32_t symCount;
        struct XmlSqlBinaryReader_QName__Array* qnametable;
        int32_t qnameCount;
    };

    struct XmlSqlBinaryReader_SymbolTables__Boxed {
        struct XmlSqlBinaryReader_SymbolTables__Class* klass;
        MonitorData* monitor;
        struct XmlSqlBinaryReader_SymbolTables fields;
    };

    enum class XmlSqlBinaryReader_ScanState__Enum : int32_t {
        Doc = 0x00000000,
        XmlText = 0x00000001,
        Attr = 0x00000002,
        AttrVal = 0x00000003,
        AttrValPseudoValue = 0x00000004,
        Init = 0x00000005,
        Error = 0x00000006,
        EOF = 0x00000007,
        Closed = 0x00000008,
    };

    struct XmlSqlBinaryReader_ScanState__Enum__Boxed {
        struct XmlSqlBinaryReader_ScanState__Enum__Class* klass;
        MonitorData* monitor;
        XmlSqlBinaryReader_ScanState__Enum value;
    };

    enum class BinXmlToken__Enum : int32_t {
        Error = 0x00000000,
        NotImpl = -2,
        EOF = -1,
        XmlDecl = 0x000000fe,
        Encoding = 0x000000fd,
        DocType = 0x000000fc,
        System = 0x000000fb,
        Public = 0x000000fa,
        Subset = 0x000000f9,
        Element = 0x000000f8,
        EndElem = 0x000000f7,
        Attr = 0x000000f6,
        EndAttrs = 0x000000f5,
        PI = 0x000000f4,
        Comment = 0x000000f3,
        CData = 0x000000f2,
        EndCData = 0x000000f1,
        Name = 0x000000f0,
        QName = 0x000000ef,
        XmlText = 0x000000ed,
        Nest = 0x000000ec,
        EndNest = 0x000000eb,
        Extn = 0x000000ea,
        NmFlush = 0x000000e9,
        SQL_BIT = 0x00000006,
        SQL_TINYINT = 0x00000007,
        SQL_SMALLINT = 0x00000001,
        SQL_INT = 0x00000002,
        SQL_BIGINT = 0x00000008,
        SQL_REAL = 0x00000003,
        SQL_FLOAT = 0x00000004,
        SQL_MONEY = 0x00000005,
        SQL_SMALLMONEY = 0x00000014,
        SQL_DATETIME = 0x00000012,
        SQL_SMALLDATETIME = 0x00000013,
        SQL_DECIMAL = 0x0000000a,
        SQL_NUMERIC = 0x0000000b,
        SQL_UUID = 0x00000009,
        SQL_VARBINARY = 0x0000000f,
        SQL_BINARY = 0x0000000c,
        SQL_IMAGE = 0x00000017,
        SQL_CHAR = 0x0000000d,
        SQL_VARCHAR = 0x00000010,
        SQL_TEXT = 0x00000016,
        SQL_NVARCHAR = 0x00000011,
        SQL_NCHAR = 0x0000000e,
        SQL_NTEXT = 0x00000018,
        SQL_UDT = 0x0000001b,
        XSD_KATMAI_DATE = 0x0000007f,
        XSD_KATMAI_DATETIME = 0x0000007e,
        XSD_KATMAI_TIME = 0x0000007d,
        XSD_KATMAI_DATEOFFSET = 0x0000007c,
        XSD_KATMAI_DATETIMEOFFSET = 0x0000007b,
        XSD_KATMAI_TIMEOFFSET = 0x0000007a,
        XSD_BOOLEAN = 0x00000086,
        XSD_TIME = 0x00000081,
        XSD_DATETIME = 0x00000082,
        XSD_DATE = 0x00000083,
        XSD_BINHEX = 0x00000084,
        XSD_BASE64 = 0x00000085,
        XSD_DECIMAL = 0x00000087,
        XSD_BYTE = 0x00000088,
        XSD_UNSIGNEDSHORT = 0x00000089,
        XSD_UNSIGNEDINT = 0x0000008a,
        XSD_UNSIGNEDLONG = 0x0000008b,
        XSD_QNAME = 0x0000008c,
    };

    struct BinXmlToken__Enum__Boxed {
        struct BinXmlToken__Enum__Class* klass;
        MonitorData* monitor;
        BinXmlToken__Enum value;
    };

    struct XmlSqlBinaryReader_QName {
        struct String* prefix;
        struct String* localname;
        struct String* namespaceUri;
    };

    struct XmlSqlBinaryReader_QName__Boxed {
        struct XmlSqlBinaryReader_QName__Class* klass;
        MonitorData* monitor;
        struct XmlSqlBinaryReader_QName fields;
    };

    struct __declspec(align(8)) XmlSqlBinaryReader__Fields {
        struct Stream* inStrm;
        struct Byte__Array* data;
        int32_t pos;
        int32_t mark;
        int32_t end;
        int64_t offset;
        bool eof;
        bool sniffed;
        bool isEmpty;
        int32_t docState;
        struct XmlSqlBinaryReader_SymbolTables symbolTables;
        struct XmlNameTable* xnt;
        bool xntFromSettings;
        struct String* xml;
        struct String* xmlns;
        struct String* nsxmlns;
        struct String* baseUri;
        XmlSqlBinaryReader_ScanState__Enum state;

        XmlNodeType__Enum nodetype;

        BinXmlToken__Enum token;

        int32_t attrIndex;
        struct XmlSqlBinaryReader_QName qnameOther;
        struct XmlSqlBinaryReader_QName qnameElement;
        XmlNodeType__Enum parentNodeType;

        struct XmlSqlBinaryReader_ElemInfo__Array* elementStack;
        int32_t elemDepth;
        struct XmlSqlBinaryReader_AttrInfo__Array* attributes;
        struct Int32__Array* attrHashTbl;
        int32_t attrCount;
        int32_t posAfterAttrs;
        bool xmlspacePreserve;
        int32_t tokLen;
        int32_t tokDataPos;
        bool hasTypedValue;
        struct Type* valueType;
        struct String* stringValue;
        struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_* namespaces;
        struct XmlSqlBinaryReader_NestedBinXml* prevNameInfo;
        struct XmlReader* textXmlReader;
        bool closeInput;
        bool checkCharacters;
        bool ignoreWhitespace;
        bool ignorePIs;
        bool ignoreComments;
        DtdProcessing__Enum dtdProcessing;

        struct SecureStringHasher* hasher;
        struct XmlCharType xmlCharType;
        struct Encoding* unicode;
        uint8_t version;
    };

    struct XmlSqlBinaryReader {
        struct XmlSqlBinaryReader__Class* klass;
        MonitorData* monitor;
        struct XmlSqlBinaryReader__Fields fields;
    };

    enum class ReadState__Enum_1 : int32_t {
        Initial = 0x00000000,
        Interactive = 0x00000001,
        Error = 0x00000002,
        EndOfFile = 0x00000003,
        Closed = 0x00000004,
    };

    struct ReadState__Enum_1__Boxed {
        struct ReadState__Enum_1__Class* klass;
        MonitorData* monitor;
        ReadState__Enum_1 value;
    };

    struct ReadState__Enum_1__Array {
        struct ReadState__Enum_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        ReadState__Enum_1 vector[32];
    };

    struct XmlSqlBinaryReader_QName__Array {
        struct XmlSqlBinaryReader_QName__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlSqlBinaryReader_QName vector[32];
    };

    enum class XmlSpace__Enum : int32_t {
        None = 0x00000000,
        Default = 0x00000001,
        Preserve = 0x00000002,
    };

    struct XmlSpace__Enum__Boxed {
        struct XmlSpace__Enum__Class* klass;
        MonitorData* monitor;
        XmlSpace__Enum value;
    };

    struct XmlSqlBinaryReader_ElemInfo {
        struct XmlSqlBinaryReader_QName name;
        struct String* xmlLang;
        XmlSpace__Enum xmlSpace;

        bool xmlspacePreserve;
        struct XmlSqlBinaryReader_NamespaceDecl* nsdecls;
    };

    struct XmlSqlBinaryReader_ElemInfo__Boxed {
        struct XmlSqlBinaryReader_ElemInfo__Class* klass;
        MonitorData* monitor;
        struct XmlSqlBinaryReader_ElemInfo fields;
    };

    struct __declspec(align(8)) XmlSqlBinaryReader_NamespaceDecl__Fields {
        struct String* prefix;
        struct String* uri;
        struct XmlSqlBinaryReader_NamespaceDecl* scopeLink;
        struct XmlSqlBinaryReader_NamespaceDecl* prevLink;
        int32_t scope;
        bool implied;
    };

    struct XmlSqlBinaryReader_NamespaceDecl {
        struct XmlSqlBinaryReader_NamespaceDecl__Class* klass;
        MonitorData* monitor;
        struct XmlSqlBinaryReader_NamespaceDecl__Fields fields;
    };

    struct XmlSqlBinaryReader_ElemInfo__Array {
        struct XmlSqlBinaryReader_ElemInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlSqlBinaryReader_ElemInfo vector[32];
    };

    struct XmlSqlBinaryReader_AttrInfo {
        struct XmlSqlBinaryReader_QName name;
        struct String* val;
        int32_t contentPos;
        int32_t hashCode;
        int32_t prevHash;
    };

    struct XmlSqlBinaryReader_AttrInfo__Boxed {
        struct XmlSqlBinaryReader_AttrInfo__Class* klass;
        MonitorData* monitor;
        struct XmlSqlBinaryReader_AttrInfo fields;
    };

    struct XmlSqlBinaryReader_AttrInfo__Array {
        struct XmlSqlBinaryReader_AttrInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlSqlBinaryReader_AttrInfo vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct XmlSqlBinaryReader_NamespaceDecl* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ vector[32];
    };

} // namespace app
