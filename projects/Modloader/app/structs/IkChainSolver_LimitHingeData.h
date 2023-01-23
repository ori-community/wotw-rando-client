#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkChainSolver_LimitHingeData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkChainSolver_LimitHingeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver_LimitHingeData_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_IkChainSolver_LimitHingeData_DEFINED
struct IkChainSolver_LimitHingeData {
    bool UseLimits;
    float Min;
    float Max;
    struct Quaternion LastRotation;
    float LastAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkChainSolver_LimitHingeData_FWDDECL)
#define IL2CPP_STRUCT_IkChainSolver_LimitHingeData_FWDDECL
#endif
#undef IL2CPP_STRUCT_IkChainSolver_LimitHingeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver_LimitHingeData_DEFINED) && !defined(IL2CPP_STRUCT_IkChainSolver_LimitHingeData_FWDDECL)
#include <Modloader/app/structs/IkChainSolver_LimitHingeData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkChainSolver_LimitHingeData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
