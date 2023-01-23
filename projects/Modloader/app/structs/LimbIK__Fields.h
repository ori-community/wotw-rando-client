#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LimbIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LimbIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimbIK__Fields_DEFINED)
#include <Modloader/app/structs/IK__Fields.h>
#if defined(IL2CPP_STRUCT_IK__Fields_DEFINED)
#define IL2CPP_STRUCT_LimbIK__Fields_DEFINED
struct IKSolverLimb;
struct LimbIK__Fields {
    struct IK__Fields _;
    struct IKSolverLimb* solver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LimbIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_LimbIK__Fields_FWDDECL
#include <Modloader/app/structs/IKSolverLimb.h>
#endif
#undef IL2CPP_STRUCT_LimbIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimbIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LimbIK__Fields_FWDDECL)
#include <Modloader/app/structs/LimbIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LimbIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
