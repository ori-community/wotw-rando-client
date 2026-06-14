#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraChaseTarget__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraChaseTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraChaseTarget__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CameraChaseTarget__Fields_DEFINED
struct CameraChaseTargetSpeedRatioController;
struct AnimationCurve;
struct Transform;
struct Rigidbody;
struct CameraChaseTarget__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraChaseTargetSpeedRatioController* m_speedRatioController;
    struct Vector2 CameraSpeedMultiplier;
    float TotalSpeedMultiplier;
    struct Vector3 m_lastTargetPosition;
    int32_t _IgnoreSmoothingForAFrame_k__BackingField;
    bool SilkySmooth;
    bool m_isSmoothing;
    float DistanceRequiredForSmoothing;
    float SmoothingDuration;
    float ZoomOffset;
    struct AnimationCurve* SmoothingAccelerationCurveOverTime;
    float m_currentSmoothingTime;
    struct Vector3 m_cameraLastPosition;
    struct Vector3 m_cameraSpeed;
    bool FollowTargetX;
    bool FollowTargetY;
    bool FollowTargetZ;
    float SpeedRatio;
    struct Transform* Target;
    struct Transform* m_transform;
    struct Rigidbody* m_rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraChaseTarget__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraChaseTarget__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraChaseTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraChaseTarget__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraChaseTarget__Fields_FWDDECL)
#include <Modloader/app/structs/CameraChaseTarget__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraChaseTarget__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
