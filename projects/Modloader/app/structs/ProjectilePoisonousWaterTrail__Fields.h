#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_DEFINED
struct Projectile;
struct GameObject;
struct Transform;
struct WaterPoisonTrail;
struct ProjectilePoisonousWaterTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct Projectile* Projectile;
    struct GameObject* TrailPrefab;
    struct Transform* Anchor;
    float WaterGravity;
    float WaterSpeedDampening;
    struct WaterPoisonTrail* m_instance;
    bool m_touchedWater;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WaterPoisonTrail.h>
#endif
#undef IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProjectilePoisonousWaterTrail__Fields_FWDDECL)
#include <Modloader/app/structs/ProjectilePoisonousWaterTrail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProjectilePoisonousWaterTrail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
