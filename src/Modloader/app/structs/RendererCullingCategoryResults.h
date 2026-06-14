#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RendererCullingCategoryResults_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RendererCullingCategoryResults_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryResults_DEFINED)
#define IL2CPP_STRUCT_RendererCullingCategoryResults_DEFINED
struct RendererCullingCategoryResults_Slice__Array;
struct RendererCullingCategoryResults {
    int32_t uniqueCount;
    int32_t missedCount;
    struct RendererCullingCategoryResults_Slice__Array* slices;
};
#endif
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryResults_FWDDECL)
#define IL2CPP_STRUCT_RendererCullingCategoryResults_FWDDECL
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice__Array.h>
#endif
#undef IL2CPP_STRUCT_RendererCullingCategoryResults_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryResults_DEFINED) && !defined(IL2CPP_STRUCT_RendererCullingCategoryResults_FWDDECL)
#include <Modloader/app/structs/RendererCullingCategoryResults.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RendererCullingCategoryResults.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
