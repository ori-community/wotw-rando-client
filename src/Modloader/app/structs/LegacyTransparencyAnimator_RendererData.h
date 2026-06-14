#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_DEFINED)
#define IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_DEFINED
struct Renderer;
struct LegacyTransparencyAnimator_RendererData {
    float OriginalAlpha;
    struct Renderer* Renderer;
};
#endif
#if !defined(IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_FWDDECL)
#define IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTransparencyAnimator_RendererData_FWDDECL)
#include <Modloader/app/structs/LegacyTransparencyAnimator_RendererData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTransparencyAnimator_RendererData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
