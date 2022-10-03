namespace app {
    struct __declspec(align(8)) X509Crl_X509CrlEntry__Fields {
        struct Byte__Array* sn;
        struct DateTime revocationDate;
        struct X509ExtensionCollection_1* extensions;
    };

    struct X509Crl_X509CrlEntry {
        struct X509Crl_X509CrlEntry__Class* klass;
        MonitorData* monitor;
        struct X509Crl_X509CrlEntry__Fields fields;
    };

    struct X509Crl_X509CrlEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct X509Crl_X509CrlEntry__StaticFields {
    };

    struct X509Crl_X509CrlEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Crl_X509CrlEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Crl_X509CrlEntry__VTable vtable;
    };

    struct X509EnhancedKeyUsageExtension__Fields {
        struct X509Extension_1__Fields _;
        struct OidCollection* _enhKeyUsage;
        AsnDecodeStatus__Enum _status;
    };

    struct X509EnhancedKeyUsageExtension {
        struct X509EnhancedKeyUsageExtension__Class* klass;
        MonitorData* monitor;
        struct X509EnhancedKeyUsageExtension__Fields fields;
    };

    struct X509EnhancedKeyUsageExtension__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyFrom;
        VirtualInvokeData Format;
        VirtualInvokeData ToString_1;
    };

    struct X509EnhancedKeyUsageExtension__StaticFields {
    };

    struct X509EnhancedKeyUsageExtension__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509EnhancedKeyUsageExtension__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509EnhancedKeyUsageExtension__VTable vtable;
    };

    struct __declspec(align(8)) X509ExtensionEnumerator__Fields {
        struct IEnumerator* enumerator;
    };

    struct X509ExtensionEnumerator {
        struct X509ExtensionEnumerator__Class* klass;
        MonitorData* monitor;
        struct X509ExtensionEnumerator__Fields fields;
    };

    struct X509ExtensionEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData Reset;
    };

    struct X509ExtensionEnumerator__StaticFields {
    };

    struct X509ExtensionEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509ExtensionEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509ExtensionEnumerator__VTable vtable;
    };

    struct X509Helper2_MyNativeHelper {
        struct X509Helper2_MyNativeHelper__Class* klass;
        MonitorData* monitor;
    };

    struct X509Helper2_MyNativeHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Import;
    };

    struct X509Helper2_MyNativeHelper__StaticFields {
    };

    struct X509Helper2_MyNativeHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Helper2_MyNativeHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Helper2_MyNativeHelper__VTable vtable;
    };

    enum class X509KeyUsageFlags__Enum : int32_t {
        None = 0x00000000,
        EncipherOnly = 0x00000001,
        CrlSign = 0x00000002,
        KeyCertSign = 0x00000004,
        KeyAgreement = 0x00000008,
        DataEncipherment = 0x00000010,
        KeyEncipherment = 0x00000020,
        NonRepudiation = 0x00000040,
        DigitalSignature = 0x00000080,
        DecipherOnly = 0x00008000,
    };

    struct X509KeyUsageFlags__Enum__Boxed {
        struct X509KeyUsageFlags__Enum__Class* klass;
        MonitorData* monitor;
        X509KeyUsageFlags__Enum value;
    };

    struct X509KeyUsageExtension__Fields {
        struct X509Extension_1__Fields _;
        X509KeyUsageFlags__Enum _keyUsages;

        AsnDecodeStatus__Enum _status;
    };

    struct X509KeyUsageExtension {
        struct X509KeyUsageExtension__Class* klass;
        MonitorData* monitor;
        struct X509KeyUsageExtension__Fields fields;
    };

    struct X509KeyUsageFlags__Enum__VTable {
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

    struct X509KeyUsageFlags__Enum__StaticFields {
    };

    struct X509KeyUsageFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509KeyUsageFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509KeyUsageFlags__Enum__VTable vtable;
    };

    struct X509KeyUsageExtension__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyFrom;
        VirtualInvokeData Format;
        VirtualInvokeData ToString_1;
    };

    struct X509KeyUsageExtension__StaticFields {
    };

    struct X509KeyUsageExtension__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509KeyUsageExtension__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509KeyUsageExtension__VTable vtable;
    };

    enum class StoreName__Enum : int32_t {
        AddressBook = 0x00000001,
        AuthRoot = 0x00000002,
        CertificateAuthority = 0x00000003,
        Disallowed = 0x00000004,
        My = 0x00000005,
        Root = 0x00000006,
        TrustedPeople = 0x00000007,
        TrustedPublisher = 0x00000008,
    };

    struct StoreName__Enum__Boxed {
        struct StoreName__Enum__Class* klass;
        MonitorData* monitor;
        StoreName__Enum value;
    };

    struct StoreName__Enum__VTable {
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

    struct StoreName__Enum__StaticFields {
    };

    struct StoreName__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StoreName__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StoreName__Enum__VTable vtable;
    };

    struct __declspec(align(8)) X509Stores__Fields {
        struct String* _storePath;
        bool _newFormat;
        struct X509Store_1* _personal;
        struct X509Store_1* _other;
        struct X509Store_1* _intermediate;
        struct X509Store_1* _trusted;
        struct X509Store_1* _untrusted;
    };

    struct X509Stores {
        struct X509Stores__Class* klass;
        MonitorData* monitor;
        struct X509Stores__Fields fields;
    };

    struct X509Stores__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct X509Stores__StaticFields {
    };

    struct X509Stores__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509Stores__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509Stores__VTable vtable;
    };

    struct X509SubjectKeyIdentifierExtension__Fields {
        struct X509Extension_1__Fields _;
        struct Byte__Array* _subjectKeyIdentifier;
        struct String* _ski;
        AsnDecodeStatus__Enum _status;
    };

    struct X509SubjectKeyIdentifierExtension {
        struct X509SubjectKeyIdentifierExtension__Class* klass;
        MonitorData* monitor;
        struct X509SubjectKeyIdentifierExtension__Fields fields;
    };

    struct X509SubjectKeyIdentifierExtension__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyFrom;
        VirtualInvokeData Format;
        VirtualInvokeData ToString_1;
    };

    struct X509SubjectKeyIdentifierExtension__StaticFields {
    };

    struct X509SubjectKeyIdentifierExtension__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509SubjectKeyIdentifierExtension__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509SubjectKeyIdentifierExtension__VTable vtable;
    };

    enum class X509SubjectKeyIdentifierHashAlgorithm__Enum : int32_t {
        Sha1 = 0x00000000,
        ShortSha1 = 0x00000001,
        CapiSha1 = 0x00000002,
    };

    struct X509SubjectKeyIdentifierHashAlgorithm__Enum__Boxed {
        struct X509SubjectKeyIdentifierHashAlgorithm__Enum__Class* klass;
        MonitorData* monitor;
        X509SubjectKeyIdentifierHashAlgorithm__Enum value;
    };

    struct X509SubjectKeyIdentifierHashAlgorithm__Enum__VTable {
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

    struct X509SubjectKeyIdentifierHashAlgorithm__Enum__StaticFields {
    };

    struct X509SubjectKeyIdentifierHashAlgorithm__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct X509SubjectKeyIdentifierHashAlgorithm__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct X509SubjectKeyIdentifierHashAlgorithm__Enum__VTable vtable;
    };

    struct __declspec(align(8)) GeneratedCodeAttribute__Fields {
        struct String* tool;
        struct String* version;
    };

    struct GeneratedCodeAttribute {
        struct GeneratedCodeAttribute__Class* klass;
        MonitorData* monitor;
        struct GeneratedCodeAttribute__Fields fields;
    };

    struct GeneratedCodeAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct GeneratedCodeAttribute__StaticFields {
    };

    struct GeneratedCodeAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GeneratedCodeAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GeneratedCodeAttribute__VTable vtable;
    };

    struct FileSystemWatcher__Fields {
        struct Component__Fields _;
    };

    struct FileSystemWatcher {
        struct FileSystemWatcher__Class* klass;
        MonitorData* monitor;
        struct FileSystemWatcher__Fields fields;
    };

    struct FileSystemWatcher__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData InitializeLifetimeService;
        VirtualInvokeData get_Site;
        VirtualInvokeData set_Site;
        VirtualInvokeData add_Disposed;
        VirtualInvokeData remove_Disposed;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_CanRaiseEvents;
        VirtualInvokeData get_Site_1;
        VirtualInvokeData set_Site_1;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData GetService;
        VirtualInvokeData BeginInit;
        VirtualInvokeData EndInit;
    };

    struct FileSystemWatcher__StaticFields {
    };

    struct FileSystemWatcher__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FileSystemWatcher__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FileSystemWatcher__VTable vtable;
    };

    struct InvalidDataException__Fields {
        struct SystemException__Fields _;
    };

    struct InvalidDataException {
        struct InvalidDataException__Class* klass;
        MonitorData* monitor;
        struct InvalidDataException__Fields fields;
    };

    struct InvalidDataException__VTable {
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

    struct InvalidDataException__StaticFields {
    };

    struct InvalidDataException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InvalidDataException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InvalidDataException__VTable vtable;
    };

    struct GZipStream__Fields {
        struct Stream__Fields _;
        struct DeflateStream* _deflateStream;
    };

    struct GZipStream {
        struct GZipStream__Class* klass;
        MonitorData* monitor;
        struct GZipStream__Fields fields;
    };

    enum class CompressionMode__Enum : int32_t {
        Decompress = 0x00000000,
        Compress = 0x00000001,
    };

    struct CompressionMode__Enum__Boxed {
        struct CompressionMode__Enum__Class* klass;
        MonitorData* monitor;
        CompressionMode__Enum value;
    };

    struct DeflateStream__Fields {
        struct Stream__Fields _;
        struct Stream* base_stream;
        CompressionMode__Enum mode;

        bool leaveOpen;
        bool disposed;
        struct DeflateStreamNative* native;
    };

    struct DeflateStream {
        struct DeflateStream__Class* klass;
        MonitorData* monitor;
        struct DeflateStream__Fields fields;
    };

    struct __declspec(align(8)) DeflateStreamNative__Fields {
        struct DeflateStreamNative_UnmanagedReadOrWrite* feeder;
        struct Stream* base_stream;
        struct DeflateStreamNative_SafeDeflateStreamHandle* z_stream;
        struct GCHandle data;
        bool disposed;
        struct Byte__Array* io_buffer;
    };

    struct DeflateStreamNative {
        struct DeflateStreamNative__Class* klass;
        MonitorData* monitor;
        struct DeflateStreamNative__Fields fields;
    };

    struct DeflateStreamNative_UnmanagedReadOrWrite__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DeflateStreamNative_UnmanagedReadOrWrite {
        struct DeflateStreamNative_UnmanagedReadOrWrite__Class* klass;
        MonitorData* monitor;
        struct DeflateStreamNative_UnmanagedReadOrWrite__Fields fields;
    };

    struct DeflateStreamNative_SafeDeflateStreamHandle__Fields {
        struct SafeHandle__Fields _;
    };

    struct DeflateStreamNative_SafeDeflateStreamHandle {
        struct DeflateStreamNative_SafeDeflateStreamHandle__Class* klass;
        MonitorData* monitor;
        struct DeflateStreamNative_SafeDeflateStreamHandle__Fields fields;
    };

    struct CompressionMode__Enum__VTable {
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

    struct CompressionMode__Enum__StaticFields {
    };

    struct CompressionMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CompressionMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CompressionMode__Enum__VTable vtable;
    };

    struct DeflateStreamNative_UnmanagedReadOrWrite__VTable {
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

    struct DeflateStreamNative_UnmanagedReadOrWrite__StaticFields {
    };

    struct DeflateStreamNative_UnmanagedReadOrWrite__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateStreamNative_UnmanagedReadOrWrite__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateStreamNative_UnmanagedReadOrWrite__VTable vtable;
    };

    struct DeflateStreamNative_SafeDeflateStreamHandle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_IsInvalid;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData ReleaseHandle;
    };

    struct DeflateStreamNative_SafeDeflateStreamHandle__StaticFields {
    };

    struct DeflateStreamNative_SafeDeflateStreamHandle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateStreamNative_SafeDeflateStreamHandle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateStreamNative_SafeDeflateStreamHandle__VTable vtable;
    };

    struct DeflateStreamNative__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DeflateStreamNative__StaticFields {
    };

    struct DeflateStreamNative__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateStreamNative__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateStreamNative__VTable vtable;
    };

    struct DeflateStream__VTable {
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

    struct DeflateStream__StaticFields {
    };

    struct DeflateStream__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateStream__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateStream__VTable vtable;
    };

    struct GZipStream__VTable {
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

    struct GZipStream__StaticFields {
    };

    struct GZipStream__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GZipStream__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GZipStream__VTable vtable;
    };

    struct DeflateStream_ReadMethod__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DeflateStream_ReadMethod {
        struct DeflateStream_ReadMethod__Class* klass;
        MonitorData* monitor;
        struct DeflateStream_ReadMethod__Fields fields;
    };

    struct DeflateStream_ReadMethod__VTable {
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

    struct DeflateStream_ReadMethod__StaticFields {
    };

    struct DeflateStream_ReadMethod__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateStream_ReadMethod__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateStream_ReadMethod__VTable vtable;
    };

    struct DeflateStream_WriteMethod__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DeflateStream_WriteMethod {
        struct DeflateStream_WriteMethod__Class* klass;
        MonitorData* monitor;
        struct DeflateStream_WriteMethod__Fields fields;
    };

    struct DeflateStream_WriteMethod__VTable {
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

    struct DeflateStream_WriteMethod__StaticFields {
    };

    struct DeflateStream_WriteMethod__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateStream_WriteMethod__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateStream_WriteMethod__VTable vtable;
    };

    struct NetEventSource__Fields {
        struct EventSource__Fields _;
    };

    struct NetEventSource {
        struct NetEventSource__Class* klass;
        MonitorData* monitor;
        struct NetEventSource__Fields fields;
    };

    struct NetEventSource__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData OnEventCommand;
        VirtualInvokeData Dispose_1;
    };

    struct NetEventSource__StaticFields {
        struct NetEventSource* Log;
    };

    struct NetEventSource__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NetEventSource__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NetEventSource__VTable vtable;
    };

    struct NetEventSource_Keywords {
        struct NetEventSource_Keywords__Class* klass;
        MonitorData* monitor;
    };

    struct NetEventSource_Keywords__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NetEventSource_Keywords__StaticFields {
    };

    struct NetEventSource_Keywords__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NetEventSource_Keywords__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NetEventSource_Keywords__VTable vtable;
    };

    struct AuthenticationSchemeSelector__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct AuthenticationSchemeSelector {
        struct AuthenticationSchemeSelector__Class* klass;
        MonitorData* monitor;
        struct AuthenticationSchemeSelector__Fields fields;
    };

    enum class AuthenticationSchemes__Enum : int32_t {
        None = 0x00000000,
        Digest = 0x00000001,
        Negotiate = 0x00000002,
        Ntlm = 0x00000004,
        Basic = 0x00000008,
        Anonymous = 0x00008000,
        IntegratedWindowsAuthentication = 0x00000006,
    };

    struct AuthenticationSchemes__Enum__Boxed {
        struct AuthenticationSchemes__Enum__Class* klass;
        MonitorData* monitor;
        AuthenticationSchemes__Enum value;
    };

    struct __declspec(align(8)) HttpListenerRequest__Fields {
        struct String__Array* accept_types;
        struct Encoding* content_encoding;
        int64_t content_length;
        bool cl_set;
        struct CookieCollection* cookies;
        struct WebHeaderCollection* headers;
        struct String* method;
        struct Stream* input_stream;
        struct Version* version;
        struct NameValueCollection* query_string;
        struct String* raw_url;
        struct Uri* url;
        struct Uri* referrer;
        struct String__Array* user_languages;
        struct HttpListenerContext* context;
        bool is_chunked;
        bool ka_set;
        bool keep_alive;
        struct HttpListenerRequest_GCCDelegate* gcc_delegate;
    };

    struct HttpListenerRequest {
        struct HttpListenerRequest__Class* klass;
        MonitorData* monitor;
        struct HttpListenerRequest__Fields fields;
    };

    struct __declspec(align(8)) HttpListenerContext__Fields {
        struct HttpListenerRequest* request;
        struct HttpListenerResponse* response;
        struct IPrincipal* user;
        struct HttpConnection* cnc;
        struct String* error;
        int32_t err_status;
        struct HttpListener* Listener;
    };

    struct HttpListenerContext {
        struct HttpListenerContext__Class* klass;
        MonitorData* monitor;
        struct HttpListenerContext__Fields fields;
    };

    struct __declspec(align(8)) HttpListenerResponse__Fields {
        bool disposed;
        struct Encoding* content_encoding;
        int64_t content_length;
        bool cl_set;
        struct String* content_type;
        struct CookieCollection* cookies;
        struct WebHeaderCollection* headers;
        bool keep_alive;
        struct ResponseStream* output_stream;
        struct Version* version;
        struct String* location;
        int32_t status_code;
        struct String* status_description;
        bool chunked;
        struct HttpListenerContext* context;
        bool HeadersSent;
        struct Object* headers_lock;
        bool force_close_chunked;
    };

} // namespace app
