#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRenderPipelineAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRenderPipelineAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRenderPipelineAsset_DEFINED)
#define IL2CPP_STRUCT_IRenderPipelineAsset_DEFINED
struct IRenderPipelineAsset__Class;
struct IRenderPipelineAsset {
    struct IRenderPipelineAsset__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRenderPipelineAsset_FWDDECL)
#define IL2CPP_STRUCT_IRenderPipelineAsset_FWDDECL
#include <Modloader/app/structs/IRenderPipelineAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_IRenderPipelineAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRenderPipelineAsset_DEFINED) && !defined(IL2CPP_STRUCT_IRenderPipelineAsset_FWDDECL)
#include <Modloader/app/structs/IRenderPipelineAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRenderPipelineAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
