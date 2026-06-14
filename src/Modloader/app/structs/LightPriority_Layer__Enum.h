#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightPriority_Layer__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightPriority_Layer__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightPriority_Layer__Enum_DEFINED)
#define IL2CPP_STRUCT_LightPriority_Layer__Enum_DEFINED
enum class LightPriority_Layer__Enum : int32_t {
    EnvironmentalLight = 0x00000000,
    EnemyLight = 0x00000064,
    Boss = 0x00000096,
    SmallPickupsAndOrbs = 0x000000c8,
    LargePickups = 0x0000012c,
    Ori = 0x00000190,
    Projectiles = 0x000001c2,
    TorchLight = 0x000001f4,
    WeaponFX = 0x00000258,
    Shadows = 0x000002bc,
    GetAbilityEffect = 0x00000320,
    Lightning = 0x00000352,
    OriContactLight = 0x00000384,
};
#endif
#if !defined(IL2CPP_STRUCT_LightPriority_Layer__Enum_FWDDECL)
#define IL2CPP_STRUCT_LightPriority_Layer__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LightPriority_Layer__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightPriority_Layer__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LightPriority_Layer__Enum_FWDDECL)
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
