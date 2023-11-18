#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebExceptionStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebExceptionStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebExceptionStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_WebExceptionStatus__Enum_DEFINED
enum class WebExceptionStatus__Enum : int32_t {
    Success = 0x00000000,
    NameResolutionFailure = 0x00000001,
    ConnectFailure = 0x00000002,
    ReceiveFailure = 0x00000003,
    SendFailure = 0x00000004,
    PipelineFailure = 0x00000005,
    RequestCanceled = 0x00000006,
    ProtocolError = 0x00000007,
    ConnectionClosed = 0x00000008,
    TrustFailure = 0x00000009,
    SecureChannelFailure = 0x0000000a,
    ServerProtocolViolation = 0x0000000b,
    KeepAliveFailure = 0x0000000c,
    Pending = 0x0000000d,
    Timeout = 0x0000000e,
    ProxyNameResolutionFailure = 0x0000000f,
    UnknownError = 0x00000010,
    MessageLengthLimitExceeded = 0x00000011,
    CacheEntryNotFound = 0x00000012,
    RequestProhibitedByCachePolicy = 0x00000013,
    RequestProhibitedByProxy = 0x00000014,
};
#endif
#if !defined(IL2CPP_STRUCT_WebExceptionStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_WebExceptionStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WebExceptionStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebExceptionStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WebExceptionStatus__Enum_FWDDECL)
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
