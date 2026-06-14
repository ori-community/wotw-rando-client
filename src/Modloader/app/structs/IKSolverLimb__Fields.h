#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverLimb__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverLimb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverLimb__Fields_DEFINED)
#include <Modloader/app/structs/AvatarIKGoal__Enum.h>
#include <Modloader/app/structs/IKSolverLimb_BendModifier__Enum.h>
#include <Modloader/app/structs/IKSolverTrigonometric__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolverTrigonometric__Fields_DEFINED) && defined(IL2CPP_STRUCT_AvatarIKGoal__Enum_DEFINED) && defined(IL2CPP_STRUCT_IKSolverLimb_BendModifier__Enum_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolverLimb__Fields_DEFINED
struct Transform;
struct IKSolverLimb_AxisDirection__Array;
struct IKSolverLimb__Fields {
    struct IKSolverTrigonometric__Fields _;
    AvatarIKGoal__Enum goal;

    IKSolverLimb_BendModifier__Enum bendModifier;

    float maintainRotationWeight;
    float bendModifierWeight;
    struct Transform* bendGoal;
    bool maintainBendFor1Frame;
    bool maintainRotationFor1Frame;
    struct Quaternion defaultRootRotation;
    struct Quaternion parentDefaultRotation;
    struct Quaternion bone3RotationBeforeSolve;
    struct Quaternion maintainRotation;
    struct Quaternion bone3DefaultRotation;
    struct Vector3 _bendNormal;
    struct Vector3 animationNormal;
    struct IKSolverLimb_AxisDirection__Array* axisDirectionsLeft;
    struct IKSolverLimb_AxisDirection__Array* axisDirectionsRight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverLimb__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverLimb__Fields_FWDDECL
#include <Modloader/app/structs/IKSolverLimb_AxisDirection__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKSolverLimb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverLimb__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverLimb__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverLimb__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverLimb__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
