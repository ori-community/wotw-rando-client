#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterCinematic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterCinematic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCinematic__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_CharacterCinematic__Fields_DEFINED
struct PlatformBehaviour;
struct AnimationCurve;
struct Action_1_Boolean_;
struct CharacterCinematic__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour* PlatformBehaviour;
    float m_perspectiveAdjustmentWeight;
    struct Vector3 m_initPos;
    struct AnimationCurve* m_curveX;
    struct AnimationCurve* m_curveY;
    struct AnimationCurve* m_curveZ;
    float m_gameplayToCinematicInterpolationDuration;
    float m_gameplayToCinematicInterpolationTimer;
    struct Vector3 m_initialPositionOffset;
    float GroundOffset;
    struct ActiveAnimationHandle m_activeAnimation;
    struct Action_1_Boolean_* OnFinishMovingCharacter;
    struct Vector3 m_pointToMove;
    bool m_isMovingCharacter;
    bool m_faceLeftOnFinish;
    float m_remainingTime;
    float MoveRate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterCinematic__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterCinematic__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CharacterCinematic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCinematic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterCinematic__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterCinematic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterCinematic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
