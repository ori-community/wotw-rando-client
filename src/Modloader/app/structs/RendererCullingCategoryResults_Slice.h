#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_DEFINED)
#define IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_DEFINED
struct Int32__Array;
struct RendererCullingCategoryResults_Slice {
    int32_t count;
    struct Int32__Array* ids;
};
#endif
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_FWDDECL)
#define IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_DEFINED) && !defined(IL2CPP_STRUCT_RendererCullingCategoryResults_Slice_FWDDECL)
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
