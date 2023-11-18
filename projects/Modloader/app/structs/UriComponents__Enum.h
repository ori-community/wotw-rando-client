#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriComponents__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriComponents__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriComponents__Enum_DEFINED)
#define IL2CPP_STRUCT_UriComponents__Enum_DEFINED
enum class UriComponents__Enum : int32_t {
    Scheme = 0x00000001,
    UserInfo = 0x00000002,
    Host = 0x00000004,
    Port = 0x00000008,
    Path = 0x00000010,
    Query = 0x00000020,
    Fragment = 0x00000040,
    StrongPort = 0x00000080,
    NormalizedHost = 0x00000100,
    KeepDelimiter = 0x40000000,
    SerializationInfoString = -2147483648,
    AbsoluteUri = 0x0000007f,
    HostAndPort = 0x00000084,
    StrongAuthority = 0x00000086,
    SchemeAndServer = 0x0000000d,
    HttpRequestUrl = 0x0000003d,
    PathAndQuery = 0x00000030,
};
#endif
#if !defined(IL2CPP_STRUCT_UriComponents__Enum_FWDDECL)
#define IL2CPP_STRUCT_UriComponents__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UriComponents__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriComponents__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UriComponents__Enum_FWDDECL)
#include <Modloader/app/structs/UriComponents__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriComponents__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
