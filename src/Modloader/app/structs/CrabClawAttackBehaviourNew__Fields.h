#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_DEFINED) && defined(IL2CPP_STRUCT_CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum_DEFINED)
#define IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_DEFINED
struct EventTriggerAnimator;
struct AnimationCurve;
struct CrabEntity;
struct CrabClawAttackBehaviourNew__Fields {
    struct MeleeAttackBehaviourNew__Fields _;
    float MaximumAttackRange;
    float MoveDistanceX;
    struct EventTriggerAnimator* MoveStartEvent;
    struct EventTriggerAnimator* FaceTargetFlipEvent;
    struct AnimationCurve* MovementCurve;
    CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum AttackMoveDirection;

    bool LerpToAttackMoveDirection;
    float LerpToAttackMoveDirectionSpeed;
    bool ShouldReflectArrows;
    struct EventTriggerAnimator* ReflectArrowsTrigger;
    float m_moveTimer;
    bool m_shouldReflectBeforeStart;
    struct CrabEntity* m_crabEntity;
    int32_t m_standingOnLedgeReqIds;
    int32_t m_backToLedgeReqIds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CrabEntity.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#endif
#undef IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/CrabClawAttackBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabClawAttackBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
