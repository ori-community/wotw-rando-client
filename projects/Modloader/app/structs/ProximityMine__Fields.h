#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProximityMine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProximityMine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProximityMine__Fields_DEFINED)
#include <Modloader/app/structs/Entity__Fields.h>
#if defined(IL2CPP_STRUCT_Entity__Fields_DEFINED)
#define IL2CPP_STRUCT_ProximityMine__Fields_DEFINED
struct Sensor;
struct DamageReceiver;
struct MoonTimeline;
struct EventTriggerAnimator;
struct GameObject;
struct ProximityMine__Fields {
    struct Entity__Fields _;
    float PopOutTimelineTimescale;
    float ExplosionRadius;
    float DamageAmount;
    struct Sensor* MineSensor;
    struct DamageReceiver* Hitbox;
    struct MoonTimeline* PopOutTimeline;
    struct EventTriggerAnimator* ExplosionEvent;
    struct GameObject* ExplosionFXPrefab;
    bool m_destroyMine;
    int32_t DamageMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProximityMine__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProximityMine__Fields_FWDDECL
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Sensor.h>
#endif
#undef IL2CPP_STRUCT_ProximityMine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProximityMine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProximityMine__Fields_FWDDECL)
#include <Modloader/app/structs/ProximityMine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProximityMine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
