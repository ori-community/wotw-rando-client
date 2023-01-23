#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZoneScalingData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZoneScalingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneScalingData__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ZoneScalingData__Fields_DEFINED
struct GameObject;
struct Texture;
struct ZoneScalingData_ZoneMonsterData__Array;
struct EntityPlaceholderScalingData__Array;
struct ZoneScalingData__Fields {
    struct ScriptableObject__Fields _;
    int32_t ZoneID;
    struct GameObject* AreaMap;
    struct Texture* DisplayTextureOverride;
    int32_t WaterDamage;
    int32_t DamageColliderDamage;
    int32_t CreepWallHealth;
    int32_t DestructableWallHealth;
    int32_t RedirectWallHealth;
    int32_t DefaultZoneDifficulty;
    struct ZoneScalingData_ZoneMonsterData__Array* EnemyDifficultyLevels;
    struct EntityPlaceholderScalingData__Array* Enemies;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZoneScalingData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ZoneScalingData__Fields_FWDDECL
#include <Modloader/app/structs/EntityPlaceholderScalingData__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData__Array.h>
#endif
#undef IL2CPP_STRUCT_ZoneScalingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneScalingData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ZoneScalingData__Fields_FWDDECL)
#include <Modloader/app/structs/ZoneScalingData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZoneScalingData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
