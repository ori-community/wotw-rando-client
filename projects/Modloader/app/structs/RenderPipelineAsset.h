#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderPipelineAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderPipelineAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderPipelineAsset_DEFINED)
#include <Modloader/app/structs/RenderPipelineAsset__Fields.h>
#if defined(IL2CPP_STRUCT_RenderPipelineAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_RenderPipelineAsset_DEFINED
struct RenderPipelineAsset__Class;
struct RenderPipelineAsset {
    struct RenderPipelineAsset__Class* klass;
    MonitorData* monitor;
    struct RenderPipelineAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderPipelineAsset_FWDDECL)
#define IL2CPP_STRUCT_RenderPipelineAsset_FWDDECL
#include <Modloader/app/structs/RenderPipelineAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderPipelineAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderPipelineAsset_DEFINED) && !defined(IL2CPP_STRUCT_RenderPipelineAsset_FWDDECL)
#include <Modloader/app/structs/RenderPipelineAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderPipelineAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
