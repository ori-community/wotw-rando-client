#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleHitReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleHitReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_TentacleEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_TentacleEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleHitReaction__Fields_DEFINED
struct EntityDamageEvent;
struct Event_1;
struct TentacleHitReaction__Fields {
    struct EntityReactionBehaviour_1_TentacleEntity___Fields _;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    int32_t NearestSegmentsAffected;
    float NearestSegmentsAffectedDecay;
    float segmentDamageForce;
    float AirComboPullInDistanceY;
    float AirComboPullInValue;
    float GroundHorizontalKnockbackMultiplier;
    float KickbackMultiplier;
    float KnockupMultiplier;
    float KnockupMax;
    float KickbackMax;
    struct Event_1* OnAnyHitEvent;
    float m_timer;
    bool m_exitEarly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleHitReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleHitReaction__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#endif
#undef IL2CPP_STRUCT_TentacleHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleHitReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleHitReaction__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleHitReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleHitReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
