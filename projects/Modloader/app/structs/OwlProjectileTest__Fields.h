#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OwlProjectileTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OwlProjectileTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OwlProjectileTest__Fields_DEFINED)
#include <Modloader/app/structs/BrainScript__Fields.h>
#if defined(IL2CPP_STRUCT_BrainScript__Fields_DEFINED)
#define IL2CPP_STRUCT_OwlProjectileTest__Fields_DEFINED
struct ProjectileSpawner;
struct GameObject;
struct OwlProjectileTest__Fields {
    struct BrainScript__Fields _;
    struct ProjectileSpawner* SpawnerL;
    struct ProjectileSpawner* SpawnerR;
    float Rate;
    struct GameObject* Target;
    float timer;
    bool left;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OwlProjectileTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_OwlProjectileTest__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#endif
#undef IL2CPP_STRUCT_OwlProjectileTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OwlProjectileTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OwlProjectileTest__Fields_FWDDECL)
#include <Modloader/app/structs/OwlProjectileTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OwlProjectileTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
