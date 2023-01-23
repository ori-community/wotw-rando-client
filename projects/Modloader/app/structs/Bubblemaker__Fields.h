#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bubblemaker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bubblemaker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubblemaker__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Bubblemaker__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct ProjectileSpawner;
struct GameObject;
struct Collider__Array;
struct Bubblemaker__Fields {
    struct MonoBehaviour__Fields _;
    SuspendableMask__Enum m_suspensionMask;

    float SpawnTime;
    float SpawnOffsetTime;
    struct MoonTimeline* LaunchTimeline;
    struct EventTriggerAnimator* SpawnBubbleTrigger;
    struct ProjectileSpawner* ProjectileSpawner;
    bool RandomizeScale;
    float MinScaleMultiplier;
    float MaxScaleMultiplier;
    bool RandomizeSpeed;
    float MinSpeedMultiplier;
    float MaxSpeedMultiplier;
    struct GameObject* ProxyBubble;
    bool RaceOverride;
    struct MoonTimeline* m_timelineToPlay;
    float m_spawnTimer;
    float m_spawnOffsetTimer;
    float m_raceTimeLastUpdate;
    struct Collider__Array* m_colliders;
    bool m_isSuspended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bubblemaker__Fields_FWDDECL)
#define IL2CPP_STRUCT_Bubblemaker__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#endif
#undef IL2CPP_STRUCT_Bubblemaker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubblemaker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Bubblemaker__Fields_FWDDECL)
#include <Modloader/app/structs/Bubblemaker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bubblemaker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
