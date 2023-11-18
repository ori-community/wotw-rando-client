#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_DEFINED)
#include <Modloader/app/structs/DropPickup_State__Enum.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_OrbSpawnerManager_ItemType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DropPickup_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_DEFINED
struct Transform;
struct OrbSpawnerManager_ItemToSpawn {
    OrbSpawnerManager_ItemType__Enum ItemType;

    struct Vector2 Position;
    struct Vector2 Velocity;
    DropPickup_State__Enum InitialState;

    bool OverrideGravity;
    struct Vector3 GravityOverride;
    struct Transform* TransformSource;
    int32_t OverrideValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_FWDDECL)
#define IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_DEFINED) && !defined(IL2CPP_STRUCT_OrbSpawnerManager_ItemToSpawn_FWDDECL)
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
