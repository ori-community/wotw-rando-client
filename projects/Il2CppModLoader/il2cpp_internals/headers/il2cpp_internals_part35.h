namespace app {
struct SecurityPermission {
  struct SecurityPermission__Class *klass;
  struct MonitorData *monitor;
  struct SecurityPermission__Fields fields;
};
struct SecurityPermission__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Security_IPermission_Demand;
  VirtualInvokeData IsSubsetOf;
  VirtualInvokeData ToXml;
  VirtualInvokeData Copy;
  VirtualInvokeData Demand;
  VirtualInvokeData FromXml;
  VirtualInvokeData Intersect;
  VirtualInvokeData IsSubsetOf_1;
  VirtualInvokeData ToXml_1;
  VirtualInvokeData Union;
  VirtualInvokeData IsUnrestricted;
};
struct SecurityPermission__StaticFields {
};
struct SecurityPermission__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SecurityPermission__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SecurityPermission__VTable vtable;
};

struct __declspec(align(8)) Parser__Fields {
  struct SecurityDocument * _doc;
  struct Tokenizer * _t;
};
struct Parser {
  struct Parser__Class *klass;
  struct MonitorData *monitor;
  struct Parser__Fields fields;
};
enum Tokenizer_TokenSource__Enum : int32_t {
  Tokenizer_TokenSource__Enum_UnicodeByteArray = 0,
  Tokenizer_TokenSource__Enum_UTF8ByteArray = 1,
  Tokenizer_TokenSource__Enum_ASCIIByteArray = 2,
  Tokenizer_TokenSource__Enum_CharArray = 3,
  Tokenizer_TokenSource__Enum_String = 4,
  Tokenizer_TokenSource__Enum_NestedStrings = 5,
  Tokenizer_TokenSource__Enum_Other = 6,
};
struct Tokenizer_TokenSource__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Tokenizer_TokenSource__Enum value;
};
struct __declspec(align(8)) Tokenizer__Fields {
  int32_t LineNo;
  int32_t _inProcessingTag;
  struct Byte__Array * _inBytes;
  struct Char__Array * _inChars;
  struct String * _inString;
  int32_t _inIndex;
  int32_t _inSize;
  int32_t _inSavedCharacter;
  enum Tokenizer_TokenSource__Enum _inTokenSource;
  struct Tokenizer_ITokenReader * _inTokenReader;
  struct Tokenizer_StringMaker * _maker;
  struct String__Array * _searchStrings;
  struct String__Array * _replaceStrings;
  int32_t _inNestedIndex;
  int32_t _inNestedSize;
  struct String * _inNestedString;
};
struct Tokenizer {
  struct Tokenizer__Class *klass;
  struct MonitorData *monitor;
  struct Tokenizer__Fields fields;
};
struct Tokenizer_ITokenReader {
  struct Tokenizer_ITokenReader__Class *klass;
  struct MonitorData *monitor;
};
struct Tokenizer_ITokenReader__VTable {
  VirtualInvokeData Read;
};
struct Tokenizer_ITokenReader__StaticFields {
};
struct Tokenizer_ITokenReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tokenizer_ITokenReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tokenizer_ITokenReader__VTable vtable;
};
struct Tokenizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Tokenizer__StaticFields {
};
struct Tokenizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tokenizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tokenizer__VTable vtable;
};
struct Parser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Parser__StaticFields {
};
struct Parser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Parser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Parser__VTable vtable;
};

