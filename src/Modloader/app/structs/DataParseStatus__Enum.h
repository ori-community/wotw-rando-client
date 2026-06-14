#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataParseStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataParseStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataParseStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_DataParseStatus__Enum_DEFINED
enum class DataParseStatus__Enum : int32_t {
    NeedMoreData = 0x00000000,
    ContinueParsing = 0x00000001,
    Done = 0x00000002,
    Invalid = 0x00000003,
    DataTooBig = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_DataParseStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_DataParseStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DataParseStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataParseStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DataParseStatus__Enum_FWDDECL)
#include <Modloader/app/structs/DataParseStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataParseStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
