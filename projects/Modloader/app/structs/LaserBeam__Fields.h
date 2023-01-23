#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserBeam__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserBeam__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserBeam__Fields_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/LaserBeam_ImpactEffectOrientationMethod__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LaserBeam_ImpactEffectOrientationMethod__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_LaserBeam__Fields_DEFINED
struct GameObject;
struct Event_1;
struct SurfaceBasedPrefabSettings;
struct Transform;
struct BaseAnimator;
struct MoonTimeline;
struct EventTriggerAnimator;
struct ParticleSystem__Array;
struct LaserBeam__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* AnticipationEffect;
    struct GameObject* BurstEffect;
    struct GameObject* StopEffect;
    struct Event_1* AnticipationEvent;
    struct Event_1* LaserStartEvent;
    struct Event_1* LaserLoopEvent;
    struct Event_1* LaserImpactEndEvent;
    struct Event_1* ImpactStartEvent;
    struct Event_1* ImpactLoopEvent;
    struct Event_1* ImpactEndEvent;
    struct GameObject* DefaultImpactEffect;
    struct GameObject* DefaultImpactPointLoopEffect;
    struct SurfaceBasedPrefabSettings* ImpactEffectPerSurface;
    struct SurfaceBasedPrefabSettings* ImpactPointLoopEffectPerSurface;
    struct GameObject* ImpactPointLight;
    LaserBeam_ImpactEffectOrientationMethod__Enum ImpactEffectOrientation;

    struct Transform* BeamLenghtScaleTransform;
    DamageType__Enum LaserDamageType;

    int32_t DamageAmount;
    float LaserBeamSizeToTilingRatio;
    struct BaseAnimator* BeamEngageAnimator;
    struct MoonTimeline* BeamTimelineActivate;
    struct MoonTimeline* BeamTimelineDeactivate;
    struct MoonTimeline* BeamTimelineActivatedLoop;
    struct MoonTimeline* BeamTimelineDeactivatedLoop;
    struct EventTriggerAnimator* EnableHitFXTrigger;
    struct EventTriggerAnimator* DisableHitFXTrigger;
    struct ParticleSystem__Array* BeamParticleSystems;
    struct GameObject* ScaleTarget;
    bool _InvalidateParentTimelineCache_k__BackingField;
    int32_t PrewarmCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserBeam__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserBeam__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/SurfaceBasedPrefabSettings.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserBeam__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserBeam__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserBeam__Fields_FWDDECL)
#include <Modloader/app/structs/LaserBeam__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserBeam__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
