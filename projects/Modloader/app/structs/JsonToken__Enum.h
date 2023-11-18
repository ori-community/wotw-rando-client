#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonToken__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonToken__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonToken__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonToken__Enum_DEFINED
enum class JsonToken__Enum : int32_t {
    Null = 0x00000000,
    True = 0x00000001,
    False = 0x00000002,
    Number = 0x00000003,
    String = 0x00000004,
    Colon = 0x00000005,
    Comma = 0x00000006,
    ObjStart = 0x00000007,
    ObjEnd = 0x00000008,
    ArrStart = 0x00000009,
    ArrEnd = 0x0000000a,
    EndOfString = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_JsonToken__Enum_FWDDECL)
#define IL2CPP_STRUCT_JsonToken__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonToken__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonToken__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JsonToken__Enum_FWDDECL)
#include <Modloader/app/structs/JsonToken__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonToken__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
