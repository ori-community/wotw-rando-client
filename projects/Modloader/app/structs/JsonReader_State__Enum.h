#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonReader_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonReader_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReader_State__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonReader_State__Enum_DEFINED
enum class JsonReader_State__Enum : int32_t {
    Start = 0x00000000,
    Complete = 0x00000001,
    Property = 0x00000002,
    ObjectStart = 0x00000003,
    Object = 0x00000004,
    ArrayStart = 0x00000005,
    Array = 0x00000006,
    Closed = 0x00000007,
    PostValue = 0x00000008,
    ConstructorStart = 0x00000009,
    Constructor = 0x0000000a,
    Error = 0x0000000b,
    Finished = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_JsonReader_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_JsonReader_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonReader_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReader_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JsonReader_State__Enum_FWDDECL)
#include <Modloader/app/structs/JsonReader_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonReader_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
