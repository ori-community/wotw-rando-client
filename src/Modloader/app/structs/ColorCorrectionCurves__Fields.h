#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorCorrectionCurves__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorCorrectionCurves__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionCurves__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ColorCorrectionCurves_ColorCorrectionMode__Enum.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_ColorCorrectionCurves_ColorCorrectionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ColorCorrectionCurves__Fields_DEFINED
struct AnimationCurve;
struct Material;
struct Texture2D;
struct Shader;
struct ColorCorrectionCurves__Fields {
    struct PostEffectsBase__Fields _;
    struct AnimationCurve* redChannel;
    struct AnimationCurve* greenChannel;
    struct AnimationCurve* blueChannel;
    bool useDepthCorrection;
    struct AnimationCurve* zCurve;
    struct AnimationCurve* depthRedChannel;
    struct AnimationCurve* depthGreenChannel;
    struct AnimationCurve* depthBlueChannel;
    struct Material* ccMaterial;
    struct Material* ccDepthMaterial;
    struct Material* selectiveCcMaterial;
    struct Texture2D* rgbChannelTex;
    struct Texture2D* rgbDepthChannelTex;
    struct Texture2D* zCurveTex;
    float saturation;
    bool selectiveCc;
    struct Color selectiveFromColor;
    struct Color selectiveToColor;
    ColorCorrectionCurves_ColorCorrectionMode__Enum mode;

    bool updateTextures;
    struct Shader* colorCorrectionCurvesShader;
    struct Shader* simpleColorCorrectionCurvesShader;
    struct Shader* colorCorrectionSelectiveShader;
    bool updateTexturesOnStartup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorCorrectionCurves__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorCorrectionCurves__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_ColorCorrectionCurves__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionCurves__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorCorrectionCurves__Fields_FWDDECL)
#include <Modloader/app/structs/ColorCorrectionCurves__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorCorrectionCurves__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
