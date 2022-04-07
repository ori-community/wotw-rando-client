namespace app {
struct BinaryFormatter__StaticFields {
  struct Dictionary_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation_ * typeNameCache;
};
struct BinaryFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BinaryFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BinaryFormatter__VTable vtable;
};
struct ResourceReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Close;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Dispose;
};
struct ResourceReader__StaticFields {
};
struct ResourceReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceReader__VTable vtable;
};

struct __declspec(align(8)) ResourceReader_ResourceEnumerator__Fields {
  struct ResourceReader * _reader;
  bool _currentIsValid;
  int32_t _currentName;
  int32_t _dataPosition;
};
struct ResourceReader_ResourceEnumerator {
  struct ResourceReader_ResourceEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct ResourceReader_ResourceEnumerator__Fields fields;
};
struct DictionaryEntry {
  struct Object * _key;
  struct Object * _value;
};
struct DictionaryEntry__Boxed {
  struct DictionaryEntry__Class *klass;
  struct MonitorData *monitor;
  struct DictionaryEntry fields;
};
struct DictionaryEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DictionaryEntry__StaticFields {
};
struct DictionaryEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DictionaryEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DictionaryEntry__VTable vtable;
};
struct ResourceReader_ResourceEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Key;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Entry;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct ResourceReader_ResourceEnumerator__StaticFields {
};
struct ResourceReader_ResourceEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceReader_ResourceEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceReader_ResourceEnumerator__VTable vtable;
};

struct RuntimeResourceSet__Fields {
  struct ResourceSet__Fields _;
  struct Dictionary_2_System_String_System_Resources_ResourceLocator_ * _resCache;
  struct ResourceReader * _defaultReader;
  struct Dictionary_2_System_String_System_Resources_ResourceLocator_ * _caseInsensitiveTable;
  bool _haveReadFromReader;
};
struct RuntimeResourceSet {
  struct RuntimeResourceSet__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeResourceSet__Fields fields;
};
struct RuntimeResourceSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData GetString;
  VirtualInvokeData GetString_1;
  VirtualInvokeData GetObject;
  VirtualInvokeData GetObject_1;
};
struct RuntimeResourceSet__StaticFields {
};
struct RuntimeResourceSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeResourceSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeResourceSet__VTable vtable;
};

struct __declspec(align(8)) SatelliteContractVersionAttribute__Fields {
  struct String * _version;
};
struct SatelliteContractVersionAttribute {
  struct SatelliteContractVersionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SatelliteContractVersionAttribute__Fields fields;
};
struct SatelliteContractVersionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SatelliteContractVersionAttribute__StaticFields {
};
struct SatelliteContractVersionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SatelliteContractVersionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SatelliteContractVersionAttribute__VTable vtable;
};

struct AmbiguousMatchException__Fields {
  struct SystemException__Fields _;
};
struct AmbiguousMatchException {
  struct AmbiguousMatchException__Class *klass;
  struct MonitorData *monitor;
  struct AmbiguousMatchException__Fields fields;
};
struct AmbiguousMatchException__VTable {
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
struct AmbiguousMatchException__StaticFields {
};
struct AmbiguousMatchException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmbiguousMatchException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmbiguousMatchException__VTable vtable;
};

