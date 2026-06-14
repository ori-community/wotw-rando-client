#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkChainSolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkChainSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver_DEFINED)
#include <Modloader/app/structs/IkChainSolver__Fields.h>
#if defined(IL2CPP_STRUCT_IkChainSolver__Fields_DEFINED)
#define IL2CPP_STRUCT_IkChainSolver_DEFINED
struct IkChainSolver__Class;
struct IkChainSolver {
    struct IkChainSolver__Class* klass;
    MonitorData* monitor;
    struct IkChainSolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkChainSolver_FWDDECL)
#define IL2CPP_STRUCT_IkChainSolver_FWDDECL
#include <Modloader/app/structs/IkChainSolver__Class.h>
#endif
#undef IL2CPP_STRUCT_IkChainSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkChainSolver_DEFINED) && !defined(IL2CPP_STRUCT_IkChainSolver_FWDDECL)
#include <Modloader/app/structs/IkChainSolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkChainSolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
