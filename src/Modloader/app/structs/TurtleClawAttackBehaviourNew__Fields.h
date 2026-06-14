#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/MeleeAttackBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_DEFINED
struct PlayerInsideZoneChecker;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct TurtleClawAttackBehaviourNew__Fields {
    struct MeleeAttackBehaviourNew__Fields _;
    bool AttackOnlyIfTargetInZone;
    struct PlayerInsideZoneChecker* AttackZone;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* TimelineInterruptionPoints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurtleClawAttackBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/TurtleClawAttackBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleClawAttackBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