struct __declspec(align(8)) AssemblyCopyrightAttribute__Fields {
  struct String * m_copyright;
};
struct AssemblyCopyrightAttribute {
  struct AssemblyCopyrightAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyCopyrightAttribute__Fields fields;
};
struct AssemblyCopyrightAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyCopyrightAttribute__StaticFields {
};
struct AssemblyCopyrightAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyCopyrightAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyCopyrightAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyTrademarkAttribute__Fields {
  struct String * m_trademark;
};
struct AssemblyTrademarkAttribute {
  struct AssemblyTrademarkAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyTrademarkAttribute__Fields fields;
};
struct AssemblyTrademarkAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyTrademarkAttribute__StaticFields {
};
struct AssemblyTrademarkAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyTrademarkAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyTrademarkAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyProductAttribute__Fields {
  struct String * m_product;
};
struct AssemblyProductAttribute {
  struct AssemblyProductAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyProductAttribute__Fields fields;
};
struct AssemblyProductAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyProductAttribute__StaticFields {
};
struct AssemblyProductAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyProductAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyProductAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyCompanyAttribute__Fields {
  struct String * m_company;
};
struct AssemblyCompanyAttribute {
  struct AssemblyCompanyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyCompanyAttribute__Fields fields;
};
struct AssemblyCompanyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyCompanyAttribute__StaticFields {
};
struct AssemblyCompanyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyCompanyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyCompanyAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyDescriptionAttribute__Fields {
  struct String * m_description;
};
struct AssemblyDescriptionAttribute {
  struct AssemblyDescriptionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyDescriptionAttribute__Fields fields;
};
struct AssemblyDescriptionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyDescriptionAttribute__StaticFields {
};
struct AssemblyDescriptionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyDescriptionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyDescriptionAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyTitleAttribute__Fields {
  struct String * m_title;
};
struct AssemblyTitleAttribute {
  struct AssemblyTitleAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyTitleAttribute__Fields fields;
};
struct AssemblyTitleAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyTitleAttribute__StaticFields {
};
struct AssemblyTitleAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyTitleAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyTitleAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyConfigurationAttribute__Fields {
  struct String * m_configuration;
};
struct AssemblyConfigurationAttribute {
  struct AssemblyConfigurationAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyConfigurationAttribute__Fields fields;
};
struct AssemblyConfigurationAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyConfigurationAttribute__StaticFields {
};
struct AssemblyConfigurationAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyConfigurationAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyConfigurationAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyDefaultAliasAttribute__Fields {
  struct String * m_defaultAlias;
};
struct AssemblyDefaultAliasAttribute {
  struct AssemblyDefaultAliasAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyDefaultAliasAttribute__Fields fields;
};
struct AssemblyDefaultAliasAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyDefaultAliasAttribute__StaticFields {
};
struct AssemblyDefaultAliasAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyDefaultAliasAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyDefaultAliasAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyInformationalVersionAttribute__Fields {
  struct String * m_informationalVersion;
};
struct AssemblyInformationalVersionAttribute {
  struct AssemblyInformationalVersionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyInformationalVersionAttribute__Fields fields;
};
struct AssemblyInformationalVersionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyInformationalVersionAttribute__StaticFields {
};
struct AssemblyInformationalVersionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyInformationalVersionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyInformationalVersionAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyFileVersionAttribute__Fields {
  struct String * _version;
};
struct AssemblyFileVersionAttribute {
  struct AssemblyFileVersionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyFileVersionAttribute__Fields fields;
};
struct AssemblyFileVersionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyFileVersionAttribute__StaticFields {
};
struct AssemblyFileVersionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyFileVersionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyFileVersionAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyKeyFileAttribute__Fields {
  struct String * m_keyFile;
};
struct AssemblyKeyFileAttribute {
  struct AssemblyKeyFileAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyKeyFileAttribute__Fields fields;
};
struct AssemblyKeyFileAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyKeyFileAttribute__StaticFields {
};
struct AssemblyKeyFileAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyKeyFileAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyKeyFileAttribute__VTable vtable;
};

struct __declspec(align(8)) AssemblyDelaySignAttribute__Fields {
  bool m_delaySign;
};
struct AssemblyDelaySignAttribute {
  struct AssemblyDelaySignAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyDelaySignAttribute__Fields fields;
};
struct AssemblyDelaySignAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AssemblyDelaySignAttribute__StaticFields {
};
struct AssemblyDelaySignAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyDelaySignAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyDelaySignAttribute__VTable vtable;
};

struct __declspec(align(8)) DefaultMemberAttribute__Fields {
  struct String * m_memberName;
};
struct DefaultMemberAttribute {
  struct DefaultMemberAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DefaultMemberAttribute__Fields fields;
};
struct DefaultMemberAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DefaultMemberAttribute__StaticFields {
};
struct DefaultMemberAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultMemberAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultMemberAttribute__VTable vtable;
};

struct InvalidFilterCriteriaException__Fields {
  struct ApplicationException__Fields _;
};
struct InvalidFilterCriteriaException {
  struct InvalidFilterCriteriaException__Class *klass;
  struct MonitorData *monitor;
  struct InvalidFilterCriteriaException__Fields fields;
};
struct InvalidFilterCriteriaException__VTable {
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
struct InvalidFilterCriteriaException__StaticFields {
};
struct InvalidFilterCriteriaException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvalidFilterCriteriaException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvalidFilterCriteriaException__VTable vtable;
};

