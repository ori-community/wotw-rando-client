#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlertDescription__Enum_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlertDescription__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlertDescription__Enum_1_DEFINED)
#define IL2CPP_STRUCT_AlertDescription__Enum_1_DEFINED
enum class AlertDescription__Enum_1 : uint8_t {
    CloseNotify = 0x00,
    UnexpectedMessage = 0x0a,
    BadRecordMAC = 0x14,
    DecryptionFailed = 0x15,
    RecordOverflow = 0x16,
    DecompressionFailiure = 0x1e,
    HandshakeFailiure = 0x28,
    NoCertificate = 0x29,
    BadCertificate = 0x2a,
    UnsupportedCertificate = 0x2b,
    CertificateRevoked = 0x2c,
    CertificateExpired = 0x2d,
    CertificateUnknown = 0x2e,
    IlegalParameter = 0x2f,
    UnknownCA = 0x30,
    AccessDenied = 0x31,
    DecodeError = 0x32,
    DecryptError = 0x33,
    ExportRestriction = 0x3c,
    ProtocolVersion = 0x46,
    InsuficientSecurity = 0x47,
    InternalError = 0x50,
    UserCancelled = 0x5a,
    NoRenegotiation = 0x64,
};
#endif
#if !defined(IL2CPP_STRUCT_AlertDescription__Enum_1_FWDDECL)
#define IL2CPP_STRUCT_AlertDescription__Enum_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_AlertDescription__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlertDescription__Enum_1_DEFINED) && !defined(IL2CPP_STRUCT_AlertDescription__Enum_1_FWDDECL)
#include <Modloader/app/structs/AlertDescription__Enum_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlertDescription__Enum_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
