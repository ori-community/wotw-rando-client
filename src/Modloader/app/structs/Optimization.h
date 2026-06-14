#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Optimization_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Optimization_INITIALIZING
#if !defined(IL2CPP_STRUCT_Optimization_DEFINED)
#define IL2CPP_STRUCT_Optimization_DEFINED
struct Optimization__Class;
struct Optimization {
    struct Optimization__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Optimization_FWDDECL)
#define IL2CPP_STRUCT_Optimization_FWDDECL
#include <Modloader/app/structs/Optimization__Class.h>
#endif
#undef IL2CPP_STRUCT_Optimization_INITIALIZING
#if !defined(IL2CPP_STRUCT_Optimization_DEFINED) && !defined(IL2CPP_STRUCT_Optimization_FWDDECL)
#include <Modloader/app/structs/Optimization.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Optimization.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
