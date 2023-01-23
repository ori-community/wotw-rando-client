#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver_Point_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver_Point_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Point_DEFINED)
#include <Modloader/app/structs/IKSolver_Point__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolver_Point__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolver_Point_DEFINED
struct IKSolver_Point__Class;
struct IKSolver_Point {
    struct IKSolver_Point__Class* klass;
    MonitorData* monitor;
    struct IKSolver_Point__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver_Point_FWDDECL)
#define IL2CPP_STRUCT_IKSolver_Point_FWDDECL
#include <Modloader/app/structs/IKSolver_Point__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolver_Point_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Point_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver_Point_FWDDECL)
#include <Modloader/app/structs/IKSolver_Point.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver_Point.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
