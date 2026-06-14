#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_DEFINED)
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/MoonRenderPipelineDebug_ReflectionStats.h>
#if defined(IL2CPP_STRUCT_Int2_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineDebug_ReflectionStats_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_DEFINED
struct MoonRenderPipelineDebug_Slice__Array;
struct RendererCullingCategoryResults__Array;
struct __declspec(align(8)) MoonRenderPipelineDebug__Fields {
    struct Int2 sceneSize;
    struct Int2 uiSize;
    bool overrideSlicesFromDebug;
    struct MoonRenderPipelineDebug_Slice__Array* slices;
    struct RendererCullingCategoryResults__Array* cullingCategoryResults;
    struct MoonRenderPipelineDebug_ReflectionStats reflections;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_FWDDECL
#include <Modloader/app/structs/MoonRenderPipelineDebug_Slice__Array.h>
#include <Modloader/app/structs/RendererCullingCategoryResults__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineDebug__Fields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineDebug__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineDebug__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
