namespace app {

struct _Il2CppComDelegate {
  struct _Il2CppComDelegate__Class *klass;
  struct MonitorData *monitor;
};
struct _Il2CppComDelegate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct _Il2CppComDelegate__StaticFields {
};
struct _Il2CppComDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct _Il2CppComDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct _Il2CppComDelegate__VTable vtable;
};

struct MonoPInvokeCallbackAttribute {
  struct MonoPInvokeCallbackAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct MonoPInvokeCallbackAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MonoPInvokeCallbackAttribute__StaticFields {
};
struct MonoPInvokeCallbackAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoPInvokeCallbackAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoPInvokeCallbackAttribute__VTable vtable;
};

struct UnityTls_unitytls_x509list {
};
struct UnityTls_unitytls_x509list__Boxed {
  struct UnityTls_unitytls_x509list__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_x509list fields;
};
struct X509CertificateCollection_1__Fields {
  struct CollectionBase__Fields _;
};
struct X509CertificateCollection_1 {
  struct X509CertificateCollection_1__Class *klass;
  struct MonitorData *monitor;
  struct X509CertificateCollection_1__Fields fields;
};
enum UnityTls_unitytls_error_code__Enum : uint32_t {
  UnityTls_unitytls_error_code__Enum_UNITYTLS_SUCCESS = 0,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_INVALID_ARGUMENT = 1,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_INVALID_FORMAT = 2,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_INVALID_PASSWORD = 3,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_INVALID_STATE = 4,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_BUFFER_OVERFLOW = 5,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_OUT_OF_MEMORY = 6,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_INTERNAL_ERROR = 7,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_NOT_SUPPORTED = 8,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_ENTROPY_SOURCE_FAILED = 9,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_STREAM_CLOSED = 10,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_USER_CUSTOM_ERROR_START = 1048576,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_USER_WOULD_BLOCK = 1048577,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_USER_READ_FAILED = 1048578,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_USER_WRITE_FAILED = 1048579,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_USER_UNKNOWN_ERROR = 1048580,
  UnityTls_unitytls_error_code__Enum_UNITYTLS_USER_CUSTOM_ERROR_END = 2097152,
};
struct UnityTls_unitytls_error_code__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnityTls_unitytls_error_code__Enum value;
};
struct UnityTls_unitytls_errorstate {
  uint32_t magic;
  enum UnityTls_unitytls_error_code__Enum code;
  uint64_t reserved;
};
struct UnityTls_unitytls_errorstate__Boxed {
  struct UnityTls_unitytls_errorstate__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_errorstate fields;
};
struct UnityTls_unitytls_x509list__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnityTls_unitytls_x509list__StaticFields {
};
struct UnityTls_unitytls_x509list__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_x509list__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_x509list__VTable vtable;
};
struct X509CertificateCollection_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData OnSet;
  VirtualInvokeData OnInsert;
  VirtualInvokeData OnClear;
  VirtualInvokeData OnRemove;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnSetComplete;
  VirtualInvokeData OnInsertComplete;
  VirtualInvokeData OnClearComplete;
  VirtualInvokeData OnRemoveComplete;
};
struct X509CertificateCollection_1__StaticFields {
};
struct X509CertificateCollection_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateCollection_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateCollection_1__VTable vtable;
};
struct UnityTls_unitytls_errorstate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnityTls_unitytls_errorstate__StaticFields {
};
struct UnityTls_unitytls_errorstate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_errorstate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_errorstate__VTable vtable;
};

struct UnityTls_unitytls_x509list_ref {
  uint64_t handle;
};
struct UnityTls_unitytls_x509list_ref__Boxed {
  struct UnityTls_unitytls_x509list_ref__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_x509list_ref fields;
};
struct UnityTls_unitytls_x509list_ref__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnityTls_unitytls_x509list_ref__StaticFields {
};
struct UnityTls_unitytls_x509list_ref__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_x509list_ref__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_x509list_ref__VTable vtable;
};

