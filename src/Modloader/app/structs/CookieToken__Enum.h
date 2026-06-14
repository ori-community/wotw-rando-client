#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieToken__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieToken__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieToken__Enum_DEFINED)
#define IL2CPP_STRUCT_CookieToken__Enum_DEFINED
enum class CookieToken__Enum : int32_t {
    Nothing = 0x00000000,
    NameValuePair = 0x00000001,
    Attribute = 0x00000002,
    EndToken = 0x00000003,
    EndCookie = 0x00000004,
    End = 0x00000005,
    Equals = 0x00000006,
    Comment = 0x00000007,
    CommentUrl = 0x00000008,
    CookieName = 0x00000009,
    Discard = 0x0000000a,
    Domain = 0x0000000b,
    Expires = 0x0000000c,
    MaxAge = 0x0000000d,
    Path = 0x0000000e,
    Port = 0x0000000f,
    Secure = 0x00000010,
    HttpOnly = 0x00000011,
    Unknown = 0x00000012,
    Version = 0x00000013,
};
#endif
#if !defined(IL2CPP_STRUCT_CookieToken__Enum_FWDDECL)
#define IL2CPP_STRUCT_CookieToken__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CookieToken__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieToken__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CookieToken__Enum_FWDDECL)
#include <Modloader/app/structs/CookieToken__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieToken__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
