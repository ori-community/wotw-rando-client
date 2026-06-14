#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_DEFINED)
#define IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_DEFINED
struct AnimationCurve;
struct SandWormSandDigLocomotionBehaviour_SpeedEntry {
    float Acceleration;
    float MaxSpeed;
    float RotationSpeed;
    struct AnimationCurve* RotationRate;
};
#endif
#if !defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_FWDDECL)
#define IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_DEFINED) && !defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_FWDDECL)
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
