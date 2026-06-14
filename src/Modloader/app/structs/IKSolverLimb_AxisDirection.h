#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverLimb_AxisDirection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverLimb_AxisDirection_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverLimb_AxisDirection_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolverLimb_AxisDirection_DEFINED
struct IKSolverLimb_AxisDirection {
    struct Vector3 direction;
    struct Vector3 axis;
    float dot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverLimb_AxisDirection_FWDDECL)
#define IL2CPP_STRUCT_IKSolverLimb_AxisDirection_FWDDECL
#endif
#undef IL2CPP_STRUCT_IKSolverLimb_AxisDirection_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverLimb_AxisDirection_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverLimb_AxisDirection_FWDDECL)
#include <Modloader/app/structs/IKSolverLimb_AxisDirection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverLimb_AxisDirection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
