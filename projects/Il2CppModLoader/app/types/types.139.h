namespace app {
struct LeafNode {
    struct LeafNode__Class *klass;
    MonitorData *monitor;
    struct LeafNode__Fields fields;
};

struct __declspec(align(8)) InteriorNode__Fields {
    struct SyntaxTreeNode *leftChild;
    struct SyntaxTreeNode *rightChild;
};

struct InteriorNode {
    struct InteriorNode__Class *klass;
    MonitorData *monitor;
    struct InteriorNode__Fields fields;
};

struct SequenceNode__Fields {
    struct InteriorNode__Fields _;
};

struct SequenceNode {
    struct SequenceNode__Class *klass;
    MonitorData *monitor;
    struct SequenceNode__Fields fields;
};

struct __declspec(align(8)) XdrBuilder_ElementContent__Fields {
    struct SchemaElementDecl *_ElementDecl;
    int32_t _ContentAttr;
    int32_t _OrderAttr;
    bool _MasterGroupRequired;
    bool _ExistTerminal;
    bool _AllowDataType;
    bool _HasDataType;
    bool _HasType;
    bool _EnumerationRequired;
    uint32_t _MinVal;
    uint32_t _MaxVal;
    uint32_t _MaxLength;
    uint32_t _MinLength;
    struct Hashtable *_AttDefList;
};

struct XdrBuilder_ElementContent {
    struct XdrBuilder_ElementContent__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_ElementContent__Fields fields;
};

struct __declspec(align(8)) XdrBuilder_GroupContent__Fields {
    uint32_t _MinVal;
    uint32_t _MaxVal;
    bool _HasMaxAttr;
    bool _HasMinAttr;
    int32_t _Order;
};

struct XdrBuilder_GroupContent {
    struct XdrBuilder_GroupContent__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_GroupContent__Fields fields;
};

struct __declspec(align(8)) XdrBuilder_AttributeContent__Fields {
    struct SchemaAttDef *_AttDef;
    struct XmlQualifiedName *_Name;
    struct String *_Prefix;
    bool _Required;
    uint32_t _MinVal;
    uint32_t _MaxVal;
    uint32_t _MaxLength;
    uint32_t _MinLength;
    bool _EnumerationRequired;
    bool _HasDataType;
    bool _Global;
    struct Object *_Default;
};

struct XdrBuilder_AttributeContent {
    struct XdrBuilder_AttributeContent__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_AttributeContent__Fields fields;
};

struct __declspec(align(8)) XdrBuilder_DeclBaseInfo__Fields {
    struct XmlQualifiedName *_Name;
    struct String *_Prefix;
    struct XmlQualifiedName *_TypeName;
    struct String *_TypePrefix;
    struct Object *_Default;
    struct Object *_Revises;
    uint32_t _MaxOccurs;
    uint32_t _MinOccurs;
    bool _Checking;
    struct SchemaElementDecl *_ElementDecl;
    struct SchemaAttDef *_Attdef;
    struct XdrBuilder_DeclBaseInfo *_Next;
};

struct XdrBuilder_DeclBaseInfo {
    struct XdrBuilder_DeclBaseInfo__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_DeclBaseInfo__Fields fields;
};

struct XmlNode__Array {
    struct XmlNode__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XmlNode *vector[32];
};

struct HWStack__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
};

struct HWStack__StaticFields {
};

struct HWStack__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HWStack__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HWStack__VTable vtable;
};

struct ValidatorState__Enum__VTable {
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

struct ValidatorState__Enum__StaticFields {
};

struct ValidatorState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ValidatorState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ValidatorState__Enum__VTable vtable;
};

struct IdRefNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IdRefNode__StaticFields {
};

struct IdRefNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IdRefNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IdRefNode__VTable vtable;
};

struct XmlSchemaParticle__Array__VTable {
};

struct XmlSchemaParticle__Array__StaticFields {
};

struct XmlSchemaParticle__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaParticle__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaParticle__Array__VTable vtable;
};

struct XmlSchemaAttribute__Array__VTable {
};

struct XmlSchemaAttribute__Array__StaticFields {
};

struct XmlSchemaAttribute__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaAttribute__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaAttribute__Array__VTable vtable;
};

struct Boolean__Array_1__VTable {
};

struct Boolean__Array_1__StaticFields {
};

struct Boolean__Array_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Boolean__Array_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Boolean__Array_1__VTable vtable;
};

struct XmlSchemaValidator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XmlSchemaValidator__StaticFields {
    struct XmlSchemaDatatype *dtQName;
    struct XmlSchemaDatatype *dtCDATA;
    struct XmlSchemaDatatype *dtStringArray;
    struct XmlSchemaParticle__Array *EmptyParticleArray;
    struct XmlSchemaAttribute__Array *EmptyAttributeArray;
    struct Boolean__Array_1 *ValidStates;
    struct String__Array *MethodNames;
};

struct XmlSchemaValidator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaValidator__VTable vtable;
};

