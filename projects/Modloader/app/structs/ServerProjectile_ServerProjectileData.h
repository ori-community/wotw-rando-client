#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_DEFINED)
#define IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_DEFINED
struct String;
struct ServerProjectile_ServerProjectileData {
    struct String* BaseData;
    int32_t OwnerID;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_FWDDECL)
#define IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_DEFINED) && !defined(IL2CPP_STRUCT_ServerProjectile_ServerProjectileData_FWDDECL)
#include <Modloader/app/structs/ServerProjectile_ServerProjectileData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerProjectile_ServerProjectileData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
