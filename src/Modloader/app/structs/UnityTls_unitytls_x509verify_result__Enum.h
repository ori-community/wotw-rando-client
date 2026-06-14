#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_DEFINED)
#define IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_DEFINED
enum class UnityTls_unitytls_x509verify_result__Enum : uint32_t {
    UNITYTLS_X509VERIFY_SUCCESS = 0x00000000,
    UNITYTLS_X509VERIFY_NOT_DONE = 0x80000000,
    UNITYTLS_X509VERIFY_FATAL_ERROR = 0xffffffff,
    UNITYTLS_X509VERIFY_FLAG_EXPIRED = 0x00000001,
    UNITYTLS_X509VERIFY_FLAG_REVOKED = 0x00000002,
    UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = 0x00000004,
    UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = 0x00000008,
    UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = 0x00010000,
    UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = 0x00020000,
    UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = 0x00040000,
    UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = 0x00080000,
    UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = 0x00100000,
    UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = 0x00200000,
    UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = 0x00400000,
    UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = 0x00800000,
    UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = 0x08000000,
};
#endif
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_FWDDECL)
#define IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UnityTls_unitytls_x509verify_result__Enum_FWDDECL)
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_result__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_result__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
