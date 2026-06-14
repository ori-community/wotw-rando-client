#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyAnalysis__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyAnalysis__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyAnalysis__Array_DEFINED)
#define IL2CPP_STRUCT_PropertyAnalysis__Array_DEFINED
struct PropertyAnalysis__Array__Class;
struct PropertyAnalysis;
struct PropertyAnalysis__Array {
    struct PropertyAnalysis__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct PropertyAnalysis* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_PropertyAnalysis__Array_FWDDECL)
#define IL2CPP_STRUCT_PropertyAnalysis__Array_FWDDECL
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/PropertyAnalysis__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyAnalysis__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyAnalysis__Array_DEFINED) && !defined(IL2CPP_STRUCT_PropertyAnalysis__Array_FWDDECL)
#include <Modloader/app/structs/PropertyAnalysis__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyAnalysis__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
