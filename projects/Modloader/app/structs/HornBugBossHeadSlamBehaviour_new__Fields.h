#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_DEFINED)
#include <Modloader/app/structs/HornBugBossTimelineBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_DEFINED
struct FirewhirlBeamSpawner;
struct EventTriggerAnimator;
struct Transform;
struct DamageOwner;
struct HornBugBossHeadSlamBehaviour_new__Fields {
    struct HornBugBossTimelineBehaviour__Fields _;
    struct FirewhirlBeamSpawner* FirewhirlSpawner;
    struct EventTriggerAnimator* AreaDamageTrigger;
    struct Transform* AreaDamageSpawnReference;
    struct DamageOwner* m_damageOwner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_FWDDECL
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugBossHeadSlamBehaviour_new__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugBossHeadSlamBehaviour_new__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugBossHeadSlamBehaviour_new__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
