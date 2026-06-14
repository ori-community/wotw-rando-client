#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FullBodyBipedIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FullBodyBipedIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FullBodyBipedIK__Fields_DEFINED)
#include <Modloader/app/structs/IK__Fields.h>
#if defined(IL2CPP_STRUCT_IK__Fields_DEFINED)
#define IL2CPP_STRUCT_FullBodyBipedIK__Fields_DEFINED
struct BipedReferences;
struct IKSolverFullBodyBiped;
struct FullBodyBipedIK__Fields {
    struct IK__Fields _;
    struct BipedReferences* references;
    struct IKSolverFullBodyBiped* solver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FullBodyBipedIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_FullBodyBipedIK__Fields_FWDDECL
#include <Modloader/app/structs/BipedReferences.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>
#endif
#undef IL2CPP_STRUCT_FullBodyBipedIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FullBodyBipedIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FullBodyBipedIK__Fields_FWDDECL)
#include <Modloader/app/structs/FullBodyBipedIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FullBodyBipedIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
