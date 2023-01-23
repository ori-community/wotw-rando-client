#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_DEFINED
struct Transform;
struct Transform__Array;
struct TentaclePhysicsController;
struct Vector3__Array;
struct Quaternion__Array;
struct TentacleAnimationPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct Transform* Root;
    struct Transform__Array* boneTransforms;
    struct Transform* headTransform;
    struct TentaclePhysicsController* PhysicsController;
    struct Vector3__Array* animatedPositions;
    struct Vector3__Array* animatedDirections;
    struct Quaternion__Array* animatedRotations;
    bool initialised;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/TentaclePhysicsController.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleAnimationPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleAnimationPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleAnimationPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