struct __declspec(align(8)) TokenizerStream__Fields {
  int32_t m_countTokens;
  struct TokenizerShortBlock * m_headTokens;
  struct TokenizerShortBlock * m_lastTokens;
  struct TokenizerShortBlock * m_currentTokens;
  int32_t m_indexTokens;
  struct TokenizerStringBlock * m_headStrings;
  struct TokenizerStringBlock * m_currentStrings;
  int32_t m_indexStrings;
};
struct TokenizerStream {
  struct TokenizerStream__Class *klass;
  struct MonitorData *monitor;
  struct TokenizerStream__Fields fields;
};
struct __declspec(align(8)) TokenizerShortBlock__Fields {
  struct Int16__Array * m_block;
  struct TokenizerShortBlock * m_next;
};
struct TokenizerShortBlock {
  struct TokenizerShortBlock__Class *klass;
  struct MonitorData *monitor;
  struct TokenizerShortBlock__Fields fields;
};
struct Int16__Array {
  struct Int16__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  int16_t vector[32];
};
struct __declspec(align(8)) TokenizerStringBlock__Fields {
  struct String__Array * m_block;
  struct TokenizerStringBlock * m_next;
};
struct TokenizerStringBlock {
  struct TokenizerStringBlock__Class *klass;
  struct MonitorData *monitor;
  struct TokenizerStringBlock__Fields fields;
};
struct TokenizerShortBlock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TokenizerShortBlock__StaticFields {
};
struct TokenizerShortBlock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TokenizerShortBlock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TokenizerShortBlock__VTable vtable;
};
struct TokenizerStringBlock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TokenizerStringBlock__StaticFields {
};
struct TokenizerStringBlock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TokenizerStringBlock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TokenizerStringBlock__VTable vtable;
};
struct TokenizerStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TokenizerStream__StaticFields {
};
struct TokenizerStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TokenizerStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TokenizerStream__VTable vtable;
};

struct __declspec(align(8)) Tokenizer_StreamTokenReader__Fields {
  struct StreamReader * _in;
  int32_t _numCharRead;
};
struct Tokenizer_StreamTokenReader {
  struct Tokenizer_StreamTokenReader__Class *klass;
  struct MonitorData *monitor;
  struct Tokenizer_StreamTokenReader__Fields fields;
};
struct Tokenizer_StreamTokenReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Read;
  VirtualInvokeData Read_1;
};
struct Tokenizer_StreamTokenReader__StaticFields {
};
struct Tokenizer_StreamTokenReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tokenizer_StreamTokenReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tokenizer_StreamTokenReader__VTable vtable;
};

