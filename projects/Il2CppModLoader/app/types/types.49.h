namespace app {
struct Tokenizer__StaticFields {
};

struct Tokenizer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Tokenizer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Parser__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Parser__VTable vtable;
};

struct __declspec(align(8)) TokenizerStream__Fields {
    int32_t m_countTokens;
    struct TokenizerShortBlock *m_headTokens;
    struct TokenizerShortBlock *m_lastTokens;
    struct TokenizerShortBlock *m_currentTokens;
    int32_t m_indexTokens;
    struct TokenizerStringBlock *m_headStrings;
    struct TokenizerStringBlock *m_currentStrings;
    int32_t m_indexStrings;
};

struct TokenizerStream {
    struct TokenizerStream__Class *klass;
    MonitorData *monitor;
    struct TokenizerStream__Fields fields;
};

struct __declspec(align(8)) TokenizerShortBlock__Fields {
    struct Int16__Array *m_block;
    struct TokenizerShortBlock *m_next;
};

struct TokenizerShortBlock {
    struct TokenizerShortBlock__Class *klass;
    MonitorData *monitor;
    struct TokenizerShortBlock__Fields fields;
};

struct Int16__Array {
    struct Int16__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    int16_t vector[32];
};

struct __declspec(align(8)) TokenizerStringBlock__Fields {
    struct String__Array *m_block;
    struct TokenizerStringBlock *m_next;
};

struct TokenizerStringBlock {
    struct TokenizerStringBlock__Class *klass;
    MonitorData *monitor;
    struct TokenizerStringBlock__Fields fields;
};

struct Int16__Array__VTable {
};

struct Int16__Array__StaticFields {
};

struct Int16__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int16__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int16__Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TokenizerShortBlock__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TokenizerStringBlock__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TokenizerStream__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TokenizerStream__VTable vtable;
};

struct __declspec(align(8)) Tokenizer_StreamTokenReader__Fields {
    struct StreamReader *_in;
    int32_t _numCharRead;
};

struct Tokenizer_StreamTokenReader {
    struct Tokenizer_StreamTokenReader__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Tokenizer_StreamTokenReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Tokenizer_StreamTokenReader__VTable vtable;
};

struct __declspec(align(8)) ClaimsIdentity__Fields {
    struct Byte__Array *m_userSerializationData;
    struct List_1_System_Security_Claims_Claim_ *m_instanceClaims;
    struct Collection_1_System_Collections_Generic_IEnumerable_1_ *m_externalClaims;
    struct String *m_nameType;
    struct String *m_roleType;
    struct String *m_version;
    struct ClaimsIdentity *m_actor;
    struct String *m_authenticationType;
    struct Object *m_bootstrapContext;
    struct String *m_label;
    struct String *m_serializedNameType;
    struct String *m_serializedRoleType;
    struct String *m_serializedClaims;
};

struct ClaimsIdentity {
    struct ClaimsIdentity__Class *klass;
    MonitorData *monitor;
    struct ClaimsIdentity__Fields fields;
};

struct GenericIdentity__Fields {
    struct ClaimsIdentity__Fields _;
    struct String *m_name;
    struct String *m_type;
};

struct GenericIdentity {
    struct GenericIdentity__Class *klass;
    MonitorData *monitor;
    struct GenericIdentity__Fields fields;
};

