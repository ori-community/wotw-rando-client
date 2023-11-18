#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_DEFINED
struct ShaderID_ScreenSpaceReflection__StaticFields {
    int32_t _RayStepSize;
    int32_t _AdditiveReflection;
    int32_t _BilateralUpsampling;
    int32_t _TreatBackfaceHitAsMiss;
    int32_t _AllowBackwardsRays;
    int32_t _TraceBehindObjects;
    int32_t _MaxSteps;
    int32_t _FullResolutionFiltering;
    int32_t _HalfResolution;
    int32_t _HighlightSuppression;
    int32_t _PixelsPerMeterAtOneMeter;
    int32_t _ScreenEdgeFading;
    int32_t _ReflectionBlur;
    int32_t _MaxRayTraceDistance;
    int32_t _FadeDistance;
    int32_t _LayerThickness;
    int32_t _SSRMultiplier;
    int32_t _FresnelFade;
    int32_t _FresnelFadePower;
    int32_t _ReflectionBufferSize;
    int32_t _ScreenSize;
    int32_t _InvScreenSize;
    int32_t _ProjInfo;
    int32_t _CameraClipInfo;
    int32_t _ProjectToPixelMatrix;
    int32_t _WorldToCameraMatrix;
    int32_t _CameraToWorldMatrix;
    int32_t _Axis;
    int32_t _CurrentMipLevel;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_ScreenSpaceReflection__StaticFields_FWDDECL)
#include <Modloader/app/structs/ShaderID_ScreenSpaceReflection__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_ScreenSpaceReflection__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
