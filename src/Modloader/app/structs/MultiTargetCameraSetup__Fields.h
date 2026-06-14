#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_DEFINED
struct CameraTargetsProvider;
struct CameraPivotZone;
struct CameraOffsetAnimationZone;
struct Transform;
struct MultiTargetCameraSetup__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraTargetsProvider* TargetsProvider;
    struct CameraPivotZone* PivotZone;
    struct CameraOffsetAnimationZone* ZoomAnimationZone;
    struct Transform* CameraTargetTransform;
    struct Vector2 ZoomRange;
    struct Vector2 VerticalPaddings;
    struct Vector2 HorizontalPaddings;
    float ActivationLerpTime;
    float CameraTargetLerpSpeed;
    float ZoomLerpSpeedDec;
    float ZoomLerpSpeedInc;
    bool EnableDebugDraw;
    bool m_isSuspended;
    bool m_isActive;
    float m_weight;
    SuspendableMask__Enum m_suspensionMask;

    struct Vector3 m_charMovement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_FWDDECL
#include <Modloader/app/structs/CameraOffsetAnimationZone.h>
#include <Modloader/app/structs/CameraPivotZone.h>
#include <Modloader/app/structs/CameraTargetsProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_FWDDECL)
#include <Modloader/app/structs/MultiTargetCameraSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiTargetCameraSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
