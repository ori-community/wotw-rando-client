#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleIKSolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleIKSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleIKSolver_DEFINED)
#include <Modloader/app/structs/SimpleIKSolver__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleIKSolver__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleIKSolver_DEFINED
struct SimpleIKSolver__Class;
struct SimpleIKSolver {
    struct SimpleIKSolver__Class* klass;
    MonitorData* monitor;
    struct SimpleIKSolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleIKSolver_FWDDECL)
#define IL2CPP_STRUCT_SimpleIKSolver_FWDDECL
#include <Modloader/app/structs/SimpleIKSolver__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleIKSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleIKSolver_DEFINED) && !defined(IL2CPP_STRUCT_SimpleIKSolver_FWDDECL)
#include <Modloader/app/structs/SimpleIKSolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleIKSolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
