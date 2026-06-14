#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookAtIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookAtIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookAtIK__Fields_DEFINED)
#include <Modloader/app/structs/IK__Fields.h>
#if defined(IL2CPP_STRUCT_IK__Fields_DEFINED)
#define IL2CPP_STRUCT_LookAtIK__Fields_DEFINED
struct IKSolverLookAt;
struct LookAtIK__Fields {
    struct IK__Fields _;
    struct IKSolverLookAt* solver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookAtIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_LookAtIK__Fields_FWDDECL
#include <Modloader/app/structs/IKSolverLookAt.h>
#endif
#undef IL2CPP_STRUCT_LookAtIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookAtIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LookAtIK__Fields_FWDDECL)
#include <Modloader/app/structs/LookAtIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookAtIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
