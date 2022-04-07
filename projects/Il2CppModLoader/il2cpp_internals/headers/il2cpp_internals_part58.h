namespace app {
struct UriSyntaxFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UriSyntaxFlags__Enum value;
};
struct __declspec(align(8)) UriParser__Fields {
  enum UriSyntaxFlags__Enum m_Flags;
  enum UriSyntaxFlags__Enum m_UpdatableFlags;
  bool m_UpdatableFlagsUsed;
  int32_t m_Port;
  struct String * m_Scheme;
};
struct UriParser {
  struct UriParser__Class *klass;
  struct MonitorData *monitor;
  struct UriParser__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_UriParser___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_UriParser_ {
  struct Dictionary_2_System_String_System_UriParser___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_UriParser___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct UriParser * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___Fields {
  struct Dictionary_2_System_String_System_UriParser_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___Fields {
  struct Dictionary_2_System_String_System_UriParser_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___Fields fields;
};
struct UriParser__Array {
  struct UriParser__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UriParser * vector[32];
};
struct IEnumerator_1_System_UriParser_ {
  struct IEnumerator_1_System_UriParser___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_UriParser_ {
  struct ICollection_1_System_UriParser___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_UriParser_ {
  struct String * key;
  struct UriParser * value;
};
struct KeyValuePair_2_System_String_System_UriParser___Boxed {
  struct KeyValuePair_2_System_String_System_UriParser___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_UriParser_ fields;
};
struct KeyValuePair_2_System_String_System_UriParser___Array {
  struct KeyValuePair_2_System_String_System_UriParser___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_UriParser_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_UriParser_ {
  struct IEnumerable_1_System_UriParser___Class *klass;
  struct MonitorData *monitor;
};
enum UriParser_UriQuirksVersion__Enum : int32_t {
  UriParser_UriQuirksVersion__Enum_V2 = 2,
  UriParser_UriQuirksVersion__Enum_V3 = 3,
};
struct UriParser_UriQuirksVersion__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UriParser_UriQuirksVersion__Enum value;
};
struct UriFormatException__Fields {
  struct FormatException__Fields _;
};
struct UriFormatException {
  struct UriFormatException__Class *klass;
  struct MonitorData *monitor;
  struct UriFormatException__Fields fields;
};
enum UriComponents__Enum : int32_t {
  UriComponents__Enum_Scheme = 1,
  UriComponents__Enum_UserInfo = 2,
  UriComponents__Enum_Host = 4,
  UriComponents__Enum_Port = 8,
  UriComponents__Enum_Path = 16,
  UriComponents__Enum_Query = 32,
  UriComponents__Enum_Fragment = 64,
  UriComponents__Enum_StrongPort = 128,
  UriComponents__Enum_NormalizedHost = 256,
  UriComponents__Enum_KeepDelimiter = 1073741824,
  UriComponents__Enum_SerializationInfoString = -2147483648,
  UriComponents__Enum_AbsoluteUri = 127,
  UriComponents__Enum_HostAndPort = 132,
  UriComponents__Enum_StrongAuthority = 134,
  UriComponents__Enum_SchemeAndServer = 13,
  UriComponents__Enum_HttpRequestUrl = 61,
  UriComponents__Enum_PathAndQuery = 48,
};
struct UriComponents__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UriComponents__Enum value;
};
enum UriFormat__Enum : int32_t {
  UriFormat__Enum_UriEscaped = 1,
  UriFormat__Enum_Unescaped = 2,
  UriFormat__Enum_SafeUnescaped = 3,
};
struct UriFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UriFormat__Enum value;
};
struct Uri_Offset {
  uint16_t Scheme;
  uint16_t User;
  uint16_t Host;
  uint16_t PortValue;
  uint16_t Path;
  uint16_t Query;
  uint16_t Fragment;
  uint16_t End;
};
struct Uri_Offset__Boxed {
  struct Uri_Offset__Class *klass;
  struct MonitorData *monitor;
  struct Uri_Offset fields;
};
struct __declspec(align(8)) Uri_UriInfo__Fields {
  struct String * Host;
  struct String * ScopeId;
  struct String * String;
  struct Uri_Offset Offset;
  struct String * DnsSafeHost;
  struct Uri_MoreInfo * MoreInfo;
};
struct Uri_UriInfo {
  struct Uri_UriInfo__Class *klass;
  struct MonitorData *monitor;
  struct Uri_UriInfo__Fields fields;
};
struct __declspec(align(8)) Uri_MoreInfo__Fields {
  struct String * Path;
  struct String * Query;
  struct String * Fragment;
  struct String * AbsoluteUri;
  int32_t Hash;
  struct String * RemoteUrl;
};
struct Uri_MoreInfo {
  struct Uri_MoreInfo__Class *klass;
  struct MonitorData *monitor;
  struct Uri_MoreInfo__Fields fields;
};
enum UriIdnScope__Enum : int32_t {
  UriIdnScope__Enum_None = 0,
  UriIdnScope__Enum_AllExceptIntranet = 1,
  UriIdnScope__Enum_All = 2,
};
struct UriIdnScope__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UriIdnScope__Enum value;
};
enum UriKind__Enum : int32_t {
  UriKind__Enum_RelativeOrAbsolute = 0,
  UriKind__Enum_Absolute = 1,
  UriKind__Enum_Relative = 2,
};
struct UriKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UriKind__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___VTable vtable;
};
struct IEnumerator_1_System_UriParser___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_UriParser___StaticFields {
};
struct IEnumerator_1_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_UriParser___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___VTable vtable;
};
struct ICollection_1_System_UriParser___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_UriParser___StaticFields {
};
struct ICollection_1_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_UriParser___VTable vtable;
};
struct KeyValuePair_2_System_String_System_UriParser___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_System_UriParser___StaticFields {
};
struct KeyValuePair_2_System_String_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_System_UriParser___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___VTable vtable;
};
struct IEnumerable_1_System_UriParser___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_UriParser___StaticFields {
};
struct IEnumerable_1_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_UriParser___VTable vtable;
};
struct Dictionary_2_System_String_System_UriParser___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
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
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_System_String_System_UriParser___StaticFields {
};
struct Dictionary_2_System_String_System_UriParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_System_UriParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_System_UriParser___VTable vtable;
};
struct UriFormatException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData GetType;
};
struct UriFormatException__StaticFields {
};
struct UriFormatException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UriFormatException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UriFormatException__VTable vtable;
};
struct UriParser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnNewUri;
  VirtualInvokeData InitializeAndValidate;
  VirtualInvokeData Resolve;
  VirtualInvokeData GetComponents;
  VirtualInvokeData IsWellFormedOriginalString;
};
struct UriParser__StaticFields {
  struct Dictionary_2_System_String_System_UriParser_ * m_Table;
  struct Dictionary_2_System_String_System_UriParser_ * m_TempTable;
  struct UriParser * HttpUri;
  struct UriParser * HttpsUri;
  struct UriParser * WsUri;
  struct UriParser * WssUri;
  struct UriParser * FtpUri;
  struct UriParser * FileUri;
  struct UriParser * GopherUri;
  struct UriParser * NntpUri;
  struct UriParser * NewsUri;
  struct UriParser * MailToUri;
  struct UriParser * UuidUri;
  struct UriParser * TelnetUri;
  struct UriParser * LdapUri;
  struct UriParser * NetTcpUri;
  struct UriParser * NetPipeUri;
  struct UriParser * VsMacrosUri;
  enum UriParser_UriQuirksVersion__Enum s_QuirksVersion;
  enum UriSyntaxFlags__Enum HttpSyntaxFlags;
  enum UriSyntaxFlags__Enum FileSyntaxFlags;
};
struct UriParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UriParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UriParser__VTable vtable;
};
struct Uri_Offset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Uri_Offset__StaticFields {
};
struct Uri_Offset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Uri_Offset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Uri_Offset__VTable vtable;
};
struct Uri_MoreInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Uri_MoreInfo__StaticFields {
};
struct Uri_MoreInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Uri_MoreInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Uri_MoreInfo__VTable vtable;
};
struct Uri_UriInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Uri_UriInfo__StaticFields {
};
struct Uri_UriInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Uri_UriInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Uri_UriInfo__VTable vtable;
};
struct Uri__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};
struct Uri__StaticFields {
  struct String * UriSchemeFile;
  struct String * UriSchemeFtp;
  struct String * UriSchemeGopher;
  struct String * UriSchemeHttp;
  struct String * UriSchemeHttps;
  struct String * UriSchemeWs;
  struct String * UriSchemeWss;
  struct String * UriSchemeMailto;
  struct String * UriSchemeNews;
  struct String * UriSchemeNntp;
  struct String * UriSchemeNetTcp;
  struct String * UriSchemeNetPipe;
  struct String * SchemeDelimiter;
  bool s_ConfigInitialized;
  bool s_ConfigInitializing;
  enum UriIdnScope__Enum s_IdnScope;
  bool s_IriParsing;
  bool useDotNetRelativeOrAbsolute;
  bool IsWindowsFileSystem;
  struct Object * s_initLock;
  struct Char__Array * HexLowerChars;
  struct Char__Array * _WSchars;
};
struct Uri__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Uri__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Uri__VTable vtable;
};

