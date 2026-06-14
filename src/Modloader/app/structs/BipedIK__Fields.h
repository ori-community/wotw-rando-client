#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIK__Fields_DEFINED)
#include <Modloader/app/structs/SolverManager__Fields.h>
#if defined(IL2CPP_STRUCT_SolverManager__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedIK__Fields_DEFINED
struct BipedReferences;
struct BipedIKSolvers;
struct BipedIK__Fields {
    struct SolverManager__Fields _;
    struct BipedReferences* references;
    struct BipedIKSolvers* solvers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BipedIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_BipedIK__Fields_FWDDECL
#include <Modloader/app/structs/BipedIKSolvers.h>
#include <Modloader/app/structs/BipedReferences.h>
#endif
#undef IL2CPP_STRUCT_BipedIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BipedIK__Fields_FWDDECL)
#include <Modloader/app/structs/BipedIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
