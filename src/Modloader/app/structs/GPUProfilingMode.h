#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUProfilingMode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUProfilingMode_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUProfilingMode_DEFINED)
#define IL2CPP_STRUCT_GPUProfilingMode_DEFINED
struct GPUProfilingMode__Class;
struct GPUProfilingMode {
    struct GPUProfilingMode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GPUProfilingMode_FWDDECL)
#define IL2CPP_STRUCT_GPUProfilingMode_FWDDECL
#include <Modloader/app/structs/GPUProfilingMode__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUProfilingMode_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUProfilingMode_DEFINED) && !defined(IL2CPP_STRUCT_GPUProfilingMode_FWDDECL)
#include <Modloader/app/structs/GPUProfilingMode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUProfilingMode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
