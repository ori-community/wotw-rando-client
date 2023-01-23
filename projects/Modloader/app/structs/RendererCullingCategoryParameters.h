#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RendererCullingCategoryParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RendererCullingCategoryParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryParameters_DEFINED)
#define IL2CPP_STRUCT_RendererCullingCategoryParameters_DEFINED
struct RendererCullingCategoryParameters {
    uint32_t mask;
    bool needsList;
    bool perSlice;
};
#endif
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryParameters_FWDDECL)
#define IL2CPP_STRUCT_RendererCullingCategoryParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_RendererCullingCategoryParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererCullingCategoryParameters_DEFINED) && !defined(IL2CPP_STRUCT_RendererCullingCategoryParameters_FWDDECL)
#include <Modloader/app/structs/RendererCullingCategoryParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RendererCullingCategoryParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
