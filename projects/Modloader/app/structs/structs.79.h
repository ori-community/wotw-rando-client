namespace app {
    struct CFProxy__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CFProxy__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CFProxy__Array__VTable vtable;
    };

    enum class Uri_Flags__Enum : uint64_t {
        Zero = 0x0000000000000000,
        SchemeNotCanonical = 0x0000000000000001,
        UserNotCanonical = 0x0000000000000002,
        HostNotCanonical = 0x0000000000000004,
        PortNotCanonical = 0x0000000000000008,
        PathNotCanonical = 0x0000000000000010,
        QueryNotCanonical = 0x0000000000000020,
        FragmentNotCanonical = 0x0000000000000040,
        CannotDisplayCanonical = 0x000000000000007f,
        E_UserNotCanonical = 0x0000000000000080,
        E_HostNotCanonical = 0x0000000000000100,
        E_PortNotCanonical = 0x0000000000000200,
        E_PathNotCanonical = 0x0000000000000400,
        E_QueryNotCanonical = 0x0000000000000800,
        E_FragmentNotCanonical = 0x0000000000001000,
        E_CannotDisplayCanonical = 0x0000000000001f80,
        ShouldBeCompressed = 0x0000000000002000,
        FirstSlashAbsent = 0x0000000000004000,
        BackslashInPath = 0x0000000000008000,
        IndexMask = 0x000000000000ffff,
        HostTypeMask = 0x0000000000070000,
        HostNotParsed = 0x0000000000000000,
        IPv6HostType = 0x0000000000010000,
        IPv4HostType = 0x0000000000020000,
        DnsHostType = 0x0000000000030000,
        UncHostType = 0x0000000000040000,
        BasicHostType = 0x0000000000050000,
        UnusedHostType = 0x0000000000060000,
        UnknownHostType = 0x0000000000070000,
        UserEscaped = 0x0000000000080000,
        AuthorityFound = 0x0000000000100000,
        HasUserInfo = 0x0000000000200000,
        LoopbackHost = 0x0000000000400000,
        NotDefaultPort = 0x0000000000800000,
        UserDrivenParsing = 0x0000000001000000,
        CanonicalDnsHost = 0x0000000002000000,
        ErrorOrParsingRecursion = 0x0000000004000000,
        DosPath = 0x0000000008000000,
        UncPath = 0x0000000010000000,
        ImplicitFile = 0x0000000020000000,
        MinimalUriInfoSet = 0x0000000040000000,
        AllUriInfoSet = 0x0000000080000000,
        IdnHost = 0x0000000100000000,
        HasUnicode = 0x0000000200000000,
        HostUnicodeNormalized = 0x0000000400000000,
        RestUnicodeNormalized = 0x0000000800000000,
        UnicodeHost = 0x0000001000000000,
        IntranetUri = 0x0000002000000000,
        UseOrigUncdStrOffset = 0x0000004000000000,
        UserIriCanonical = 0x0000008000000000,
        PathIriCanonical = 0x0000010000000000,
        QueryIriCanonical = 0x0000020000000000,
        FragmentIriCanonical = 0x0000040000000000,
        IriCanonical = 0x0000078000000000,
        CompressedSlashes = 0x0000100000000000,
    };

    struct Uri_Flags__Enum__Boxed {
        struct Uri_Flags__Enum__Class* klass;
        MonitorData* monitor;
        Uri_Flags__Enum value;
    };

    struct __declspec(align(8)) Uri__Fields {
        struct String* m_String;
        struct String* m_originalUnicodeString;
        struct UriParser* m_Syntax;
        struct String* m_DnsSafeHost;
        Uri_Flags__Enum m_Flags;

        struct Uri_UriInfo* m_Info;
        bool m_iriParsing;
    };

    struct Uri {
        struct Uri__Class* klass;
        MonitorData* monitor;
        struct Uri__Fields fields;
    };

    enum class UriSyntaxFlags__Enum : int32_t {
        None = 0x00000000,
        MustHaveAuthority = 0x00000001,
        OptionalAuthority = 0x00000002,
        MayHaveUserInfo = 0x00000004,
        MayHavePort = 0x00000008,
        MayHavePath = 0x00000010,
        MayHaveQuery = 0x00000020,
        MayHaveFragment = 0x00000040,
        AllowEmptyHost = 0x00000080,
        AllowUncHost = 0x00000100,
        AllowDnsHost = 0x00000200,
        AllowIPv4Host = 0x00000400,
        AllowIPv6Host = 0x00000800,
        AllowAnInternetHost = 0x00000e00,
        AllowAnyOtherHost = 0x00001000,
        FileLikeUri = 0x00002000,
        MailToLikeUri = 0x00004000,
        V1_UnknownUri = 0x00010000,
        SimpleUserSyntax = 0x00020000,
        BuiltInSyntax = 0x00040000,
        ParserSchemeOnly = 0x00080000,
        AllowDOSPath = 0x00100000,
        PathIsRooted = 0x00200000,
        ConvertPathSlashes = 0x00400000,
        CompressPath = 0x00800000,
        CanonicalizeAsFilePath = 0x01000000,
        UnEscapeDotsAndSlashes = 0x02000000,
        AllowIdn = 0x04000000,
        AllowIriParsing = 0x10000000,
    };

    struct UriSyntaxFlags__Enum__Boxed {
        struct UriSyntaxFlags__Enum__Class* klass;
        MonitorData* monitor;
        UriSyntaxFlags__Enum value;
    };

    struct __declspec(align(8)) UriParser__Fields {
        UriSyntaxFlags__Enum m_Flags;

        UriSyntaxFlags__Enum m_UpdatableFlags;

        bool m_UpdatableFlagsUsed;
        int32_t m_Port;
        struct String* m_Scheme;
    };

    struct UriParser {
        struct UriParser__Class* klass;
        MonitorData* monitor;
        struct UriParser__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_UriParser___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_UriParser_ {
        struct Dictionary_2_System_String_System_UriParser___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_UriParser___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct UriParser* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___Fields {
        struct Dictionary_2_System_String_System_UriParser_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___Fields {
        struct Dictionary_2_System_String_System_UriParser_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___Fields fields;
    };

    struct UriParser__Array {
        struct UriParser__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UriParser* vector[32];
    };

    struct IEnumerator_1_System_UriParser_ {
        struct IEnumerator_1_System_UriParser___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_UriParser_ {
        struct ICollection_1_System_UriParser___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_System_UriParser_ {
        struct String* key;
        struct UriParser* value;
    };

    struct KeyValuePair_2_System_String_System_UriParser___Boxed {
        struct KeyValuePair_2_System_String_System_UriParser___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_UriParser_ fields;
    };

    struct KeyValuePair_2_System_String_System_UriParser___Array {
        struct KeyValuePair_2_System_String_System_UriParser___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_UriParser_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_UriParser_ {
        struct IEnumerable_1_System_UriParser___Class* klass;
        MonitorData* monitor;
    };

    enum class UriParser_UriQuirksVersion__Enum : int32_t {
        V2 = 0x00000002,
        V3 = 0x00000003,
    };

    struct UriParser_UriQuirksVersion__Enum__Boxed {
        struct UriParser_UriQuirksVersion__Enum__Class* klass;
        MonitorData* monitor;
        UriParser_UriQuirksVersion__Enum value;
    };

    struct UriFormatException__Fields {
        struct FormatException__Fields _;
    };

    struct UriFormatException {
        struct UriFormatException__Class* klass;
        MonitorData* monitor;
        struct UriFormatException__Fields fields;
    };

    enum class UriComponents__Enum : int32_t {
        Scheme = 0x00000001,
        UserInfo = 0x00000002,
        Host = 0x00000004,
        Port = 0x00000008,
        Path = 0x00000010,
        Query = 0x00000020,
        Fragment = 0x00000040,
        StrongPort = 0x00000080,
        NormalizedHost = 0x00000100,
        KeepDelimiter = 0x40000000,
        SerializationInfoString = -2147483648,
        AbsoluteUri = 0x0000007f,
        HostAndPort = 0x00000084,
        StrongAuthority = 0x00000086,
        SchemeAndServer = 0x0000000d,
        HttpRequestUrl = 0x0000003d,
        PathAndQuery = 0x00000030,
    };

    struct UriComponents__Enum__Boxed {
        struct UriComponents__Enum__Class* klass;
        MonitorData* monitor;
        UriComponents__Enum value;
    };

    enum class UriFormat__Enum : int32_t {
        UriEscaped = 0x00000001,
        Unescaped = 0x00000002,
        SafeUnescaped = 0x00000003,
    };

    struct UriFormat__Enum__Boxed {
        struct UriFormat__Enum__Class* klass;
        MonitorData* monitor;
        UriFormat__Enum value;
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
        struct Uri_Offset__Class* klass;
        MonitorData* monitor;
        struct Uri_Offset fields;
    };

    struct __declspec(align(8)) Uri_UriInfo__Fields {
        struct String* Host;
        struct String* ScopeId;
        struct String* String;
        struct Uri_Offset Offset;
        struct String* DnsSafeHost;
        struct Uri_MoreInfo* MoreInfo;
    };

    struct Uri_UriInfo {
        struct Uri_UriInfo__Class* klass;
        MonitorData* monitor;
        struct Uri_UriInfo__Fields fields;
    };

    struct __declspec(align(8)) Uri_MoreInfo__Fields {
        struct String* Path;
        struct String* Query;
        struct String* Fragment;
        struct String* AbsoluteUri;
        int32_t Hash;
        struct String* RemoteUrl;
    };

    struct Uri_MoreInfo {
        struct Uri_MoreInfo__Class* klass;
        MonitorData* monitor;
        struct Uri_MoreInfo__Fields fields;
    };

    enum class UriIdnScope__Enum : int32_t {
        None = 0x00000000,
        AllExceptIntranet = 0x00000001,
        All = 0x00000002,
    };

    struct UriIdnScope__Enum__Boxed {
        struct UriIdnScope__Enum__Class* klass;
        MonitorData* monitor;
        UriIdnScope__Enum value;
    };

    enum class UriKind__Enum : int32_t {
        RelativeOrAbsolute = 0x00000000,
        Absolute = 0x00000001,
        Relative = 0x00000002,
    };

    struct UriKind__Enum__Boxed {
        struct UriKind__Enum__Class* klass;
        MonitorData* monitor;
        UriKind__Enum value;
    };

    struct UriSyntaxFlags__Enum__VTable {
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

    struct UriSyntaxFlags__Enum__StaticFields {
    };

    struct UriSyntaxFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriSyntaxFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriSyntaxFlags__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_UriParser___Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_UriParser___VTable vtable;
    };

    struct UriParser__Array__VTable {
    };

    struct UriParser__Array__StaticFields {
    };

    struct UriParser__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriParser__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriParser__Array__VTable vtable;
    };

    struct IEnumerator_1_System_UriParser___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_UriParser___StaticFields {
    };

    struct IEnumerator_1_System_UriParser___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_System_UriParser___VTable vtable;
    };

    struct UriParser___VTable {
    };

    struct UriParser___StaticFields {
    };

    struct UriParser___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriParser___VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_UriParser___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_UriParser___Array__VTable {
    };

    struct KeyValuePair_2_System_String_System_UriParser___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_System_UriParser___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_UriParser___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_UriParser___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_UriParser___VTable vtable;
    };

    struct IEnumerable_1_System_UriParser___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_System_UriParser___StaticFields {
    };

    struct IEnumerable_1_System_UriParser___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_System_UriParser___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_System_UriParser___VTable vtable;
    };

    struct UriParser_UriQuirksVersion__Enum__VTable {
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

    struct UriParser_UriQuirksVersion__Enum__StaticFields {
    };

    struct UriParser_UriQuirksVersion__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriParser_UriQuirksVersion__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriParser_UriQuirksVersion__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriFormatException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriFormatException__VTable vtable;
    };

    struct UriFormatException___VTable {
    };

    struct UriFormatException___StaticFields {
    };

    struct UriFormatException___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriFormatException___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriFormatException___VTable vtable;
    };

    struct UriComponents__Enum__VTable {
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

    struct UriComponents__Enum__StaticFields {
    };

    struct UriComponents__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriComponents__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriComponents__Enum__VTable vtable;
    };

    struct UriFormat__Enum__VTable {
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

    struct UriFormat__Enum__StaticFields {
    };

    struct UriFormat__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriFormat__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriFormat__Enum__VTable vtable;
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
        struct Dictionary_2_System_String_System_UriParser_* m_Table;
        struct Dictionary_2_System_String_System_UriParser_* m_TempTable;
        struct UriParser* HttpUri;
        struct UriParser* HttpsUri;
        struct UriParser* WsUri;
        struct UriParser* WssUri;
        struct UriParser* FtpUri;
        struct UriParser* FileUri;
        struct UriParser* GopherUri;
        struct UriParser* NntpUri;
        struct UriParser* NewsUri;
        struct UriParser* MailToUri;
        struct UriParser* UuidUri;
        struct UriParser* TelnetUri;
        struct UriParser* LdapUri;
        struct UriParser* NetTcpUri;
        struct UriParser* NetPipeUri;
        struct UriParser* VsMacrosUri;
        UriParser_UriQuirksVersion__Enum s_QuirksVersion;

        UriSyntaxFlags__Enum HttpSyntaxFlags;

        UriSyntaxFlags__Enum FileSyntaxFlags;
    };

    struct UriParser__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriParser__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriParser__VTable vtable;
    };

    struct Uri_Flags__Enum__VTable {
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

    struct Uri_Flags__Enum__StaticFields {
    };

    struct Uri_Flags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Uri_Flags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Uri_Flags__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Uri_Offset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Uri_MoreInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Uri_MoreInfo__VTable vtable;
    };

} // namespace app