struct XsdValidatingReader_ValidatingReaderState__Enum__VTable {
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

struct XsdValidatingReader_ValidatingReaderState__Enum__StaticFields {
};

struct XsdValidatingReader_ValidatingReaderState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XsdValidatingReader_ValidatingReaderState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XsdValidatingReader_ValidatingReaderState__Enum__VTable vtable;
};

struct XmlValueGetter__VTable {
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

struct XmlValueGetter__StaticFields {
};

struct XmlValueGetter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlValueGetter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlValueGetter__VTable vtable;
};

struct AttributePSVIInfo__Array__VTable {
};

struct AttributePSVIInfo__Array__StaticFields {
};

struct AttributePSVIInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttributePSVIInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttributePSVIInfo__Array__VTable vtable;
};

struct SchemaNames_Token__Enum__VTable {
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

struct SchemaNames_Token__Enum__StaticFields {
};

struct SchemaNames_Token__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SchemaNames_Token__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SchemaNames_Token__Enum__VTable vtable;
};

struct XdrBuilder_XdrBuildFunction__VTable {
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

struct XdrBuilder_XdrBuildFunction__StaticFields {
};

struct XdrBuilder_XdrBuildFunction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_XdrBuildFunction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_XdrBuildFunction__VTable vtable;
};

struct XdrBuilder_XdrAttributeEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XdrBuilder_XdrAttributeEntry__StaticFields {
};

struct XdrBuilder_XdrAttributeEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_XdrAttributeEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_XdrAttributeEntry__VTable vtable;
};

struct XdrBuilder_XdrAttributeEntry__Array__VTable {
};

struct XdrBuilder_XdrAttributeEntry__Array__StaticFields {
};

struct XdrBuilder_XdrAttributeEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_XdrAttributeEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_XdrAttributeEntry__Array__VTable vtable;
};

struct XdrBuilder_XdrInitFunction__VTable {
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

struct XdrBuilder_XdrInitFunction__StaticFields {
};

struct XdrBuilder_XdrInitFunction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_XdrInitFunction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_XdrInitFunction__VTable vtable;
};

struct XdrBuilder_XdrBeginChildFunction__VTable {
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

struct XdrBuilder_XdrBeginChildFunction__StaticFields {
};

struct XdrBuilder_XdrBeginChildFunction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_XdrBeginChildFunction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_XdrBeginChildFunction__VTable vtable;
};

struct XdrBuilder_XdrEndChildFunction__VTable {
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

struct XdrBuilder_XdrEndChildFunction__StaticFields {
};

struct XdrBuilder_XdrEndChildFunction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_XdrEndChildFunction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_XdrEndChildFunction__VTable vtable;
};

struct XdrBuilder_XdrEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XdrBuilder_XdrEntry__StaticFields {
};

struct XdrBuilder_XdrEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_XdrEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_XdrEntry__VTable vtable;
};

struct XdrBuilder_XdrEntry__Array__VTable {
};

struct XdrBuilder_XdrEntry__Array__StaticFields {
};

struct XdrBuilder_XdrEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_XdrEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_XdrEntry__Array__VTable vtable;
};

struct SymbolsDictionary__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SymbolsDictionary__StaticFields {
};

struct SymbolsDictionary__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SymbolsDictionary__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SymbolsDictionary__VTable vtable;
};

struct Positions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Positions__StaticFields {
};

struct Positions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Positions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Positions__VTable vtable;
};

struct SequenceNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ExpandTree;
    VirtualInvokeData ConstructPos;
    VirtualInvokeData get_IsNullable;
    VirtualInvokeData get_IsRangeNode;
};

struct SequenceNode__StaticFields {
};

struct SequenceNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SequenceNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SequenceNode__VTable vtable;
};

struct InteriorNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ExpandTree;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData get_IsRangeNode;
};

struct InteriorNode__StaticFields {
};

struct InteriorNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InteriorNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InteriorNode__VTable vtable;
};

struct LeafNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ExpandTree;
    VirtualInvokeData ConstructPos;
    VirtualInvokeData get_IsNullable;
    VirtualInvokeData get_IsRangeNode;
};

struct LeafNode__StaticFields {
};

struct LeafNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LeafNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LeafNode__VTable vtable;
};

struct SyntaxTreeNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_IsRangeNode;
};

struct SyntaxTreeNode__StaticFields {
};

struct SyntaxTreeNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SyntaxTreeNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SyntaxTreeNode__VTable vtable;
};

struct ParticleContentValidator__VTable {
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

struct ParticleContentValidator__StaticFields {
};

struct ParticleContentValidator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParticleContentValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParticleContentValidator__VTable vtable;
};

struct XdrBuilder_ElementContent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XdrBuilder_ElementContent__StaticFields {
};

struct XdrBuilder_ElementContent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_ElementContent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_ElementContent__VTable vtable;
};

struct XdrBuilder_GroupContent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XdrBuilder_GroupContent__StaticFields {
};

struct XdrBuilder_GroupContent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_GroupContent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_GroupContent__VTable vtable;
};

struct XdrBuilder_AttributeContent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XdrBuilder_AttributeContent__StaticFields {
};

struct XdrBuilder_AttributeContent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_AttributeContent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_AttributeContent__VTable vtable;
};

