#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullingCategoryManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullingCategoryManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingCategoryManager__Fields_DEFINED)
#include <Modloader/app/structs/RendererCullingCategoryParameters.h>
#include <Modloader/app/structs/RendererCullingCategoryResults.h>
#if defined(IL2CPP_STRUCT_RendererCullingCategoryParameters_DEFINED) && defined(IL2CPP_STRUCT_RendererCullingCategoryResults_DEFINED)
#define IL2CPP_STRUCT_CullingCategoryManager__Fields_DEFINED
struct __declspec(align(8)) CullingCategoryManager__Fields {
    struct RendererCullingCategoryParameters parameters;
    struct RendererCullingCategoryResults _lastResults_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CullingCategoryManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_CullingCategoryManager__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CullingCategoryManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingCategoryManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CullingCategoryManager__Fields_FWDDECL)
#include <Modloader/app/structs/CullingCategoryManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullingCategoryManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
