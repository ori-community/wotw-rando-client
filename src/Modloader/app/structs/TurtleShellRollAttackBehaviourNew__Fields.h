#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_DEFINED
struct MoonVector3;
struct DamageDealer;
struct GameObject;
struct MoonTimeline;
struct SplitTurnAnimation;
struct MoonAnimation;
struct SoundProvider;
struct AnimationCurve;
struct StateMachine_2;
struct GroundEntityLocomotion;
struct TurtleShellRollAttackBehaviourNew_States;
struct TurtleShellRollAttackBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3* TargetPosition;
    struct DamageDealer* DamageDealer;
    float RollDamage;
    float MaxRollDuration;
    float RollSpeed;
    float RotationAnimationSpeed;
    float MinRotationSpeed;
    float Acceleration;
    struct GameObject* ImpactEffect;
    struct GameObject* BounceEffect;
    int32_t AnimationPriority;
    struct MoonTimeline* StartSequence;
    struct MoonTimeline* EndSequence;
    struct SplitTurnAnimation* EndTurnAnimation;
    struct MoonAnimation* LoopAnimation;
    struct SoundProvider* LoopRollSoundProvider;
    float StartAnimationCurveScaleX;
    float StartAnimationCurveScaleY;
    struct AnimationCurve* ChangeDirectionSpeedCurve;
    float ChangeDirectionSpeedMultiplier;
    float MinDistanceToChangeDirection;
    struct StateMachine_2* m_stateMachine;
    struct GroundEntityLocomotion* m_locomotion;
    struct TurtleShellRollAttackBehaviourNew_States* m_states;
    bool m_interrupt;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SplitTurnAnimation.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_States.h>
#endif
#undef IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
