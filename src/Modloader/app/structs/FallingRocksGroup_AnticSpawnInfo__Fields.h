#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) FallingRocksGroup_AnticSpawnInfo__Fields {
    struct GameObject* Owner;
    struct GameObject* Prefab;
    float Countdown;
    struct Vector3 SpawnPos;
    struct Quaternion SpawnRot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FallingRocksGroup_AnticSpawnInfo__Fields_FWDDECL)
#include <Modloader/app/structs/FallingRocksGroup_AnticSpawnInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallingRocksGroup_AnticSpawnInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
