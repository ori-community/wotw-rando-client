#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Single__Array_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Single__Array_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_Single__Array_1_DEFINED)
#define IL2CPP_STRUCT_Single__Array_1_DEFINED
struct Single__Array_1__Class;
struct Single__Array_1 {
    struct Single__Array_1__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    float vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Single__Array_1_FWDDECL)
#define IL2CPP_STRUCT_Single__Array_1_FWDDECL
#include <Modloader/app/structs/Single__Array_1__Class.h>
#endif
#undef IL2CPP_STRUCT_Single__Array_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_Single__Array_1_DEFINED) && !defined(IL2CPP_STRUCT_Single__Array_1_FWDDECL)
#include <Modloader/app/structs/Single__Array_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Single__Array_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
