#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HebrewNumberParsingState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HebrewNumberParsingState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HebrewNumberParsingState__Enum_DEFINED)
#define IL2CPP_STRUCT_HebrewNumberParsingState__Enum_DEFINED
enum class HebrewNumberParsingState__Enum : int32_t {
    InvalidHebrewNumber = 0x00000000,
    NotHebrewDigit = 0x00000001,
    FoundEndOfHebrewNumber = 0x00000002,
    ContinueParsing = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_HebrewNumberParsingState__Enum_FWDDECL)
#define IL2CPP_STRUCT_HebrewNumberParsingState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HebrewNumberParsingState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HebrewNumberParsingState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HebrewNumberParsingState__Enum_FWDDECL)
#include <Modloader/app/structs/HebrewNumberParsingState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HebrewNumberParsingState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