enum AlertDescription__Enum : uint8_t {
  AlertDescription__Enum_CloseNotify = 0,
  AlertDescription__Enum_UnexpectedMessage = 10,
  AlertDescription__Enum_BadRecordMAC = 20,
  AlertDescription__Enum_DecryptionFailed_RESERVED = 21,
  AlertDescription__Enum_RecordOverflow = 22,
  AlertDescription__Enum_DecompressionFailure = 30,
  AlertDescription__Enum_HandshakeFailure = 40,
  AlertDescription__Enum_NoCertificate_RESERVED = 41,
  AlertDescription__Enum_BadCertificate = 42,
  AlertDescription__Enum_UnsupportedCertificate = 43,
  AlertDescription__Enum_CertificateRevoked = 44,
  AlertDescription__Enum_CertificateExpired = 45,
  AlertDescription__Enum_CertificateUnknown = 46,
  AlertDescription__Enum_IlegalParameter = 47,
  AlertDescription__Enum_UnknownCA = 48,
  AlertDescription__Enum_AccessDenied = 49,
  AlertDescription__Enum_DecodeError = 50,
  AlertDescription__Enum_DecryptError = 51,
  AlertDescription__Enum_ExportRestriction = 60,
  AlertDescription__Enum_ProtocolVersion = 70,
  AlertDescription__Enum_InsuficientSecurity = 71,
  AlertDescription__Enum_InternalError = 80,
  AlertDescription__Enum_UserCancelled = 90,
  AlertDescription__Enum_NoRenegotiation = 100,
  AlertDescription__Enum_UnsupportedExtension = 110,
};
struct AlertDescription__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AlertDescription__Enum value;
};

enum UnityTls_unitytls_x509verify_result__Enum : uint32_t {
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_SUCCESS = 0,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_NOT_DONE = 2147483648,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FATAL_ERROR = 4294967295,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_EXPIRED = 1,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_REVOKED = 2,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = 4,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = 8,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = 65536,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = 131072,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = 262144,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = 524288,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = 1048576,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = 2097152,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = 4194304,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = 8388608,
  UnityTls_unitytls_x509verify_result__Enum_UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = 134217728,
};
struct UnityTls_unitytls_x509verify_result__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnityTls_unitytls_x509verify_result__Enum value;
};

