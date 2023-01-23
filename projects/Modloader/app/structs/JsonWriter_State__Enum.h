#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonWriter_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonWriter_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriter_State__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonWriter_State__Enum_DEFINED
enum class JsonWriter_State__Enum : int32_t {
    Start = 0x00000000,
    Property = 0x00000001,
    ObjectStart = 0x00000002,
    Object = 0x00000003,
    ArrayStart = 0x00000004,
    Array = 0x00000005,
    ConstructorStart = 0x00000006,
    Constructor = 0x00000007,
    Closed = 0x00000008,
    Error = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_JsonWriter_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_JsonWriter_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonWriter_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriter_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JsonWriter_State__Enum_FWDDECL)
#include <Modloader/app/structs/JsonWriter_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonWriter_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
