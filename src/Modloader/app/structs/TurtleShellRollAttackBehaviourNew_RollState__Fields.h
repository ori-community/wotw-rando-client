#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#if defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_DEFINED
struct TurtleShellRollAttackBehaviourNew;
struct Locomotion;
struct MoonAnimator;
struct __declspec(align(8)) TurtleShellRollAttackBehaviourNew_RollState__Fields {
    struct TurtleShellRollAttackBehaviourNew* m_behaviour;
    struct Locomotion* m_locomotion;
    struct MoonAnimator* m_animator;
    struct ActiveAnimationHandle m_animationState;
    bool m_isPerforming;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_FWDDECL
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew.h>
#endif
#undef IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurtleShellRollAttackBehaviourNew_RollState__Fields_FWDDECL)
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
