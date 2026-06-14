#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_DEFINED)
#define IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_DEFINED
struct Material;
struct Texture2D;
struct P3D_Brush_LightPaintSubtractive__StaticFields {
    struct Material* s_material;
    int32_t s_textureParamId;
    int32_t s_screenCoordTransformParamId;
    int32_t s_brushColorParamId;
    int32_t s_mainTexParamId;
    int32_t s_splatRectParamId;
    int32_t s_brushOpacityParamId;
    int32_t s_originalTexParamId;
    struct Texture2D* s_mainTex;
    struct Texture2D* s_originalTex;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Brush_LightPaintSubtractive__StaticFields_FWDDECL)
#include <Modloader/app/structs/P3D_Brush_LightPaintSubtractive__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Brush_LightPaintSubtractive__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
