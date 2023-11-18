#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderPipeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderPipeline_DEFINED)
#include <Modloader/app/structs/RenderPipeline__Fields.h>
#if defined(IL2CPP_STRUCT_RenderPipeline__Fields_DEFINED)
#define IL2CPP_STRUCT_RenderPipeline_DEFINED
struct RenderPipeline__Class;
struct RenderPipeline {
    struct RenderPipeline__Class* klass;
    MonitorData* monitor;
    struct RenderPipeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderPipeline_FWDDECL)
#define IL2CPP_STRUCT_RenderPipeline_FWDDECL
#include <Modloader/app/structs/RenderPipeline__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderPipeline_DEFINED) && !defined(IL2CPP_STRUCT_RenderPipeline_FWDDECL)
#include <Modloader/app/structs/RenderPipeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderPipeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