struct __declspec(align(8)) ClaimsIdentity__Fields {
  struct Byte__Array * m_userSerializationData;
  struct List_1_System_Security_Claims_Claim_ * m_instanceClaims;
  struct Collection_1_System_Collections_Generic_IEnumerable_1_ * m_externalClaims;
  struct String * m_nameType;
  struct String * m_roleType;
  struct String * m_version;
  struct ClaimsIdentity * m_actor;
  struct String * m_authenticationType;
  struct Object * m_bootstrapContext;
  struct String * m_label;
  struct String * m_serializedNameType;
  struct String * m_serializedRoleType;
  struct String * m_serializedClaims;
};
struct ClaimsIdentity {
  struct ClaimsIdentity__Class *klass;
  struct MonitorData *monitor;
  struct ClaimsIdentity__Fields fields;
};
struct GenericIdentity__Fields {
  struct ClaimsIdentity__Fields _;
  struct String * m_name;
  struct String * m_type;
};
struct GenericIdentity {
  struct GenericIdentity__Class *klass;
  struct MonitorData *monitor;
  struct GenericIdentity__Fields fields;
};
struct __declspec(align(8)) List_1_System_Security_Claims_Claim___Fields {
  struct Claim__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Security_Claims_Claim_ {
  struct List_1_System_Security_Claims_Claim___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Security_Claims_Claim___Fields fields;
};
struct __declspec(align(8)) Claim__Fields {
  struct String * m_issuer;
  struct String * m_originalIssuer;
  struct String * m_type;
  struct String * m_value;
  struct String * m_valueType;
  struct Byte__Array * m_userSerializationData;
  struct Dictionary_2_System_String_System_String_ * m_properties;
  struct Object * m_propertyLock;
  struct ClaimsIdentity * m_subject;
};
struct Claim {
  struct Claim__Class *klass;
  struct MonitorData *monitor;
  struct Claim__Fields fields;
};
struct Claim__Array {
  struct Claim__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Claim * vector[32];
};
struct IEnumerator_1_System_Security_Claims_Claim_ {
  struct IEnumerator_1_System_Security_Claims_Claim___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Collection_1_System_Collections_Generic_IEnumerable_1___Fields {
  struct IList_1_IEnumerable_1_System_Security_Claims_Claim_ * items;
  struct Object * _syncRoot;
};
struct Collection_1_System_Collections_Generic_IEnumerable_1_ {
  struct Collection_1_System_Collections_Generic_IEnumerable_1___Class *klass;
  struct MonitorData *monitor;
  struct Collection_1_System_Collections_Generic_IEnumerable_1___Fields fields;
};
struct IList_1_IEnumerable_1_System_Security_Claims_Claim_ {
  struct IList_1_IEnumerable_1_System_Security_Claims_Claim___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Security_Claims_Claim_ {
  struct IEnumerable_1_System_Security_Claims_Claim___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Security_Claims_Claim___Array {
  struct IEnumerable_1_System_Security_Claims_Claim___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IEnumerable_1_System_Security_Claims_Claim_ * vector[32];
};
struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim_ {
  struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___Class *klass;
  struct MonitorData *monitor;
};
struct Claim__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
};
struct Claim__StaticFields {
};
struct Claim__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Claim__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Claim__VTable vtable;
};
struct IEnumerator_1_System_Security_Claims_Claim___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Security_Claims_Claim___StaticFields {
};
struct IEnumerator_1_System_Security_Claims_Claim___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Security_Claims_Claim___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Security_Claims_Claim___VTable vtable;
};
struct List_1_System_Security_Claims_Claim___VTable {
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
struct List_1_System_Security_Claims_Claim___StaticFields {
  struct Claim__Array * _emptyArray;
};
struct List_1_System_Security_Claims_Claim___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Security_Claims_Claim___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Security_Claims_Claim___VTable vtable;
};
struct IList_1_IEnumerable_1_System_Security_Claims_Claim___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_IEnumerable_1_System_Security_Claims_Claim___StaticFields {
};
struct IList_1_IEnumerable_1_System_Security_Claims_Claim___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_IEnumerable_1_System_Security_Claims_Claim___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_IEnumerable_1_System_Security_Claims_Claim___VTable vtable;
};
struct IEnumerable_1_System_Security_Claims_Claim___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Security_Claims_Claim___StaticFields {
};
struct IEnumerable_1_System_Security_Claims_Claim___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Security_Claims_Claim___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Security_Claims_Claim___VTable vtable;
};
struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___StaticFields {
};
struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___VTable vtable;
};
struct Collection_1_System_Collections_Generic_IEnumerable_1___VTable {
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
  VirtualInvokeData GetEnumerator;
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
  VirtualInvokeData ClearItems;
  VirtualInvokeData InsertItem;
  VirtualInvokeData RemoveItem;
  VirtualInvokeData SetItem;
};
struct Collection_1_System_Collections_Generic_IEnumerable_1___StaticFields {
};
struct Collection_1_System_Collections_Generic_IEnumerable_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Collection_1_System_Collections_Generic_IEnumerable_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Collection_1_System_Collections_Generic_IEnumerable_1___VTable vtable;
};
struct ClaimsIdentity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AuthenticationType;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_AuthenticationType_1;
  VirtualInvokeData get_Claims;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData Clone;
  VirtualInvokeData AddClaim;
  VirtualInvokeData FindFirst;
  VirtualInvokeData GetObjectData;
};
struct ClaimsIdentity__StaticFields {
};
struct ClaimsIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClaimsIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClaimsIdentity__VTable vtable;
};
struct GenericIdentity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AuthenticationType;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_AuthenticationType_1;
  VirtualInvokeData get_Claims;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData Clone;
  VirtualInvokeData AddClaim;
  VirtualInvokeData FindFirst;
  VirtualInvokeData GetObjectData;
};
struct GenericIdentity__StaticFields {
};
struct GenericIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericIdentity__VTable vtable;
};

