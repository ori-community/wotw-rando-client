#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Firefly__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Firefly__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Firefly__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Firefly__Fields_DEFINED
struct Transform;
struct AnimationCurve;
struct MoonTimeline;
struct EventTriggerAnimator;
struct Action_1_Boolean_;
struct OrbSpawner;
struct IDamageReciever__Array;
struct Firefly__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Sprite;
    struct AnimationCurve* SlowDownOverLastDistance;
    struct MoonTimeline* SpawnTimeline;
    struct MoonTimeline* FlickerTimeline;
    struct MoonTimeline* DieTimeline;
    struct MoonTimeline* DieOffscreenTimeline;
    struct EventTriggerAnimator* SpawnOrbsEventTrigger;
    float IdleAmplitudeX;
    float IdleAmplitudeY;
    float IdleFrequencyX;
    float IdleFrequencyY;
    float DestroyDistance;
    struct Bounds m_bounds;
    struct Vector3 m_initScale;
    struct Vector3 m_target;
    struct Vector3 m_desiredPosition;
    struct Vector3 m_destinationPoint;
    struct Vector3 m_lastPosition;
    bool m_spawnOrbs;
    bool m_isAlive;
    struct Action_1_Boolean_* m_onDeathHiveAction;
    struct OrbSpawner* m_orbSpawner;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Firefly__Fields_FWDDECL)
#define IL2CPP_STRUCT_Firefly__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Firefly__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Firefly__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Firefly__Fields_FWDDECL)
#include <Modloader/app/structs/Firefly__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Firefly__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
