#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CrabClawAttackBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_DEFINED
struct EventTriggerAnimator;
struct PrefabSpawner;
struct CrabLungeAttackBehaviour__Fields {
    struct CrabClawAttackBehaviourNew__Fields _;
    struct EventTriggerAnimator* AttackTrigger;
    struct PrefabSpawner* LungeEffectSpawner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#endif
#undef IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabLungeAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/CrabLungeAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabLungeAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
