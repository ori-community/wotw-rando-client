#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ori__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ori__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ori__Fields_DEFINED)
#include <Modloader/app/structs/Ori_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Ori_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Ori__Fields_DEFINED
struct AnimationCurve;
struct LegacyAnimator;
struct Renderer;
struct ScaleAnimator;
struct Collider;
struct SoundProvider;
struct Transform;
struct Ori__Fields {
    struct SaveSerialize__Fields _;
    bool InsideDoor;
    bool InsideMapstone;
    Ori_State__Enum CurrentState;

    struct AnimationCurve* MoveToPositionCurve;
    struct AnimationCurve* DistanceToSpeedCurve;
    struct LegacyAnimator* ShootAnimation;
    struct Renderer* SpriteRenderer;
    struct ScaleAnimator* TwinkleAnimator;
    struct Vector3 TargetOffset;
    struct Vector3 TargetOffsetAttack;
    struct Vector2 ListenOffset;
    bool UseZPosition;
    struct Collider* m_collider;
    bool m_enableHoverWobbling;
    float m_moveToPositionDuration;
    struct Vector3 m_moveToPositionEndPosition;
    struct Vector3 m_moveToPositionStartPosition;
    struct Vector3 m_moveToPositionStartVelocity;
    float m_moveToPositionTime;
    struct SoundProvider* MoveToPositionSound;
    struct SoundProvider* OnHighlightInterestZoneSound;
    struct SoundProvider* OnUnhighlightInterestZoneSound;
    struct AnimationCurve* m_positionXCurve;
    struct AnimationCurve* m_positionYCurve;
    struct AnimationCurve* m_positionZCurve;
    struct Transform* m_spriteTransform;
    float m_stateCurrentTime;
    struct Transform* m_transform;
    float m_twinkleTime;
    float m_listenTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool m_isTwinkling;
    bool m_isListening;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ori__Fields_FWDDECL)
#define IL2CPP_STRUCT_Ori__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/LegacyAnimator.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/ScaleAnimator.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Ori__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ori__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Ori__Fields_FWDDECL)
#include <Modloader/app/structs/Ori__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ori__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
