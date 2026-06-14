#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Objective__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Objective__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Objective__Array_DEFINED)
#define IL2CPP_STRUCT_Objective__Array_DEFINED
struct Objective__Array__Class;
struct Objective;
struct Objective__Array {
    struct Objective__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Objective* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Objective__Array_FWDDECL)
#define IL2CPP_STRUCT_Objective__Array_FWDDECL
#include <Modloader/app/structs/Objective.h>
#include <Modloader/app/structs/Objective__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Objective__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Objective__Array_DEFINED) && !defined(IL2CPP_STRUCT_Objective__Array_FWDDECL)
#include <Modloader/app/structs/Objective__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Objective__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
