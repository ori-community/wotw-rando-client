#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkChainSolver_JointData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkChainSolver_JointData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver_JointData_DEFINED)
#include <Modloader/app/structs/IkChainSolver_RotationLimitData.h>
#if defined(IL2CPP_STRUCT_IkChainSolver_RotationLimitData_DEFINED)
#define IL2CPP_STRUCT_IkChainSolver_JointData_DEFINED
struct Transform;
struct IkChainSolver_JointData {
    struct Transform* Transform;
    float SegmentLength;
    struct IkChainSolver_RotationLimitData RotationLimit;
    float Weight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkChainSolver_JointData_FWDDECL)
#define IL2CPP_STRUCT_IkChainSolver_JointData_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IkChainSolver_JointData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver_JointData_DEFINED) && !defined(IL2CPP_STRUCT_IkChainSolver_JointData_FWDDECL)
#include <Modloader/app/structs/IkChainSolver_JointData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkChainSolver_JointData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
