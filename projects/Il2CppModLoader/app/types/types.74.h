namespace app {
struct UnityTls_unitytls_x509verify_result__Enum__Boxed {
    struct UnityTls_unitytls_x509verify_result__Enum__Class *klass;
    MonitorData *monitor;
    UnityTls_unitytls_x509verify_result__Enum value;
    
};

struct UnityTls_unitytls_x509verify_result__Enum__VTable {
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

struct UnityTls_unitytls_x509verify_result__Enum__StaticFields {
};

struct UnityTls_unitytls_x509verify_result__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_x509verify_result__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityTls_unitytls_x509verify_result__Enum__VTable vtable;
};

enum class UnityTls_unitytls_protocol__Enum : uint32_t {
    UNITYTLS_PROTOCOL_TLS_1_0 = 0x00000000,
    UNITYTLS_PROTOCOL_TLS_1_1 = 0x00000001,
    UNITYTLS_PROTOCOL_TLS_1_2 = 0x00000002,
    UNITYTLS_PROTOCOL_INVALID = 0x00000003,
};

struct UnityTls_unitytls_protocol__Enum__Boxed {
    struct UnityTls_unitytls_protocol__Enum__Class *klass;
    MonitorData *monitor;
    UnityTls_unitytls_protocol__Enum value;
    
};

struct UnityTls_unitytls_tlsctx_protocolrange {
    UnityTls_unitytls_protocol__Enum min;
    
    UnityTls_unitytls_protocol__Enum max;
    
};

struct UnityTls_unitytls_tlsctx_protocolrange__Boxed {
    struct UnityTls_unitytls_tlsctx_protocolrange__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_tlsctx_protocolrange fields;
};

struct __declspec(align(8)) UnityTls_unitytls_interface_struct__Fields {
    uint64_t UNITYTLS_INVALID_HANDLE;
    struct UnityTls_unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
    struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t *unitytls_errorstate_create;
    struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t *unitytls_errorstate_raise_error;
    struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t *unitytls_key_get_ref;
    struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t *unitytls_key_parse_der;
    struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t *unitytls_key_parse_pem;
    struct UnityTls_unitytls_interface_struct_unitytls_key_free_t *unitytls_key_free;
    struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t *unitytls_x509_export_der;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t *unitytls_x509list_get_ref;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t *unitytls_x509list_get_x509;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t *unitytls_x509list_create;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t *unitytls_x509list_append;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t *unitytls_x509list_append_der;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t *unitytls_x509list_append_pem;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t *unitytls_x509list_free;
    struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t *unitytls_x509verify_default_ca;
    struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t *unitytls_x509verify_explicit_ca;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t *unitytls_tlsctx_create_server;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t *unitytls_tlsctx_create_client;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t *unitytls_tlsctx_server_require_client_authentication;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t *unitytls_tlsctx_set_certificate_callback;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t *unitytls_tlsctx_set_trace_callback;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t *unitytls_tlsctx_set_x509verify_callback;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t *unitytls_tlsctx_set_supported_ciphersuites;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t *unitytls_tlsctx_get_ciphersuite;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t *unitytls_tlsctx_get_protocol;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t *unitytls_tlsctx_process_handshake;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t *unitytls_tlsctx_read;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t *unitytls_tlsctx_write;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t *unitytls_tlsctx_notify_close;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t *unitytls_tlsctx_free;
    struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t *unitytls_random_generate_bytes;
};

struct UnityTls_unitytls_interface_struct {
    struct UnityTls_unitytls_interface_struct__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t {
    struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t {
    struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t {
    struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__Fields fields;
};

struct UnityTls_unitytls_key_ref {
    uint64_t handle;
};

struct UnityTls_unitytls_key_ref__Boxed {
    struct UnityTls_unitytls_key_ref__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_key_ref fields;
};

struct UnityTls_unitytls_key {
};

struct UnityTls_unitytls_key__Boxed {
    struct UnityTls_unitytls_key__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_key fields;
};

struct UnityTls_unitytls_keyPtr {
    struct UnityTls_unitytls_keyPtr__Class *klass;
    MonitorData *monitor;
};

struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t {
    struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t {
    struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_key_free_t {
    struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__Fields fields;
};

struct UnityTls_unitytls_x509_ref {
    uint64_t handle;
};

struct UnityTls_unitytls_x509_ref__Boxed {
    struct UnityTls_unitytls_x509_ref__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_x509_ref fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t__Fields fields;
};

struct UnityTls_unitytls_x509verify_callback__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_x509verify_callback {
    struct UnityTls_unitytls_x509verify_callback__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_x509verify_callback__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t {
    struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__Fields fields;
};

struct UnityTls_unitytls_tlsctx {
};

struct UnityTls_unitytls_tlsctx__Boxed {
    struct UnityTls_unitytls_tlsctx__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_tlsctx fields;
};

struct UnityTls_unitytls_tlsctxPtr {
    struct UnityTls_unitytls_tlsctxPtr__Class *klass;
    MonitorData *monitor;
};

struct UnityTls_unitytls_tlsctx_callbacks {
    struct UnityTls_unitytls_tlsctx_read_callback *read;
    struct UnityTls_unitytls_tlsctx_write_callback *write;
    struct Void *data;
};

struct UnityTls_unitytls_tlsctx_callbacks__Boxed {
    struct UnityTls_unitytls_tlsctx_callbacks__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_tlsctx_callbacks fields;
};

struct UnityTls_unitytls_tlsctx_read_callback__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_tlsctx_read_callback {
    struct UnityTls_unitytls_tlsctx_read_callback__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_tlsctx_read_callback__Fields fields;
};

struct UnityTls_unitytls_tlsctx_write_callback__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_tlsctx_write_callback {
    struct UnityTls_unitytls_tlsctx_write_callback__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_tlsctx_write_callback__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t__Fields fields;
};

struct UnityTls_unitytls_tlsctx_certificate_callback__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_tlsctx_certificate_callback {
    struct UnityTls_unitytls_tlsctx_certificate_callback__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_tlsctx_certificate_callback__Fields fields;
};

struct UnityTls_unitytls_x509name {
};

struct UnityTls_unitytls_x509name__Boxed {
    struct UnityTls_unitytls_x509name__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_x509name fields;
};

struct UnityTls_unitytls_x509namePtr {
    struct UnityTls_unitytls_x509namePtr__Class *klass;
    MonitorData *monitor;
};

struct UnityTls_unitytls_x509list_refPtr {
    struct UnityTls_unitytls_x509list_refPtr__Class *klass;
    MonitorData *monitor;
};

struct UnityTls_unitytls_key_refPtr {
    struct UnityTls_unitytls_key_refPtr__Class *klass;
    MonitorData *monitor;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t__Fields fields;
};

struct UnityTls_unitytls_tlsctx_trace_callback__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_tlsctx_trace_callback {
    struct UnityTls_unitytls_tlsctx_trace_callback__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_tlsctx_trace_callback__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t__Fields fields;
};

struct UnityTls_unitytls_tlsctx_x509verify_callback__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_tlsctx_x509verify_callback {
    struct UnityTls_unitytls_tlsctx_x509verify_callback__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_tlsctx_x509verify_callback__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Fields fields;
};

enum class UnityTls_unitytls_ciphersuite__Enum : uint32_t {
    UNITYTLS_CIPHERSUITE_INVALID = 0x00ffffff,
};

struct UnityTls_unitytls_ciphersuite__Enum__Boxed {
    struct UnityTls_unitytls_ciphersuite__Enum__Class *klass;
    MonitorData *monitor;
    UnityTls_unitytls_ciphersuite__Enum value;
    
};

struct UnityTls_unitytls_ciphersuitePtr {
    struct UnityTls_unitytls_ciphersuitePtr__Class *klass;
    MonitorData *monitor;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t {
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Fields fields;
};

struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t {
    struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t__Class *klass;
    MonitorData *monitor;
    struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t__Fields fields;
};

struct UnityTls_unitytls_protocol__Enum__VTable {
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

struct UnityTls_unitytls_protocol__Enum__StaticFields {
};

struct UnityTls_unitytls_protocol__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_protocol__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityTls_unitytls_protocol__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_tlsctx_protocolrange__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_key_ref__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_key__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityTls_unitytls_key__VTable vtable;
};

struct UnityTls_unitytls_keyPtr__VTable {
};

struct UnityTls_unitytls_keyPtr__StaticFields {
};

struct UnityTls_unitytls_keyPtr__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_keyPtr__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityTls_unitytls_keyPtr__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_key_free_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_x509_ref__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t__VTable vtable;
};

}
