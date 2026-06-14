#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GCHandle__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GCHandle__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCHandle__Array_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_GCHandle__Array_DEFINED
struct GCHandle__Array__Class;
struct GCHandle__Array {
    struct GCHandle__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GCHandle vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GCHandle__Array_FWDDECL)
#define IL2CPP_STRUCT_GCHandle__Array_FWDDECL
#include <Modloader/app/structs/GCHandle__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GCHandle__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCHandle__Array_DEFINED) && !defined(IL2CPP_STRUCT_GCHandle__Array_FWDDECL)
#include <Modloader/app/structs/GCHandle__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GCHandle__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
