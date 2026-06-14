#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JTokenType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JTokenType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JTokenType__Enum_DEFINED)
#define IL2CPP_STRUCT_JTokenType__Enum_DEFINED
enum class JTokenType__Enum : int32_t {
    None = 0x00000000,
    Object = 0x00000001,
    Array = 0x00000002,
    Constructor = 0x00000003,
    Property = 0x00000004,
    Comment = 0x00000005,
    Integer = 0x00000006,
    Float = 0x00000007,
    String = 0x00000008,
    Boolean = 0x00000009,
    Null = 0x0000000a,
    Undefined = 0x0000000b,
    Date = 0x0000000c,
    Raw = 0x0000000d,
    Bytes = 0x0000000e,
    Guid = 0x0000000f,
    Uri = 0x00000010,
    TimeSpan = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_JTokenType__Enum_FWDDECL)
#define IL2CPP_STRUCT_JTokenType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JTokenType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JTokenType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JTokenType__Enum_FWDDECL)
#include <Modloader/app/structs/JTokenType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JTokenType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
