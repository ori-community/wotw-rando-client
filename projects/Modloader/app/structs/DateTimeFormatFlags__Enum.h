#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeFormatFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeFormatFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormatFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_DateTimeFormatFlags__Enum_DEFINED
enum class DateTimeFormatFlags__Enum : int32_t {
    None = 0x00000000,
    UseGenitiveMonth = 0x00000001,
    UseLeapYearMonth = 0x00000002,
    UseSpacesInMonthNames = 0x00000004,
    UseHebrewRule = 0x00000008,
    UseSpacesInDayNames = 0x00000010,
    UseDigitPrefixInTokens = 0x00000020,
    NotInitialized = -1,
};
#endif
#if !defined(IL2CPP_STRUCT_DateTimeFormatFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_DateTimeFormatFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DateTimeFormatFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormatFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeFormatFlags__Enum_FWDDECL)
#include <Modloader/app/structs/DateTimeFormatFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeFormatFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
