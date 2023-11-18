#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpResponseHeader__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpResponseHeader__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpResponseHeader__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpResponseHeader__Enum_DEFINED
enum class HttpResponseHeader__Enum : int32_t {
    CacheControl = 0x00000000,
    Connection = 0x00000001,
    Date = 0x00000002,
    KeepAlive = 0x00000003,
    Pragma = 0x00000004,
    Trailer = 0x00000005,
    TransferEncoding = 0x00000006,
    Upgrade = 0x00000007,
    Via = 0x00000008,
    Warning = 0x00000009,
    Allow = 0x0000000a,
    ContentLength = 0x0000000b,
    ContentType = 0x0000000c,
    ContentEncoding = 0x0000000d,
    ContentLanguage = 0x0000000e,
    ContentLocation = 0x0000000f,
    ContentMd5 = 0x00000010,
    ContentRange = 0x00000011,
    Expires = 0x00000012,
    LastModified = 0x00000013,
    AcceptRanges = 0x00000014,
    Age = 0x00000015,
    ETag = 0x00000016,
    Location = 0x00000017,
    ProxyAuthenticate = 0x00000018,
    RetryAfter = 0x00000019,
    Server = 0x0000001a,
    SetCookie = 0x0000001b,
    Vary = 0x0000001c,
    WwwAuthenticate = 0x0000001d,
};
#endif
#if !defined(IL2CPP_STRUCT_HttpResponseHeader__Enum_FWDDECL)
#define IL2CPP_STRUCT_HttpResponseHeader__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HttpResponseHeader__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpResponseHeader__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HttpResponseHeader__Enum_FWDDECL)
#include <Modloader/app/structs/HttpResponseHeader__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpResponseHeader__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
