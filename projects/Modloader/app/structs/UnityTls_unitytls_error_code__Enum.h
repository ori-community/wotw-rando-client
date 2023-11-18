#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_DEFINED)
#define IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_DEFINED
enum class UnityTls_unitytls_error_code__Enum : uint32_t {
    UNITYTLS_SUCCESS = 0x00000000,
    UNITYTLS_INVALID_ARGUMENT = 0x00000001,
    UNITYTLS_INVALID_FORMAT = 0x00000002,
    UNITYTLS_INVALID_PASSWORD = 0x00000003,
    UNITYTLS_INVALID_STATE = 0x00000004,
    UNITYTLS_BUFFER_OVERFLOW = 0x00000005,
    UNITYTLS_OUT_OF_MEMORY = 0x00000006,
    UNITYTLS_INTERNAL_ERROR = 0x00000007,
    UNITYTLS_NOT_SUPPORTED = 0x00000008,
    UNITYTLS_ENTROPY_SOURCE_FAILED = 0x00000009,
    UNITYTLS_STREAM_CLOSED = 0x0000000a,
    UNITYTLS_USER_CUSTOM_ERROR_START = 0x00100000,
    UNITYTLS_USER_WOULD_BLOCK = 0x00100001,
    UNITYTLS_USER_READ_FAILED = 0x00100002,
    UNITYTLS_USER_WRITE_FAILED = 0x00100003,
    UNITYTLS_USER_UNKNOWN_ERROR = 0x00100004,
    UNITYTLS_USER_CUSTOM_ERROR_END = 0x00200000,
};
#endif
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_FWDDECL)
#define IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UnityTls_unitytls_error_code__Enum_FWDDECL)
#include <Modloader/app/structs/UnityTls_unitytls_error_code__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTls_unitytls_error_code__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
