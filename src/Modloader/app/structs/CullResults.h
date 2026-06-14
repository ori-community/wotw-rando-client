#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullResults_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullResults_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullResults_DEFINED)
#include <Modloader/app/structs/FilterResults.h>
#if defined(IL2CPP_STRUCT_FilterResults_DEFINED)
#define IL2CPP_STRUCT_CullResults_DEFINED
struct List_1_UnityEngine_Experimental_Rendering_VisibleLight_;
struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_;
struct RendererCullingCategoryResults__Array;
struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults_;
struct CullResults {
    struct List_1_UnityEngine_Experimental_Rendering_VisibleLight_* visibleLights;
    struct List_1_UnityEngine_Experimental_Rendering_VisibleLight_* visibleOffscreenVertexLights;
    struct List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* visibleReflectionProbes;
    struct RendererCullingCategoryResults__Array* visibleRendererCategories;
    struct Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults_* onRendererCategoriesReady;
    struct FilterResults visibleRenderers;
    void* cullResults;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CullResults_FWDDECL)
#define IL2CPP_STRUCT_CullResults_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_Experimental_Rendering_RendererCullingCategoryResults_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Experimental_Rendering_VisibleLight_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_.h>
#include <Modloader/app/structs/RendererCullingCategoryResults__Array.h>
#endif
#undef IL2CPP_STRUCT_CullResults_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullResults_DEFINED) && !defined(IL2CPP_STRUCT_CullResults_FWDDECL)
#include <Modloader/app/structs/CullResults.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullResults.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
