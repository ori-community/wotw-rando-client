#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptimizationCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptimizationCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptimizationCache_DEFINED)
#include <Modloader/app/structs/OptimizationCache__Fields.h>
#if defined(IL2CPP_STRUCT_OptimizationCache__Fields_DEFINED)
#define IL2CPP_STRUCT_OptimizationCache_DEFINED
struct OptimizationCache__Class;
struct OptimizationCache {
    struct OptimizationCache__Class* klass;
    MonitorData* monitor;
    struct OptimizationCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OptimizationCache_FWDDECL)
#define IL2CPP_STRUCT_OptimizationCache_FWDDECL
#include <Modloader/app/structs/OptimizationCache__Class.h>
#endif
#undef IL2CPP_STRUCT_OptimizationCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptimizationCache_DEFINED) && !defined(IL2CPP_STRUCT_OptimizationCache_FWDDECL)
#include <Modloader/app/structs/OptimizationCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptimizationCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
