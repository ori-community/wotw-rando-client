#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaTypes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_SchemaTypes__Enum_DEFINED
enum class SchemaTypes__Enum : int32_t {
    NotSet = 0x00000000,
    Primitive = 0x00000001,
    Enum = 0x00000002,
    Array = 0x00000003,
    Class = 0x00000004,
    XmlSerializable = 0x00000005,
    XmlNode = 0x00000006,
    Void = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_SchemaTypes__Enum_FWDDECL)
#define IL2CPP_STRUCT_SchemaTypes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SchemaTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaTypes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SchemaTypes__Enum_FWDDECL)
#include <Modloader/app/structs/SchemaTypes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaTypes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
