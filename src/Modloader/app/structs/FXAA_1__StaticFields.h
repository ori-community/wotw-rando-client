#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_1__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_1__StaticFields_DEFINED)
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#if defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_FXAA_1__StaticFields_DEFINED
struct FXAA_1__StaticFields {
    int32_t _FXAATempFinalOutput;
    int32_t _FXAATempLuma;
    int32_t _FXAAColor;
    int32_t _FXAALuma;
    int32_t MaximumNumberOfAliasedPixelsPerDirection;
    RenderTextureFormat__Enum FinalOutputRenderTextureFormat;

    RenderTextureFormat__Enum LumaRenderTextureFormat;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAA_1__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FXAA_1__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FXAA_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_1__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_1__StaticFields_FWDDECL)
#include <Modloader/app/structs/FXAA_1__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA_1__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