struct __declspec(align(8)) List_1_System_Security_Claims_Claim___Fields {
    struct Claim__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Security_Claims_Claim_ {
    struct List_1_System_Security_Claims_Claim___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Security_Claims_Claim___Fields fields;
};

struct __declspec(align(8)) Claim__Fields {
    struct String *m_issuer;
    struct String *m_originalIssuer;
    struct String *m_type;
    struct String *m_value;
    struct String *m_valueType;
    struct Byte__Array *m_userSerializationData;
    struct Dictionary_2_System_String_System_String_ *m_properties;
    struct Object *m_propertyLock;
    struct ClaimsIdentity *m_subject;
};

struct Claim {
    struct Claim__Class *klass;
    MonitorData *monitor;
    struct Claim__Fields fields;
};

struct Claim__Array {
    struct Claim__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Claim *vector[32];
};

struct IEnumerator_1_System_Security_Claims_Claim_ {
    struct IEnumerator_1_System_Security_Claims_Claim___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Collection_1_System_Collections_Generic_IEnumerable_1___Fields {
    struct IList_1_IEnumerable_1_System_Security_Claims_Claim_ *items;
    struct Object *_syncRoot;
};

struct Collection_1_System_Collections_Generic_IEnumerable_1_ {
    struct Collection_1_System_Collections_Generic_IEnumerable_1___Class *klass;
    MonitorData *monitor;
    struct Collection_1_System_Collections_Generic_IEnumerable_1___Fields fields;
};

struct IList_1_IEnumerable_1_System_Security_Claims_Claim_ {
    struct IList_1_IEnumerable_1_System_Security_Claims_Claim___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Security_Claims_Claim_ {
    struct IEnumerable_1_System_Security_Claims_Claim___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Security_Claims_Claim___Array {
    struct IEnumerable_1_System_Security_Claims_Claim___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IEnumerable_1_System_Security_Claims_Claim_ *vector[32];
};

struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim_ {
    struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Claim__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Claim__VTable vtable;
};

struct Claim__Array__VTable {
};

struct Claim__Array__StaticFields {
};

struct Claim__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Claim__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Claim__Array__VTable vtable;
};

struct IEnumerator_1_System_Security_Claims_Claim___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Security_Claims_Claim___StaticFields {
};

struct IEnumerator_1_System_Security_Claims_Claim___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Security_Claims_Claim___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Claim__Array *_emptyArray;
};

struct List_1_System_Security_Claims_Claim___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Security_Claims_Claim___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_IEnumerable_1_System_Security_Claims_Claim___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_IEnumerable_1_System_Security_Claims_Claim___VTable vtable;
};

struct IEnumerable_1_System_Security_Claims_Claim___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Security_Claims_Claim___StaticFields {
};

struct IEnumerable_1_System_Security_Claims_Claim___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Security_Claims_Claim___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Security_Claims_Claim___VTable vtable;
};

struct IEnumerable_1_System_Security_Claims_Claim___Array__VTable {
};

struct IEnumerable_1_System_Security_Claims_Claim___Array__StaticFields {
};

struct IEnumerable_1_System_Security_Claims_Claim___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Security_Claims_Claim___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Security_Claims_Claim___Array__VTable vtable;
};

struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___StaticFields {
};

struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_IEnumerable_1_System_Security_Claims_Claim___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Collection_1_System_Collections_Generic_IEnumerable_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClaimsIdentity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GenericIdentity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GenericIdentity__VTable vtable;
};

struct __declspec(align(8)) ClaimsPrincipal__Fields {
    struct String *m_version;
    struct String *m_serializedClaimsIdentities;
    struct List_1_System_Security_Claims_ClaimsIdentity_ *m_identities;
};

struct ClaimsPrincipal {
    struct ClaimsPrincipal__Class *klass;
    MonitorData *monitor;
    struct ClaimsPrincipal__Fields fields;
};

struct GenericPrincipal__Fields {
    struct ClaimsPrincipal__Fields _;
    struct IIdentity *m_identity;
    struct String__Array *m_roles;
};

struct GenericPrincipal {
    struct GenericPrincipal__Class *klass;
    MonitorData *monitor;
    struct GenericPrincipal__Fields fields;
};

