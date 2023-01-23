#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkChainSolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkChainSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IkChainSolver__Fields_DEFINED
struct IkChainSolver_JointData__Array;
struct __declspec(align(8)) IkChainSolver__Fields {
    int32_t MaxIterations;
    float Tolerance;
    struct Vector3 TargetPosition;
    float TargetPositionWeight;
    struct IkChainSolver_JointData__Array* Joints;
    float m_chainLength;
    struct Vector3 m_lastLocalDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkChainSolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_IkChainSolver__Fields_FWDDECL
#include <Modloader/app/structs/IkChainSolver_JointData__Array.h>
#endif
#undef IL2CPP_STRUCT_IkChainSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IkChainSolver__Fields_FWDDECL)
#include <Modloader/app/structs/IkChainSolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkChainSolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
