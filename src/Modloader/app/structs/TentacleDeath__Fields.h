#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleDeath__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleDeath__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleDeath__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_TentacleDeath__Fields_DEFINED
struct MoonTimeline;
struct FloatAnimator;
struct EventTriggerAnimator;
struct TentacleEntity;
struct TentacleHitReaction;
struct TentacleDeath__Fields {
    struct EntityReactionBehaviour__Fields _;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct MoonTimeline* DeathTimeline;
    struct FloatAnimator* positionAlignmentCurve;
    struct EventTriggerAnimator* hideTrigger;
    struct LayerMask DeadLayer;
    struct FloatAnimator* wiggleCurve;
    float wiggleTorque;
    float wigglePhaseSpeed;
    float wiggleSegmentPhaseShift;
    float m_wigglePhase;
    struct TentacleEntity* m_tentacleEntity;
    struct TentacleHitReaction* m_hitReaction;
    int32_t m_deadLayerInt;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleDeath__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleDeath__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TentacleEntity.h>
#include <Modloader/app/structs/TentacleHitReaction.h>
#endif
#undef IL2CPP_STRUCT_TentacleDeath__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleDeath__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleDeath__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleDeath__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleDeath__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
