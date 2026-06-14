#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_DEFINED
struct CameraChaseTarget;
struct CameraChaseTargetSpeedRatioController__Fields {
    struct Suspendable__Fields _;
    struct CameraChaseTarget* CameraChaseTarget;
    float m_originalSpeedRatio;
    float AdditionalSpeed;
    float MinSpeed;
    float MaxSpeed;
    float ForcedAdditionalSpeedRatio;
    struct Vector2 ZoomRange;
    struct Vector2 SpeedRangeForZoom;
    struct Vector2 CloseZoomAdditionalSpeed;
    bool DoDot;
    float m_zoomSpeed;
    float ZoomSpeedLerp;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_FWDDECL
#include <Modloader/app/structs/CameraChaseTarget.h>
#endif
#undef IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraChaseTargetSpeedRatioController__Fields_FWDDECL)
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
