#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeStyles__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeStyles__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeStyles__Enum_DEFINED)
#define IL2CPP_STRUCT_DateTimeStyles__Enum_DEFINED
enum class DateTimeStyles__Enum : int32_t {
    None = 0x00000000,
    AllowLeadingWhite = 0x00000001,
    AllowTrailingWhite = 0x00000002,
    AllowInnerWhite = 0x00000004,
    AllowWhiteSpaces = 0x00000007,
    NoCurrentDateDefault = 0x00000008,
    AdjustToUniversal = 0x00000010,
    AssumeLocal = 0x00000020,
    AssumeUniversal = 0x00000040,
    RoundtripKind = 0x00000080,
};
#endif
#if !defined(IL2CPP_STRUCT_DateTimeStyles__Enum_FWDDECL)
#define IL2CPP_STRUCT_DateTimeStyles__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DateTimeStyles__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeStyles__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeStyles__Enum_FWDDECL)
#include <Modloader/app/structs/DateTimeStyles__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeStyles__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
