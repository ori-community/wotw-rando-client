#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SkeetoEntity___Fields.h>
#include <Modloader/app/structs/SkeetoShootBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SkeetoEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_SkeetoShootBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct ScaredySkeetoProjectileSettings;
struct PrefabSpawner;
struct Transform;
struct SkeetoShootBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct MoonTimeline* FlipTimeline;
    struct EventTriggerAnimator* FlipTrigger;
    bool UnlockLookDirectionOnEnd;
    struct MoonTimeline* ShootTimeline;
    struct EventTriggerAnimator* ShootTrigger;
    struct ScaredySkeetoProjectileSettings* Settings;
    struct PrefabSpawner* ProjectileSpawner;
    struct Transform* ShootOrigin;
    float RecoilForce;
    float PreShotDuration;
    float DecelerationMultiplier;
    float AimVerticalOffset;
    float MaxRotationSpeed;
    float MaxAimAssistDegrees;
    bool AllowLookDirectionFlip;
    SkeetoShootBehaviour_State__Enum m_currentState;

    struct MoonTimeline* m_currentTimeline;
    float m_lookDirection;
    float m_postShootAngle;
    float m_postShootTimelineTimestamp;
    float m_timeInState;
    float m_targetLookDirection;
    bool m_flipTimelineStarted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/ScaredySkeetoProjectileSettings.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoShootBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoShootBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoShootBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
