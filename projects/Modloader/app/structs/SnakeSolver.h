#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnakeSolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnakeSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeSolver_DEFINED)
#include <Modloader/app/structs/SnakeSolver__Fields.h>
#if defined(IL2CPP_STRUCT_SnakeSolver__Fields_DEFINED)
#define IL2CPP_STRUCT_SnakeSolver_DEFINED
struct SnakeSolver__Class;
struct SnakeSolver {
    struct SnakeSolver__Class* klass;
    MonitorData* monitor;
    struct SnakeSolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnakeSolver_FWDDECL)
#define IL2CPP_STRUCT_SnakeSolver_FWDDECL
#include <Modloader/app/structs/SnakeSolver__Class.h>
#endif
#undef IL2CPP_STRUCT_SnakeSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeSolver_DEFINED) && !defined(IL2CPP_STRUCT_SnakeSolver_FWDDECL)
#include <Modloader/app/structs/SnakeSolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnakeSolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
