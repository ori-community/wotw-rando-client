#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputHandle_t__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputHandle_t__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputHandle_t__Array_DEFINED)
#include <Modloader/app/structs/InputHandle_t.h>
#if defined(IL2CPP_STRUCT_InputHandle_t_DEFINED)
#define IL2CPP_STRUCT_InputHandle_t__Array_DEFINED
struct InputHandle_t__Array__Class;
struct InputHandle_t__Array {
    struct InputHandle_t__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct InputHandle_t vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputHandle_t__Array_FWDDECL)
#define IL2CPP_STRUCT_InputHandle_t__Array_FWDDECL
#include <Modloader/app/structs/InputHandle_t__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_InputHandle_t__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputHandle_t__Array_DEFINED) && !defined(IL2CPP_STRUCT_InputHandle_t__Array_FWDDECL)
#include <Modloader/app/structs/InputHandle_t__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputHandle_t__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
