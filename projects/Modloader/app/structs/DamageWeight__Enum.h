#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageWeight__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageWeight__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageWeight__Enum_DEFINED
enum class DamageWeight__Enum : int32_t {
    Default = 0x00000000,
    VeryLight = 0x00000001,
    Light = 0x00000002,
    Medium = 0x00000003,
    Heavy = 0x00000004,
    Heavier = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_DamageWeight__Enum_FWDDECL)
#define IL2CPP_STRUCT_DamageWeight__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DamageWeight__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DamageWeight__Enum_FWDDECL)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageWeight__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
