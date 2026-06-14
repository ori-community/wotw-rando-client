#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeTargets__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeTargets__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeTargets__Enum_DEFINED)
#define IL2CPP_STRUCT_AttributeTargets__Enum_DEFINED
enum class AttributeTargets__Enum : int32_t {
    Assembly = 0x00000001,
    Module = 0x00000002,
    Class = 0x00000004,
    Struct = 0x00000008,
    Enum = 0x00000010,
    Constructor = 0x00000020,
    Method = 0x00000040,
    Property = 0x00000080,
    Field = 0x00000100,
    Event = 0x00000200,
    Interface = 0x00000400,
    Parameter = 0x00000800,
    Delegate = 0x00001000,
    ReturnValue = 0x00002000,
    GenericParameter = 0x00004000,
    All = 0x00007fff,
};
#endif
#if !defined(IL2CPP_STRUCT_AttributeTargets__Enum_FWDDECL)
#define IL2CPP_STRUCT_AttributeTargets__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AttributeTargets__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeTargets__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AttributeTargets__Enum_FWDDECL)
#include <Modloader/app/structs/AttributeTargets__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeTargets__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
