#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SinMovement_Affect__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SinMovement_Affect__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovement_Affect__Array_DEFINED)
#define IL2CPP_STRUCT_SinMovement_Affect__Array_DEFINED
struct SinMovement_Affect__Array__Class;
struct SinMovement_Affect;
struct SinMovement_Affect__Array {
    struct SinMovement_Affect__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SinMovement_Affect* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_SinMovement_Affect__Array_FWDDECL)
#define IL2CPP_STRUCT_SinMovement_Affect__Array_FWDDECL
#include <Modloader/app/structs/SinMovement_Affect.h>
#include <Modloader/app/structs/SinMovement_Affect__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SinMovement_Affect__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovement_Affect__Array_DEFINED) && !defined(IL2CPP_STRUCT_SinMovement_Affect__Array_FWDDECL)
#include <Modloader/app/structs/SinMovement_Affect__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SinMovement_Affect__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
