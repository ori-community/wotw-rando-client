#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageLayerMask__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageLayerMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED
enum class DamageLayerMask__Enum : int32_t {
    Everything = 0x00000007,
    Player = 0x00000001,
    Enemy = 0x00000002,
    Environment = 0x00000004,
    EnemyAndEnvironment = 0x00000006,
    PlayerAndEnvironment = 0x00000005,
    PlayerAndEnemy = 0x00000003,
    None = 0x00000000,
};
#endif
#if !defined(IL2CPP_STRUCT_DamageLayerMask__Enum_FWDDECL)
#define IL2CPP_STRUCT_DamageLayerMask__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DamageLayerMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DamageLayerMask__Enum_FWDDECL)
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
