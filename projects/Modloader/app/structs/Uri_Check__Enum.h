#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri_Check__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri_Check__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_Check__Enum_DEFINED)
#define IL2CPP_STRUCT_Uri_Check__Enum_DEFINED
enum class Uri_Check__Enum : int32_t {
    None = 0x00000000,
    EscapedCanonical = 0x00000001,
    DisplayCanonical = 0x00000002,
    DotSlashAttn = 0x00000004,
    DotSlashEscaped = 0x00000080,
    BackslashInPath = 0x00000010,
    ReservedFound = 0x00000020,
    NotIriCanonical = 0x00000040,
    FoundNonAscii = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_Uri_Check__Enum_FWDDECL)
#define IL2CPP_STRUCT_Uri_Check__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Uri_Check__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_Check__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Uri_Check__Enum_FWDDECL)
#include <Modloader/app/structs/Uri_Check__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri_Check__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
