#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCinematic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCinematic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCinematic__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinCinematic_MoveOriToPositionMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SeinCinematic_MoveOriToPositionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinCinematic__Fields_DEFINED
struct BlendAnimation;
struct FloatAnimationParameter;
struct Action_1_Boolean_;
struct AnimationCurve;
struct SeinCinematic__Fields {
    struct CharacterState__Fields _;
    struct BlendAnimation* OriMoveToPositionAnimation;
    struct FloatAnimationParameter* SpeedParameter;
    struct ActiveAnimationHandle m_activeAnimation;
    bool m_isMovingOri;
    struct Vector2 m_pointToMove;
    struct Vector3 m_initPos;
    bool m_faceLeftOnFinish;
    float m_remainingTime;
    struct Action_1_Boolean_* OnFinishMovingOri;
    SeinCinematic_MoveOriToPositionMode__Enum m_moveMode;

    float m_perspectiveAdjustmentWeight;
    bool m_usePerspectiveAdjustment;
    struct Vector3 m_initialPositionForOffsetCalculation;
    bool m_shouldUpdateInitialPositionOffset;
    struct AnimationCurve* m_curveX;
    struct AnimationCurve* m_curveY;
    struct AnimationCurve* m_curveZ;
    float m_gameplayToCinematicInterpolationDuration;
    float m_gameplayToCinematicInterpolationTimer;
    struct Vector3 m_initialPositionOffset;
    bool m_wasCarrying;
    float GroundOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCinematic__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinCinematic__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_SeinCinematic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCinematic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinCinematic__Fields_FWDDECL)
#include <Modloader/app/structs/SeinCinematic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCinematic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
