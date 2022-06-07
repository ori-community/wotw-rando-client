namespace app {
struct XText {
    struct XText__Class *klass;
    MonitorData *monitor;
    struct XText__Fields fields;
};

struct XElement__Fields {
    struct XContainer__Fields _;
    struct XName *name;
    struct XAttribute *lastAttr;
};

struct XElement {
    struct XElement__Class *klass;
    MonitorData *monitor;
    struct XElement__Fields fields;
};

struct IEnumerable_1_System_Xml_Linq_XElement_ {
    struct IEnumerable_1_System_Xml_Linq_XElement___Class *klass;
    MonitorData *monitor;
};

struct XAttribute__Fields {
    struct XObject__Fields _;
    struct XAttribute *next;
    struct XName *name;
    struct String *value;
};

struct XAttribute {
    struct XAttribute__Class *klass;
    MonitorData *monitor;
    struct XAttribute__Fields fields;
};

struct XText__VTable {
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

struct XText__StaticFields {
};

struct XText__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XText__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XText__VTable vtable;
};

struct XNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData AppendText;
    VirtualInvokeData __unknown_2;
};

struct XNode__StaticFields {
};

struct XNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XNode__VTable vtable;
};

struct IEnumerable_1_System_Xml_Linq_XElement___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Xml_Linq_XElement___StaticFields {
};

struct IEnumerable_1_System_Xml_Linq_XElement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Xml_Linq_XElement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Xml_Linq_XElement___VTable vtable;
};

struct XAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
    VirtualInvokeData get_NodeType;
};

struct XAttribute__StaticFields {
};

struct XAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XAttribute__VTable vtable;
};

struct XElement__VTable {
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
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct XElement__StaticFields {
    struct IEnumerable_1_System_Xml_Linq_XElement_ *emptySequence;
};

struct XElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElement__VTable vtable;
};

struct XContainer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData AppendText;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData AddAttribute;
    VirtualInvokeData AddAttributeSkipNotify;
    VirtualInvokeData ValidateNode;
    VirtualInvokeData ValidateString;
};

struct XContainer__StaticFields {
};

struct XContainer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XContainer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XContainer__VTable vtable;
};

struct XObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
    VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
    VirtualInvokeData __unknown;
};

struct XObject__StaticFields {
};

struct XObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XObject__VTable vtable;
};

struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ {
    struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs___Class *klass;
    MonitorData *monitor;
    struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs___Fields fields;
};

enum class XObjectChange__Enum : int32_t {
    Add = 0x00000000,
    Remove = 0x00000001,
    Name = 0x00000002,
    Value = 0x00000003,
};

struct XObjectChange__Enum__Boxed {
    struct XObjectChange__Enum__Class *klass;
    MonitorData *monitor;
    XObjectChange__Enum value;
    
};

struct __declspec(align(8)) XObjectChangeEventArgs__Fields {
    XObjectChange__Enum objectChange;
    
};

struct XObjectChangeEventArgs {
    struct XObjectChangeEventArgs__Class *klass;
    MonitorData *monitor;
    struct XObjectChangeEventArgs__Fields fields;
};

struct XObjectChange__Enum__VTable {
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

struct XObjectChange__Enum__StaticFields {
};

struct XObjectChange__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XObjectChange__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XObjectChange__Enum__VTable vtable;
};

struct XObjectChangeEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XObjectChangeEventArgs__StaticFields {
    struct XObjectChangeEventArgs *Add;
    struct XObjectChangeEventArgs *Remove;
    struct XObjectChangeEventArgs *Name;
    struct XObjectChangeEventArgs *Value;
};

struct XObjectChangeEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XObjectChangeEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XObjectChangeEventArgs__VTable vtable;
};

struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs___VTable {
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

struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs___StaticFields {
};

struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs___VTable vtable;
};

enum class SaveOptions__Enum : int32_t {
    None = 0x00000000,
    DisableFormatting = 0x00000001,
    OmitDuplicateNamespaces = 0x00000002,
};

