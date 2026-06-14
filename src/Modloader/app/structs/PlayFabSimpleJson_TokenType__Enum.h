#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_DEFINED
enum class PlayFabSimpleJson_TokenType__Enum : uint8_t {
    NONE = 0x00,
    CURLY_OPEN = 0x01,
    CURLY_CLOSE = 0x02,
    SQUARED_OPEN = 0x03,
    SQUARED_CLOSE = 0x04,
    COLON = 0x05,
    COMMA = 0x06,
    STRING = 0x07,
    NUMBER = 0x08,
    TRUE = 0x09,
    FALSE = 0x0a,
    NULL_1 = 0x0b,
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSimpleJson_TokenType__Enum_FWDDECL)
#include <Modloader/app/structs/PlayFabSimpleJson_TokenType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSimpleJson_TokenType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