struct __declspec(align(8)) ClaimsPrincipal__Fields {
  struct String * m_version;
  struct String * m_serializedClaimsIdentities;
  struct List_1_System_Security_Claims_ClaimsIdentity_ * m_identities;
};
struct ClaimsPrincipal {
  struct ClaimsPrincipal__Class *klass;
  struct MonitorData *monitor;
  struct ClaimsPrincipal__Fields fields;
};
struct GenericPrincipal__Fields {
  struct ClaimsPrincipal__Fields _;
  struct IIdentity * m_identity;
  struct String__Array * m_roles;
};
struct GenericPrincipal {
  struct GenericPrincipal__Class *klass;
  struct MonitorData *monitor;
  struct GenericPrincipal__Fields fields;
};
struct __declspec(align(8)) List_1_System_Security_Claims_ClaimsIdentity___Fields {
  struct ClaimsIdentity__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Security_Claims_ClaimsIdentity_ {
  struct List_1_System_Security_Claims_ClaimsIdentity___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Security_Claims_ClaimsIdentity___Fields fields;
};
struct ClaimsIdentity__Array {
  struct ClaimsIdentity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ClaimsIdentity * vector[32];
};
struct IEnumerator_1_System_Security_Claims_ClaimsIdentity_ {
  struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity_ {
  struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___Fields fields;
};
struct IEnumerable_1_System_Security_Claims_ClaimsIdentity_ {
  struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_System_Security_Claims_ClaimsPrincipal___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_System_Security_Claims_ClaimsPrincipal_ {
  struct Func_1_System_Security_Claims_ClaimsPrincipal___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_System_Security_Claims_ClaimsPrincipal___Fields fields;
};
struct IIdentity {
  struct IIdentity__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___StaticFields {
};
struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___VTable vtable;
};
struct List_1_System_Security_Claims_ClaimsIdentity___VTable {
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
struct List_1_System_Security_Claims_ClaimsIdentity___StaticFields {
  struct ClaimsIdentity__Array * _emptyArray;
};
struct List_1_System_Security_Claims_ClaimsIdentity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Security_Claims_ClaimsIdentity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Security_Claims_ClaimsIdentity___VTable vtable;
};
struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___StaticFields {
};
struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___VTable vtable;
};
struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___VTable {
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
struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___StaticFields {
};
struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___VTable vtable;
};
struct Func_1_System_Security_Claims_ClaimsPrincipal___VTable {
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
struct Func_1_System_Security_Claims_ClaimsPrincipal___StaticFields {
};
struct Func_1_System_Security_Claims_ClaimsPrincipal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_System_Security_Claims_ClaimsPrincipal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_System_Security_Claims_ClaimsPrincipal___VTable vtable;
};
struct ClaimsPrincipal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ClaimsPrincipal__StaticFields {
  struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity_ * s_identitySelector;
  struct Func_1_System_Security_Claims_ClaimsPrincipal_ * s_principalSelector;
};
struct ClaimsPrincipal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClaimsPrincipal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClaimsPrincipal__VTable vtable;
};
struct IIdentity__VTable {
  VirtualInvokeData get_AuthenticationType;
  VirtualInvokeData get_Name;
};
struct IIdentity__StaticFields {
};
struct IIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IIdentity__VTable vtable;
};
struct GenericPrincipal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GenericPrincipal__StaticFields {
};
struct GenericPrincipal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericPrincipal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericPrincipal__VTable vtable;
};

