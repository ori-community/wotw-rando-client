#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputTriangle__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputTriangle__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTriangle__Array_DEFINED)
#define IL2CPP_STRUCT_InputTriangle__Array_DEFINED
struct InputTriangle__Array__Class;
struct InputTriangle;
struct InputTriangle__Array {
    struct InputTriangle__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct InputTriangle* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_InputTriangle__Array_FWDDECL)
#define IL2CPP_STRUCT_InputTriangle__Array_FWDDECL
#include <Modloader/app/structs/InputTriangle.h>
#include <Modloader/app/structs/InputTriangle__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_InputTriangle__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTriangle__Array_DEFINED) && !defined(IL2CPP_STRUCT_InputTriangle__Array_FWDDECL)
#include <Modloader/app/structs/InputTriangle__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputTriangle__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
