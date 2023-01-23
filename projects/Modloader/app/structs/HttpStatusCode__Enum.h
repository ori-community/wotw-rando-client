#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpStatusCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpStatusCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpStatusCode__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpStatusCode__Enum_DEFINED
enum class HttpStatusCode__Enum : int32_t {
    Continue = 0x00000064,
    SwitchingProtocols = 0x00000065,
    OK = 0x000000c8,
    Created = 0x000000c9,
    Accepted = 0x000000ca,
    NonAuthoritativeInformation = 0x000000cb,
    NoContent = 0x000000cc,
    ResetContent = 0x000000cd,
    PartialContent = 0x000000ce,
    MultipleChoices = 0x0000012c,
    Ambiguous = 0x0000012c,
    MovedPermanently = 0x0000012d,
    Moved = 0x0000012d,
    Found = 0x0000012e,
    Redirect = 0x0000012e,
    SeeOther = 0x0000012f,
    RedirectMethod = 0x0000012f,
    NotModified = 0x00000130,
    UseProxy = 0x00000131,
    Unused = 0x00000132,
    TemporaryRedirect = 0x00000133,
    RedirectKeepVerb = 0x00000133,
    BadRequest = 0x00000190,
    Unauthorized = 0x00000191,
    PaymentRequired = 0x00000192,
    Forbidden = 0x00000193,
    NotFound = 0x00000194,
    MethodNotAllowed = 0x00000195,
    NotAcceptable = 0x00000196,
    ProxyAuthenticationRequired = 0x00000197,
    RequestTimeout = 0x00000198,
    Conflict = 0x00000199,
    Gone = 0x0000019a,
    LengthRequired = 0x0000019b,
    PreconditionFailed = 0x0000019c,
    RequestEntityTooLarge = 0x0000019d,
    RequestUriTooLong = 0x0000019e,
    UnsupportedMediaType = 0x0000019f,
    RequestedRangeNotSatisfiable = 0x000001a0,
    ExpectationFailed = 0x000001a1,
    UpgradeRequired = 0x000001aa,
    InternalServerError = 0x000001f4,
    NotImplemented = 0x000001f5,
    BadGateway = 0x000001f6,
    ServiceUnavailable = 0x000001f7,
    GatewayTimeout = 0x000001f8,
    HttpVersionNotSupported = 0x000001f9,
};
#endif
#if !defined(IL2CPP_STRUCT_HttpStatusCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_HttpStatusCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HttpStatusCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpStatusCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HttpStatusCode__Enum_FWDDECL)
#include <Modloader/app/structs/HttpStatusCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpStatusCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