struct SaveOptions__Enum__Boxed {
    struct SaveOptions__Enum__Class *klass;
    MonitorData *monitor;
    SaveOptions__Enum value;
    
};

struct SaveOptions__Enum__VTable {
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

struct SaveOptions__Enum__StaticFields {
};

struct SaveOptions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SaveOptions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SaveOptions__Enum__VTable vtable;
};

struct __declspec(align(8)) BaseUriAnnotation__Fields {
    struct String *baseUri;
};

struct BaseUriAnnotation {
    struct BaseUriAnnotation__Class *klass;
    MonitorData *monitor;
    struct BaseUriAnnotation__Fields fields;
};

struct BaseUriAnnotation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BaseUriAnnotation__StaticFields {
};

struct BaseUriAnnotation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseUriAnnotation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseUriAnnotation__VTable vtable;
};

struct __declspec(align(8)) LineInfoAnnotation__Fields {
    int32_t lineNumber;
    int32_t linePosition;
};

struct LineInfoAnnotation {
    struct LineInfoAnnotation__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LineInfoAnnotation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LineInfoAnnotation__VTable vtable;
};

struct LineInfoEndElementAnnotation__Fields {
    struct LineInfoAnnotation__Fields _;
};

struct LineInfoEndElementAnnotation {
    struct LineInfoEndElementAnnotation__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LineInfoEndElementAnnotation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LineInfoEndElementAnnotation__VTable vtable;
};

struct __declspec(align(8)) XObjectChangeAnnotation__Fields {
    struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ *changing;
    struct EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ *changed;
};

struct XObjectChangeAnnotation {
    struct XObjectChangeAnnotation__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XObjectChangeAnnotation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XObjectChangeAnnotation__VTable vtable;
};

struct XCData__Fields {
    struct XText__Fields _;
};

struct XCData {
    struct XCData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XCData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XCData__VTable vtable;
};

struct IEnumerable_1_System_Xml_Linq_XNode_ {
    struct IEnumerable_1_System_Xml_Linq_XNode___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Xml_Linq_XNode___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Xml_Linq_XNode___StaticFields {
};

struct IEnumerable_1_System_Xml_Linq_XNode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Xml_Linq_XNode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Xml_Linq_XNode___VTable vtable;
};

enum class LoadOptions__Enum : int32_t {
    None = 0x00000000,
    PreserveWhitespace = 0x00000001,
    SetBaseUri = 0x00000002,
    SetLineInfo = 0x00000004,
};

struct LoadOptions__Enum__Boxed {
    struct LoadOptions__Enum__Class *klass;
    MonitorData *monitor;
    LoadOptions__Enum value;
    
};

struct LoadOptions__Enum__VTable {
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

struct LoadOptions__Enum__StaticFields {
};

struct LoadOptions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoadOptions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoadOptions__Enum__VTable vtable;
};

struct __declspec(align(8)) XContainer_Nodes_d_18__Fields {
    int32_t __1__state;
    struct XNode *__2__current;
    int32_t __l__initialThreadId;
    struct XContainer *__4__this;
    struct XNode *_n_5__1;
};

struct XContainer_Nodes_d_18 {
    struct XContainer_Nodes_d_18__Class *klass;
    MonitorData *monitor;
    struct XContainer_Nodes_d_18__Fields fields;
};

struct IEnumerator_1_System_Xml_Linq_XNode_ {
    struct IEnumerator_1_System_Xml_Linq_XNode___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_System_Xml_Linq_XNode___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Xml_Linq_XNode___StaticFields {
};

struct IEnumerator_1_System_Xml_Linq_XNode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Xml_Linq_XNode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XContainer_Nodes_d_18__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XContainer_Nodes_d_18__VTable vtable;
};

struct __declspec(align(8)) XContainer_GetDescendants_d_39__Fields {
    int32_t __1__state;
    struct XElement *__2__current;
    int32_t __l__initialThreadId;
    bool self;
    bool __3__self;
    struct XContainer *__4__this;
    struct XName *name;
    struct XName *__3__name;
    struct XNode *_n_5__1;
    struct XElement *_e_5__2;
};

