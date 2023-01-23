#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_DEFINED
struct Renderer;
struct LegacyMaterialColorGradientAnimator_RendererData {
    struct Color OriginalValue;
    struct Renderer* Renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_FWDDECL)
#define IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_DEFINED) && !defined(IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator_RendererData_FWDDECL)
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
