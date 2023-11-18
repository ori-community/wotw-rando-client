#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EHTTPStatusCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EHTTPStatusCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EHTTPStatusCode__Enum_DEFINED)
#define IL2CPP_STRUCT_EHTTPStatusCode__Enum_DEFINED
enum class EHTTPStatusCode__Enum : int32_t {
    k_EHTTPStatusCodeInvalid = 0x00000000,
    k_EHTTPStatusCode100Continue = 0x00000064,
    k_EHTTPStatusCode101SwitchingProtocols = 0x00000065,
    k_EHTTPStatusCode200OK = 0x000000c8,
    k_EHTTPStatusCode201Created = 0x000000c9,
    k_EHTTPStatusCode202Accepted = 0x000000ca,
    k_EHTTPStatusCode203NonAuthoritative = 0x000000cb,
    k_EHTTPStatusCode204NoContent = 0x000000cc,
    k_EHTTPStatusCode205ResetContent = 0x000000cd,
    k_EHTTPStatusCode206PartialContent = 0x000000ce,
    k_EHTTPStatusCode300MultipleChoices = 0x0000012c,
    k_EHTTPStatusCode301MovedPermanently = 0x0000012d,
    k_EHTTPStatusCode302Found = 0x0000012e,
    k_EHTTPStatusCode303SeeOther = 0x0000012f,
    k_EHTTPStatusCode304NotModified = 0x00000130,
    k_EHTTPStatusCode305UseProxy = 0x00000131,
    k_EHTTPStatusCode307TemporaryRedirect = 0x00000133,
    k_EHTTPStatusCode400BadRequest = 0x00000190,
    k_EHTTPStatusCode401Unauthorized = 0x00000191,
    k_EHTTPStatusCode402PaymentRequired = 0x00000192,
    k_EHTTPStatusCode403Forbidden = 0x00000193,
    k_EHTTPStatusCode404NotFound = 0x00000194,
    k_EHTTPStatusCode405MethodNotAllowed = 0x00000195,
    k_EHTTPStatusCode406NotAcceptable = 0x00000196,
    k_EHTTPStatusCode407ProxyAuthRequired = 0x00000197,
    k_EHTTPStatusCode408RequestTimeout = 0x00000198,
    k_EHTTPStatusCode409Conflict = 0x00000199,
    k_EHTTPStatusCode410Gone = 0x0000019a,
    k_EHTTPStatusCode411LengthRequired = 0x0000019b,
    k_EHTTPStatusCode412PreconditionFailed = 0x0000019c,
    k_EHTTPStatusCode413RequestEntityTooLarge = 0x0000019d,
    k_EHTTPStatusCode414RequestURITooLong = 0x0000019e,
    k_EHTTPStatusCode415UnsupportedMediaType = 0x0000019f,
    k_EHTTPStatusCode416RequestedRangeNotSatisfiable = 0x000001a0,
    k_EHTTPStatusCode417ExpectationFailed = 0x000001a1,
    k_EHTTPStatusCode4xxUnknown = 0x000001a2,
    k_EHTTPStatusCode429TooManyRequests = 0x000001ad,
    k_EHTTPStatusCode500InternalServerError = 0x000001f4,
    k_EHTTPStatusCode501NotImplemented = 0x000001f5,
    k_EHTTPStatusCode502BadGateway = 0x000001f6,
    k_EHTTPStatusCode503ServiceUnavailable = 0x000001f7,
    k_EHTTPStatusCode504GatewayTimeout = 0x000001f8,
    k_EHTTPStatusCode505HTTPVersionNotSupported = 0x000001f9,
    k_EHTTPStatusCode5xxUnknown = 0x00000257,
};
#endif
#if !defined(IL2CPP_STRUCT_EHTTPStatusCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_EHTTPStatusCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EHTTPStatusCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EHTTPStatusCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EHTTPStatusCode__Enum_FWDDECL)
#include <Modloader/app/structs/EHTTPStatusCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EHTTPStatusCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
