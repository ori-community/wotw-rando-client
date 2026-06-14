#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossCameraSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossCameraSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossCameraSetup__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_BossCameraSetup__Fields_DEFINED
struct BossCameraTarget;
struct Transform;
struct CameraPivotZone;
struct CameraOffsetAnimationZone;
struct RaycastHit__Array;
struct BossCameraSetup__Fields {
    struct MonoBehaviour__Fields _;
    struct BossCameraTarget* Target;
    struct Transform* CameraTargetTransform;
    struct Vector2 PivotWeight;
    float PivotTargetLerpSpeed;
    struct Vector3 OriOffset;
    float OriLookaheadDuration;
    float OriLookaheadResponse;
    struct Vector2 OriFocalSize;
    struct Vector2 ProportionalOffsetMin;
    struct Vector2 ProportionalOffsetMax;
    struct CameraPivotZone* PivotZone;
    struct CameraOffsetAnimationZone* ZoomAnimationZone;
    struct Vector2 ZoomDistanceRangeX;
    struct Vector2 ZoomDistanceRangeY;
    struct Vector2 ZoomRange;
    float ZoomWeight;
    float ZoomLerpSpeed;
    float ZoomLerpSpeedDec;
    float ZoomLerpSpeedInc;
    struct Vector2 OuterRange;
    float AdjustOriPositionToGroundFactor;
    struct Transform* m_placeHolder;
    struct Vector3 m_lastCharPos;
    float m_lastTargetZoom;
    struct Vector3 m_lastTargetPos;
    struct Vector3 m_lastTargetPosBeforeOuterAdjustment;
    struct Vector3 m_originalCameraTargetTransformPosition;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;

    bool m_wasUsingAggresiveCameraBlocking;
    float RaycastDistance;
    struct LayerMask RaycastMask;
    struct Vector3 PostRaycastOriOffset;
    struct RaycastHit__Array* m_raycastHits;
    struct Vector3 m_charMovement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossCameraSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_BossCameraSetup__Fields_FWDDECL
#include <Modloader/app/structs/BossCameraTarget.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone.h>
#include <Modloader/app/structs/CameraPivotZone.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BossCameraSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossCameraSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BossCameraSetup__Fields_FWDDECL)
#include <Modloader/app/structs/BossCameraSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossCameraSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
