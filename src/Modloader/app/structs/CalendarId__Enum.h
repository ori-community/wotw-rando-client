#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CalendarId__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CalendarId__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CalendarId__Enum_DEFINED)
#define IL2CPP_STRUCT_CalendarId__Enum_DEFINED
enum class CalendarId__Enum : uint16_t {
    GREGORIAN = 0x0001,
    GREGORIAN_US = 0x0002,
    JAPAN = 0x0003,
    TAIWAN = 0x0004,
    KOREA = 0x0005,
    HIJRI = 0x0006,
    THAI = 0x0007,
    HEBREW = 0x0008,
    GREGORIAN_ME_FRENCH = 0x0009,
    GREGORIAN_ARABIC = 0x000a,
    GREGORIAN_XLIT_ENGLISH = 0x000b,
    GREGORIAN_XLIT_FRENCH = 0x000c,
    JULIAN = 0x000d,
    JAPANESELUNISOLAR = 0x000e,
    CHINESELUNISOLAR = 0x000f,
    SAKA = 0x0010,
    LUNAR_ETO_CHN = 0x0011,
    LUNAR_ETO_KOR = 0x0012,
    LUNAR_ETO_ROKUYOU = 0x0013,
    KOREANLUNISOLAR = 0x0014,
    TAIWANLUNISOLAR = 0x0015,
    PERSIAN = 0x0016,
    UMALQURA = 0x0017,
    LAST_CALENDAR = 0x0017,
};
#endif
#if !defined(IL2CPP_STRUCT_CalendarId__Enum_FWDDECL)
#define IL2CPP_STRUCT_CalendarId__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CalendarId__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CalendarId__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CalendarId__Enum_FWDDECL)
#include <Modloader/app/structs/CalendarId__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CalendarId__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