enum WindowsAccountType__Enum : int32_t {
  WindowsAccountType__Enum_Normal = 0,
  WindowsAccountType__Enum_Guest = 1,
  WindowsAccountType__Enum_System = 2,
  WindowsAccountType__Enum_Anonymous = 3,
};
struct WindowsAccountType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WindowsAccountType__Enum value;
};
struct WindowsIdentity__Fields {
  struct ClaimsIdentity__Fields _;
  void * _token;
  struct String * _type;
  enum WindowsAccountType__Enum _account;
  bool _authenticated;
  struct String * _name;
  struct SerializationInfo * _info;
};
struct WindowsIdentity {
  struct WindowsIdentity__Class *klass;
  struct MonitorData *monitor;
  struct WindowsIdentity__Fields fields;
};
struct __declspec(align(8)) WindowsImpersonationContext__Fields {
  void * _token;
  bool undo;
};
struct WindowsImpersonationContext {
  struct WindowsImpersonationContext__Class *klass;
  struct MonitorData *monitor;
  struct WindowsImpersonationContext__Fields fields;
};
struct WindowsImpersonationContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct WindowsImpersonationContext__StaticFields {
};
struct WindowsImpersonationContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindowsImpersonationContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindowsImpersonationContext__VTable vtable;
};
struct WindowsIdentity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AuthenticationType;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_AuthenticationType_1;
  VirtualInvokeData get_Claims;
  VirtualInvokeData get_Name_1;
  VirtualInvokeData Clone;
  VirtualInvokeData AddClaim;
  VirtualInvokeData FindFirst;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData Dispose;
  VirtualInvokeData Impersonate;
};
struct WindowsIdentity__StaticFields {
  void * invalidWindows;
};
struct WindowsIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindowsIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindowsIdentity__VTable vtable;
};

struct IDictionary_2_System_String_System_String_ {
  struct IDictionary_2_System_String_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct IDictionary_2_System_String_System_String___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_System_String_System_String___StaticFields {
};
struct IDictionary_2_System_String_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_System_String_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_System_String_System_String___VTable vtable;
};

struct __declspec(align(8)) ClaimsIdentity_get_Claims_d_51__Fields {
  int32_t __1__state;
  struct Claim * __2__current;
  int32_t __l__initialThreadId;
  struct ClaimsIdentity * __4__this;
  int32_t _i_5__1;
  int32_t _j_5__2;
  struct IEnumerator_1_System_Security_Claims_Claim_ * __7__wrap1;
};
struct ClaimsIdentity_get_Claims_d_51 {
  struct ClaimsIdentity_get_Claims_d_51__Class *klass;
  struct MonitorData *monitor;
  struct ClaimsIdentity_get_Claims_d_51__Fields fields;
};
struct ClaimsIdentity_get_Claims_d_51__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct ClaimsIdentity_get_Claims_d_51__StaticFields {
};
struct ClaimsIdentity_get_Claims_d_51__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClaimsIdentity_get_Claims_d_51__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClaimsIdentity_get_Claims_d_51__VTable vtable;
};

struct Aes__Fields {
  struct SymmetricAlgorithm__Fields _;
};
struct Aes {
  struct Aes__Class *klass;
  struct MonitorData *monitor;
  struct Aes__Fields fields;
};
struct AesManaged__Fields {
  struct Aes__Fields _;
  struct RijndaelManaged * m_rijndael;
};
struct AesManaged {
  struct AesManaged__Class *klass;
  struct MonitorData *monitor;
  struct AesManaged__Fields fields;
};
struct Rijndael__Fields {
  struct SymmetricAlgorithm__Fields _;
};
struct Rijndael {
  struct Rijndael__Class *klass;
  struct MonitorData *monitor;
  struct Rijndael__Fields fields;
};
struct RijndaelManaged__Fields {
  struct Rijndael__Fields _;
};
struct RijndaelManaged {
  struct RijndaelManaged__Class *klass;
  struct MonitorData *monitor;
  struct RijndaelManaged__Fields fields;
};
struct Rijndael__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_BlockSize;
  VirtualInvokeData set_BlockSize;
  VirtualInvokeData get_FeedbackSize;
  VirtualInvokeData set_FeedbackSize;
  VirtualInvokeData get_IV;
  VirtualInvokeData set_IV;
  VirtualInvokeData get_Key;
  VirtualInvokeData set_Key;
  VirtualInvokeData get_LegalBlockSizes;
  VirtualInvokeData get_LegalKeySizes;
  VirtualInvokeData get_KeySize;
  VirtualInvokeData set_KeySize;
  VirtualInvokeData get_Mode;
  VirtualInvokeData set_Mode;
  VirtualInvokeData get_Padding;
  VirtualInvokeData set_Padding;
  VirtualInvokeData CreateEncryptor;
  VirtualInvokeData __unknown;
  VirtualInvokeData CreateDecryptor;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
};}