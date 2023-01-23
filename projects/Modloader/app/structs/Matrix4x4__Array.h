#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Matrix4x4__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Matrix4x4__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Matrix4x4__Array_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#if defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_Matrix4x4__Array_DEFINED
struct Matrix4x4__Array__Class;
struct Matrix4x4__Array {
    struct Matrix4x4__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Matrix4x4 vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Matrix4x4__Array_FWDDECL)
#define IL2CPP_STRUCT_Matrix4x4__Array_FWDDECL
#include <Modloader/app/structs/Matrix4x4__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Matrix4x4__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Matrix4x4__Array_DEFINED) && !defined(IL2CPP_STRUCT_Matrix4x4__Array_FWDDECL)
#include <Modloader/app/structs/Matrix4x4__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Matrix4x4__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
