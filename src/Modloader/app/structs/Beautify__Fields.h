#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Beautify__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Beautify__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Beautify__Fields_DEFINED)
#include <Modloader/app/structs/BEAUTIFY_PRESET__Enum.h>
#include <Modloader/app/structs/BEAUTIFY_QUALITY__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_BEAUTIFY_PRESET__Enum_DEFINED) && defined(IL2CPP_STRUCT_BEAUTIFY_QUALITY__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_Beautify__Fields_DEFINED
struct Texture2D;
struct Material;
struct Camera;
struct RenderTexture__Array;
struct Beautify__Fields {
    struct MonoBehaviour__Fields _;
    BEAUTIFY_PRESET__Enum _preset;

    BEAUTIFY_QUALITY__Enum _quality;

    bool _compareMode;
    float _sharpenMinDepth;
    float _sharpenMaxDepth;
    float _sharpen;
    float _sharpenDepthThreshold;
    struct Color _tintColor;
    float _sharpenRelaxation;
    float _sharpenClamp;
    float _sharpenMotionSensibility;
    float _saturate;
    float _contrast;
    float _brightness;
    float _dither;
    float _ditherDepth;
    float _daltonize;
    bool _vignetting;
    struct Color _vignettingColor;
    bool _frame;
    struct Color _frameColor;
    bool _sepia;
    bool _nightVision;
    struct Color _nightVisionColor;
    bool _outline;
    struct Color _outlineColor;
    bool _thermalVision;
    bool _lensDirt;
    float _lensDirtThreshold;
    float _lensDirtIntensity;
    struct Texture2D* _lensDirtTexture;
    bool _bloom;
    float _bloomIntensity;
    bool _bloomAntiflicker;
    float _bloomThreshold;
    bool _bloomCustomize;
    bool _bloomDebug;
    float _bloomWeight0;
    float _bloomWeight1;
    float _bloomWeight2;
    float _bloomWeight3;
    float _bloomWeight4;
    float _bloomWeight5;
    bool isDirty;
    struct Material* bMatDesktop;
    struct Material* bMatMobile;
    struct Material* bMat;
    struct Camera* currentCamera;
    struct Vector3 camPrevForward;
    struct Vector3 camPrevPos;
    float currSens;
    int32_t renderPass;
    RenderTextureFormat__Enum rtFormat;

    struct RenderTexture__Array* rt;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Beautify__Fields_FWDDECL)
#define IL2CPP_STRUCT_Beautify__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Beautify__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Beautify__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Beautify__Fields_FWDDECL)
#include <Modloader/app/structs/Beautify__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Beautify__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
