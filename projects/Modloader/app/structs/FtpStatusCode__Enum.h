#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpStatusCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpStatusCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpStatusCode__Enum_DEFINED)
#define IL2CPP_STRUCT_FtpStatusCode__Enum_DEFINED
enum class FtpStatusCode__Enum : int32_t {
    Undefined = 0x00000000,
    RestartMarker = 0x0000006e,
    ServiceTemporarilyNotAvailable = 0x00000078,
    DataAlreadyOpen = 0x0000007d,
    OpeningData = 0x00000096,
    CommandOK = 0x000000c8,
    CommandExtraneous = 0x000000ca,
    DirectoryStatus = 0x000000d4,
    FileStatus = 0x000000d5,
    SystemType = 0x000000d7,
    SendUserCommand = 0x000000dc,
    ClosingControl = 0x000000dd,
    ClosingData = 0x000000e2,
    EnteringPassive = 0x000000e3,
    LoggedInProceed = 0x000000e6,
    ServerWantsSecureSession = 0x000000ea,
    FileActionOK = 0x000000fa,
    PathnameCreated = 0x00000101,
    SendPasswordCommand = 0x0000014b,
    NeedLoginAccount = 0x0000014c,
    FileCommandPending = 0x0000015e,
    ServiceNotAvailable = 0x000001a5,
    CantOpenData = 0x000001a9,
    ConnectionClosed = 0x000001aa,
    ActionNotTakenFileUnavailableOrBusy = 0x000001c2,
    ActionAbortedLocalProcessingError = 0x000001c3,
    ActionNotTakenInsufficientSpace = 0x000001c4,
    CommandSyntaxError = 0x000001f4,
    ArgumentSyntaxError = 0x000001f5,
    CommandNotImplemented = 0x000001f6,
    BadCommandSequence = 0x000001f7,
    NotLoggedIn = 0x00000212,
    AccountNeeded = 0x00000214,
    ActionNotTakenFileUnavailable = 0x00000226,
    ActionAbortedUnknownPageType = 0x00000227,
    FileActionAborted = 0x00000228,
    ActionNotTakenFilenameNotAllowed = 0x00000229,
};
#endif
#if !defined(IL2CPP_STRUCT_FtpStatusCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_FtpStatusCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FtpStatusCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpStatusCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FtpStatusCode__Enum_FWDDECL)
#include <Modloader/app/structs/FtpStatusCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpStatusCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
