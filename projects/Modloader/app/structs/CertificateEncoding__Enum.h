#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CertificateEncoding__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CertificateEncoding__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateEncoding__Enum_DEFINED)
#define IL2CPP_STRUCT_CertificateEncoding__Enum_DEFINED
enum class CertificateEncoding__Enum : int32_t {
    Zero = 0x00000000,
    X509AsnEncoding = 0x00000001,
    X509NdrEncoding = 0x00000002,
    Pkcs7AsnEncoding = 0x00010000,
    Pkcs7NdrEncoding = 0x00020000,
    AnyAsnEncoding = 0x00010001,
};
#endif
#if !defined(IL2CPP_STRUCT_CertificateEncoding__Enum_FWDDECL)
#define IL2CPP_STRUCT_CertificateEncoding__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CertificateEncoding__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateEncoding__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CertificateEncoding__Enum_FWDDECL)
#include <Modloader/app/structs/CertificateEncoding__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CertificateEncoding__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
