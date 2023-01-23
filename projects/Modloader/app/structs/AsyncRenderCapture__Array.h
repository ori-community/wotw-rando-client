#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncRenderCapture__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncRenderCapture__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture__Array_DEFINED)
#define IL2CPP_STRUCT_AsyncRenderCapture__Array_DEFINED
struct AsyncRenderCapture__Array__Class;
struct AsyncRenderCapture;
struct AsyncRenderCapture__Array {
    struct AsyncRenderCapture__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct AsyncRenderCapture* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture__Array_FWDDECL)
#define IL2CPP_STRUCT_AsyncRenderCapture__Array_FWDDECL
#include <Modloader/app/structs/AsyncRenderCapture.h>
#include <Modloader/app/structs/AsyncRenderCapture__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncRenderCapture__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture__Array_DEFINED) && !defined(IL2CPP_STRUCT_AsyncRenderCapture__Array_FWDDECL)
#include <Modloader/app/structs/AsyncRenderCapture__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncRenderCapture__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
