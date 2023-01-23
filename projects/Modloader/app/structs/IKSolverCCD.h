#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverCCD_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverCCD_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverCCD_DEFINED)
#include <Modloader/app/structs/IKSolverCCD__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolverCCD__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolverCCD_DEFINED
struct IKSolverCCD__Class;
struct IKSolverCCD {
    struct IKSolverCCD__Class* klass;
    MonitorData* monitor;
    struct IKSolverCCD__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverCCD_FWDDECL)
#define IL2CPP_STRUCT_IKSolverCCD_FWDDECL
#include <Modloader/app/structs/IKSolverCCD__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolverCCD_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverCCD_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverCCD_FWDDECL)
#include <Modloader/app/structs/IKSolverCCD.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverCCD.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
