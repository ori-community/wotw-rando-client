#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonToken__Enum_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonToken__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonToken__Enum_1_DEFINED)
#define IL2CPP_STRUCT_JsonToken__Enum_1_DEFINED
enum class JsonToken__Enum_1 : int32_t {
    None = 0x00000000,
    StartObject = 0x00000001,
    StartArray = 0x00000002,
    StartConstructor = 0x00000003,
    PropertyName = 0x00000004,
    Comment = 0x00000005,
    Raw = 0x00000006,
    Integer = 0x00000007,
    Float = 0x00000008,
    String = 0x00000009,
    Boolean = 0x0000000a,
    Null = 0x0000000b,
    Undefined = 0x0000000c,
    EndObject = 0x0000000d,
    EndArray = 0x0000000e,
    EndConstructor = 0x0000000f,
    Date = 0x00000010,
    Bytes = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_JsonToken__Enum_1_FWDDECL)
#define IL2CPP_STRUCT_JsonToken__Enum_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonToken__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonToken__Enum_1_DEFINED) && !defined(IL2CPP_STRUCT_JsonToken__Enum_1_FWDDECL)
#include <Modloader/app/structs/JsonToken__Enum_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonToken__Enum_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
