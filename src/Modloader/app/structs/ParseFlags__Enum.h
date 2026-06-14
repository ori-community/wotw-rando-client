#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParseFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParseFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParseFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_ParseFlags__Enum_DEFINED
enum class ParseFlags__Enum : int32_t {
    HaveYear = 0x00000001,
    HaveMonth = 0x00000002,
    HaveDay = 0x00000004,
    HaveHour = 0x00000008,
    HaveMinute = 0x00000010,
    HaveSecond = 0x00000020,
    HaveTime = 0x00000040,
    HaveDate = 0x00000080,
    TimeZoneUsed = 0x00000100,
    TimeZoneUtc = 0x00000200,
    ParsedMonthName = 0x00000400,
    CaptureOffset = 0x00000800,
    YearDefault = 0x00001000,
    Rfc1123Pattern = 0x00002000,
    UtcSortPattern = 0x00004000,
};
#endif
#if !defined(IL2CPP_STRUCT_ParseFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_ParseFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ParseFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParseFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ParseFlags__Enum_FWDDECL)
#include <Modloader/app/structs/ParseFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParseFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
