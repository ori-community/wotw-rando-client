#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_DEFINED
struct MoonVector3;
struct MoonTimeline;
struct EventTriggerAnimator;
struct PrefabSpawner;
struct Transform;
struct CharacterPlatformMovement;
struct AirEntityMovementProcessor;
struct AirEntityLocomotion;
struct FlutteringProjectileDropBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3* TargetPosition;
    struct MoonTimeline* FlutteringLoopTimeline;
    struct MoonTimeline* FlutteringTurnTimeline;
    struct EventTriggerAnimator* FlutteringTurnTrigger;
    float MaxSpeed;
    float Acceleration;
    float BrakingDeceleration;
    float MaxSpeedTurningAllowed;
    float FlutteringHeight;
    float FloatingRate;
    float FloatingDistance;
    float FloatingAcceleration;
    float FloatingBrakingDeceleration;
    float FloatingMaxSpeed;
    float DistanceMarginWithAllowedArea;
    struct PrefabSpawner* ProjectilePrefabSpawner;
    float ProjectileDamage;
    DamageWeight__Enum ProjectileDamageWeight;

    float ProjectileDropRateMin;
    float ProjectileDropRateMax;
    float ProjectileInitialSpeed;
    struct Transform* ProjectileOrigin;
    struct MoonTimeline* ShootTimeline;
    float FlutteringEnduranceDuration;
    float MaxTimeFlyingOverCharacter;
    float FlyOverCheckRangeX;
    struct CharacterPlatformMovement* m_platformMovement;
    struct AirEntityMovementProcessor* m_airMovement;
    struct AirEntityLocomotion* m_airLocomotion;
    struct MoonTimeline* m_currentTimeline;
    float m_flyOverTimer;
    float m_projectileTimer;
    float m_behaviourTimer;
    float m_initialPositionY;
    struct Vector3 m_brakingPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/AirEntityMovementProcessor.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlutteringProjectileDropBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
