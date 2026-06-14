#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_DEFINED)
#define IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_DEFINED
struct String;
struct ServerObject;
struct Int32__Array;
struct ServerProjectileSpawner_ProjectileSpawnerData {
    struct String* BaseData;
    struct ServerObject* ProjectilePrefab;
    struct Int32__Array* CollidersToIgnoreIDS;
    int32_t OwnerID;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_FWDDECL)
#define IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/ServerObject.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_DEFINED) && !defined(IL2CPP_STRUCT_ServerProjectileSpawner_ProjectileSpawnerData_FWDDECL)
#include <Modloader/app/structs/ServerProjectileSpawner_ProjectileSpawnerData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerProjectileSpawner_ProjectileSpawnerData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
