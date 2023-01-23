#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericUriParserOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericUriParserOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericUriParserOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_GenericUriParserOptions__Enum_DEFINED
enum class GenericUriParserOptions__Enum : int32_t {
    Default = 0x00000000,
    GenericAuthority = 0x00000001,
    AllowEmptyAuthority = 0x00000002,
    NoUserInfo = 0x00000004,
    NoPort = 0x00000008,
    NoQuery = 0x00000010,
    NoFragment = 0x00000020,
    DontConvertPathBackslashes = 0x00000040,
    DontCompressPath = 0x00000080,
    DontUnescapePathDotsAndSlashes = 0x00000100,
    Idn = 0x00000200,
    IriParsing = 0x00000400,
};
#endif
#if !defined(IL2CPP_STRUCT_GenericUriParserOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_GenericUriParserOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GenericUriParserOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericUriParserOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GenericUriParserOptions__Enum_FWDDECL)
#include <Modloader/app/structs/GenericUriParserOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericUriParserOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
