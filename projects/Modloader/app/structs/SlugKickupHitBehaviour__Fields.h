#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SlugKickupHitBehaviour_KickupState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SlugKickupHitBehaviour_KickupState__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_DEFINED
struct LegacyTimelineSequence;
struct RootMotionProcessorData;
struct OrbSpawner;
struct TimelineEventTrigger;
struct GroundEntityLocomotion;
struct Transform;
struct HitReactionBehaviour;
struct SlugKickupHitBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    SlugKickupHitBehaviour_KickupState__Enum State;

    struct LegacyTimelineSequence* GroundHitAnimator;
    struct LegacyTimelineSequence* AirHitAnimator;
    struct LegacyTimelineSequence* KickupAnimator;
    struct LegacyTimelineSequence* LandingAnimator;
    struct LegacyTimelineSequence* HardLandingAnimator;
    struct LegacyTimelineSequence* DeathAnimator;
    struct RootMotionProcessorData* RootMotion;
    struct RootMotionProcessorData* LandingRootMotion;
    struct RootMotionProcessorData* DeathRootMotion;
    struct OrbSpawner* OrbSpawner;
    struct TimelineEventTrigger* OrbSpawnEventTrigger;
    struct GroundEntityLocomotion* m_locomotion;
    struct LegacyTimelineSequence* m_hitAnim;
    float MaxAngularSpeed;
    struct Transform* m_rotationTransform;
    struct LayerMask GroundMask;
    float alignTime;
    float destAngle;
    float bounceMult;
    float minBounce;
    float retToNeutralMod;
    float m_angularSpeed;
    int32_t consecutiveHitsForKickup;
    float m_initLerpAngle;
    float m_initLerpDeltaAngle;
    bool m_initLerpAngleSet;
    float m_angle;
    bool m_bouncedGround;
    bool m_bouncedWall;
    int32_t m_consecutiveHits;
    float m_lastHitTime;
    struct HitReactionBehaviour* m_hitReaction;
    struct Vector2 m_hitDirection;
    float consHitDirectionAddY;
    float consHitDirectionMultX;
    bool stickToWallsWhenFalling;
    float upsideDownDirectionAddY;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/HitReactionBehaviour.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SlugKickupHitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SlugKickupHitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugKickupHitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
