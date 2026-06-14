#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrefabSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrefabSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabSpawner__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PrefabSpawner__Fields_DEFINED
struct PrefabProvider;
struct Transform;
struct GameObject;
struct PrefabSpawner__Fields {
    struct MonoBehaviour__Fields _;
    struct PrefabProvider* Prefab;
    int32_t PrewarmAmount;
    struct Transform* Parent;
    bool UseParentOfParent;
    bool UseRotation;
    bool SpawnAtStart;
    bool SpawnOffscreen;
    float OnScreenPadding;
    struct Transform* InitialPositionProvider;
    struct Vector3 InitialVelocity;
    struct GameObject* m_prefab;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrefabSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_PrefabSpawner__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PrefabProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PrefabSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PrefabSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/PrefabSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrefabSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
