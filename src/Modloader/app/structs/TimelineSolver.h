#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineSolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineSolver_DEFINED)
#define IL2CPP_STRUCT_TimelineSolver_DEFINED
struct TimelineSolver__Class;
struct TimelineSolver {
    struct TimelineSolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineSolver_FWDDECL)
#define IL2CPP_STRUCT_TimelineSolver_FWDDECL
#include <Modloader/app/structs/TimelineSolver__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineSolver_DEFINED) && !defined(IL2CPP_STRUCT_TimelineSolver_FWDDECL)
#include <Modloader/app/structs/TimelineSolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineSolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
