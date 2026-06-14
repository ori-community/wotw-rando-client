#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_DEFINED)
#define IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_DEFINED
struct Vector3__Array;
struct Quaternion__Array;
struct Single__Array;
struct TentaclePhysicsController_RigidBodyPropertiesCache {
    struct Vector3__Array* position;
    struct Quaternion__Array* rotation;
    struct Vector3__Array* velocity;
    struct Vector3__Array* angVelocity;
    struct Single__Array* eulerZ;
};
#endif
#if !defined(IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_FWDDECL)
#define IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_FWDDECL
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_DEFINED) && !defined(IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_FWDDECL)
#include <Modloader/app/structs/TentaclePhysicsController_RigidBodyPropertiesCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentaclePhysicsController_RigidBodyPropertiesCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