enum UnityTls_unitytls_protocol__Enum : uint32_t {
  UnityTls_unitytls_protocol__Enum_UNITYTLS_PROTOCOL_TLS_1_0 = 0,
  UnityTls_unitytls_protocol__Enum_UNITYTLS_PROTOCOL_TLS_1_1 = 1,
  UnityTls_unitytls_protocol__Enum_UNITYTLS_PROTOCOL_TLS_1_2 = 2,
  UnityTls_unitytls_protocol__Enum_UNITYTLS_PROTOCOL_INVALID = 3,
};
struct UnityTls_unitytls_protocol__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnityTls_unitytls_protocol__Enum value;
};
struct UnityTls_unitytls_tlsctx_protocolrange {
  enum UnityTls_unitytls_protocol__Enum min;
  enum UnityTls_unitytls_protocol__Enum max;
};
struct UnityTls_unitytls_tlsctx_protocolrange__Boxed {
  struct UnityTls_unitytls_tlsctx_protocolrange__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_tlsctx_protocolrange fields;
};
struct __declspec(align(8)) UnityTls_unitytls_interface_struct__Fields {
  uint64_t UNITYTLS_INVALID_HANDLE;
  struct UnityTls_unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t * unitytls_errorstate_create;
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t * unitytls_errorstate_raise_error;
  struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t * unitytls_key_get_ref;
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t * unitytls_key_parse_der;
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * unitytls_key_parse_pem;
  struct UnityTls_unitytls_interface_struct_unitytls_key_free_t * unitytls_key_free;
  struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t * unitytls_x509_export_der;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * unitytls_x509list_get_ref;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t * unitytls_x509list_get_x509;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t * unitytls_x509list_create;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t * unitytls_x509list_append;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t * unitytls_x509list_append_der;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t * unitytls_x509list_append_pem;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t * unitytls_x509list_free;
  struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t * unitytls_x509verify_default_ca;
  struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t * unitytls_x509verify_explicit_ca;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * unitytls_tlsctx_create_server;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * unitytls_tlsctx_create_client;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t * unitytls_tlsctx_server_require_client_authentication;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t * unitytls_tlsctx_set_certificate_callback;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t * unitytls_tlsctx_set_trace_callback;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t * unitytls_tlsctx_set_x509verify_callback;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t * unitytls_tlsctx_set_supported_ciphersuites;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t * unitytls_tlsctx_get_ciphersuite;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t * unitytls_tlsctx_get_protocol;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t * unitytls_tlsctx_process_handshake;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t * unitytls_tlsctx_read;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t * unitytls_tlsctx_write;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t * unitytls_tlsctx_notify_close;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t * unitytls_tlsctx_free;
  struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t * unitytls_random_generate_bytes;
};
struct UnityTls_unitytls_interface_struct {
  struct UnityTls_unitytls_interface_struct__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t {
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t {
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t {
  struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__Fields fields;
};
struct UnityTls_unitytls_key_ref {
  uint64_t handle;
};
struct UnityTls_unitytls_key_ref__Boxed {
  struct UnityTls_unitytls_key_ref__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_key_ref fields;
};
struct UnityTls_unitytls_key {
};
struct UnityTls_unitytls_key__Boxed {
  struct UnityTls_unitytls_key__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_key fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t {
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t {
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_free_t {
  struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__Fields fields;
};
struct UnityTls_unitytls_x509_ref {
  uint64_t handle;
};
struct UnityTls_unitytls_x509_ref__Boxed {
  struct UnityTls_unitytls_x509_ref__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_x509_ref fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t__Fields fields;
};
struct UnityTls_unitytls_x509verify_callback__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_x509verify_callback {
  struct UnityTls_unitytls_x509verify_callback__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_x509verify_callback__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t {
  struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__Fields fields;
};
struct UnityTls_unitytls_tlsctx {
};
struct UnityTls_unitytls_tlsctx__Boxed {
  struct UnityTls_unitytls_tlsctx__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_tlsctx fields;
};
struct UnityTls_unitytls_tlsctx_callbacks {
  struct UnityTls_unitytls_tlsctx_read_callback * read;
  struct UnityTls_unitytls_tlsctx_write_callback * write;
  struct Void * data;
};
struct UnityTls_unitytls_tlsctx_callbacks__Boxed {
  struct UnityTls_unitytls_tlsctx_callbacks__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_tlsctx_callbacks fields;
};
struct UnityTls_unitytls_tlsctx_read_callback__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_tlsctx_read_callback {
  struct UnityTls_unitytls_tlsctx_read_callback__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_tlsctx_read_callback__Fields fields;
};
struct UnityTls_unitytls_tlsctx_write_callback__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_tlsctx_write_callback {
  struct UnityTls_unitytls_tlsctx_write_callback__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_tlsctx_write_callback__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t__Fields fields;
};
struct UnityTls_unitytls_tlsctx_certificate_callback__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_tlsctx_certificate_callback {
  struct UnityTls_unitytls_tlsctx_certificate_callback__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_tlsctx_certificate_callback__Fields fields;
};
struct UnityTls_unitytls_x509name {
};
struct UnityTls_unitytls_x509name__Boxed {
  struct UnityTls_unitytls_x509name__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_x509name fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t__Fields fields;
};
struct UnityTls_unitytls_tlsctx_trace_callback__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_tlsctx_trace_callback {
  struct UnityTls_unitytls_tlsctx_trace_callback__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_tlsctx_trace_callback__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t__Fields fields;
};
struct UnityTls_unitytls_tlsctx_x509verify_callback__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_tlsctx_x509verify_callback {
  struct UnityTls_unitytls_tlsctx_x509verify_callback__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_tlsctx_x509verify_callback__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Fields fields;
};
enum UnityTls_unitytls_ciphersuite__Enum : uint32_t {
  UnityTls_unitytls_ciphersuite__Enum_UNITYTLS_CIPHERSUITE_INVALID = 16777215,
};
struct UnityTls_unitytls_ciphersuite__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnityTls_unitytls_ciphersuite__Enum value;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t {
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Fields fields;
};
struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t {
  struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t__Class *klass;
  struct MonitorData *monitor;
  struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t__Fields fields;
};
struct UnityTls_unitytls_tlsctx_protocolrange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnityTls_unitytls_tlsctx_protocolrange__StaticFields {
};
struct UnityTls_unitytls_tlsctx_protocolrange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_tlsctx_protocolrange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_tlsctx_protocolrange__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__VTable vtable;
};
struct UnityTls_unitytls_key_ref__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnityTls_unitytls_key_ref__StaticFields {
};
struct UnityTls_unitytls_key_ref__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_key_ref__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_key_ref__VTable vtable;
};
struct UnityTls_unitytls_key__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnityTls_unitytls_key__StaticFields {
};
struct UnityTls_unitytls_key__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_key__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_key__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__VTable vtable;
};
struct UnityTls_unitytls_x509_ref__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnityTls_unitytls_x509_ref__StaticFields {
};
struct UnityTls_unitytls_x509_ref__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_x509_ref__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_x509_ref__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__VTable {
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
struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__StaticFields {
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__VTable vtable;
};
struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t__VTable {
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
};}