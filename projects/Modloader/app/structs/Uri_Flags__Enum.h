#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri_Flags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri_Flags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_Flags__Enum_DEFINED)
#define IL2CPP_STRUCT_Uri_Flags__Enum_DEFINED
enum class Uri_Flags__Enum : uint64_t {
    Zero = 0x0000000000000000,
    SchemeNotCanonical = 0x0000000000000001,
    UserNotCanonical = 0x0000000000000002,
    HostNotCanonical = 0x0000000000000004,
    PortNotCanonical = 0x0000000000000008,
    PathNotCanonical = 0x0000000000000010,
    QueryNotCanonical = 0x0000000000000020,
    FragmentNotCanonical = 0x0000000000000040,
    CannotDisplayCanonical = 0x000000000000007f,
    E_UserNotCanonical = 0x0000000000000080,
    E_HostNotCanonical = 0x0000000000000100,
    E_PortNotCanonical = 0x0000000000000200,
    E_PathNotCanonical = 0x0000000000000400,
    E_QueryNotCanonical = 0x0000000000000800,
    E_FragmentNotCanonical = 0x0000000000001000,
    E_CannotDisplayCanonical = 0x0000000000001f80,
    ShouldBeCompressed = 0x0000000000002000,
    FirstSlashAbsent = 0x0000000000004000,
    BackslashInPath = 0x0000000000008000,
    IndexMask = 0x000000000000ffff,
    HostTypeMask = 0x0000000000070000,
    HostNotParsed = 0x0000000000000000,
    IPv6HostType = 0x0000000000010000,
    IPv4HostType = 0x0000000000020000,
    DnsHostType = 0x0000000000030000,
    UncHostType = 0x0000000000040000,
    BasicHostType = 0x0000000000050000,
    UnusedHostType = 0x0000000000060000,
    UnknownHostType = 0x0000000000070000,
    UserEscaped = 0x0000000000080000,
    AuthorityFound = 0x0000000000100000,
    HasUserInfo = 0x0000000000200000,
    LoopbackHost = 0x0000000000400000,
    NotDefaultPort = 0x0000000000800000,
    UserDrivenParsing = 0x0000000001000000,
    CanonicalDnsHost = 0x0000000002000000,
    ErrorOrParsingRecursion = 0x0000000004000000,
    DosPath = 0x0000000008000000,
    UncPath = 0x0000000010000000,
    ImplicitFile = 0x0000000020000000,
    MinimalUriInfoSet = 0x0000000040000000,
    AllUriInfoSet = 0x0000000080000000,
    IdnHost = 0x0000000100000000,
    HasUnicode = 0x0000000200000000,
    HostUnicodeNormalized = 0x0000000400000000,
    RestUnicodeNormalized = 0x0000000800000000,
    UnicodeHost = 0x0000001000000000,
    IntranetUri = 0x0000002000000000,
    UseOrigUncdStrOffset = 0x0000004000000000,
    UserIriCanonical = 0x0000008000000000,
    PathIriCanonical = 0x0000010000000000,
    QueryIriCanonical = 0x0000020000000000,
    FragmentIriCanonical = 0x0000040000000000,
    IriCanonical = 0x0000078000000000,
    CompressedSlashes = 0x0000100000000000,
};
#endif
#if !defined(IL2CPP_STRUCT_Uri_Flags__Enum_FWDDECL)
#define IL2CPP_STRUCT_Uri_Flags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Uri_Flags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_Flags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Uri_Flags__Enum_FWDDECL)
#include <Modloader/app/structs/Uri_Flags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri_Flags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
