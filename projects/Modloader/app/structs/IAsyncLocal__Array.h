#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAsyncLocal__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAsyncLocal__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAsyncLocal__Array_DEFINED)
#define IL2CPP_STRUCT_IAsyncLocal__Array_DEFINED
struct IAsyncLocal__Array__Class;
struct IAsyncLocal;
struct IAsyncLocal__Array {
    struct IAsyncLocal__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct IAsyncLocal* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_IAsyncLocal__Array_FWDDECL)
#define IL2CPP_STRUCT_IAsyncLocal__Array_FWDDECL
#include <Modloader/app/structs/IAsyncLocal.h>
#include <Modloader/app/structs/IAsyncLocal__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_IAsyncLocal__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAsyncLocal__Array_DEFINED) && !defined(IL2CPP_STRUCT_IAsyncLocal__Array_FWDDECL)
#include <Modloader/app/structs/IAsyncLocal__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAsyncLocal__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
