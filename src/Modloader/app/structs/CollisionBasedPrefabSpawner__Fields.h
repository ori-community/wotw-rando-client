#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_DEFINED)
#include <Modloader/app/structs/CollisionBasedPrefabSpawner_VelocityCheckMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CollisionBasedPrefabSpawner_VelocityCheckMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_DEFINED
struct Func_1_UnityEngine_GameObject_;
struct GameObject__Array;
struct Transform;
struct Rigidbody;
struct CollisionBasedPrefabSpawner__Fields {
    struct MonoBehaviour__Fields _;
    struct Func_1_UnityEngine_GameObject_* GetPrefabOverride;
    struct GameObject__Array* Prefabs;
    CollisionBasedPrefabSpawner_VelocityCheckMode__Enum VelocityCheckObject;

    float MinimumVelocity;
    bool UseCollisionNormalAsUpRotation;
    struct Transform* SpecificSpawnPoint;
    struct Rigidbody* m_rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollisionBasedPrefabSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/CollisionBasedPrefabSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionBasedPrefabSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
