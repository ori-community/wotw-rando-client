#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_DEFINED
enum class X500DistinguishedNameFlags__Enum : int32_t {
    None = 0x00000000,
    Reversed = 0x00000001,
    UseSemicolons = 0x00000010,
    DoNotUsePlusSign = 0x00000020,
    DoNotUseQuotes = 0x00000040,
    UseCommas = 0x00000080,
    UseNewLines = 0x00000100,
    UseUTF8Encoding = 0x00001000,
    UseT61Encoding = 0x00002000,
    ForceUTF8Encoding = 0x00004000,
};
#endif
#if !defined(IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_X500DistinguishedNameFlags__Enum_FWDDECL)
#include <Modloader/app/structs/X500DistinguishedNameFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X500DistinguishedNameFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
