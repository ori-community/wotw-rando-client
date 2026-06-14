#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_DEFINED
struct ShaderID_CameraMotionBlur__StaticFields {
    int32_t _InvViewProj;
    int32_t _PrevViewProj;
    int32_t _ToPrevViewProjCombined;
    int32_t _MaxVelocity;
    int32_t _MaxRadiusOrKInPaper;
    int32_t _MinVelocity;
    int32_t _VelocityScale;
    int32_t _Jitter;
    int32_t _NoiseTex;
    int32_t _VelTex;
    int32_t _NeighbourMaxTex;
    int32_t _TileTexDebug;
    int32_t _BlurDirectionPacked;
    int32_t _DisplayVelocityScale;
    int32_t _SoftZDistance;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_CameraMotionBlur__StaticFields_FWDDECL)
#include <Modloader/app/structs/ShaderID_CameraMotionBlur__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_CameraMotionBlur__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
