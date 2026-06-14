#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Promise_ResolveHandler__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Promise_ResolveHandler__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_ResolveHandler__Array_DEFINED)
#include <Modloader/app/structs/Promise_ResolveHandler.h>
#if defined(IL2CPP_STRUCT_Promise_ResolveHandler_DEFINED)
#define IL2CPP_STRUCT_Promise_ResolveHandler__Array_DEFINED
struct Promise_ResolveHandler__Array__Class;
struct Promise_ResolveHandler__Array {
    struct Promise_ResolveHandler__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Promise_ResolveHandler vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Promise_ResolveHandler__Array_FWDDECL)
#define IL2CPP_STRUCT_Promise_ResolveHandler__Array_FWDDECL
#include <Modloader/app/structs/Promise_ResolveHandler__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Promise_ResolveHandler__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_ResolveHandler__Array_DEFINED) && !defined(IL2CPP_STRUCT_Promise_ResolveHandler__Array_FWDDECL)
#include <Modloader/app/structs/Promise_ResolveHandler__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Promise_ResolveHandler__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
