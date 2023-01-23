#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenType__Enum_DEFINED)
#define IL2CPP_STRUCT_TokenType__Enum_DEFINED
enum class TokenType__Enum : int32_t {
    NumberToken = 0x00000001,
    YearNumberToken = 0x00000002,
    Am = 0x00000003,
    Pm = 0x00000004,
    MonthToken = 0x00000005,
    EndOfString = 0x00000006,
    DayOfWeekToken = 0x00000007,
    TimeZoneToken = 0x00000008,
    EraToken = 0x00000009,
    DateWordToken = 0x0000000a,
    UnknownToken = 0x0000000b,
    HebrewNumber = 0x0000000c,
    JapaneseEraToken = 0x0000000d,
    TEraToken = 0x0000000e,
    IgnorableSymbol = 0x0000000f,
    SEP_Unk = 0x00000100,
    SEP_End = 0x00000200,
    SEP_Space = 0x00000300,
    SEP_Am = 0x00000400,
    SEP_Pm = 0x00000500,
    SEP_Date = 0x00000600,
    SEP_Time = 0x00000700,
    SEP_YearSuff = 0x00000800,
    SEP_MonthSuff = 0x00000900,
    SEP_DaySuff = 0x00000a00,
    SEP_HourSuff = 0x00000b00,
    SEP_MinuteSuff = 0x00000c00,
    SEP_SecondSuff = 0x00000d00,
    SEP_LocalTimeMark = 0x00000e00,
    SEP_DateOrOffset = 0x00000f00,
    RegularTokenMask = 0x000000ff,
    SeparatorTokenMask = 0x0000ff00,
};
#endif
#if !defined(IL2CPP_STRUCT_TokenType__Enum_FWDDECL)
#define IL2CPP_STRUCT_TokenType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TokenType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TokenType__Enum_FWDDECL)
#include <Modloader/app/structs/TokenType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
