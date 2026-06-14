#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildRegion__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildRegion__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegion__Array_DEFINED)
#define IL2CPP_STRUCT_BuildRegion__Array_DEFINED
struct BuildRegion__Array__Class;
struct BuildRegion;
struct BuildRegion__Array {
    struct BuildRegion__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct BuildRegion* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_BuildRegion__Array_FWDDECL)
#define IL2CPP_STRUCT_BuildRegion__Array_FWDDECL
#include <Modloader/app/structs/BuildRegion.h>
#include <Modloader/app/structs/BuildRegion__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_BuildRegion__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegion__Array_DEFINED) && !defined(IL2CPP_STRUCT_BuildRegion__Array_FWDDECL)
#include <Modloader/app/structs/BuildRegion__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildRegion__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
