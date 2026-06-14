#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509FindType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509FindType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509FindType__Enum_DEFINED)
#define IL2CPP_STRUCT_X509FindType__Enum_DEFINED
enum class X509FindType__Enum : int32_t {
    FindByThumbprint = 0x00000000,
    FindBySubjectName = 0x00000001,
    FindBySubjectDistinguishedName = 0x00000002,
    FindByIssuerName = 0x00000003,
    FindByIssuerDistinguishedName = 0x00000004,
    FindBySerialNumber = 0x00000005,
    FindByTimeValid = 0x00000006,
    FindByTimeNotYetValid = 0x00000007,
    FindByTimeExpired = 0x00000008,
    FindByTemplateName = 0x00000009,
    FindByApplicationPolicy = 0x0000000a,
    FindByCertificatePolicy = 0x0000000b,
    FindByExtension = 0x0000000c,
    FindByKeyUsage = 0x0000000d,
    FindBySubjectKeyIdentifier = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_X509FindType__Enum_FWDDECL)
#define IL2CPP_STRUCT_X509FindType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509FindType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509FindType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_X509FindType__Enum_FWDDECL)
#include <Modloader/app/structs/X509FindType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509FindType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
