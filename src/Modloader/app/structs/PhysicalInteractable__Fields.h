#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalInteractable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalInteractable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalInteractable__Fields_DEFINED)
#include <Modloader/app/structs/FloatRange_1.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FloatRange_1_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_PhysicalInteractable__Fields_DEFINED
struct MoonTimeline;
struct Event_1;
struct RTPC;
struct SoundHost;
struct DamageReceiver;
struct Rigidbody;
struct Transform;
struct Damage;
struct PhysicalInteractable__Fields {
    struct MonoBehaviour__Fields _;
    float Radius;
    float AddFallGravityMultiplier;
    struct MoonTimeline* DamageTimeline;
    float Cooldown;
    float ContactDamageReceived;
    struct FloatRange_1 ForceRandomness;
    struct Vector2 InteractionMinForceToReact;
    float InteractionForceMultipler;
    struct FloatRange_1 InteractionXVelocityRange;
    struct FloatRange_1 InteractionYVelocityRange;
    struct Vector2 DamageMinForceToReact;
    float DamageForceMultipler;
    struct FloatRange_1 DamageXVelocityRange;
    struct FloatRange_1 DamageYVelocityRange;
    struct Event_1* ForceAppliedEvent;
    struct Event_1* CollisionEvent;
    struct RTPC* ForceRtpc;
    struct SoundHost* SoundHost;
    struct DamageReceiver* m_damageReceiver;
    struct Rigidbody* m_rigidBody;
    struct Transform* m_transform;
    float m_timer;
    struct Damage* m_interactionDamage;
    bool m_canApplyExtraGravity;
    int32_t _Index_k__BackingField;
    bool _IsRegistered_k__BackingField;
    SuspendableMask__Enum _Mask_k__BackingField;

    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalInteractable__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicalInteractable__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PhysicalInteractable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalInteractable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalInteractable__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicalInteractable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalInteractable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