struct __declspec(align(8)) List_1_System_Security_Claims_ClaimsIdentity___Fields {
    struct ClaimsIdentity__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Security_Claims_ClaimsIdentity_ {
    struct List_1_System_Security_Claims_ClaimsIdentity___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Security_Claims_ClaimsIdentity___Fields fields;
};

struct ClaimsIdentity__Array {
    struct ClaimsIdentity__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ClaimsIdentity *vector[32];
};

struct IEnumerator_1_System_Security_Claims_ClaimsIdentity_ {
    struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___Class *klass;
    MonitorData *monitor;
};

struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity_ {
    struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___Fields fields;
};

struct IEnumerable_1_System_Security_Claims_ClaimsIdentity_ {
    struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___Class *klass;
    MonitorData *monitor;
};

struct Func_1_System_Security_Claims_ClaimsPrincipal___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_System_Security_Claims_ClaimsPrincipal_ {
    struct Func_1_System_Security_Claims_ClaimsPrincipal___Class *klass;
    MonitorData *monitor;
    struct Func_1_System_Security_Claims_ClaimsPrincipal___Fields fields;
};

struct IIdentity {
    struct IIdentity__Class *klass;
    MonitorData *monitor;
};

struct ClaimsIdentity__Array__VTable {
};

struct ClaimsIdentity__Array__StaticFields {
};

struct ClaimsIdentity__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClaimsIdentity__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClaimsIdentity__Array__VTable vtable;
};

struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___StaticFields {
};

struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Security_Claims_ClaimsIdentity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct ClaimsIdentity__Array *_emptyArray;
};

struct List_1_System_Security_Claims_ClaimsIdentity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Security_Claims_ClaimsIdentity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Security_Claims_ClaimsIdentity___VTable vtable;
};

struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___StaticFields {
};

struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Security_Claims_ClaimsIdentity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_1_System_Security_Claims_ClaimsPrincipal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_1_System_Security_Claims_ClaimsPrincipal___VTable vtable;
};

struct ClaimsPrincipal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ClaimsPrincipal__StaticFields {
    struct Func_2_System_Collections_Generic_IEnumerable_1_System_Security_Claims_ClaimsIdentity_ *s_identitySelector;
    struct Func_1_System_Security_Claims_ClaimsPrincipal_ *s_principalSelector;
};

struct ClaimsPrincipal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClaimsPrincipal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClaimsPrincipal__VTable vtable;
};

struct IIdentity__VTable {
    VirtualInvokeData get_AuthenticationType;
    VirtualInvokeData get_Name;
};

struct IIdentity__StaticFields {
};

struct IIdentity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IIdentity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GenericPrincipal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GenericPrincipal__VTable vtable;
};

enum class WindowsAccountType__Enum : int32_t {
    Normal = 0x00000000,
    Guest = 0x00000001,
    System = 0x00000002,
    Anonymous = 0x00000003,
};

struct WindowsAccountType__Enum__Boxed {
    struct WindowsAccountType__Enum__Class *klass;
    MonitorData *monitor;
    WindowsAccountType__Enum value;
    
};

struct WindowsIdentity__Fields {
    struct ClaimsIdentity__Fields _;
    void *_token;
    struct String *_type;
    WindowsAccountType__Enum _account;
    
    bool _authenticated;
    struct String *_name;
    struct SerializationInfo *_info;
};

struct WindowsIdentity {
    struct WindowsIdentity__Class *klass;
    MonitorData *monitor;
    struct WindowsIdentity__Fields fields;
};

struct __declspec(align(8)) WindowsImpersonationContext__Fields {
    void *_token;
    bool undo;
};

struct WindowsImpersonationContext {
    struct WindowsImpersonationContext__Class *klass;
    MonitorData *monitor;
    struct WindowsImpersonationContext__Fields fields;
};

struct WindowsAccountType__Enum__VTable {
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

struct WindowsAccountType__Enum__StaticFields {
};

struct WindowsAccountType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindowsAccountType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WindowsAccountType__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindowsImpersonationContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    void *invalidWindows;
};

struct WindowsIdentity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WindowsIdentity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WindowsIdentity__VTable vtable;
};

}
