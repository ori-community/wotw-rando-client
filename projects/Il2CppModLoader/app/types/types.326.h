namespace app {
struct ElementWriter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ElementWriter__StaticFields {
};

struct ElementWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ElementWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ElementWriter__VTable vtable;
};

struct XDocument__Fields {
    struct XContainer__Fields _;
    struct XDeclaration *declaration;
};

struct XDocument {
    struct XDocument__Class *klass;
    MonitorData *monitor;
    struct XDocument__Fields fields;
};

struct __declspec(align(8)) XDeclaration__Fields {
    struct String *version;
    struct String *encoding;
    struct String *standalone;
};

struct XDeclaration {
    struct XDeclaration__Class *klass;
    MonitorData *monitor;
    struct XDeclaration__Fields fields;
};

struct XDeclaration__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XDeclaration__StaticFields {
};

struct XDeclaration__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XDeclaration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XDeclaration__VTable vtable;
};

struct XDocument__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData WriteTo;
    VirtualInvokeData AppendText;
    VirtualInvokeData CloneNode;
    VirtualInvokeData AddAttribute;
    VirtualInvokeData AddAttributeSkipNotify;
    VirtualInvokeData ValidateNode;
    VirtualInvokeData ValidateString;
};

struct XDocument__StaticFields {
};

struct XDocument__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XDocument__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XDocument__VTable vtable;
};

struct XComment__Fields {
    struct XNode__Fields _;
    struct String *value;
};

struct XComment {
    struct XComment__Class *klass;
    MonitorData *monitor;
    struct XComment__Fields fields;
};

struct XComment__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData WriteTo;
    VirtualInvokeData AppendText;
    VirtualInvokeData CloneNode;
};

struct XComment__StaticFields {
};

struct XComment__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XComment__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XComment__VTable vtable;
};

struct XProcessingInstruction__Fields {
    struct XNode__Fields _;
    struct String *target;
    struct String *data;
};

struct XProcessingInstruction {
    struct XProcessingInstruction__Class *klass;
    MonitorData *monitor;
    struct XProcessingInstruction__Fields fields;
};

struct XProcessingInstruction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData WriteTo;
    VirtualInvokeData AppendText;
    VirtualInvokeData CloneNode;
};

struct XProcessingInstruction__StaticFields {
};

struct XProcessingInstruction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XProcessingInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XProcessingInstruction__VTable vtable;
};

struct XDocumentType__Fields {
    struct XNode__Fields _;
    struct String *name;
    struct String *publicId;
    struct String *systemId;
    struct String *internalSubset;
    struct IDtdInfo *dtdInfo;
};

struct XDocumentType {
    struct XDocumentType__Class *klass;
    MonitorData *monitor;
    struct XDocumentType__Fields fields;
};

struct XDocumentType__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData WriteTo;
    VirtualInvokeData AppendText;
    VirtualInvokeData CloneNode;
};

struct XDocumentType__StaticFields {
};

struct XDocumentType__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XDocumentType__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XDocumentType__VTable vtable;
};

struct StreamingElementWriter {
    struct XmlWriter *writer;
    struct XStreamingElement *element;
    struct List_1_System_Xml_Linq_XAttribute_ *attributes;
    struct NamespaceResolver resolver;
};

struct StreamingElementWriter__Boxed {
    struct StreamingElementWriter__Class *klass;
    MonitorData *monitor;
    struct StreamingElementWriter fields;
};

struct __declspec(align(8)) List_1_System_Xml_Linq_XAttribute___Fields {
    struct XAttribute__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Xml_Linq_XAttribute_ {
    struct List_1_System_Xml_Linq_XAttribute___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Xml_Linq_XAttribute___Fields fields;
};

struct XAttribute__Array {
    struct XAttribute__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XAttribute *vector[32];
};

struct XAttribute__Array__VTable {
};

struct XAttribute__Array__StaticFields {
};

struct XAttribute__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XAttribute__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XAttribute__Array__VTable vtable;
};

struct List_1_System_Xml_Linq_XAttribute___VTable {
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

struct List_1_System_Xml_Linq_XAttribute___StaticFields {
    struct XAttribute__Array *_emptyArray;
};

struct List_1_System_Xml_Linq_XAttribute___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Xml_Linq_XAttribute___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Xml_Linq_XAttribute___VTable vtable;
};

struct StreamingElementWriter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StreamingElementWriter__StaticFields {
};

