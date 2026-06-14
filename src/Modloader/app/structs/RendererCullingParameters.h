#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RendererCullingParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RendererCullingParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererCullingParameters_DEFINED)
#include <Modloader/app/structs/RendererCullingParameters_CategoryList.h>
#include <Modloader/app/structs/RendererCullingParameters_SliceList.h>
#if defined(IL2CPP_STRUCT_RendererCullingParameters_CategoryList_DEFINED) && defined(IL2CPP_STRUCT_RendererCullingParameters_SliceList_DEFINED)
#define IL2CPP_STRUCT_RendererCullingParameters_DEFINED
struct RendererCullingParameters {
    struct RendererCullingParameters_CategoryList categories;
    struct RendererCullingParameters_SliceList slices;
    bool sendOnBecameVisible;
    bool sendOnWillRenderObject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RendererCullingParameters_FWDDECL)
#define IL2CPP_STRUCT_RendererCullingParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_RendererCullingParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererCullingParameters_DEFINED) && !defined(IL2CPP_STRUCT_RendererCullingParameters_FWDDECL)
#include <Modloader/app/structs/RendererCullingParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RendererCullingParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
