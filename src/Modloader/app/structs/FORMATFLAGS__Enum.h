#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FORMATFLAGS__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FORMATFLAGS__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FORMATFLAGS__Enum_DEFINED)
#define IL2CPP_STRUCT_FORMATFLAGS__Enum_DEFINED
enum class FORMATFLAGS__Enum : int32_t {
    None = 0x00000000,
    UseGenitiveMonth = 0x00000001,
    UseLeapYearMonth = 0x00000002,
    UseSpacesInMonthNames = 0x00000004,
    UseHebrewParsing = 0x00000008,
    UseSpacesInDayNames = 0x00000010,
    UseDigitPrefixInTokens = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_FORMATFLAGS__Enum_FWDDECL)
#define IL2CPP_STRUCT_FORMATFLAGS__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FORMATFLAGS__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FORMATFLAGS__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FORMATFLAGS__Enum_FWDDECL)
#include <Modloader/app/structs/FORMATFLAGS__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FORMATFLAGS__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
