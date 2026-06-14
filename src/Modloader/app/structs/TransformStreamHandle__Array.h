#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformStreamHandle__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformStreamHandle__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformStreamHandle__Array_DEFINED)
#include <Modloader/app/structs/TransformStreamHandle.h>
#if defined(IL2CPP_STRUCT_TransformStreamHandle_DEFINED)
#define IL2CPP_STRUCT_TransformStreamHandle__Array_DEFINED
struct TransformStreamHandle__Array__Class;
struct TransformStreamHandle__Array {
    struct TransformStreamHandle__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct TransformStreamHandle vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformStreamHandle__Array_FWDDECL)
#define IL2CPP_STRUCT_TransformStreamHandle__Array_FWDDECL
#include <Modloader/app/structs/TransformStreamHandle__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformStreamHandle__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformStreamHandle__Array_DEFINED) && !defined(IL2CPP_STRUCT_TransformStreamHandle__Array_FWDDECL)
#include <Modloader/app/structs/TransformStreamHandle__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformStreamHandle__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
