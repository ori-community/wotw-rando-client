#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderPipelineManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderPipelineManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderPipelineManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RenderPipelineManager__StaticFields_DEFINED
struct IRenderPipelineAsset;
struct IRenderPipeline;
struct RenderPipelineManager__StaticFields {
    struct IRenderPipelineAsset* s_CurrentPipelineAsset;
    struct IRenderPipeline* _currentPipeline_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_RenderPipelineManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RenderPipelineManager__StaticFields_FWDDECL
#include <Modloader/app/structs/IRenderPipeline.h>
#include <Modloader/app/structs/IRenderPipelineAsset.h>
#endif
#undef IL2CPP_STRUCT_RenderPipelineManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderPipelineManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RenderPipelineManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/RenderPipelineManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderPipelineManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