struct StreamingElementWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StreamingElementWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StreamingElementWriter__VTable vtable;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Fields {
    struct PropertyDescriptor__Fields _;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object_ {
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Class *klass;
    MonitorData *monitor;
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Fields fields;
};

struct XElementAttributePropertyDescriptor__Fields {
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Fields _;
    struct XDeferredSingleton_1_System_Xml_Linq_XAttribute_ *value;
    struct XAttribute *changeState;
};

struct XElementAttributePropertyDescriptor {
    struct XElementAttributePropertyDescriptor__Class *klass;
    MonitorData *monitor;
    struct XElementAttributePropertyDescriptor__Fields fields;
};

struct __declspec(align(8)) XDeferredSingleton_1_System_Xml_Linq_XAttribute___Fields {
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute_ *func;
    struct XElement *element;
    struct XName *name;
};

struct XDeferredSingleton_1_System_Xml_Linq_XAttribute_ {
    struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___Class *klass;
    MonitorData *monitor;
    struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___Fields fields;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute_ {
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___Class *klass;
    MonitorData *monitor;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___Fields fields;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AttributeArray;
    VirtualInvokeData set_AttributeArray;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_Description;
    VirtualInvokeData get_IsBrowsable;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_NameHashCode;
    VirtualInvokeData get_DesignTimeOnly;
    VirtualInvokeData get_DisplayName;
    VirtualInvokeData CreateAttributeCollection;
    VirtualInvokeData FillAttributes;
    VirtualInvokeData GetInvocationTarget;
    VirtualInvokeData get_ComponentType;
    VirtualInvokeData get_Converter;
    VirtualInvokeData get_IsLocalizable;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData AddValueChanged;
    VirtualInvokeData CanResetValue;
    VirtualInvokeData GetChildProperties;
    VirtualInvokeData GetEditor;
    VirtualInvokeData __unknown;
    VirtualInvokeData OnValueChanged;
    VirtualInvokeData RemoveValueChanged;
    VirtualInvokeData ResetValue;
    VirtualInvokeData SetValue;
    VirtualInvokeData ShouldSerializeValue;
    VirtualInvokeData get_SupportsChangeEvents;
    VirtualInvokeData OnChanged;
    VirtualInvokeData OnChanging;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___StaticFields {
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___VTable vtable;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___VTable {
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

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___StaticFields {
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___VTable vtable;
};

struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___StaticFields {
};

struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___VTable vtable;
};

struct XElementAttributePropertyDescriptor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AttributeArray;
    VirtualInvokeData set_AttributeArray;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_Description;
    VirtualInvokeData get_IsBrowsable;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_NameHashCode;
    VirtualInvokeData get_DesignTimeOnly;
    VirtualInvokeData get_DisplayName;
    VirtualInvokeData CreateAttributeCollection;
    VirtualInvokeData FillAttributes;
    VirtualInvokeData GetInvocationTarget;
    VirtualInvokeData get_ComponentType;
    VirtualInvokeData get_Converter;
    VirtualInvokeData get_IsLocalizable;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData AddValueChanged;
    VirtualInvokeData CanResetValue;
    VirtualInvokeData GetChildProperties;
    VirtualInvokeData GetEditor;
    VirtualInvokeData GetValue;
    VirtualInvokeData OnValueChanged;
    VirtualInvokeData RemoveValueChanged;
    VirtualInvokeData ResetValue;
    VirtualInvokeData SetValue;
    VirtualInvokeData ShouldSerializeValue;
    VirtualInvokeData get_SupportsChangeEvents;
    VirtualInvokeData OnChanged;
    VirtualInvokeData OnChanging;
};

struct XElementAttributePropertyDescriptor__StaticFields {
};

struct XElementAttributePropertyDescriptor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElementAttributePropertyDescriptor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElementAttributePropertyDescriptor__VTable vtable;
};

struct XElementAttributePropertyDescriptor_c {
    struct XElementAttributePropertyDescriptor_c__Class *klass;
    MonitorData *monitor;
};

struct XElementAttributePropertyDescriptor_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XElementAttributePropertyDescriptor_c__StaticFields {
    struct XElementAttributePropertyDescriptor_c *__9;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute_ *__9__3_0;
};

struct XElementAttributePropertyDescriptor_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElementAttributePropertyDescriptor_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElementAttributePropertyDescriptor_c__VTable vtable;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Fields {
    struct PropertyDescriptor__Fields _;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1_ {
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Class *klass;
    MonitorData *monitor;
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Fields fields;
};

struct XElementDescendantsPropertyDescriptor__Fields {
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Fields _;
    struct XDeferredAxis_1_System_Xml_Linq_XElement_ *value;
    struct XName *changeState;
};

struct XElementDescendantsPropertyDescriptor {
    struct XElementDescendantsPropertyDescriptor__Class *klass;
    MonitorData *monitor;
    struct XElementDescendantsPropertyDescriptor__Fields fields;
};

struct __declspec(align(8)) XDeferredAxis_1_System_Xml_Linq_XElement___Fields {
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1_ *func;
    struct XElement *element;
    struct XName *name;
};

struct XDeferredAxis_1_System_Xml_Linq_XElement_ {
    struct XDeferredAxis_1_System_Xml_Linq_XElement___Class *klass;
    MonitorData *monitor;
    struct XDeferredAxis_1_System_Xml_Linq_XElement___Fields fields;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1_ {
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___Class *klass;
    MonitorData *monitor;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___Fields fields;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AttributeArray;
    VirtualInvokeData set_AttributeArray;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_Description;
    VirtualInvokeData get_IsBrowsable;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_NameHashCode;
    VirtualInvokeData get_DesignTimeOnly;
    VirtualInvokeData get_DisplayName;
    VirtualInvokeData CreateAttributeCollection;
    VirtualInvokeData FillAttributes;
    VirtualInvokeData GetInvocationTarget;
    VirtualInvokeData get_ComponentType;
    VirtualInvokeData get_Converter;
    VirtualInvokeData get_IsLocalizable;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData AddValueChanged;
    VirtualInvokeData CanResetValue;
    VirtualInvokeData GetChildProperties;
    VirtualInvokeData GetEditor;
    VirtualInvokeData __unknown;
    VirtualInvokeData OnValueChanged;
    VirtualInvokeData RemoveValueChanged;
    VirtualInvokeData ResetValue;
    VirtualInvokeData SetValue;
    VirtualInvokeData ShouldSerializeValue;
    VirtualInvokeData get_SupportsChangeEvents;
    VirtualInvokeData OnChanged;
    VirtualInvokeData OnChanging;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___StaticFields {
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___VTable vtable;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___VTable {
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

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___StaticFields {
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___VTable vtable;
};

struct XDeferredAxis_1_System_Xml_Linq_XElement___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};

struct XDeferredAxis_1_System_Xml_Linq_XElement___StaticFields {
};

struct XDeferredAxis_1_System_Xml_Linq_XElement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XDeferredAxis_1_System_Xml_Linq_XElement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XDeferredAxis_1_System_Xml_Linq_XElement___VTable vtable;
};

struct XElementDescendantsPropertyDescriptor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AttributeArray;
    VirtualInvokeData set_AttributeArray;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_Description;
    VirtualInvokeData get_IsBrowsable;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_NameHashCode;
    VirtualInvokeData get_DesignTimeOnly;
    VirtualInvokeData get_DisplayName;
    VirtualInvokeData CreateAttributeCollection;
    VirtualInvokeData FillAttributes;
    VirtualInvokeData GetInvocationTarget;
    VirtualInvokeData get_ComponentType;
    VirtualInvokeData get_Converter;
    VirtualInvokeData get_IsLocalizable;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData AddValueChanged;
    VirtualInvokeData CanResetValue;
    VirtualInvokeData GetChildProperties;
    VirtualInvokeData GetEditor;
    VirtualInvokeData GetValue;
    VirtualInvokeData OnValueChanged;
    VirtualInvokeData RemoveValueChanged;
    VirtualInvokeData ResetValue;
    VirtualInvokeData SetValue;
    VirtualInvokeData ShouldSerializeValue;
    VirtualInvokeData get_SupportsChangeEvents;
    VirtualInvokeData OnChanged;
    VirtualInvokeData OnChanging;
};

struct XElementDescendantsPropertyDescriptor__StaticFields {
};

struct XElementDescendantsPropertyDescriptor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElementDescendantsPropertyDescriptor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElementDescendantsPropertyDescriptor__VTable vtable;
};

struct XElementDescendantsPropertyDescriptor_c {
    struct XElementDescendantsPropertyDescriptor_c__Class *klass;
    MonitorData *monitor;
};

struct XElementDescendantsPropertyDescriptor_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XElementDescendantsPropertyDescriptor_c__StaticFields {
    struct XElementDescendantsPropertyDescriptor_c *__9;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1_ *__9__3_0;
};

struct XElementDescendantsPropertyDescriptor_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElementDescendantsPropertyDescriptor_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElementDescendantsPropertyDescriptor_c__VTable vtable;
};

struct XElementElementPropertyDescriptor__Fields {
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Fields _;
    struct XDeferredSingleton_1_System_Xml_Linq_XElement_ *value;
    struct XElement *changeState;
};

struct XElementElementPropertyDescriptor {
    struct XElementElementPropertyDescriptor__Class *klass;
    MonitorData *monitor;
    struct XElementElementPropertyDescriptor__Fields fields;
};

struct __declspec(align(8)) XDeferredSingleton_1_System_Xml_Linq_XElement___Fields {
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement_ *func;
    struct XElement *element;
    struct XName *name;
};

struct XDeferredSingleton_1_System_Xml_Linq_XElement_ {
    struct XDeferredSingleton_1_System_Xml_Linq_XElement___Class *klass;
    MonitorData *monitor;
    struct XDeferredSingleton_1_System_Xml_Linq_XElement___Fields fields;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement_ {
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement___Class *klass;
    MonitorData *monitor;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement___Fields fields;
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement___VTable {
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

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement___StaticFields {
};

struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement___VTable vtable;
};

struct XDeferredSingleton_1_System_Xml_Linq_XElement___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XDeferredSingleton_1_System_Xml_Linq_XElement___StaticFields {
};

struct XDeferredSingleton_1_System_Xml_Linq_XElement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XDeferredSingleton_1_System_Xml_Linq_XElement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XDeferredSingleton_1_System_Xml_Linq_XElement___VTable vtable;
};

struct XElementElementPropertyDescriptor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AttributeArray;
    VirtualInvokeData set_AttributeArray;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_Description;
    VirtualInvokeData get_IsBrowsable;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_NameHashCode;
    VirtualInvokeData get_DesignTimeOnly;
    VirtualInvokeData get_DisplayName;
    VirtualInvokeData CreateAttributeCollection;
    VirtualInvokeData FillAttributes;
    VirtualInvokeData GetInvocationTarget;
    VirtualInvokeData get_ComponentType;
    VirtualInvokeData get_Converter;
    VirtualInvokeData get_IsLocalizable;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData AddValueChanged;
    VirtualInvokeData CanResetValue;
    VirtualInvokeData GetChildProperties;
    VirtualInvokeData GetEditor;
    VirtualInvokeData GetValue;
    VirtualInvokeData OnValueChanged;
    VirtualInvokeData RemoveValueChanged;
    VirtualInvokeData ResetValue;
    VirtualInvokeData SetValue;
    VirtualInvokeData ShouldSerializeValue;
    VirtualInvokeData get_SupportsChangeEvents;
    VirtualInvokeData OnChanged;
    VirtualInvokeData OnChanging;
};

struct XElementElementPropertyDescriptor__StaticFields {
};

struct XElementElementPropertyDescriptor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElementElementPropertyDescriptor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElementElementPropertyDescriptor__VTable vtable;
};

struct XElementElementPropertyDescriptor_c {
    struct XElementElementPropertyDescriptor_c__Class *klass;
    MonitorData *monitor;
};

struct XElementElementPropertyDescriptor_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XElementElementPropertyDescriptor_c__StaticFields {
    struct XElementElementPropertyDescriptor_c *__9;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XElement_ *__9__3_0;
};

struct XElementElementPropertyDescriptor_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElementElementPropertyDescriptor_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElementElementPropertyDescriptor_c__VTable vtable;
};

