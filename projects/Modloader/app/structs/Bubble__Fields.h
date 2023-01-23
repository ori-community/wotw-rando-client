#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bubble__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bubble__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubble__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Bubble__Fields_DEFINED
struct MoonTimeline;
struct String__Array;
struct Rigidbody;
struct Collider;
struct Collider__Array;
struct EntityTargetting;
struct DamageReceiver;
struct Transform;
struct Bubble__Fields {
    struct MonoBehaviour__Fields _;
    SuspendableMask__Enum m_suspensionMask;

    struct LayerMask DestroyMask;
    float MaxLifeTime;
    float InstantVelocityFromOriTouch;
    float MinAngleForAboveAction;
    struct MoonTimeline* OnOriLandAboveTimeline;
    struct MoonTimeline* BumpTimeline;
    struct MoonTimeline* UnderWaterPopTimeline;
    struct MoonTimeline* AboveWaterPopTimeline;
    bool TarBubble;
    struct String__Array* IgnoreBubblePhysicsLayers;
    float AccelerationY;
    float TurbulencePeriod;
    float TurbulenceAcceleration;
    float FeatherPushForceMultiplier;
    float OriInteractionCooldown;
    struct Vector3 BaseLocalScale;
    float BaseAccelerationY;
    float m_lastOriEnterTime;
    struct Rigidbody* m_rigidbody;
    struct Collider* m_collider;
    struct Collider__Array* m_colliders;
    float m_timeUntilDeath;
    float m_timeUntilDirectionFlip;
    int32_t m_direction;
    struct EntityTargetting* m_entityTargeting;
    struct DamageReceiver* m_damageReceiver;
    struct Vector2 m_externalForce;
    struct Vector2 m_velocityLastFrame;
    bool m_isSuspended;
    bool m_isExploded;
    float Height;
    float StopDecelerationMultiplier;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bubble__Fields_FWDDECL)
#define IL2CPP_STRUCT_Bubble__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Bubble__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubble__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Bubble__Fields_FWDDECL)
#include <Modloader/app/structs/Bubble__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bubble__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