struct __declspec(align(8)) MemberInfoSerializationHolder__Fields {
  struct String * m_memberName;
  struct RuntimeType * m_reflectedType;
  struct String * m_signature;
  struct String * m_signature2;
  enum MemberTypes__Enum m_memberType;
  struct SerializationInfo * m_info;
};
struct MemberInfoSerializationHolder {
  struct MemberInfoSerializationHolder__Class *klass;
  struct MonitorData *monitor;
  struct MemberInfoSerializationHolder__Fields fields;
};
struct MemberInfoSerializationHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData GetRealObject;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetRealObject_1;
};
struct MemberInfoSerializationHolder__StaticFields {
};
struct MemberInfoSerializationHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MemberInfoSerializationHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MemberInfoSerializationHolder__VTable vtable;
};

struct __declspec(align(8)) Pointer__Fields {
  struct Void * _ptr;
  struct RuntimeType * _ptrType;
};
struct Pointer {
  struct Pointer__Class *klass;
  struct MonitorData *monitor;
  struct Pointer__Fields fields;
};
struct Pointer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};
struct Pointer__StaticFields {
};
struct Pointer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Pointer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Pointer__VTable vtable;
};

struct ReflectionTypeLoadException__Fields {
  struct SystemException__Fields _;
  struct Type__Array * _classes;
  struct Exception__Array * _exceptions;
};
struct ReflectionTypeLoadException {
  struct ReflectionTypeLoadException__Class *klass;
  struct MonitorData *monitor;
  struct ReflectionTypeLoadException__Fields fields;
};
struct ReflectionTypeLoadException__VTable {
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
struct ReflectionTypeLoadException__StaticFields {
};
struct ReflectionTypeLoadException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionTypeLoadException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionTypeLoadException__VTable vtable;
};

struct TargetException__Fields {
  struct ApplicationException__Fields _;
};
struct TargetException {
  struct TargetException__Class *klass;
  struct MonitorData *monitor;
  struct TargetException__Fields fields;
};
struct TargetException__VTable {
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
struct TargetException__StaticFields {
};
struct TargetException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TargetException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TargetException__VTable vtable;
};

struct TargetInvocationException__Fields {
  struct ApplicationException__Fields _;
};
struct TargetInvocationException {
  struct TargetInvocationException__Class *klass;
  struct MonitorData *monitor;
  struct TargetInvocationException__Fields fields;
};
struct TargetInvocationException__VTable {
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
struct TargetInvocationException__StaticFields {
};
struct TargetInvocationException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TargetInvocationException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TargetInvocationException__VTable vtable;
};

struct TargetParameterCountException__Fields {
  struct ApplicationException__Fields _;
};
struct TargetParameterCountException {
  struct TargetParameterCountException__Class *klass;
  struct MonitorData *monitor;
  struct TargetParameterCountException__Fields fields;
};
struct TargetParameterCountException__VTable {
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
struct TargetParameterCountException__StaticFields {
};
struct TargetParameterCountException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TargetParameterCountException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TargetParameterCountException__VTable vtable;
};

struct Assembly_UnmanagedMemoryStreamForModule__Fields {
  struct UnmanagedMemoryStream__Fields _;
  struct Module * module;
};
struct Assembly_UnmanagedMemoryStreamForModule {
  struct Assembly_UnmanagedMemoryStreamForModule__Class *klass;
  struct MonitorData *monitor;
  struct Assembly_UnmanagedMemoryStreamForModule__Fields fields;
};
struct Assembly_UnmanagedMemoryStreamForModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRead;
  VirtualInvokeData get_CanSeek;
  VirtualInvokeData get_CanTimeout;
  VirtualInvokeData get_CanWrite;
  VirtualInvokeData get_Length;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_ReadTimeout;
  VirtualInvokeData set_ReadTimeout;
  VirtualInvokeData get_WriteTimeout;
  VirtualInvokeData set_WriteTimeout;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData FlushAsync;
  VirtualInvokeData BeginRead;
  VirtualInvokeData EndRead;
  VirtualInvokeData ReadAsync;
  VirtualInvokeData BeginWrite;
  VirtualInvokeData EndWrite;
  VirtualInvokeData WriteAsync;
  VirtualInvokeData Seek;
  VirtualInvokeData SetLength;
  VirtualInvokeData Read;
  VirtualInvokeData ReadByte;
  VirtualInvokeData Write;
  VirtualInvokeData WriteByte;
};
struct Assembly_UnmanagedMemoryStreamForModule__StaticFields {
};
struct Assembly_UnmanagedMemoryStreamForModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Assembly_UnmanagedMemoryStreamForModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Assembly_UnmanagedMemoryStreamForModule__VTable vtable;
};

