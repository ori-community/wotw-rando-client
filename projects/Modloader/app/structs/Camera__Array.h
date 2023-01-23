#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Camera__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Camera__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera__Array_DEFINED)
#define IL2CPP_STRUCT_Camera__Array_DEFINED
struct Camera__Array__Class;
struct Camera;
struct Camera__Array {
    struct Camera__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Camera* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Camera__Array_FWDDECL)
#define IL2CPP_STRUCT_Camera__Array_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Camera__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Camera__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera__Array_DEFINED) && !defined(IL2CPP_STRUCT_Camera__Array_FWDDECL)
#include <Modloader/app/structs/Camera__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Camera__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
