namespace app {
    struct __declspec(align(8)) EnumMap__Fields {
        struct EnumMap_EnumMapMember__Array* _members;
        bool _isFlags;
        struct String__Array* _enumNames;
        struct String__Array* _xmlNames;
        struct Int64__Array* _values;
    };

    struct EnumMap {
        struct EnumMap__Class* klass;
        MonitorData* monitor;
        struct EnumMap__Fields fields;
    };

    struct __declspec(align(8)) EnumMap_EnumMapMember__Fields {
        struct String* _xmlName;
        struct String* _enumName;
        int64_t _value;
    };

    struct EnumMap_EnumMapMember {
        struct EnumMap_EnumMapMember__Class* klass;
        MonitorData* monitor;
        struct EnumMap_EnumMapMember__Fields fields;
    };

    struct EnumMap_EnumMapMember__Array {
        struct EnumMap_EnumMapMember__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EnumMap_EnumMapMember* vector[32];
    };

    struct EnumMap_EnumMapMember__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnumMap_EnumMapMember__StaticFields {
    };

    struct EnumMap_EnumMapMember__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnumMap_EnumMapMember__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnumMap_EnumMapMember__VTable vtable;
    };

    struct EnumMap_EnumMapMember__Array__VTable {
    };

    struct EnumMap_EnumMapMember__Array__StaticFields {
    };

    struct EnumMap_EnumMapMember__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnumMap_EnumMapMember__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnumMap_EnumMapMember__Array__VTable vtable;
    };

    struct EnumMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnumMap__StaticFields {
    };

    struct EnumMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnumMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnumMap__VTable vtable;
    };

    struct __declspec(align(8)) AxisElement__Fields {
        struct DoubleLinkAxis* curNode;
        int32_t rootDepth;
        int32_t curDepth;
        bool isMatch;
    };

    struct AxisElement {
        struct AxisElement__Class* klass;
        MonitorData* monitor;
        struct AxisElement__Fields fields;
    };

    struct DoubleLinkAxis__Fields {
        struct Axis__Fields _;
        struct Axis* next;
    };

    struct DoubleLinkAxis {
        struct DoubleLinkAxis__Class* klass;
        MonitorData* monitor;
        struct DoubleLinkAxis__Fields fields;
    };

    struct DoubleLinkAxis__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Type;
        VirtualInvokeData get_ReturnType;
    };

    struct DoubleLinkAxis__StaticFields {
    };

    struct DoubleLinkAxis__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DoubleLinkAxis__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DoubleLinkAxis__VTable vtable;
    };

    struct AxisElement__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AxisElement__StaticFields {
    };

    struct AxisElement__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AxisElement__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AxisElement__VTable vtable;
    };

    struct __declspec(align(8)) ForwardAxis__Fields {
        struct DoubleLinkAxis* topNode;
        struct DoubleLinkAxis* rootNode;
        bool isAttribute;
        bool isDss;
        bool isSelfAxis;
    };

    struct ForwardAxis {
        struct ForwardAxis__Class* klass;
        MonitorData* monitor;
        struct ForwardAxis__Fields fields;
    };

    struct ForwardAxis__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ForwardAxis__StaticFields {
    };

    struct ForwardAxis__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ForwardAxis__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ForwardAxis__VTable vtable;
    };

    struct __declspec(align(8)) AxisStack__Fields {
        struct ArrayList* stack;
        struct ForwardAxis* subtree;
        struct ActiveAxis* parent;
    };

    struct AxisStack {
        struct AxisStack__Class* klass;
        MonitorData* monitor;
        struct AxisStack__Fields fields;
    };

    struct AxisStack__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AxisStack__StaticFields {
    };

    struct AxisStack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AxisStack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AxisStack__VTable vtable;
    };

    struct AutoValidator__Fields {
        struct BaseValidator__Fields _;
    };

    struct AutoValidator {
        struct AutoValidator__Class* klass;
        MonitorData* monitor;
        struct AutoValidator__Fields fields;
    };

    struct AutoValidator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_PreserveWhitespace;
        VirtualInvokeData Validate;
        VirtualInvokeData CompleteValidation;
        VirtualInvokeData FindId;
    };

    struct AutoValidator__StaticFields {
    };

    struct AutoValidator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AutoValidator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AutoValidator__VTable vtable;
    };

    struct __declspec(align(8)) BaseProcessor__Fields {
        struct XmlNameTable* nameTable;
        struct SchemaNames* schemaNames;
        struct ValidationEventHandler* eventHandler;
        struct XmlSchemaCompilationSettings* compilationSettings;
        int32_t errorCount;
        struct String* NsXml;
    };

    struct BaseProcessor {
        struct BaseProcessor__Class* klass;
        MonitorData* monitor;
        struct BaseProcessor__Fields fields;
    };

    struct BaseProcessor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BaseProcessor__StaticFields {
    };

    struct BaseProcessor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaseProcessor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaseProcessor__VTable vtable;
    };

    struct __declspec(align(8)) ChameleonKey__Fields {
        struct String* targetNS;
        struct Uri* chameleonLocation;
        struct XmlSchema* originalSchema;
        int32_t hashCode;
    };

    struct ChameleonKey {
        struct ChameleonKey__Class* klass;
        MonitorData* monitor;
        struct ChameleonKey__Fields fields;
    };

    struct ChameleonKey__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChameleonKey__StaticFields {
    };

    struct ChameleonKey__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChameleonKey__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChameleonKey__VTable vtable;
    };

    struct XmlSchemaIdentityConstraint__Fields {
        struct XmlSchemaAnnotated__Fields _;
        struct String* name;
        struct XmlSchemaXPath* selector;
        struct XmlSchemaObjectCollection* fields;
        struct XmlQualifiedName* qualifiedName;
        struct CompiledIdentityConstraint* compiledConstraint;
    };

    struct XmlSchemaIdentityConstraint {
        struct XmlSchemaIdentityConstraint__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaIdentityConstraint__Fields fields;
    };

    struct XmlSchemaXPath__Fields {
        struct XmlSchemaAnnotated__Fields _;
        struct String* xpath;
    };

    struct XmlSchemaXPath {
        struct XmlSchemaXPath__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaXPath__Fields fields;
    };

    struct XmlSchemaXPath__VTable {
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
    };

    struct XmlSchemaXPath__StaticFields {
    };

    struct XmlSchemaXPath__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaXPath__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaXPath__VTable vtable;
    };

    struct XmlSchemaIdentityConstraint__VTable {
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
    };

    struct XmlSchemaIdentityConstraint__StaticFields {
    };

    struct XmlSchemaIdentityConstraint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaIdentityConstraint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaIdentityConstraint__VTable vtable;
    };

    struct LocatedActiveAxis__Fields {
        struct ActiveAxis__Fields _;
        int32_t column;
        bool isMatched;
        struct KeySequence* Ks;
    };

    struct LocatedActiveAxis {
        struct LocatedActiveAxis__Class* klass;
        MonitorData* monitor;
        struct LocatedActiveAxis__Fields fields;
    };

    struct __declspec(align(8)) KeySequence__Fields {
        struct TypedObject__Array* ks;
        int32_t dim;
        int32_t hashcode;
        int32_t posline;
        int32_t poscol;
    };

    struct KeySequence {
        struct KeySequence__Class* klass;
        MonitorData* monitor;
        struct KeySequence__Fields fields;
    };

    struct __declspec(align(8)) TypedObject__Fields {
        struct TypedObject_DecimalStruct* dstruct;
        struct Object* ovalue;
        struct String* svalue;
        struct XmlSchemaDatatype* xsdtype;
        int32_t dim;
        bool isList;
    };

    struct TypedObject {
        struct TypedObject__Class* klass;
        MonitorData* monitor;
        struct TypedObject__Fields fields;
    };

    struct __declspec(align(8)) TypedObject_DecimalStruct__Fields {
        bool isDecimal;
        struct Decimal__Array* dvalue;
    };

    struct TypedObject_DecimalStruct {
        struct TypedObject_DecimalStruct__Class* klass;
        MonitorData* monitor;
        struct TypedObject_DecimalStruct__Fields fields;
    };

    struct TypedObject__Array {
        struct TypedObject__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TypedObject* vector[32];
    };

    struct TypedObject_DecimalStruct__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypedObject_DecimalStruct__StaticFields {
    };

    struct TypedObject_DecimalStruct__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypedObject_DecimalStruct__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypedObject_DecimalStruct__VTable vtable;
    };

    struct TypedObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypedObject__StaticFields {
    };

    struct TypedObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypedObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypedObject__VTable vtable;
    };

    struct TypedObject__Array__VTable {
    };

    struct TypedObject__Array__StaticFields {
    };

    struct TypedObject__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypedObject__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypedObject__Array__VTable vtable;
    };

    struct KeySequence__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeySequence__StaticFields {
    };

    struct KeySequence__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeySequence__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeySequence__VTable vtable;
    };

    struct LocatedActiveAxis__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData EndElement;
    };

    struct LocatedActiveAxis__StaticFields {
    };

    struct LocatedActiveAxis__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocatedActiveAxis__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocatedActiveAxis__VTable vtable;
    };

    struct __declspec(align(8)) KSStruct__Fields {
        int32_t depth;
        struct KeySequence* ks;
        struct LocatedActiveAxis__Array* fields;
    };

    struct KSStruct {
        struct KSStruct__Class* klass;
        MonitorData* monitor;
        struct KSStruct__Fields fields;
    };

    struct LocatedActiveAxis__Array {
        struct LocatedActiveAxis__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LocatedActiveAxis* vector[32];
    };

    struct LocatedActiveAxis__Array__VTable {
    };

    struct LocatedActiveAxis__Array__StaticFields {
    };

    struct LocatedActiveAxis__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocatedActiveAxis__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocatedActiveAxis__Array__VTable vtable;
    };

    struct KSStruct__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KSStruct__StaticFields {
    };

    struct KSStruct__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KSStruct__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KSStruct__VTable vtable;
    };

    struct UpaException__Fields {
        struct Exception__Fields _;
        struct Object* particle1;
        struct Object* particle2;
    };

    struct UpaException {
        struct UpaException__Class* klass;
        MonitorData* monitor;
        struct UpaException__Fields fields;
    };

    struct UpaException__VTable {
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

    struct UpaException__StaticFields {
    };

    struct UpaException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UpaException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UpaException__VTable vtable;
    };

    struct Position {
        int32_t symbol;
        struct Object* particle;
    };

    struct Position__Boxed {
        struct Position__Class* klass;
        MonitorData* monitor;
        struct Position fields;
    };

    struct Position__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Position__StaticFields {
    };

    struct Position__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Position__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Position__VTable vtable;
    };

    struct __declspec(align(8)) NamespaceListNode__Fields {
        struct NamespaceList* namespaceList;
        struct Object* particle;
    };

    struct NamespaceListNode {
        struct NamespaceListNode__Class* klass;
        MonitorData* monitor;
        struct NamespaceListNode__Fields fields;
    };

    struct NamespaceListNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ExpandTree;
        VirtualInvokeData ConstructPos;
        VirtualInvokeData get_IsNullable;
        VirtualInvokeData get_IsRangeNode;
        VirtualInvokeData GetResolvedSymbols;
    };

    struct NamespaceListNode__StaticFields {
    };

    struct NamespaceListNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NamespaceListNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NamespaceListNode__VTable vtable;
    };

    struct SequenceNode_SequenceConstructPosContext {
        struct SequenceNode* this_;
        struct BitSet* firstpos;
        struct BitSet* lastpos;
        struct BitSet* lastposLeft;
        struct BitSet* firstposRight;
    };

    struct SequenceNode_SequenceConstructPosContext__Boxed {
        struct SequenceNode_SequenceConstructPosContext__Class* klass;
        MonitorData* monitor;
        struct SequenceNode_SequenceConstructPosContext fields;
    };

    struct SequenceNode_SequenceConstructPosContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SequenceNode_SequenceConstructPosContext__StaticFields {
    };

    struct SequenceNode_SequenceConstructPosContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SequenceNode_SequenceConstructPosContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SequenceNode_SequenceConstructPosContext__VTable vtable;
    };

    struct ChoiceNode__Fields {
        struct InteriorNode__Fields _;
    };

    struct ChoiceNode {
        struct ChoiceNode__Class* klass;
        MonitorData* monitor;
        struct ChoiceNode__Fields fields;
    };

    struct ChoiceNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ExpandTree;
        VirtualInvokeData ConstructPos;
        VirtualInvokeData get_IsNullable;
        VirtualInvokeData get_IsRangeNode;
    };

    struct ChoiceNode__StaticFields {
    };

    struct ChoiceNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChoiceNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChoiceNode__VTable vtable;
    };

    struct PlusNode__Fields {
        struct InteriorNode__Fields _;
    };

    struct PlusNode {
        struct PlusNode__Class* klass;
        MonitorData* monitor;
        struct PlusNode__Fields fields;
    };

    struct PlusNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ExpandTree;
        VirtualInvokeData ConstructPos;
        VirtualInvokeData get_IsNullable;
        VirtualInvokeData get_IsRangeNode;
    };

    struct PlusNode__StaticFields {
    };

    struct PlusNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlusNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlusNode__VTable vtable;
    };

    struct QmarkNode__Fields {
        struct InteriorNode__Fields _;
    };

    struct QmarkNode {
        struct QmarkNode__Class* klass;
        MonitorData* monitor;
        struct QmarkNode__Fields fields;
    };

    struct QmarkNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ExpandTree;
        VirtualInvokeData ConstructPos;
        VirtualInvokeData get_IsNullable;
        VirtualInvokeData get_IsRangeNode;
    };

    struct QmarkNode__StaticFields {
    };

    struct QmarkNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QmarkNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QmarkNode__VTable vtable;
    };

    struct StarNode__Fields {
        struct InteriorNode__Fields _;
    };

    struct StarNode {
        struct StarNode__Class* klass;
        MonitorData* monitor;
        struct StarNode__Fields fields;
    };

    struct StarNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ExpandTree;
        VirtualInvokeData ConstructPos;
        VirtualInvokeData get_IsNullable;
        VirtualInvokeData get_IsRangeNode;
    };

    struct StarNode__StaticFields {
    };

    struct StarNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StarNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StarNode__VTable vtable;
    };

    struct LeafRangeNode__Fields {
        struct LeafNode__Fields _;
        struct Decimal min;
        struct Decimal max;
        struct BitSet* nextIteration;
    };

    struct LeafRangeNode {
        struct LeafRangeNode__Class* klass;
        MonitorData* monitor;
        struct LeafRangeNode__Fields fields;
    };

    struct LeafRangeNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ExpandTree;
        VirtualInvokeData ConstructPos;
        VirtualInvokeData get_IsNullable;
        VirtualInvokeData get_IsRangeNode;
    };

    struct LeafRangeNode__StaticFields {
    };

    struct LeafRangeNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeafRangeNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeafRangeNode__VTable vtable;
    };

    struct BitSet___VTable {
    };

    struct BitSet___StaticFields {
    };

    struct BitSet___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BitSet___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BitSet___VTable vtable;
    };

    struct DfaContentValidator__Fields {
        struct ContentValidator__Fields _;
        struct Int32__Array__Array* transitionTable;
        struct SymbolsDictionary* symbols;
    };

    struct DfaContentValidator {
        struct DfaContentValidator__Class* klass;
        MonitorData* monitor;
        struct DfaContentValidator__Fields fields;
    };

    struct DfaContentValidator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsEmptiable;
        VirtualInvokeData InitValidation;
        VirtualInvokeData ValidateElement;
        VirtualInvokeData CompleteValidation;
        VirtualInvokeData ExpectedElements;
        VirtualInvokeData ExpectedParticles;
    };

    struct DfaContentValidator__StaticFields {
    };

    struct DfaContentValidator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DfaContentValidator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DfaContentValidator__VTable vtable;
    };

    struct NfaContentValidator__Fields {
        struct ContentValidator__Fields _;
        struct BitSet* firstpos;
        struct BitSet__Array* followpos;
        struct SymbolsDictionary* symbols;
        struct Positions* positions;
        int32_t endMarkerPos;
    };

    struct NfaContentValidator {
        struct NfaContentValidator__Class* klass;
        MonitorData* monitor;
        struct NfaContentValidator__Fields fields;
    };

    struct NfaContentValidator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsEmptiable;
        VirtualInvokeData InitValidation;
        VirtualInvokeData ValidateElement;
        VirtualInvokeData CompleteValidation;
        VirtualInvokeData ExpectedElements;
        VirtualInvokeData ExpectedParticles;
    };

    struct NfaContentValidator__StaticFields {
    };

    struct NfaContentValidator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NfaContentValidator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NfaContentValidator__VTable vtable;
    };

} // namespace app
