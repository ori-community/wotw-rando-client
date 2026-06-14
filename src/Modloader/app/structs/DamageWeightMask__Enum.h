#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageWeightMask__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageWeightMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageWeightMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageWeightMask__Enum_DEFINED
enum class DamageWeightMask__Enum : int32_t {
    VeryLight = 0x00000002,
    Light = 0x00000004,
    Medium = 0x00000008,
    Heavy = 0x00000010,
    Heavier = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_DamageWeightMask__Enum_FWDDECL)
#define IL2CPP_STRUCT_DamageWeightMask__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DamageWeightMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageWeightMask__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DamageWeightMask__Enum_FWDDECL)
#include <Modloader/app/structs/DamageWeightMask__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageWeightMask__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
