#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_DEFINED
struct MoonRenderPipelineView_FilterBounds {
    struct Bounds bounds;
    float zNear;
    float zFar;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView_FilterBounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView_FilterBounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