struct XElementElementsPropertyDescriptor__Fields {
    struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Fields _;
    struct XDeferredAxis_1_System_Xml_Linq_XElement_ *value;
    struct Object *changeState;
};

struct XElementElementsPropertyDescriptor {
    struct XElementElementsPropertyDescriptor__Class *klass;
    MonitorData *monitor;
    struct XElementElementsPropertyDescriptor__Fields fields;
};

struct XElementElementsPropertyDescriptor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AttributeArray;
    VirtualInvokeData set_AttributeArray;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_Description;
    VirtualInvokeData get_IsBrowsable;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_NameHashCode;
    VirtualInvokeData get_DesignTimeOnly;
    VirtualInvokeData get_DisplayName;
    VirtualInvokeData CreateAttributeCollection;
    VirtualInvokeData FillAttributes;
    VirtualInvokeData GetInvocationTarget;
    VirtualInvokeData get_ComponentType;
    VirtualInvokeData get_Converter;
    VirtualInvokeData get_IsLocalizable;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData AddValueChanged;
    VirtualInvokeData CanResetValue;
    VirtualInvokeData GetChildProperties;
    VirtualInvokeData GetEditor;
    VirtualInvokeData GetValue;
    VirtualInvokeData OnValueChanged;
    VirtualInvokeData RemoveValueChanged;
    VirtualInvokeData ResetValue;
    VirtualInvokeData SetValue;
    VirtualInvokeData ShouldSerializeValue;
    VirtualInvokeData get_SupportsChangeEvents;
    VirtualInvokeData OnChanged;
    VirtualInvokeData OnChanging;
};

struct XElementElementsPropertyDescriptor__StaticFields {
};

struct XElementElementsPropertyDescriptor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElementElementsPropertyDescriptor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElementElementsPropertyDescriptor__VTable vtable;
};

struct XElementElementsPropertyDescriptor_c {
    struct XElementElementsPropertyDescriptor_c__Class *klass;
    MonitorData *monitor;
};

struct XElementElementsPropertyDescriptor_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XElementElementsPropertyDescriptor_c__StaticFields {
    struct XElementElementsPropertyDescriptor_c *__9;
    struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1_ *__9__3_0;
};

}
