#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_DEFINED)
#define IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_DEFINED
enum class UnityWebRequest_UnityWebRequestError__Enum : int32_t {
    OK = 0x00000000,
    Unknown = 0x00000001,
    SDKError = 0x00000002,
    UnsupportedProtocol = 0x00000003,
    MalformattedUrl = 0x00000004,
    CannotResolveProxy = 0x00000005,
    CannotResolveHost = 0x00000006,
    CannotConnectToHost = 0x00000007,
    AccessDenied = 0x00000008,
    GenericHttpError = 0x00000009,
    WriteError = 0x0000000a,
    ReadError = 0x0000000b,
    OutOfMemory = 0x0000000c,
    Timeout = 0x0000000d,
    HTTPPostError = 0x0000000e,
    SSLCannotConnect = 0x0000000f,
    Aborted = 0x00000010,
    TooManyRedirects = 0x00000011,
    ReceivedNoData = 0x00000012,
    SSLNotSupported = 0x00000013,
    FailedToSendData = 0x00000014,
    FailedToReceiveData = 0x00000015,
    SSLCertificateError = 0x00000016,
    SSLCipherNotAvailable = 0x00000017,
    SSLCACertError = 0x00000018,
    UnrecognizedContentEncoding = 0x00000019,
    LoginFailed = 0x0000001a,
    SSLShutdownFailed = 0x0000001b,
    NoInternetConnection = 0x0000001c,
};
#endif
#if !defined(IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_FWDDECL)
#define IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UnityWebRequest_UnityWebRequestError__Enum_FWDDECL)
#include <Modloader/app/structs/UnityWebRequest_UnityWebRequestError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityWebRequest_UnityWebRequestError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
