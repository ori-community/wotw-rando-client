#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_DEFINED
struct Transform;
struct AnimationCurve;
struct Func_2_UnityEngine_Collider_Boolean_;
struct LocomotionUtils_CollisionAvoidanceSettings {
    struct Transform* HitBox;
    float HitBoxRadius;
    float CheckDistance;
    struct LayerMask AvoidanceObstaclesMask;
    float MinDistanceToObstacle;
    struct AnimationCurve* SpeedDampRate;
    struct Func_2_UnityEngine_Collider_Boolean_* IgnoreCollider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_FWDDECL)
#define IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Collider_Boolean_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_FWDDECL)
#include <Modloader/app/structs/LocomotionUtils_CollisionAvoidanceSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionUtils_CollisionAvoidanceSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
