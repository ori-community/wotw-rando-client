#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_DEFINED
struct RenderTarget;
struct __declspec(align(8)) MoonRenderPipelineView_GodRaySrcRT__Fields {
    struct RenderTarget* rt;
    int32_t id;
    int32_t blurRTIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_FWDDECL
#include <Modloader/app/structs/RenderTarget.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView_GodRaySrcRT__Fields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView_GodRaySrcRT__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView_GodRaySrcRT__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
