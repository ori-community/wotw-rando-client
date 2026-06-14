#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509VerificationFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509VerificationFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509VerificationFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_X509VerificationFlags__Enum_DEFINED
enum class X509VerificationFlags__Enum : int32_t {
    NoFlag = 0x00000000,
    IgnoreNotTimeValid = 0x00000001,
    IgnoreCtlNotTimeValid = 0x00000002,
    IgnoreNotTimeNested = 0x00000004,
    IgnoreInvalidBasicConstraints = 0x00000008,
    AllowUnknownCertificateAuthority = 0x00000010,
    IgnoreWrongUsage = 0x00000020,
    IgnoreInvalidName = 0x00000040,
    IgnoreInvalidPolicy = 0x00000080,
    IgnoreEndRevocationUnknown = 0x00000100,
    IgnoreCtlSignerRevocationUnknown = 0x00000200,
    IgnoreCertificateAuthorityRevocationUnknown = 0x00000400,
    IgnoreRootRevocationUnknown = 0x00000800,
    AllFlags = 0x00000fff,
};
#endif
#if !defined(IL2CPP_STRUCT_X509VerificationFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_X509VerificationFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509VerificationFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509VerificationFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_X509VerificationFlags__Enum_FWDDECL)
#include <Modloader/app/structs/X509VerificationFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509VerificationFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
