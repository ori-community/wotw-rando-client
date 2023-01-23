#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipeline_DEFINED)
#include <Modloader/app/structs/MoonRenderPipeline__Fields.h>
#if defined(IL2CPP_STRUCT_MoonRenderPipeline__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipeline_DEFINED
struct MoonRenderPipeline__Class;
struct MoonRenderPipeline {
    struct MoonRenderPipeline__Class* klass;
    MonitorData* monitor;
    struct MoonRenderPipeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipeline_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipeline_FWDDECL
#include <Modloader/app/structs/MoonRenderPipeline__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipeline_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipeline_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
