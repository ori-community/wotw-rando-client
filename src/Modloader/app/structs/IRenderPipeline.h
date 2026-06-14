#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRenderPipeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRenderPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRenderPipeline_DEFINED)
#define IL2CPP_STRUCT_IRenderPipeline_DEFINED
struct IRenderPipeline__Class;
struct IRenderPipeline {
    struct IRenderPipeline__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRenderPipeline_FWDDECL)
#define IL2CPP_STRUCT_IRenderPipeline_FWDDECL
#include <Modloader/app/structs/IRenderPipeline__Class.h>
#endif
#undef IL2CPP_STRUCT_IRenderPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRenderPipeline_DEFINED) && !defined(IL2CPP_STRUCT_IRenderPipeline_FWDDECL)
#include <Modloader/app/structs/IRenderPipeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRenderPipeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
