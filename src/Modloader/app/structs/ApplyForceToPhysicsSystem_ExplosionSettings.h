#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_DEFINED
struct ApplyForceToPhysicsSystem_ExplosionSettings {
    struct Vector3 postion;
    float radius;
    struct Vector3 force;
    float radialForce;
    float randomForce;
    float torque;
    float randomTorque;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_FWDDECL)
#define IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_DEFINED) && !defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_FWDDECL)
#include <Modloader/app/structs/ApplyForceToPhysicsSystem_ExplosionSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplyForceToPhysicsSystem_ExplosionSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