struct IWebProxy {
  struct IWebProxy__Class *klass;
  struct MonitorData *monitor;
};
struct IWebProxy__VTable {
  VirtualInvokeData GetProxy;
  VirtualInvokeData IsBypassed;
  VirtualInvokeData get_Credentials;
  VirtualInvokeData set_Credentials;
};
struct IWebProxy__StaticFields {
};
struct IWebProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IWebProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IWebProxy__VTable vtable;
};

struct __declspec(align(8)) CFNetwork_GetProxyData__Fields {
  void * script;
  void * targetUri;
  void * error;
  void * result;
  struct ManualResetEvent * evt;
};
struct CFNetwork_GetProxyData {
  struct CFNetwork_GetProxyData__Class *klass;
  struct MonitorData *monitor;
  struct CFNetwork_GetProxyData__Fields fields;
};
struct CFNetwork_GetProxyData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct CFNetwork_GetProxyData__StaticFields {
};
struct CFNetwork_GetProxyData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CFNetwork_GetProxyData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CFNetwork_GetProxyData__VTable vtable;
};

struct __declspec(align(8)) CFNetwork_CFWebProxy__Fields {
  struct ICredentials * credentials;
  bool userSpecified;
};
struct CFNetwork_CFWebProxy {
  struct CFNetwork_CFWebProxy__Class *klass;
  struct MonitorData *monitor;
  struct CFNetwork_CFWebProxy__Fields fields;
};
struct ICredentials {
  struct ICredentials__Class *klass;
  struct MonitorData *monitor;
};
struct ICredentials__VTable {
  VirtualInvokeData GetCredential;
};
struct ICredentials__StaticFields {
};
struct ICredentials__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICredentials__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICredentials__VTable vtable;
};
struct CFNetwork_CFWebProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetProxy;
  VirtualInvokeData IsBypassed;
  VirtualInvokeData get_Credentials;
  VirtualInvokeData set_Credentials;
};
struct CFNetwork_CFWebProxy__StaticFields {
};
struct CFNetwork_CFWebProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CFNetwork_CFWebProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CFNetwork_CFWebProxy__VTable vtable;
};

