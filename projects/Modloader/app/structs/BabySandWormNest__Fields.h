#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySandWormNest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySandWormNest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySandWormNest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BabySandWormNest__Fields_DEFINED
struct GameObject;
struct Transform;
struct BabySandWormNest__Fields {
    struct MonoBehaviour__Fields _;
    float TriggerRadius;
    struct GameObject* SandWormPrefab;
    struct Transform* SpawnPoint;
    float CooldownTime;
    struct Transform* TestTarget;
    float m_cooldownTimer;
    bool m_hasWormActive;
    struct GameObject* m_babySandWorm;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySandWormNest__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabySandWormNest__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BabySandWormNest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySandWormNest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabySandWormNest__Fields_FWDDECL)
#include <Modloader/app/structs/BabySandWormNest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySandWormNest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
