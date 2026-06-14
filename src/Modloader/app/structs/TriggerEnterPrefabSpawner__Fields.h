#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/TriggerEnterPrefabSpawner_VelocityCheckMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_TriggerEnterPrefabSpawner_VelocityCheckMode__Enum_DEFINED)
#define IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_DEFINED
struct GameObject__Array;
struct Transform;
struct Rigidbody;
struct TriggerEnterPrefabSpawner__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject__Array* Prefabs;
    TriggerEnterPrefabSpawner_VelocityCheckMode__Enum VelocityCheckObject;

    float MinimumVelocity;
    bool UseCollisionNormalAsUpRotation;
    struct Transform* SpecificSpawnPoint;
    struct Rigidbody* m_rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_FWDDECL
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TriggerEnterPrefabSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/TriggerEnterPrefabSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerEnterPrefabSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