struct __declspec(align(8)) NetworkCredential__Fields {
  struct String * m_domain;
  struct String * m_userName;
  struct SecureString * m_password;
};
struct NetworkCredential {
  struct NetworkCredential__Class *klass;
  struct MonitorData *monitor;
  struct NetworkCredential__Fields fields;
};
struct NetworkCredential__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCredential;
  VirtualInvokeData GetCredential_1;
};
struct NetworkCredential__StaticFields {
};
struct NetworkCredential__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetworkCredential__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetworkCredential__VTable vtable;
};

struct __declspec(align(8)) CFNetwork_c_DisplayClass13_0__Fields {
  struct CFProxy__Array * proxies;
  struct CFRunLoop * runLoop;
};
struct CFNetwork_c_DisplayClass13_0 {
  struct CFNetwork_c_DisplayClass13_0__Class *klass;
  struct MonitorData *monitor;
  struct CFNetwork_c_DisplayClass13_0__Fields fields;
};
struct CFNetwork_c_DisplayClass13_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CFNetwork_c_DisplayClass13_0__StaticFields {
};
struct CFNetwork_c_DisplayClass13_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CFNetwork_c_DisplayClass13_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CFNetwork_c_DisplayClass13_0__VTable vtable;
};

struct __declspec(align(8)) AsyncProtocolResult__Fields {
  int32_t _UserResult_k__BackingField;
  struct ExceptionDispatchInfo * _Error_k__BackingField;
};
struct AsyncProtocolResult {
  struct AsyncProtocolResult__Class *klass;
  struct MonitorData *monitor;
  struct AsyncProtocolResult__Fields fields;
};
struct AsyncProtocolResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncProtocolResult__StaticFields {
};
struct AsyncProtocolResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncProtocolResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncProtocolResult__VTable vtable;
};

