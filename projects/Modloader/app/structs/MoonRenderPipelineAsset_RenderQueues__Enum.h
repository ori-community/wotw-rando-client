#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_DEFINED
enum class MoonRenderPipelineAsset_RenderQueues__Enum : int32_t {
    All = 0x00000000,
    AllBackToFront = 0x00000001,
    Opaque = 0x00000002,
    Transparent = 0x00000003,
    OpaqueThenTransparent = 0x00000004,
    TransparentThenOpaque = 0x00000005,
    LegacySort = 0x00000006,
    EarlyZ = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineAsset_RenderQueues__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineAsset_RenderQueues__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
