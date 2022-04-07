namespace app {

struct __declspec(align(8)) LineInfoAnnotation__Fields {
  int32_t lineNumber;
  int32_t linePosition;
};
struct LineInfoAnnotation {
  struct LineInfoAnnotation__Class *klass;
  struct MonitorData *monitor;
  struct LineInfoAnnotation__Fields fields;
};
struct LineInfoAnnotation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LineInfoAnnotation__StaticFields {
};
struct LineInfoAnnotation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LineInfoAnnotation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LineInfoAnnotation__VTable vtable;
};

struct LineInfoEndElementAnnotation__Fields {
  struct LineInfoAnnotation__Fields _;
};
struct LineInfoEndElementAnnotation {
  struct LineInfoEndElementAnnotation__Class *klass;
  struct MonitorData *monitor;
  struct LineInfoEndElementAnnotation__Fields fields;
};
struct LineInfoEndElementAnnotation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LineInfoEndElementAnnotation__StaticFields {
};
struct LineInfoEndElementAnnotation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LineInfoEndElementAnnotation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LineInfoEndElementAnnotation__VTable vtable;
};

struct __declspec(align(8)) XObjectChangeAnnotation__Fields {
  struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * changing;
  struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * changed;
};
struct XObjectChangeAnnotation {
  struct XObjectChangeAnnotation__Class *klass;
  struct MonitorData *monitor;
  struct XObjectChangeAnnotation__Fields fields;
};
struct XObjectChangeAnnotation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XObjectChangeAnnotation__StaticFields {
};
struct XObjectChangeAnnotation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XObjectChangeAnnotation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XObjectChangeAnnotation__VTable vtable;
};

struct XCData__Fields {
  struct XText__Fields _;
};
struct XCData {
  struct XCData__Class *klass;
  struct MonitorData *monitor;
  struct XCData__Fields fields;
};
struct XCData__VTable {
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
struct XCData__StaticFields {
};
struct XCData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XCData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XCData__VTable vtable;
};

struct IEnumerable_1_System_Xml_Linq_XNode_ {
  struct IEnumerable_1_System_Xml_Linq_XNode___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_Linq_XNode___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Xml_Linq_XNode___StaticFields {
};
struct IEnumerable_1_System_Xml_Linq_XNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Xml_Linq_XNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Xml_Linq_XNode___VTable vtable;
};

enum LoadOptions__Enum : int32_t {
  LoadOptions__Enum_None = 0,
  LoadOptions__Enum_PreserveWhitespace = 1,
  LoadOptions__Enum_SetBaseUri = 2,
  LoadOptions__Enum_SetLineInfo = 4,
};
struct LoadOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoadOptions__Enum value;
};

struct __declspec(align(8)) XContainer_Nodes_d_18__Fields {
  int32_t __1__state;
  struct XNode * __2__current;
  int32_t __l__initialThreadId;
  struct XContainer * __4__this;
  struct XNode * _n_5__1;
};
struct XContainer_Nodes_d_18 {
  struct XContainer_Nodes_d_18__Class *klass;
  struct MonitorData *monitor;
  struct XContainer_Nodes_d_18__Fields fields;
};
struct IEnumerator_1_System_Xml_Linq_XNode_ {
  struct IEnumerator_1_System_Xml_Linq_XNode___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Xml_Linq_XNode___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Xml_Linq_XNode___StaticFields {
};
struct IEnumerator_1_System_Xml_Linq_XNode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Xml_Linq_XNode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Xml_Linq_XNode___VTable vtable;
};
struct XContainer_Nodes_d_18__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Xml_Linq_XNode__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct XContainer_Nodes_d_18__StaticFields {
};
struct XContainer_Nodes_d_18__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XContainer_Nodes_d_18__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XContainer_Nodes_d_18__VTable vtable;
};

struct __declspec(align(8)) XContainer_GetDescendants_d_39__Fields {
  int32_t __1__state;
  struct XElement * __2__current;
  int32_t __l__initialThreadId;
  bool self;
  bool __3__self;
  struct XContainer * __4__this;
  struct XName * name;
  struct XName * __3__name;
  struct XNode * _n_5__1;
  struct XElement * _e_5__2;
};
struct XContainer_GetDescendants_d_39 {
  struct XContainer_GetDescendants_d_39__Class *klass;
  struct MonitorData *monitor;
  struct XContainer_GetDescendants_d_39__Fields fields;
};
struct IEnumerator_1_System_Xml_Linq_XElement_ {
  struct IEnumerator_1_System_Xml_Linq_XElement___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Xml_Linq_XElement___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Xml_Linq_XElement___StaticFields {
};
struct IEnumerator_1_System_Xml_Linq_XElement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Xml_Linq_XElement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Xml_Linq_XElement___VTable vtable;
};
struct XContainer_GetDescendants_d_39__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Xml_Linq_XElement__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Xml_Linq_XElement__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct XContainer_GetDescendants_d_39__StaticFields {
};
struct XContainer_GetDescendants_d_39__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XContainer_GetDescendants_d_39__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XContainer_GetDescendants_d_39__VTable vtable;
};

