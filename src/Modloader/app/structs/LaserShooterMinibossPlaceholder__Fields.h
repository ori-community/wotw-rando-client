#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_DEFINED
struct GameObject;
struct LaserShooterMinibossPath;
struct LaserShooterRockSpawnPoint;
struct Transform;
struct List_1_LaserShooterRockSpawnPoint_;
struct SerializedIntUberState;
struct List_1_System_Int32_;
struct LaserShooterMinibossPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct GameObject* LaserShooterMinibossEntityPrefab;
    struct LaserShooterMinibossPath* Paths;
    struct LaserShooterRockSpawnPoint* RockSpawnPointPrefab;
    struct Transform* RockSpawnPointGroup;
    struct List_1_LaserShooterRockSpawnPoint_* RockSpawnPositions;
    bool DrawRockSpawnGizmos;
    struct SerializedIntUberState* FightState;
    struct List_1_System_Int32_* ForceDespawnOnStates;
    struct Transform* CheckpointPosition;
    struct Vector3 m_checkpointPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LaserShooterMinibossPath.h>
#include <Modloader/app/structs/LaserShooterRockSpawnPoint.h>
#include <Modloader/app/structs/List_1_LaserShooterRockSpawnPoint_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterMinibossPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterMinibossPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterMinibossPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
