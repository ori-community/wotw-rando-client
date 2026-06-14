#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct MoonTimeline;
struct EventTriggerAnimator;
struct LianaHealLanternVisuals;
struct LianaHealLanternAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct MoonTimeline* OnHitSequence;
    struct MoonTimeline* OnDeathSequence;
    struct EventTriggerAnimator* SpawnOrbsEventTriger;
    struct LianaHealLanternVisuals* Visuals;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/LianaHealLanternVisuals.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LianaHealLanternAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LianaHealLanternAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaHealLanternAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