struct __declspec(align(8)) XContainer_GetElements_d_40__Fields {
  int32_t __1__state;
  struct XElement * __2__current;
  int32_t __l__initialThreadId;
  struct XContainer * __4__this;
  struct XNode * _n_5__1;
  struct XName * name;
  struct XName * __3__name;
};
struct XContainer_GetElements_d_40 {
  struct XContainer_GetElements_d_40__Class *klass;
  struct MonitorData *monitor;
  struct XContainer_GetElements_d_40__Fields fields;
};
struct XContainer_GetElements_d_40__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Xml_Linq_XElement__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Xml_Linq_XElement__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct XContainer_GetElements_d_40__StaticFields {
};
struct XContainer_GetElements_d_40__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XContainer_GetElements_d_40__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XContainer_GetElements_d_40__VTable vtable;
};

struct NamespaceCache {
  struct XNamespace * ns;
  struct String * namespaceName;
};
struct NamespaceCache__Boxed {
  struct NamespaceCache__Class *klass;
  struct MonitorData *monitor;
  struct NamespaceCache fields;
};
struct NamespaceCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamespaceCache__StaticFields {
};
struct NamespaceCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamespaceCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamespaceCache__VTable vtable;
};

struct __declspec(align(8)) XStreamingElement__Fields {
  struct XName * name;
  struct Object * content;
};
struct XStreamingElement {
  struct XStreamingElement__Class *klass;
  struct MonitorData *monitor;
  struct XStreamingElement__Fields fields;
};
struct XStreamingElement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XStreamingElement__StaticFields {
};
struct XStreamingElement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XStreamingElement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XStreamingElement__VTable vtable;
};

struct IEnumerable_1_System_Xml_Linq_XAttribute_ {
  struct IEnumerable_1_System_Xml_Linq_XAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_Linq_XAttribute___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Xml_Linq_XAttribute___StaticFields {
};
struct IEnumerable_1_System_Xml_Linq_XAttribute___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Xml_Linq_XAttribute___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Xml_Linq_XAttribute___VTable vtable;
};

struct __declspec(align(8)) XElement_GetAttributes_d_105__Fields {
  int32_t __1__state;
  struct XAttribute * __2__current;
  int32_t __l__initialThreadId;
  struct XElement * __4__this;
  struct XAttribute * _a_5__1;
  struct XName * name;
  struct XName * __3__name;
};
struct XElement_GetAttributes_d_105 {
  struct XElement_GetAttributes_d_105__Class *klass;
  struct MonitorData *monitor;
  struct XElement_GetAttributes_d_105__Fields fields;
};
struct IEnumerator_1_System_Xml_Linq_XAttribute_ {
  struct IEnumerator_1_System_Xml_Linq_XAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Xml_Linq_XAttribute___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Xml_Linq_XAttribute___StaticFields {
};
struct IEnumerator_1_System_Xml_Linq_XAttribute___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Xml_Linq_XAttribute___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Xml_Linq_XAttribute___VTable vtable;
};
struct XElement_GetAttributes_d_105__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Xml_Linq_XAttribute__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct XElement_GetAttributes_d_105__StaticFields {
};
struct XElement_GetAttributes_d_105__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XElement_GetAttributes_d_105__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XElement_GetAttributes_d_105__VTable vtable;
};

struct NamespaceResolver {
  int32_t scope;
  struct NamespaceResolver_NamespaceDeclaration * declaration;
  struct NamespaceResolver_NamespaceDeclaration * rover;
};
struct NamespaceResolver__Boxed {
  struct NamespaceResolver__Class *klass;
  struct MonitorData *monitor;
  struct NamespaceResolver fields;
};
struct ElementWriter {
  struct XmlWriter * writer;
  struct NamespaceResolver resolver;
};
struct ElementWriter__Boxed {
  struct ElementWriter__Class *klass;
  struct MonitorData *monitor;
  struct ElementWriter fields;
};
struct __declspec(align(8)) NamespaceResolver_NamespaceDeclaration__Fields {
  struct String * prefix;
  struct XNamespace * ns;
  int32_t scope;
  struct NamespaceResolver_NamespaceDeclaration * prev;
};
struct NamespaceResolver_NamespaceDeclaration {
  struct NamespaceResolver_NamespaceDeclaration__Class *klass;
  struct MonitorData *monitor;
  struct NamespaceResolver_NamespaceDeclaration__Fields fields;
};
struct NamespaceResolver_NamespaceDeclaration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamespaceResolver_NamespaceDeclaration__StaticFields {
};
struct NamespaceResolver_NamespaceDeclaration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamespaceResolver_NamespaceDeclaration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamespaceResolver_NamespaceDeclaration__VTable vtable;
};
struct NamespaceResolver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamespaceResolver__StaticFields {
};
struct NamespaceResolver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamespaceResolver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamespaceResolver__VTable vtable;
};
struct ElementWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ElementWriter__StaticFields {
};
struct ElementWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ElementWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ElementWriter__VTable vtable;
};

