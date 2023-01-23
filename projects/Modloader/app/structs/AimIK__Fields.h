#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AimIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AimIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimIK__Fields_DEFINED)
#include <Modloader/app/structs/IK__Fields.h>
#if defined(IL2CPP_STRUCT_IK__Fields_DEFINED)
#define IL2CPP_STRUCT_AimIK__Fields_DEFINED
struct IKSolverAim;
struct AimIK__Fields {
    struct IK__Fields _;
    struct IKSolverAim* solver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AimIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_AimIK__Fields_FWDDECL
#include <Modloader/app/structs/IKSolverAim.h>
#endif
#undef IL2CPP_STRUCT_AimIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AimIK__Fields_FWDDECL)
#include <Modloader/app/structs/AimIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AimIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
