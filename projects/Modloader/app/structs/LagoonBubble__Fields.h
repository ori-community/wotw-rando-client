#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LagoonBubble__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LagoonBubble__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonBubble__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LagoonBubble__Fields_DEFINED
struct ActionMethod;
struct String__Array;
struct Rigidbody;
struct Transform;
struct DamageReceiver;
struct LagoonBubble__Fields {
    struct MonoBehaviour__Fields _;
    SuspendableMask__Enum m_suspensionMask;

    struct LayerMask DestroyMask;
    float MaxLifeTime;
    float InstantVelocityFromOriTouch;
    float MinAngleForAboveAction;
    struct ActionMethod* OnOriLandAbove;
    struct ActionMethod* OnOtherOriCollision;
    struct ActionMethod* OnOriCollisionUnderWater;
    struct ActionMethod* OnOtherCollision;
    struct ActionMethod* OnDestroyAction;
    struct String__Array* IgnoreBubblePhysicsLayers;
    float AccelerationY;
    float MaxSpeedY;
    float TurbulencePeriod;
    float TurbulenceAcceleration;
    float OriInteractionCooldown;
    float m_lastOriEnterTime;
    struct Rigidbody* m_rigidbody;
    struct Transform* m_transform;
    float m_timeUntilDeath;
    float m_timeUntilDirectionFlip;
    int32_t m_direction;
    struct DamageReceiver* m_damageReceiver;
    struct Vector2 m_externalForce;
    struct Vector2 m_velocityLastFrame;
    bool m_isSuspended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LagoonBubble__Fields_FWDDECL)
#define IL2CPP_STRUCT_LagoonBubble__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LagoonBubble__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonBubble__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LagoonBubble__Fields_FWDDECL)
#include <Modloader/app/structs/LagoonBubble__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LagoonBubble__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
