#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_DEFINED)
#include <Modloader/app/structs/IKSolver__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolver__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_DEFINED
struct FABRIKChain__Array;
struct Boolean__Array;
struct IKSolverFABRIKRoot__Fields {
    struct IKSolver__Fields _;
    int32_t iterations;
    float rootPin;
    struct FABRIKChain__Array* chains;
    bool zeroWeightApplied;
    struct Boolean__Array* isRoot;
    struct Vector3 rootDefaultPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/FABRIKChain__Array.h>
#endif
#undef IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverFABRIKRoot__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverFABRIKRoot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverFABRIKRoot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
