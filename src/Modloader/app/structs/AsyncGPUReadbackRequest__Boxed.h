#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_DEFINED)
#include <Modloader/app/structs/AsyncGPUReadbackRequest.h>
#if defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest_DEFINED)
#define IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_DEFINED
struct AsyncGPUReadbackRequest__Class;
struct AsyncGPUReadbackRequest__Boxed {
    struct AsyncGPUReadbackRequest__Class* klass;
    MonitorData* monitor;
    struct AsyncGPUReadbackRequest fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_FWDDECL
#include <Modloader/app/structs/AsyncGPUReadbackRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest__Boxed_FWDDECL)
#include <Modloader/app/structs/AsyncGPUReadbackRequest__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncGPUReadbackRequest__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
