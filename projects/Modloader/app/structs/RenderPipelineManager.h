#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderPipelineManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderPipelineManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderPipelineManager_DEFINED)
#define IL2CPP_STRUCT_RenderPipelineManager_DEFINED
struct RenderPipelineManager__Class;
struct RenderPipelineManager {
    struct RenderPipelineManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RenderPipelineManager_FWDDECL)
#define IL2CPP_STRUCT_RenderPipelineManager_FWDDECL
#include <Modloader/app/structs/RenderPipelineManager__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderPipelineManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderPipelineManager_DEFINED) && !defined(IL2CPP_STRUCT_RenderPipelineManager_FWDDECL)
#include <Modloader/app/structs/RenderPipelineManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderPipelineManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
