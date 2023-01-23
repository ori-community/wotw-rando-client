#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpRequestHeader__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpRequestHeader__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestHeader__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpRequestHeader__Enum_DEFINED
enum class HttpRequestHeader__Enum : int32_t {
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
    Accept = 0x00000014,
    AcceptCharset = 0x00000015,
    AcceptEncoding = 0x00000016,
    AcceptLanguage = 0x00000017,
    Authorization = 0x00000018,
    Cookie = 0x00000019,
    Expect = 0x0000001a,
    From = 0x0000001b,
    Host = 0x0000001c,
    IfMatch = 0x0000001d,
    IfModifiedSince = 0x0000001e,
    IfNoneMatch = 0x0000001f,
    IfRange = 0x00000020,
    IfUnmodifiedSince = 0x00000021,
    MaxForwards = 0x00000022,
    ProxyAuthorization = 0x00000023,
    Referer = 0x00000024,
    Range = 0x00000025,
    Te = 0x00000026,
    Translate = 0x00000027,
    UserAgent = 0x00000028,
};
#endif
#if !defined(IL2CPP_STRUCT_HttpRequestHeader__Enum_FWDDECL)
#define IL2CPP_STRUCT_HttpRequestHeader__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HttpRequestHeader__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestHeader__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HttpRequestHeader__Enum_FWDDECL)
#include <Modloader/app/structs/HttpRequestHeader__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpRequestHeader__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
