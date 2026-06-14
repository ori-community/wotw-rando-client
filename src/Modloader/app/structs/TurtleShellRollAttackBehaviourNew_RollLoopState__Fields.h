#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_DEFINED)
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollState__Fields.h>
#if defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_DEFINED
struct Transform;
struct TurtleShellRollAttackBehaviourNew_RollLoopState__Fields {
    struct TurtleShellRollAttackBehaviourNew_RollState__Fields _;
    float m_speedDirection;
    float m_rotationDirection;
    float m_bounceAmount;
    bool m_groundContact;
    struct Transform* m_targetTranform;
    float m_desiredDirection;
    float m_bounceColldown;
    float m_desiredXSpeed;
    float m_timer;
    float m_previousDamage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollLoopState__Fields_FWDDECL)
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollLoopState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollLoopState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
