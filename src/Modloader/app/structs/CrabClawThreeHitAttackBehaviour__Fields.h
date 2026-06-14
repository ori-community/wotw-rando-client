#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CrabClawAttackBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_DEFINED
struct EventTriggerAnimator;
struct PrefabSpawner;
struct CrabClawThreeHitAttackBehaviour__Fields {
    struct CrabClawAttackBehaviourNew__Fields _;
    struct EventTriggerAnimator* FirstAttackTrigger;
    struct EventTriggerAnimator* SecondAttackTrigger;
    struct EventTriggerAnimator* ThirdAttackTrigger;
    struct PrefabSpawner* FirstEffectSpawner;
    struct PrefabSpawner* SecondEffectSpawner;
    struct PrefabSpawner* ThirdEffectSpawner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#endif
#undef IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabClawThreeHitAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/CrabClawThreeHitAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabClawThreeHitAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
