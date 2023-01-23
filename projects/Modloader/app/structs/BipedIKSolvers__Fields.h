#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedIKSolvers__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedIKSolvers__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIKSolvers__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedIKSolvers__Fields_DEFINED
struct IKSolverLimb;
struct IKSolverFABRIK;
struct IKSolverLookAt;
struct IKSolverAim;
struct Constraints;
struct IKSolverLimb__Array;
struct IKSolver__Array;
struct __declspec(align(8)) BipedIKSolvers__Fields {
    struct IKSolverLimb* leftFoot;
    struct IKSolverLimb* rightFoot;
    struct IKSolverLimb* leftHand;
    struct IKSolverLimb* rightHand;
    struct IKSolverFABRIK* spine;
    struct IKSolverLookAt* lookAt;
    struct IKSolverAim* aim;
    struct Constraints* pelvis;
    struct IKSolverLimb__Array* _limbs;
    struct IKSolver__Array* _ikSolvers;
};
#endif
#if !defined(IL2CPP_STRUCT_BipedIKSolvers__Fields_FWDDECL)
#define IL2CPP_STRUCT_BipedIKSolvers__Fields_FWDDECL
#include <Modloader/app/structs/Constraints.h>
#include <Modloader/app/structs/IKSolverAim.h>
#include <Modloader/app/structs/IKSolverFABRIK.h>
#include <Modloader/app/structs/IKSolverLimb.h>
#include <Modloader/app/structs/IKSolverLimb__Array.h>
#include <Modloader/app/structs/IKSolverLookAt.h>
#include <Modloader/app/structs/IKSolver__Array.h>
#endif
#undef IL2CPP_STRUCT_BipedIKSolvers__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIKSolvers__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BipedIKSolvers__Fields_FWDDECL)
#include <Modloader/app/structs/BipedIKSolvers__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedIKSolvers__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
