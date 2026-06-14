#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_DEFINED)
#include <Modloader/app/structs/VerletBodyIndexed_Point.h>
#if defined(IL2CPP_STRUCT_VerletBodyIndexed_Point_DEFINED)
#define IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_DEFINED
struct VerletBodyIndexed_Point__Array__Class;
struct VerletBodyIndexed_Point__Array {
    struct VerletBodyIndexed_Point__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct VerletBodyIndexed_Point vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_FWDDECL)
#define IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_FWDDECL
#include <Modloader/app/structs/VerletBodyIndexed_Point__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_DEFINED) && !defined(IL2CPP_STRUCT_VerletBodyIndexed_Point__Array_FWDDECL)
#include <Modloader/app/structs/VerletBodyIndexed_Point__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBodyIndexed_Point__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
