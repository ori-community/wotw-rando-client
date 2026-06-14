#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverFullBody__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverFullBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFullBody__Fields_DEFINED)
#include <Modloader/app/structs/IKSolver__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolver__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolverFullBody__Fields_DEFINED
struct FBIKChain__Array;
struct IKEffector__Array;
struct IKMappingSpine;
struct IKMappingBone__Array;
struct IKMappingLimb__Array;
struct IKSolver_UpdateDelegate;
struct IKSolver_IterationDelegate;
struct IKSolverFullBody__Fields {
    struct IKSolver__Fields _;
    int32_t iterations;
    struct FBIKChain__Array* chain;
    struct IKEffector__Array* effectors;
    struct IKMappingSpine* spineMapping;
    struct IKMappingBone__Array* boneMappings;
    struct IKMappingLimb__Array* limbMappings;
    struct IKSolver_UpdateDelegate* OnPreRead;
    struct IKSolver_UpdateDelegate* OnPreSolve;
    struct IKSolver_IterationDelegate* OnPreIteration;
    struct IKSolver_IterationDelegate* OnPostIteration;
    struct IKSolver_UpdateDelegate* OnPreBend;
    struct IKSolver_UpdateDelegate* OnPostSolve;
    struct IKSolver_UpdateDelegate* OnStoreDefaultLocalState;
    struct IKSolver_UpdateDelegate* OnFixTransforms;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverFullBody__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverFullBody__Fields_FWDDECL
#include <Modloader/app/structs/FBIKChain__Array.h>
#include <Modloader/app/structs/IKEffector__Array.h>
#include <Modloader/app/structs/IKMappingBone__Array.h>
#include <Modloader/app/structs/IKMappingLimb__Array.h>
#include <Modloader/app/structs/IKMappingSpine.h>
#include <Modloader/app/structs/IKSolver_IterationDelegate.h>
#include <Modloader/app/structs/IKSolver_UpdateDelegate.h>
#endif
#undef IL2CPP_STRUCT_IKSolverFullBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFullBody__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverFullBody__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverFullBody__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverFullBody__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
