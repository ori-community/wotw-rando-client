#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) MortarWormEnemyProjectileSpawnerTransform__Fields {
    struct Transform* Left;
    struct Transform* UpLeft;
    struct Transform* Up;
    struct Transform* UpRight;
    struct Transform* Right;
};
#endif
#if !defined(IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormEnemyProjectileSpawnerTransform__Fields_FWDDECL)
#include <Modloader/app/structs/MortarWormEnemyProjectileSpawnerTransform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormEnemyProjectileSpawnerTransform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
