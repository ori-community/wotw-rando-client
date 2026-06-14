#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrigonometricIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrigonometricIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrigonometricIK__Fields_DEFINED)
#include <Modloader/app/structs/IK__Fields.h>
#if defined(IL2CPP_STRUCT_IK__Fields_DEFINED)
#define IL2CPP_STRUCT_TrigonometricIK__Fields_DEFINED
struct IKSolverTrigonometric;
struct TrigonometricIK__Fields {
    struct IK__Fields _;
    struct IKSolverTrigonometric* solver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrigonometricIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_TrigonometricIK__Fields_FWDDECL
#include <Modloader/app/structs/IKSolverTrigonometric.h>
#endif
#undef IL2CPP_STRUCT_TrigonometricIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrigonometricIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TrigonometricIK__Fields_FWDDECL)
#include <Modloader/app/structs/TrigonometricIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrigonometricIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
