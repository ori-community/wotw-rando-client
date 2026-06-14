#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InverseKinematicsSolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InverseKinematicsSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsSolver_DEFINED)
#include <Modloader/app/structs/InverseKinematicsSolver__Fields.h>
#if defined(IL2CPP_STRUCT_InverseKinematicsSolver__Fields_DEFINED)
#define IL2CPP_STRUCT_InverseKinematicsSolver_DEFINED
struct InverseKinematicsSolver__Class;
struct InverseKinematicsSolver {
    struct InverseKinematicsSolver__Class* klass;
    MonitorData* monitor;
    struct InverseKinematicsSolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InverseKinematicsSolver_FWDDECL)
#define IL2CPP_STRUCT_InverseKinematicsSolver_FWDDECL
#include <Modloader/app/structs/InverseKinematicsSolver__Class.h>
#endif
#undef IL2CPP_STRUCT_InverseKinematicsSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsSolver_DEFINED) && !defined(IL2CPP_STRUCT_InverseKinematicsSolver_FWDDECL)
#include <Modloader/app/structs/InverseKinematicsSolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InverseKinematicsSolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
