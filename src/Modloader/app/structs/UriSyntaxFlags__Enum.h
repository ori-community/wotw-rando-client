#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriSyntaxFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriSyntaxFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriSyntaxFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_UriSyntaxFlags__Enum_DEFINED
enum class UriSyntaxFlags__Enum : int32_t {
    None = 0x00000000,
    MustHaveAuthority = 0x00000001,
    OptionalAuthority = 0x00000002,
    MayHaveUserInfo = 0x00000004,
    MayHavePort = 0x00000008,
    MayHavePath = 0x00000010,
    MayHaveQuery = 0x00000020,
    MayHaveFragment = 0x00000040,
    AllowEmptyHost = 0x00000080,
    AllowUncHost = 0x00000100,
    AllowDnsHost = 0x00000200,
    AllowIPv4Host = 0x00000400,
    AllowIPv6Host = 0x00000800,
    AllowAnInternetHost = 0x00000e00,
    AllowAnyOtherHost = 0x00001000,
    FileLikeUri = 0x00002000,
    MailToLikeUri = 0x00004000,
    V1_UnknownUri = 0x00010000,
    SimpleUserSyntax = 0x00020000,
    BuiltInSyntax = 0x00040000,
    ParserSchemeOnly = 0x00080000,
    AllowDOSPath = 0x00100000,
    PathIsRooted = 0x00200000,
    ConvertPathSlashes = 0x00400000,
    CompressPath = 0x00800000,
    CanonicalizeAsFilePath = 0x01000000,
    UnEscapeDotsAndSlashes = 0x02000000,
    AllowIdn = 0x04000000,
    AllowIriParsing = 0x10000000,
};
#endif
#if !defined(IL2CPP_STRUCT_UriSyntaxFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_UriSyntaxFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UriSyntaxFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriSyntaxFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UriSyntaxFlags__Enum_FWDDECL)
#include <Modloader/app/structs/UriSyntaxFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriSyntaxFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
