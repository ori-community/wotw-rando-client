#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_DEFINED)
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_DEFINED
struct MoonRenderPipelineView_STLCLightShadeInfo {
    struct Vector4 depthBounds_DarkeningLightMaskInfluence_Intensity3D;
    struct Vector4 pos_ThicknessNear;
    struct Vector4 color;
    struct Vector4 falloffNear;
    struct Vector4 falloffFar;
    struct Vector4 lightParams;
    struct Vector4 zExpand_Depth_ThicknessFar;
    struct Vector4 directionalLight;
    struct Vector4 offset_Hardness_Darkening_ErasingWeight;
    struct Vector4 color3D;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView_STLCLightShadeInfo_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView_STLCLightShadeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView_STLCLightShadeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
