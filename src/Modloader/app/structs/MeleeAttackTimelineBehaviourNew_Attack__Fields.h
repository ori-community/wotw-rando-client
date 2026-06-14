#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_DEFINED
struct EventTriggerAnimator;
struct MeleeWeaponColliderStick;
struct __declspec(align(8)) MeleeAttackTimelineBehaviourNew_Attack__Fields {
    struct EventTriggerAnimator* TimelineEvent;
    struct MeleeWeaponColliderStick* ColliderStick;
};
#endif
#if !defined(IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick.h>
#endif
#undef IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew_Attack__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_Attack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_Attack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