struct CustomAttributeFormatException__Fields {
  struct FormatException__Fields _;
};
struct CustomAttributeFormatException {
  struct CustomAttributeFormatException__Class *klass;
  struct MonitorData *monitor;
  struct CustomAttributeFormatException__Fields fields;
};
struct CustomAttributeFormatException__VTable {
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
struct CustomAttributeFormatException__StaticFields {
};
struct CustomAttributeFormatException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomAttributeFormatException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomAttributeFormatException__VTable vtable;
};

struct CustomAttributeTypedArgument {
  struct Type * argumentType;
  struct Object * value;
};
struct CustomAttributeTypedArgument__Boxed {
  struct CustomAttributeTypedArgument__Class *klass;
  struct MonitorData *monitor;
  struct CustomAttributeTypedArgument fields;
};
struct CustomAttributeNamedArgument {
  struct CustomAttributeTypedArgument typedArgument;
  struct MemberInfo_1 * memberInfo;
};
struct CustomAttributeNamedArgument__Boxed {
  struct CustomAttributeNamedArgument__Class *klass;
  struct MonitorData *monitor;
  struct CustomAttributeNamedArgument fields;
};
struct CustomAttributeTypedArgument__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CustomAttributeTypedArgument__StaticFields {
};
struct CustomAttributeTypedArgument__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomAttributeTypedArgument__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomAttributeTypedArgument__VTable vtable;
};
struct CustomAttributeNamedArgument__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CustomAttributeNamedArgument__StaticFields {
};
struct CustomAttributeNamedArgument__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomAttributeNamedArgument__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomAttributeNamedArgument__VTable vtable;
};

struct MonoAssembly__Fields {
  struct RuntimeAssembly__Fields _;
};
struct MonoAssembly {
  struct MonoAssembly__Class *klass;
  struct MonitorData *monitor;
  struct MonoAssembly__Fields fields;
};
struct MonoAssembly__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCustomAttributes;
  VirtualInvokeData GetCustomAttributes_1;
  VirtualInvokeData IsDefined;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_CodeBase;
  VirtualInvokeData get_EscapedCodeBase;
  VirtualInvokeData get_FullName;
  VirtualInvokeData get_Location;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData IsDefined_1;
  VirtualInvokeData GetCustomAttributes_2;
  VirtualInvokeData GetCustomAttributes_3;
  VirtualInvokeData GetManifestResourceStream;
  VirtualInvokeData GetTypes;
  VirtualInvokeData GetTypes_1;
  VirtualInvokeData GetType;
  VirtualInvokeData GetType_1;
  VirtualInvokeData GetName;
  VirtualInvokeData GetName_1;
  VirtualInvokeData GetModules;
  VirtualInvokeData GetModulesInternal;
  VirtualInvokeData GetManifestResourceNames;
  VirtualInvokeData GetManifestResourceInfo;
  VirtualInvokeData get_ReflectionOnly;
  VirtualInvokeData GetType_2;
  VirtualInvokeData GetModule;
  VirtualInvokeData GetModules_1;
  VirtualInvokeData get_IsDynamic;
};
struct MonoAssembly__StaticFields {
};
struct MonoAssembly__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoAssembly__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoAssembly__VTable vtable;
};

enum EventAttributes__Enum : int32_t {
  EventAttributes__Enum_None = 0,
  EventAttributes__Enum_SpecialName = 512,
  EventAttributes__Enum_ReservedMask = 1024,
  EventAttributes__Enum_RTSpecialName = 1024,
};
struct EventAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventAttributes__Enum value;
};
struct MonoEventInfo {
  struct Type * declaring_type;
  struct Type * reflected_type;
  struct String * name;
  struct MethodInfo_1 * add_method;
  struct MethodInfo_1 * remove_method;
  struct MethodInfo_1 * raise_method;
  enum EventAttributes__Enum attrs;
  struct MethodInfo_1__Array * other_methods;
};
struct MonoEventInfo__Boxed {
  struct MonoEventInfo__Class *klass;
  struct MonitorData *monitor;
  struct MonoEventInfo fields;
};}