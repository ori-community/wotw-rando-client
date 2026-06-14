#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode_1_SpiderBatEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SpiderBatEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct PrefabSpawner;
struct EventTriggerAnimator__Array;
struct Transform;
struct CancelableAnimator;
struct SpiderBatSpitBehaviour__Fields {
    struct EntityBehaviourNode_1_SpiderBatEntity___Fields _;
    struct MoonTimeline* TimelineSequence;
    struct RootMotionProcessorData* RootMotion;
    struct PrefabSpawner* ProjectileSpawner;
    float ProjectileSpeed;
    int32_t ProjectileDamage;
    DamageWeight__Enum DamageWeight;

    int32_t ShotImpulse;
    struct EventTriggerAnimator__Array* ShootTriggers;
    struct Transform* ShootPoint;
    struct CancelableAnimator* m_cancelable;
    bool m_isShooting;
    bool m_hasFinished;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CancelableAnimator.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatSpitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatSpitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatSpitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
