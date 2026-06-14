#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropPickup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropPickup__Fields_DEFINED)
#include <Modloader/app/structs/CollisionDetectionMode__Enum.h>
#include <Modloader/app/structs/DropPickup_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DropPickup_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_CollisionDetectionMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DropPickup__Fields_DEFINED
struct DamageBasedPrefabProvider;
struct AnimationCurve;
struct Transform;
struct Rigidbody;
struct SphereCollider;
struct LegacyAnimator__Array;
struct PickupBase;
struct DropPickup__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 Gravity;
    struct DamageBasedPrefabProvider* DeathEffectProvider;
    struct AnimationCurve* SuckInForceOverTime;
    struct AnimationCurve* SuckInForceOverDistance;
    float HoverDuration;
    float FallingDuration;
    float FlashDuration;
    DropPickup_State__Enum CurrentState;

    bool OverrideGravity;
    struct Vector3 GravityOverride;
    struct Transform* m_transformSource;
    struct Rigidbody* m_rigidbody;
    float m_gravityWeight;
    float m_suckTowardsPlayerCurrentTime;
    float m_stateCurrentTime;
    float m_radius;
    struct SphereCollider* m_sphereCollider;
    struct Vector3 m_startGravity;
    bool m_shouldSuckTowardsPlayer;
    int32_t m_frame;
    bool m_inWater;
    float m_targetRadius;
    struct LegacyAnimator__Array* m_legacyAnimator;
    bool m_areComponentsCached;
    struct PickupBase* m_pickup;
    bool m_awakened;
    CollisionDetectionMode__Enum m_originalMode;

    bool _CanFall_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropPickup__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropPickup__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/PickupBase.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DropPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropPickup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropPickup__Fields_FWDDECL)
#include <Modloader/app/structs/DropPickup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropPickup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