struct Task_1_Mono_Net_Security_AsyncProtocolResult___Fields {
  struct Task__Fields _;
  struct AsyncProtocolResult * m_result;
};
struct Task_1_Mono_Net_Security_AsyncProtocolResult_ {
  struct Task_1_Mono_Net_Security_AsyncProtocolResult___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_Mono_Net_Security_AsyncProtocolResult___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult_ {
  struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__Fields fields;
};
struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___StaticFields {
};
struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___VTable vtable;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__VTable {
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
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__StaticFields {
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__VTable vtable;
};
struct Task_1_Mono_Net_Security_AsyncProtocolResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
};
struct Task_1_Mono_Net_Security_AsyncProtocolResult___StaticFields {
  struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult_ * s_Factory;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4 * TaskWhenAnyCast;
};
struct Task_1_Mono_Net_Security_AsyncProtocolResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_1_Mono_Net_Security_AsyncProtocolResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_1_Mono_Net_Security_AsyncProtocolResult___VTable vtable;
};

struct Task_1_System_Nullable_1___Fields {
  struct Task__Fields _;
  struct Nullable_1_Int32_ m_result;
};
struct Task_1_System_Nullable_1_ {
  struct Task_1_System_Nullable_1___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_Nullable_1___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_System_Nullable_1___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_Nullable_1_ {
  struct TaskFactory_1_System_Nullable_1___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_Nullable_1___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__Fields fields;
};
struct TaskFactory_1_System_Nullable_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskFactory_1_System_Nullable_1___StaticFields {
};
struct TaskFactory_1_System_Nullable_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_1_System_Nullable_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_1_System_Nullable_1___VTable vtable;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__VTable {
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
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__StaticFields {
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__VTable vtable;
};
struct Task_1_System_Nullable_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
};
struct Task_1_System_Nullable_1___StaticFields {
  struct TaskFactory_1_System_Nullable_1_ * s_Factory;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5 * TaskWhenAnyCast;
};
struct Task_1_System_Nullable_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_1_System_Nullable_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_1_System_Nullable_1___VTable vtable;
};

struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_ {
  struct AsyncMethodBuilderCore m_coreState;
  struct Task_1_Mono_Net_Security_AsyncProtocolResult_ * m_task;
};
struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed {
  struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Class *klass;
  struct MonitorData *monitor;
  struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_ fields;
};
struct AsyncProtocolRequest_StartOperation_d_23 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_ __t__builder;
  struct AsyncProtocolRequest * __4__this;
  struct CancellationToken cancellationToken;
  struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;
};
struct AsyncProtocolRequest_StartOperation_d_23__Boxed {
  struct AsyncProtocolRequest_StartOperation_d_23__Class *klass;
  struct MonitorData *monitor;
  struct AsyncProtocolRequest_StartOperation_d_23 fields;
};
struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___StaticFields {
  struct Task_1_Mono_Net_Security_AsyncProtocolResult_ * s_defaultResultTask;
};}