struct XContainer_GetDescendants_d_39 {
    struct XContainer_GetDescendants_d_39__Class *klass;
    MonitorData *monitor;
    struct XContainer_GetDescendants_d_39__Fields fields;
};

struct IEnumerator_1_System_Xml_Linq_XElement_ {
    struct IEnumerator_1_System_Xml_Linq_XElement___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_System_Xml_Linq_XElement___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Xml_Linq_XElement___StaticFields {
};

struct IEnumerator_1_System_Xml_Linq_XElement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Xml_Linq_XElement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XContainer_GetDescendants_d_39__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XContainer_GetDescendants_d_39__VTable vtable;
};

struct __declspec(align(8)) XContainer_GetElements_d_40__Fields {
    int32_t __1__state;
    struct XElement *__2__current;
    int32_t __l__initialThreadId;
    struct XContainer *__4__this;
    struct XNode *_n_5__1;
    struct XName *name;
    struct XName *__3__name;
};

struct XContainer_GetElements_d_40 {
    struct XContainer_GetElements_d_40__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XContainer_GetElements_d_40__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XContainer_GetElements_d_40__VTable vtable;
};

struct NamespaceCache {
    struct XNamespace *ns;
    struct String *namespaceName;
};

struct NamespaceCache__Boxed {
    struct NamespaceCache__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NamespaceCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NamespaceCache__VTable vtable;
};

struct __declspec(align(8)) XStreamingElement__Fields {
    struct XName *name;
    struct Object *content;
};

struct XStreamingElement {
    struct XStreamingElement__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XStreamingElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XStreamingElement__VTable vtable;
};

struct IEnumerable_1_System_Xml_Linq_XAttribute_ {
    struct IEnumerable_1_System_Xml_Linq_XAttribute___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Xml_Linq_XAttribute___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Xml_Linq_XAttribute___StaticFields {
};

struct IEnumerable_1_System_Xml_Linq_XAttribute___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Xml_Linq_XAttribute___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Xml_Linq_XAttribute___VTable vtable;
};

struct __declspec(align(8)) XElement_GetAttributes_d_105__Fields {
    int32_t __1__state;
    struct XAttribute *__2__current;
    int32_t __l__initialThreadId;
    struct XElement *__4__this;
    struct XAttribute *_a_5__1;
    struct XName *name;
    struct XName *__3__name;
};

struct XElement_GetAttributes_d_105 {
    struct XElement_GetAttributes_d_105__Class *klass;
    MonitorData *monitor;
    struct XElement_GetAttributes_d_105__Fields fields;
};

struct IEnumerator_1_System_Xml_Linq_XAttribute_ {
    struct IEnumerator_1_System_Xml_Linq_XAttribute___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_System_Xml_Linq_XAttribute___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Xml_Linq_XAttribute___StaticFields {
};

struct IEnumerator_1_System_Xml_Linq_XAttribute___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Xml_Linq_XAttribute___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XElement_GetAttributes_d_105__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XElement_GetAttributes_d_105__VTable vtable;
};

struct NamespaceResolver {
    int32_t scope;
    struct NamespaceResolver_NamespaceDeclaration *declaration;
    struct NamespaceResolver_NamespaceDeclaration *rover;
};

struct NamespaceResolver__Boxed {
    struct NamespaceResolver__Class *klass;
    MonitorData *monitor;
    struct NamespaceResolver fields;
};

struct ElementWriter {
    struct XmlWriter *writer;
    struct NamespaceResolver resolver;
};

struct ElementWriter__Boxed {
    struct ElementWriter__Class *klass;
    MonitorData *monitor;
    struct ElementWriter fields;
};

struct __declspec(align(8)) NamespaceResolver_NamespaceDeclaration__Fields {
    struct String *prefix;
    struct XNamespace *ns;
    int32_t scope;
    struct NamespaceResolver_NamespaceDeclaration *prev;
};

struct NamespaceResolver_NamespaceDeclaration {
    struct NamespaceResolver_NamespaceDeclaration__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NamespaceResolver_NamespaceDeclaration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NamespaceResolver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NamespaceResolver__VTable vtable;
};

}
