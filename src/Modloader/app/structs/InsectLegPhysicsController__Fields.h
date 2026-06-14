#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InsectLegPhysicsController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InsectLegPhysicsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InsectLegPhysicsController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_InsectLegPhysicsController__Fields_DEFINED
struct Rigidbody__Array;
struct Transform;
struct AnimationCurve;
struct FloatAnimator;
struct Rigidbody;
struct HookPlant;
struct InsectLegPhysicsController__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody__Array* Bodies;
    struct Transform* GroundPoint;
    float UndergroundAngle;
    struct AnimationCurve* AngleLerpCurve;
    float PullForce;
    struct FloatAnimator* PullForceCurve;
    struct Rigidbody* PullRigidbody;
    struct HookPlant* LeashHookPlant;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InsectLegPhysicsController__Fields_FWDDECL)
#define IL2CPP_STRUCT_InsectLegPhysicsController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/HookPlant.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_InsectLegPhysicsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InsectLegPhysicsController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InsectLegPhysicsController__Fields_FWDDECL)
#include <Modloader/app/structs/InsectLegPhysicsController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InsectLegPhysicsController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
