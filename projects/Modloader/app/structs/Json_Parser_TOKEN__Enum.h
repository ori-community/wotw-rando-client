#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_DEFINED)
#define IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_DEFINED
enum class Json_Parser_TOKEN__Enum : int32_t {
    NONE = 0x00000000,
    CURLY_OPEN = 0x00000001,
    CURLY_CLOSE = 0x00000002,
    SQUARED_OPEN = 0x00000003,
    SQUARED_CLOSE = 0x00000004,
    COLON = 0x00000005,
    COMMA = 0x00000006,
    STRING = 0x00000007,
    NUMBER = 0x00000008,
    TRUE = 0x00000009,
    FALSE = 0x0000000a,
    NULL_1 = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_FWDDECL)
#define IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Json_Parser_TOKEN__Enum_FWDDECL)
#include <Modloader/app/structs/Json_Parser_TOKEN__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Json_Parser_TOKEN__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
