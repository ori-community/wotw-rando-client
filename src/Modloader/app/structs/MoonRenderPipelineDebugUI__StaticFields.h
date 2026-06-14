#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_DEFINED
struct MoonRenderPipelineDebugUI;
struct NavigableOnGUI_1;
struct GUILayoutOption__Array;
struct RenderTextureFormat__Enum__Array;
struct MoonRenderPipelineDebugUI__StaticFields {
    struct MoonRenderPipelineDebugUI* Instance;
    struct NavigableOnGUI_1* ui;
    struct GUILayoutOption__Array* noExpand;
    struct RenderTextureFormat__Enum__Array* renderTextureFormats;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_FWDDECL
#include <Modloader/app/structs/GUILayoutOption__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI.h>
#include <Modloader/app/structs/NavigableOnGUI_1.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineDebugUI__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineDebugUI__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
