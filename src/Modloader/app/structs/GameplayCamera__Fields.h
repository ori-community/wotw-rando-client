#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplayCamera__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplayCamera__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCamera__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/GameplayCamera_MotionType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_GameplayCamera_MotionType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_GameplayCamera__Fields_DEFINED
struct CameraController_1;
struct CameraTarget;
struct CameraOffsetController;
struct CameraChaseTarget;
struct CameraScrollLockConstraint;
struct CameraSettingsAsset;
struct SinMovement;
struct DynamicCameraTargetting;
struct Transform;
struct CameraStraightLineMotion;
struct GameObject;
struct Rigidbody;
struct CameraGoThroughScrollLocks;
struct GameplayCamera__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 CameraPositionForSampling;
    struct CameraController_1* Controller;
    struct CameraTarget* CameraTarget;
    struct CameraOffsetController* OffsetController;
    struct CameraChaseTarget* ChaseTarget;
    struct CameraScrollLockConstraint* ScrollLockConstraint;
    struct CameraSettingsAsset* CurrentCameraSettings;
    struct SinMovement* SwayingSinMovement;
    struct DynamicCameraTargetting* DynamicCameraTargetting;
    struct Transform* TargetHelper;
    struct CameraStraightLineMotion* StraightLineMotion;
    struct GameObject* Fader;
    struct Vector2 ScrollLockConstraintOffset;
    bool ScrollLockIsFadingOut;
    GameplayCamera_MotionType__Enum Motion;

    bool m_straightLineMotionTargetIsPlayer;
    struct Transform* Transform;
    struct GameObject* GameObject;
    struct Rigidbody* m_rigidbody;
    struct Vector3 TargetHelperPosition;
    struct CameraGoThroughScrollLocks* m_cameraGoThroughScrollLocks;
    float _TimeDelta_k__BackingField;
    float LerpTotalSpeedMultiplierUp;
    float LerpTotalSpeedMultiplierDown;
    float CharacterSpeedMultiplier;
    float MaxSpeedOffset;
    float SpeedOffsetIncreaseTime;
    float SpeedOffsetDecreaseTime;
    struct Vector3 m_speedOffsetSpeed;
    struct Vector3 m_speedOffset;
    struct Bounds _CameraBoundingBox_k__BackingField;
    struct Vector3 m_cameraCenterInGameplayPlane;
    struct Bounds m_editorBounds;
    uint64_t CameraStepsCounter;
    float TargetMoveAmount;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplayCamera__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameplayCamera__Fields_FWDDECL
#include <Modloader/app/structs/CameraChaseTarget.h>
#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/CameraGoThroughScrollLocks.h>
#include <Modloader/app/structs/CameraOffsetController.h>
#include <Modloader/app/structs/CameraScrollLockConstraint.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/CameraStraightLineMotion.h>
#include <Modloader/app/structs/CameraTarget.h>
#include <Modloader/app/structs/DynamicCameraTargetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SinMovement.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GameplayCamera__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCamera__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameplayCamera__Fields_FWDDECL)
#include <Modloader/app/structs/GameplayCamera__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplayCamera__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
