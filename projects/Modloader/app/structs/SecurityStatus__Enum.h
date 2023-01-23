#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_SecurityStatus__Enum_DEFINED
enum class SecurityStatus__Enum : int32_t {
    OK = 0x00000000,
    ContinueNeeded = 0x00090312,
    CompleteNeeded = 0x00090313,
    CompAndContinue = 0x00090314,
    ContextExpired = 0x00090317,
    CredentialsNeeded = 0x00090320,
    Renegotiate = 0x00090321,
    OutOfMemory = -2146893056,
    InvalidHandle = -2146893055,
    Unsupported = -2146893054,
    TargetUnknown = -2146893053,
    InternalError = -2146893052,
    PackageNotFound = -2146893051,
    NotOwner = -2146893050,
    CannotInstall = -2146893049,
    InvalidToken = -2146893048,
    CannotPack = -2146893047,
    QopNotSupported = -2146893046,
    NoImpersonation = -2146893045,
    LogonDenied = -2146893044,
    UnknownCredentials = -2146893043,
    NoCredentials = -2146893042,
    MessageAltered = -2146893041,
    OutOfSequence = -2146893040,
    NoAuthenticatingAuthority = -2146893039,
    IncompleteMessage = -2146893032,
    IncompleteCredentials = -2146893024,
    BufferNotEnough = -2146893023,
    WrongPrincipal = -2146893022,
    TimeSkew = -2146893020,
    UntrustedRoot = -2146893019,
    IllegalMessage = -2146893018,
    CertUnknown = -2146893017,
    CertExpired = -2146893016,
    AlgorithmMismatch = -2146893007,
    SecurityQosFailed = -2146893006,
    SmartcardLogonRequired = -2146892994,
    UnsupportedPreauth = -2146892989,
    BadBinding = -2146892986,
};
#endif
#if !defined(IL2CPP_STRUCT_SecurityStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_SecurityStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SecurityStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SecurityStatus__Enum_FWDDECL)
#include <Modloader/app/structs/SecurityStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
