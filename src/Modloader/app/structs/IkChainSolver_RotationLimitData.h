#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkChainSolver_RotationLimitData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkChainSolver_RotationLimitData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver_RotationLimitData_DEFINED)
#include <Modloader/app/structs/IkChainSolver_LimitHingeData.h>
#include <Modloader/app/structs/IkChainSolver_LimitSpehricalData.h>
#include <Modloader/app/structs/IkChainSolver_RotationLimitType__Enum.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IkChainSolver_RotationLimitType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_IkChainSolver_LimitHingeData_DEFINED) && defined(IL2CPP_STRUCT_IkChainSolver_LimitSpehricalData_DEFINED)
#define IL2CPP_STRUCT_IkChainSolver_RotationLimitData_DEFINED
struct IkChainSolver_RotationLimitData {
    IkChainSolver_RotationLimitType__Enum Type;

    struct Vector3 Axis;
    struct Quaternion DefaultLocalRotation;
    struct Quaternion InverseDefaultLocalRotation;
    struct IkChainSolver_LimitHingeData Hinge;
    struct IkChainSolver_LimitSpehricalData Spherical;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkChainSolver_RotationLimitData_FWDDECL)
#define IL2CPP_STRUCT_IkChainSolver_RotationLimitData_FWDDECL
#endif
#undef IL2CPP_STRUCT_IkChainSolver_RotationLimitData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver_RotationLimitData_DEFINED) && !defined(IL2CPP_STRUCT_IkChainSolver_RotationLimitData_FWDDECL)
#include <Modloader/app/structs/IkChainSolver_RotationLimitData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkChainSolver_RotationLimitData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