struct XdrBuilder_DeclBaseInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XdrBuilder_DeclBaseInfo__StaticFields {
};

struct XdrBuilder_DeclBaseInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder_DeclBaseInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder_DeclBaseInfo__VTable vtable;
};

struct XmlNode__Array__VTable {
};

struct XmlNode__Array__StaticFields {
};

struct XmlNode__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlNode__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlNode__Array__VTable vtable;
};

struct XdrBuilder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ProcessElement;
    VirtualInvokeData ProcessAttribute;
    VirtualInvokeData IsContentParsed;
    VirtualInvokeData ProcessMarkup;
    VirtualInvokeData ProcessCData;
    VirtualInvokeData StartChildren;
    VirtualInvokeData EndChildren;
};

struct XdrBuilder__StaticFields {
    struct Int32__Array *S_XDR_Root_Element;
    struct Int32__Array *S_XDR_Root_SubElements;
    struct Int32__Array *S_XDR_ElementType_SubElements;
    struct Int32__Array *S_XDR_AttributeType_SubElements;
    struct Int32__Array *S_XDR_Group_SubElements;
    struct XdrBuilder_XdrAttributeEntry__Array *S_XDR_Root_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array *S_XDR_ElementType_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array *S_XDR_AttributeType_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array *S_XDR_Element_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array *S_XDR_Attribute_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array *S_XDR_Group_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array *S_XDR_ElementDataType_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array *S_XDR_AttributeDataType_Attributes;
    struct XdrBuilder_XdrEntry__Array *S_SchemaEntries;
};

struct XdrBuilder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrBuilder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrBuilder__VTable vtable;
};

struct SchemaBuilder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData __unknown_6;
};

struct SchemaBuilder__StaticFields {
};

struct SchemaBuilder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SchemaBuilder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SchemaBuilder__VTable vtable;
};

struct Parser_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Parser_1__StaticFields {
};

struct Parser_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Parser_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Parser_1__VTable vtable;
};

struct XsdValidatingReader__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_Settings;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_LocalName;
    VirtualInvokeData get_NamespaceURI;
    VirtualInvokeData get_Prefix;
    VirtualInvokeData get_Value;
    VirtualInvokeData get_Depth;
    VirtualInvokeData get_BaseURI;
    VirtualInvokeData get_IsEmptyElement;
    VirtualInvokeData get_IsDefault;
    VirtualInvokeData get_QuoteChar;
    VirtualInvokeData get_XmlSpace;
    VirtualInvokeData get_XmlLang;
    VirtualInvokeData get_SchemaInfo;
    VirtualInvokeData get_ValueType;
    VirtualInvokeData get_AttributeCount;
    VirtualInvokeData GetAttribute;
    VirtualInvokeData GetAttribute_1;
    VirtualInvokeData GetAttribute_2;
    VirtualInvokeData MoveToAttribute;
    VirtualInvokeData MoveToAttribute_1;
    VirtualInvokeData MoveToFirstAttribute;
    VirtualInvokeData MoveToNextAttribute;
    VirtualInvokeData MoveToElement;
    VirtualInvokeData ReadAttributeValue;
    VirtualInvokeData Read;
    VirtualInvokeData get_EOF;
    VirtualInvokeData Close;
    VirtualInvokeData get_ReadState;
    VirtualInvokeData Skip;
    VirtualInvokeData get_NameTable;
    VirtualInvokeData LookupNamespace;
    VirtualInvokeData get_CanResolveEntity;
    VirtualInvokeData ResolveEntity;
    VirtualInvokeData get_CanReadValueChunk;
    VirtualInvokeData ReadValueChunk;
    VirtualInvokeData ReadString;
    VirtualInvokeData MoveToContent;
    VirtualInvokeData ReadStartElement;
    VirtualInvokeData ReadElementString;
    VirtualInvokeData ReadEndElement;
    VirtualInvokeData IsStartElement;
    VirtualInvokeData ReadInnerXml;
    VirtualInvokeData get_HasAttributes;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_NamespaceManager;
    VirtualInvokeData get_DtdInfo;
    VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_Validity;
    VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_IsDefault;
    VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_IsNil;
    VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_MemberType;
    VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_SchemaType;
    VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement;
    VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute;
    VirtualInvokeData HasLineInfo;
    VirtualInvokeData get_LineNumber;
    VirtualInvokeData get_LinePosition;
    VirtualInvokeData System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
    VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupNamespace;
    VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupPrefix;
};

struct XsdValidatingReader__StaticFields {
    struct Type *TypeOfString;
};

struct XsdValidatingReader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XsdValidatingReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XsdValidatingReader__VTable vtable;
};

struct __declspec(align(8)) XmlChildEnumerator__Fields {
    struct XmlNode *container;
    struct XmlNode *child;
    bool isFirst;
};

struct XmlChildEnumerator {
    struct XmlChildEnumerator__Class *klass;
    MonitorData *monitor;
    struct XmlChildEnumerator__Fields fields;
};

struct XmlChildEnumerator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_IEnumerator_MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

}
