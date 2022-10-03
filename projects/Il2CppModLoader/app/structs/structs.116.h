namespace app {
    struct SchemaDeclBase {
        struct SchemaDeclBase__Class* klass;
        MonitorData* monitor;
        struct SchemaDeclBase__Fields fields;
    };

    struct SchemaElementDecl__Fields {
        struct SchemaDeclBase__Fields _;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_* attdefs;
        struct List_1_System_Xml_IDtdDefaultAttributeInfo_* defaultAttdefs;
        bool isIdDeclared;
        bool hasNonCDataAttribute;
        bool isAbstract;
        bool isNillable;
        bool hasRequiredAttribute;
        bool isNotationDeclared;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* prohibitedAttributes;
        struct ContentValidator* contentValidator;
        struct XmlSchemaAnyAttribute* anyAttribute;
        XmlSchemaDerivationMethod__Enum block;

        struct CompiledIdentityConstraint__Array* constraints;
        struct XmlSchemaElement* schemaElement;
    };

    struct SchemaElementDecl {
        struct SchemaElementDecl__Class* klass;
        MonitorData* monitor;
        struct SchemaElementDecl__Fields fields;
    };

    struct XmlSchemaDatatype {
        struct XmlSchemaDatatype__Class* klass;
        MonitorData* monitor;
    };

    enum class XmlSchemaDatatypeVariety__Enum : int32_t {
        Atomic = 0x00000000,
        List = 0x00000001,
        Union = 0x00000002,
    };

    struct XmlSchemaDatatypeVariety__Enum__Boxed {
        struct XmlSchemaDatatypeVariety__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaDatatypeVariety__Enum value;
    };

    struct __declspec(align(8)) DatatypeImplementation__Fields {
        XmlSchemaDatatypeVariety__Enum variety;

        struct RestrictionFacets* restriction;
        struct DatatypeImplementation* baseType;
        struct XmlValueConverter* valueConverter;
        struct XmlSchemaType* parentSchemaType;
    };

    struct DatatypeImplementation {
        struct DatatypeImplementation__Class* klass;
        MonitorData* monitor;
        struct DatatypeImplementation__Fields fields;
    };

    struct Datatype_anySimpleType__Fields {
        struct DatatypeImplementation__Fields _;
    };

    struct Datatype_anySimpleType {
        struct Datatype_anySimpleType__Class* klass;
        MonitorData* monitor;
        struct Datatype_anySimpleType__Fields fields;
    };

    struct Datatype_List__Fields {
        struct Datatype_anySimpleType__Fields _;
        struct DatatypeImplementation* itemType;
        int32_t minListSize;
    };

    struct Datatype_List {
        struct Datatype_List__Class* klass;
        MonitorData* monitor;
        struct Datatype_List__Fields fields;
    };

    enum class XmlSchemaWhiteSpace__Enum : int32_t {
        Preserve = 0x00000000,
        Replace = 0x00000001,
        Collapse = 0x00000002,
    };

    struct XmlSchemaWhiteSpace__Enum__Boxed {
        struct XmlSchemaWhiteSpace__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaWhiteSpace__Enum value;
    };

    enum class RestrictionFlags__Enum : int32_t {
        Length = 0x00000001,
        MinLength = 0x00000002,
        MaxLength = 0x00000004,
        Pattern = 0x00000008,
        Enumeration = 0x00000010,
        WhiteSpace = 0x00000020,
        MaxInclusive = 0x00000040,
        MaxExclusive = 0x00000080,
        MinInclusive = 0x00000100,
        MinExclusive = 0x00000200,
        TotalDigits = 0x00000400,
        FractionDigits = 0x00000800,
    };

    struct RestrictionFlags__Enum__Boxed {
        struct RestrictionFlags__Enum__Class* klass;
        MonitorData* monitor;
        RestrictionFlags__Enum value;
    };

    struct __declspec(align(8)) RestrictionFacets__Fields {
        int32_t Length;
        int32_t MinLength;
        int32_t MaxLength;
        struct ArrayList* Patterns;
        struct ArrayList* Enumeration;
        XmlSchemaWhiteSpace__Enum WhiteSpace;

        struct Object* MaxInclusive;
        struct Object* MaxExclusive;
        struct Object* MinInclusive;
        struct Object* MinExclusive;
        int32_t TotalDigits;
        int32_t FractionDigits;
        RestrictionFlags__Enum Flags;

        RestrictionFlags__Enum FixedFlags;
    };

    struct RestrictionFacets {
        struct RestrictionFacets__Class* klass;
        MonitorData* monitor;
        struct RestrictionFacets__Fields fields;
    };

    struct XmlValueConverter {
        struct XmlValueConverter__Class* klass;
        MonitorData* monitor;
    };

    enum class XmlTypeCode__Enum : int32_t {
        None = 0x00000000,
        Item = 0x00000001,
        Node = 0x00000002,
        Document = 0x00000003,
        Element = 0x00000004,
        Attribute = 0x00000005,
        Namespace = 0x00000006,
        ProcessingInstruction = 0x00000007,
        Comment = 0x00000008,
        Text = 0x00000009,
        AnyAtomicType = 0x0000000a,
        UntypedAtomic = 0x0000000b,
        String = 0x0000000c,
        Boolean = 0x0000000d,
        Decimal = 0x0000000e,
        Float = 0x0000000f,
        Double = 0x00000010,
        Duration = 0x00000011,
        DateTime = 0x00000012,
        Time = 0x00000013,
        Date = 0x00000014,
        GYearMonth = 0x00000015,
        GYear = 0x00000016,
        GMonthDay = 0x00000017,
        GDay = 0x00000018,
        GMonth = 0x00000019,
        HexBinary = 0x0000001a,
        Base64Binary = 0x0000001b,
        AnyUri = 0x0000001c,
        QName = 0x0000001d,
        Notation = 0x0000001e,
        NormalizedString = 0x0000001f,
        Token = 0x00000020,
        Language = 0x00000021,
        NmToken = 0x00000022,
        Name = 0x00000023,
        NCName = 0x00000024,
        Id = 0x00000025,
        Idref = 0x00000026,
        Entity = 0x00000027,
        Integer = 0x00000028,
        NonPositiveInteger = 0x00000029,
        NegativeInteger = 0x0000002a,
        Long = 0x0000002b,
        Int = 0x0000002c,
        Short = 0x0000002d,
        Byte = 0x0000002e,
        NonNegativeInteger = 0x0000002f,
        UnsignedLong = 0x00000030,
        UnsignedInt = 0x00000031,
        UnsignedShort = 0x00000032,
        UnsignedByte = 0x00000033,
        PositiveInteger = 0x00000034,
        YearMonthDuration = 0x00000035,
        DayTimeDuration = 0x00000036,
    };

    struct XmlTypeCode__Enum__Boxed {
        struct XmlTypeCode__Enum__Class* klass;
        MonitorData* monitor;
        XmlTypeCode__Enum value;
    };

    struct __declspec(align(8)) XmlBaseConverter__Fields {
        struct XmlSchemaType* schemaType;
        XmlTypeCode__Enum typeCode;

        struct Type* clrTypeDefault;
    };

    struct XmlBaseConverter {
        struct XmlBaseConverter__Class* klass;
        MonitorData* monitor;
        struct XmlBaseConverter__Fields fields;
    };

    struct XmlNumeric10Converter__Fields {
        struct XmlBaseConverter__Fields _;
    };

    struct XmlNumeric10Converter {
        struct XmlNumeric10Converter__Class* klass;
        MonitorData* monitor;
        struct XmlNumeric10Converter__Fields fields;
    };

    struct XmlSchemaSimpleType__Array {
        struct XmlSchemaSimpleType__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlSchemaSimpleType* vector[32];
    };

    struct FacetsChecker {
        struct FacetsChecker__Class* klass;
        MonitorData* monitor;
    };

    struct DatatypeImplementation__Array {
        struct DatatypeImplementation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DatatypeImplementation* vector[32];
    };

    struct __declspec(align(8)) DatatypeImplementation_SchemaDatatypeMap__Fields {
        struct String* name;
        struct DatatypeImplementation* type;
        int32_t parentIndex;
    };

    struct DatatypeImplementation_SchemaDatatypeMap {
        struct DatatypeImplementation_SchemaDatatypeMap__Class* klass;
        MonitorData* monitor;
        struct DatatypeImplementation_SchemaDatatypeMap__Fields fields;
    };

    struct DatatypeImplementation_SchemaDatatypeMap__Array {
        struct DatatypeImplementation_SchemaDatatypeMap__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DatatypeImplementation_SchemaDatatypeMap* vector[32];
    };

    enum class XmlTokenizedType__Enum : int32_t {
        CDATA = 0x00000000,
        ID = 0x00000001,
        IDREF = 0x00000002,
        IDREFS = 0x00000003,
        ENTITY = 0x00000004,
        ENTITIES = 0x00000005,
        NMTOKEN = 0x00000006,
        NMTOKENS = 0x00000007,
        NOTATION = 0x00000008,
        ENUMERATION = 0x00000009,
        QName = 0x0000000a,
        NCName = 0x0000000b,
        None = 0x0000000c,
    };

    struct XmlTokenizedType__Enum__Boxed {
        struct XmlTokenizedType__Enum__Class* klass;
        MonitorData* monitor;
        XmlTokenizedType__Enum value;
    };

    struct __declspec(align(8)) XmlSchemaObjectTable__Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* table;
        struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* entries;
    };

    struct XmlSchemaObjectTable {
        struct XmlSchemaObjectTable__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaObjectTable__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Xml_XmlQualifiedName_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
        int32_t hashCode;
        int32_t next;
        struct XmlQualifiedName* key;
        struct XmlSchemaObject* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ vector[32];
    };

    struct IEqualityComparer_1_System_Xml_XmlQualifiedName_ {
        struct IEqualityComparer_1_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields fields;
    };

    struct IEnumerator_1_System_Xml_XmlQualifiedName_ {
        struct IEnumerator_1_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields fields;
    };

    struct XmlSchemaObject__Array {
        struct XmlSchemaObject__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlSchemaObject* vector[32];
    };

    struct IEnumerator_1_System_Xml_Schema_XmlSchemaObject_ {
        struct IEnumerator_1_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Xml_XmlQualifiedName_ {
        struct ICollection_1_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Xml_Schema_XmlSchemaObject_ {
        struct ICollection_1_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
        struct XmlQualifiedName* key;
        struct XmlSchemaObject* value;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Boxed {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ fields;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
        struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_XmlQualifiedName_ {
        struct IEnumerable_1_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_Schema_XmlSchemaObject_ {
        struct IEnumerable_1_System_Xml_Schema_XmlSchemaObject___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___Fields {
        struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ {
        struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___Fields fields;
    };

    struct XmlSchemaObjectTable_XmlSchemaObjectEntry {
        struct XmlQualifiedName* qname;
        struct XmlSchemaObject* xso;
    };

    struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Boxed {
        struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaObjectTable_XmlSchemaObjectEntry fields;
    };

    struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Array {
        struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlSchemaObjectTable_XmlSchemaObjectEntry vector[32];
    };

    struct IEnumerator_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ {
        struct IEnumerator_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Xml_XmlQualifiedName_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
        int32_t hashCode;
        int32_t next;
        struct XmlQualifiedName* key;
        struct SchemaAttDef* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ fields;
    };

    enum class SchemaAttDef_Reserve__Enum : int32_t {
        None = 0x00000000,
        XmlSpace = 0x00000001,
        XmlLang = 0x00000002,
    };

    struct SchemaAttDef_Reserve__Enum__Boxed {
        struct SchemaAttDef_Reserve__Enum__Class* klass;
        MonitorData* monitor;
        SchemaAttDef_Reserve__Enum value;
    };

    struct SchemaAttDef__Fields {
        struct SchemaDeclBase__Fields _;
        struct String* defExpanded;
        int32_t lineNum;
        int32_t linePos;
        int32_t valueLineNum;
        int32_t valueLinePos;
        SchemaAttDef_Reserve__Enum reserved;

        bool defaultValueChecked;
        struct XmlSchemaAttribute* schemaAttribute;
    };

    struct SchemaAttDef {
        struct SchemaAttDef__Class* klass;
        MonitorData* monitor;
        struct SchemaAttDef__Fields fields;
    };

    enum class XmlSchemaForm__Enum : int32_t {
        None = 0x00000000,
        Qualified = 0x00000001,
        Unqualified = 0x00000002,
    };

    struct XmlSchemaForm__Enum__Boxed {
        struct XmlSchemaForm__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaForm__Enum value;
    };

    enum class XmlSchemaUse__Enum : int32_t {
        None = 0x00000000,
        Optional = 0x00000001,
        Prohibited = 0x00000002,
        Required = 0x00000003,
    };

    struct XmlSchemaUse__Enum__Boxed {
        struct XmlSchemaUse__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaUse__Enum value;
    };

    struct XmlSchemaAttribute__Fields {
        struct XmlSchemaAnnotated__Fields _;
        struct String* defaultValue;
        struct String* fixedValue;
        struct String* name;
        XmlSchemaForm__Enum form;

        XmlSchemaUse__Enum use;

        struct XmlQualifiedName* refName;
        struct XmlQualifiedName* typeName;
        struct XmlQualifiedName* qualifiedName;
        struct XmlSchemaSimpleType* type;
        struct XmlSchemaSimpleType* attributeType;
        struct SchemaAttDef* attDef;
    };

    struct XmlSchemaAttribute {
        struct XmlSchemaAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaAttribute__Fields fields;
    };

    struct XmlSchemaAnnotation__Fields {
        struct XmlSchemaObject__Fields _;
        struct String* id;
        struct XmlSchemaObjectCollection* items;
        struct XmlAttribute__Array* moreAttributes;
    };

    struct XmlSchemaAnnotation {
        struct XmlSchemaAnnotation__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaAnnotation__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields fields;
    };

    struct SchemaAttDef__Array {
        struct SchemaAttDef__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SchemaAttDef* vector[32];
    };

    struct IEnumerator_1_System_Xml_Schema_SchemaAttDef_ {
        struct IEnumerator_1_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Xml_Schema_SchemaAttDef_ {
        struct ICollection_1_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
        struct XmlQualifiedName* key;
        struct SchemaAttDef* value;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Boxed {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ fields;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
        struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_Schema_SchemaAttDef_ {
        struct IEnumerable_1_System_Xml_Schema_SchemaAttDef___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_System_Xml_IDtdDefaultAttributeInfo___Fields {
        struct IDtdDefaultAttributeInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Xml_IDtdDefaultAttributeInfo_ {
        struct List_1_System_Xml_IDtdDefaultAttributeInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Xml_IDtdDefaultAttributeInfo___Fields fields;
    };

    struct IDtdDefaultAttributeInfo {
        struct IDtdDefaultAttributeInfo__Class* klass;
        MonitorData* monitor;
    };

    struct IDtdDefaultAttributeInfo__Array {
        struct IDtdDefaultAttributeInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IDtdDefaultAttributeInfo* vector[32];
    };

    struct IEnumerator_1_System_Xml_IDtdDefaultAttributeInfo_ {
        struct IEnumerator_1_System_Xml_IDtdDefaultAttributeInfo___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Xml_XmlQualifiedName_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
        int32_t hashCode;
        int32_t next;
        struct XmlQualifiedName* key;
        struct XmlQualifiedName* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields fields;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
        struct XmlQualifiedName* key;
        struct XmlQualifiedName* value;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Boxed {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ fields;
    };

    struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array {
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
        struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ContentValidator__Fields {
        XmlSchemaContentType__Enum contentType;

        bool isOpen;
        bool isEmptiable;
    };

    struct ContentValidator {
        struct ContentValidator__Class* klass;
        MonitorData* monitor;
        struct ContentValidator__Fields fields;
    };

    enum class XmlSchemaContentProcessing__Enum : int32_t {
        None = 0x00000000,
        Skip = 0x00000001,
        Lax = 0x00000002,
        Strict = 0x00000003,
    };

    struct XmlSchemaContentProcessing__Enum__Boxed {
        struct XmlSchemaContentProcessing__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaContentProcessing__Enum value;
    };

    struct StateUnion {
        int32_t State;
        int32_t AllElementsRequired;
        int32_t CurPosIndex;
        int32_t NumberOfRunningPos;
    };

    struct StateUnion__Boxed {
        struct StateUnion__Class* klass;
        MonitorData* monitor;
        struct StateUnion fields;
    };

    struct __declspec(align(8)) ValidationState__Fields {
        bool IsNill;
        bool IsDefault;
        bool NeedValidateChildren;
        bool CheckRequiredAttribute;
        bool ValidationSkipped;
        XmlSchemaContentProcessing__Enum ProcessContents;

        XmlSchemaValidity__Enum Validity;

        struct SchemaElementDecl* ElementDecl;
        struct SchemaElementDecl* ElementDeclBeforeXsi;
        struct String* LocalName;
        struct String* Namespace;
        struct ConstraintStruct__Array* Constr;
        struct StateUnion CurrentState;
        bool HasMatched;
        struct BitSet__Array* CurPos;
        struct BitSet* AllElementsSet;
        struct List_1_System_Xml_Schema_RangePositionInfo_* RunningPositions;
        bool TooComplex;
    };

    struct ValidationState {
        struct ValidationState__Class* klass;
        MonitorData* monitor;
        struct ValidationState__Fields fields;
    };

    struct __declspec(align(8)) ConstraintStruct__Fields {
        struct CompiledIdentityConstraint* constraint;
        struct SelectorActiveAxis* axisSelector;
        struct ArrayList* axisFields;
        struct Hashtable* qualifiedTable;
        struct Hashtable* keyrefTable;
        int32_t tableDim;
    };

    struct ConstraintStruct {
        struct ConstraintStruct__Class* klass;
        MonitorData* monitor;
        struct ConstraintStruct__Fields fields;
    };

    enum class CompiledIdentityConstraint_ConstraintRole__Enum : int32_t {
        Unique = 0x00000000,
        Key = 0x00000001,
        Keyref = 0x00000002,
    };

    struct CompiledIdentityConstraint_ConstraintRole__Enum__Boxed {
        struct CompiledIdentityConstraint_ConstraintRole__Enum__Class* klass;
        MonitorData* monitor;
        CompiledIdentityConstraint_ConstraintRole__Enum value;
    };

    struct __declspec(align(8)) CompiledIdentityConstraint__Fields {
        struct XmlQualifiedName* name;
        CompiledIdentityConstraint_ConstraintRole__Enum role;

        struct Asttree* selector;
        struct Asttree__Array* fields;
        struct XmlQualifiedName* refer;
    };

    struct CompiledIdentityConstraint {
        struct CompiledIdentityConstraint__Class* klass;
        MonitorData* monitor;
        struct CompiledIdentityConstraint__Fields fields;
    };

    struct __declspec(align(8)) Asttree__Fields {
        struct ArrayList* fAxisArray;
        struct String* xpathexpr;
        bool isField;
        struct XmlNamespaceManager* nsmgr;
    };

    struct Asttree {
        struct Asttree__Class* klass;
        MonitorData* monitor;
        struct Asttree__Fields fields;
    };

    struct __declspec(align(8)) XmlNamespaceManager__Fields {
        struct XmlNamespaceManager_NamespaceDeclaration__Array* nsdecls;
        int32_t lastDecl;
        struct XmlNameTable* nameTable;
        int32_t scopeId;
        struct Dictionary_2_System_String_System_Int32_* hashTable;
        bool useHashtable;
        struct String* xml;
        struct String* xmlNs;
    };

    struct XmlNamespaceManager {
        struct XmlNamespaceManager__Class* klass;
        MonitorData* monitor;
        struct XmlNamespaceManager__Fields fields;
    };

    struct XmlNamespaceManager_NamespaceDeclaration {
        struct String* prefix;
        struct String* uri;
        int32_t scopeId;
        int32_t previousNsIndex;
    };

    struct XmlNamespaceManager_NamespaceDeclaration__Boxed {
        struct XmlNamespaceManager_NamespaceDeclaration__Class* klass;
        MonitorData* monitor;
        struct XmlNamespaceManager_NamespaceDeclaration fields;
    };

    struct XmlNamespaceManager_NamespaceDeclaration__Array {
        struct XmlNamespaceManager_NamespaceDeclaration__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlNamespaceManager_NamespaceDeclaration vector[32];
    };

    enum class XmlNamespaceScope__Enum : int32_t {
        All = 0x00000000,
        ExcludeXml = 0x00000001,
        Local = 0x00000002,
    };

    struct XmlNamespaceScope__Enum__Boxed {
        struct XmlNamespaceScope__Enum__Class* klass;
        MonitorData* monitor;
        XmlNamespaceScope__Enum value;
    };

    struct Asttree__Array {
        struct Asttree__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Asttree* vector[32];
    };

    struct __declspec(align(8)) ActiveAxis__Fields {
        int32_t currentDepth;
        bool isActive;
        struct Asttree* axisTree;
        struct ArrayList* axisStack;
    };

    struct ActiveAxis {
        struct ActiveAxis__Class* klass;
        MonitorData* monitor;
        struct ActiveAxis__Fields fields;
    };

    struct SelectorActiveAxis__Fields {
        struct ActiveAxis__Fields _;
        struct ConstraintStruct* cs;
        struct ArrayList* KSs;
        int32_t KSpointer;
    };

    struct SelectorActiveAxis {
        struct SelectorActiveAxis__Class* klass;
        MonitorData* monitor;
        struct SelectorActiveAxis__Fields fields;
    };

} // namespace app