struct XDocument__Fields {
  struct XContainer__Fields _;
  struct XDeclaration * declaration;
};
struct XDocument {
  struct XDocument__Class *klass;
  struct MonitorData *monitor;
  struct XDocument__Fields fields;
};
struct __declspec(align(8)) XDeclaration__Fields {
  struct String * version;
  struct String * encoding;
  struct String * standalone;
};
struct XDeclaration {
  struct XDeclaration__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XDeclaration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XDocument__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XDocument__VTable vtable;
};

struct XComment__Fields {
  struct XNode__Fields _;
  struct String * value;
};
struct XComment {
  struct XComment__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XComment__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XComment__VTable vtable;
};

struct XProcessingInstruction__Fields {
  struct XNode__Fields _;
  struct String * target;
  struct String * data;
};
struct XProcessingInstruction {
  struct XProcessingInstruction__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XProcessingInstruction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XProcessingInstruction__VTable vtable;
};

struct XDocumentType__Fields {
  struct XNode__Fields _;
  struct String * name;
  struct String * publicId;
  struct String * systemId;
  struct String * internalSubset;
  struct IDtdInfo * dtdInfo;
};
struct XDocumentType {
  struct XDocumentType__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XDocumentType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XDocumentType__VTable vtable;
};

struct StreamingElementWriter {
  struct XmlWriter * writer;
  struct XStreamingElement * element;
  struct List_1_System_Xml_Linq_XAttribute_ * attributes;
  struct NamespaceResolver resolver;
};
struct StreamingElementWriter__Boxed {
  struct StreamingElementWriter__Class *klass;
  struct MonitorData *monitor;
  struct StreamingElementWriter fields;
};
struct __declspec(align(8)) List_1_System_Xml_Linq_XAttribute___Fields {
  struct XAttribute__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Xml_Linq_XAttribute_ {
  struct List_1_System_Xml_Linq_XAttribute___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Xml_Linq_XAttribute___Fields fields;
};
struct XAttribute__Array {
  struct XAttribute__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XAttribute * vector[32];
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
  struct XAttribute__Array * _emptyArray;
};
struct List_1_System_Xml_Linq_XAttribute___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Xml_Linq_XAttribute___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StreamingElementWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StreamingElementWriter__VTable vtable;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Fields {
  struct PropertyDescriptor__Fields _;
};
struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object_ {
  struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Fields fields;
};
struct XElementAttributePropertyDescriptor__Fields {
  struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___Fields _;
  struct XDeferredSingleton_1_System_Xml_Linq_XAttribute_ * value;
  struct XAttribute * changeState;
};
struct XElementAttributePropertyDescriptor {
  struct XElementAttributePropertyDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct XElementAttributePropertyDescriptor__Fields fields;
};
struct __declspec(align(8)) XDeferredSingleton_1_System_Xml_Linq_XAttribute___Fields {
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute_ * func;
  struct XElement * element;
  struct XName * name;
};
struct XDeferredSingleton_1_System_Xml_Linq_XAttribute_ {
  struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___Class *klass;
  struct MonitorData *monitor;
  struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___Fields fields;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute_ {
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XDeferredSingleton_1_System_Xml_Linq_XAttribute___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XElementAttributePropertyDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XElementAttributePropertyDescriptor__VTable vtable;
};

struct XElementAttributePropertyDescriptor_c {
  struct XElementAttributePropertyDescriptor_c__Class *klass;
  struct MonitorData *monitor;
};
struct XElementAttributePropertyDescriptor_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XElementAttributePropertyDescriptor_c__StaticFields {
  struct XElementAttributePropertyDescriptor_c * __9;
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Xml_Linq_XAttribute_ * __9__3_0;
};
struct XElementAttributePropertyDescriptor_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XElementAttributePropertyDescriptor_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XElementAttributePropertyDescriptor_c__VTable vtable;
};

struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Fields {
  struct PropertyDescriptor__Fields _;
};
struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1_ {
  struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Class *klass;
  struct MonitorData *monitor;
  struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Fields fields;
};
struct XElementDescendantsPropertyDescriptor__Fields {
  struct XPropertyDescriptor_2_System_Xml_Linq_XElement_System_Collections_Generic_IEnumerable_1___Fields _;
  struct XDeferredAxis_1_System_Xml_Linq_XElement_ * value;
  struct XName * changeState;
};
struct XElementDescendantsPropertyDescriptor {
  struct XElementDescendantsPropertyDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct XElementDescendantsPropertyDescriptor__Fields fields;
};
struct __declspec(align(8)) XDeferredAxis_1_System_Xml_Linq_XElement___Fields {
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1_ * func;
  struct XElement * element;
  struct XName * name;
};
struct XDeferredAxis_1_System_Xml_Linq_XElement_ {
  struct XDeferredAxis_1_System_Xml_Linq_XElement___Class *klass;
  struct MonitorData *monitor;
  struct XDeferredAxis_1_System_Xml_Linq_XElement___Fields fields;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1_ {
  struct Func_3_System_Xml_Linq_XElement_System_Xml_Linq_XName_System_Collections_Generic_IEnumerable_1___Class *klass;
  struct MonitorData *monitor;
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
};}