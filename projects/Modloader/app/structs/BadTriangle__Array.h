#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BadTriangle__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BadTriangle__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriangle__Array_DEFINED)
#define IL2CPP_STRUCT_BadTriangle__Array_DEFINED
struct BadTriangle__Array__Class;
struct BadTriangle;
struct BadTriangle__Array {
    struct BadTriangle__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct BadTriangle* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_BadTriangle__Array_FWDDECL)
#define IL2CPP_STRUCT_BadTriangle__Array_FWDDECL
#include <Modloader/app/structs/BadTriangle.h>
#include <Modloader/app/structs/BadTriangle__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_BadTriangle__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriangle__Array_DEFINED) && !defined(IL2CPP_STRUCT_BadTriangle__Array_FWDDECL)
#include <Modloader/app/structs/BadTriangle__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BadTriangle__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
