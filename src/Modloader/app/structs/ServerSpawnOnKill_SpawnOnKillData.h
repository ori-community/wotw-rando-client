#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_DEFINED)
#define IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_DEFINED
struct String;
struct ServerObject;
struct ServerSpawnOnKill_SpawnOnKillData {
    struct String* BaseData;
    struct ServerObject* ObjectToSpawn;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_FWDDECL)
#define IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_FWDDECL
#include <Modloader/app/structs/ServerObject.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_DEFINED) && !defined(IL2CPP_STRUCT_ServerSpawnOnKill_SpawnOnKillData_FWDDECL)
#include <Modloader/app/structs/ServerSpawnOnKill_SpawnOnKillData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerSpawnOnKill_SpawnOnKillData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
