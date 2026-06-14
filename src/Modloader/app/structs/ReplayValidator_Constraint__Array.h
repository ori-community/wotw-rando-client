#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayValidator_Constraint__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayValidator_Constraint__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Array_DEFINED)
#define IL2CPP_STRUCT_ReplayValidator_Constraint__Array_DEFINED
struct ReplayValidator_Constraint__Array__Class;
struct ReplayValidator_Constraint;
struct ReplayValidator_Constraint__Array {
    struct ReplayValidator_Constraint__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ReplayValidator_Constraint* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Array_FWDDECL)
#define IL2CPP_STRUCT_ReplayValidator_Constraint__Array_FWDDECL
#include <Modloader/app/structs/ReplayValidator_Constraint.h>
#include <Modloader/app/structs/ReplayValidator_Constraint__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayValidator_Constraint__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Array_DEFINED) && !defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Array_FWDDECL)
#include <Modloader/app/structs/ReplayValidator_Constraint__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayValidator_Constraint__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
