#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Projectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Projectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Projectile_CollisionVFXOrientationType__Enum.h>
#include <Modloader/app/structs/Projectile_RicochetShardSettings.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Projectile_CollisionVFXOrientationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Projectile_RicochetShardSettings_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_Projectile__Fields_DEFINED
struct GameObject;
struct DamageOwner;
struct DamageDealer;
struct SoundProvider;
struct MoonTimeline;
struct Action_1_Projectile_;
struct Rigidbody;
struct Transform;
struct Collider;
struct Projectile_ExplodeCollisionInfo;
struct WaterInteraction;
struct Component_1__Array;
struct IDamageReciever__Array;
struct Projectile__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Owner;
    struct DamageOwner* DamageOwner;
    struct DamageDealer* DamageDealer;
    bool CanProjectileBeBashed;
    bool CanProjectileBeTeleportedByBeacon;
    float CollisionGracePeriod;
    bool EnableCollisionGracePeriod;
    float Gravity;
    float MaximumLiveTime;
    struct SoundProvider* ProjectileLoop;
    bool IncreaseDamageAfterBash;
    float BashSpeed;
    bool UseBashSpeed;
    bool CancelGravityOnBash;
    bool RotateSpriteToDirection;
    float SpriteTurnSpeed;
    bool ExplodeInWater;
    bool PreventDestroyOnDamageDealt;
    float InWaterSpeedDamping;
    bool SmoothlyMoveToZzero;
    float SmoothMoveZSpeed;
    bool ForceToZzeroInstantly;
    bool HasBeenRedirectedByOri;
    AbilityType__Enum AbilityType;

    struct MoonTimeline* DestroyTimeline;
    struct GameObject* OnCollisionVFX;
    Projectile_CollisionVFXOrientationType__Enum CollisionVFXOrientation;

    struct Action_1_Projectile_* OnBashEvent;
    struct Action_1_Projectile_* OnReflectEvent;
    struct Action_1_Projectile_* OnExplodeEvent;
    struct Projectile_RicochetShardSettings RicochetShardInteraction;
    float CurrentTime;
    bool m_explode;
    float m_originalGravity;
    bool m_explodeLater;
    bool m_isBeingReflected;
    int32_t m_bouncesRemaining;
    struct Rigidbody* Rigidbody;
    struct Transform* Transform;
    struct DamageDealer* m_damageDealer;
    struct Collider* m_collider;
    struct Projectile_ExplodeCollisionInfo* m_explodeCollision;
    struct Projectile_ExplodeCollisionInfo* _RicochetCollision_k__BackingField;
    struct WaterInteraction* m_waterInteractionComponent;
    float m_preBashDamage;
    bool m_wasKinematic;
    bool m_isSuspended;
    struct Vector3 m_cachedUnsuspendedVelocity;
    struct Component_1__Array* m_onKillRecievers;
    bool ChangeDamageLayerAfterBash;
    DamageLayerMask__Enum ChangedDamageLayerMask;

    struct Vector3 _Displacement_k__BackingField;
    int32_t _HeavySpiritSlashPriority_k__BackingField;
    struct Vector3 _Direction_k__BackingField;
    float _Speed_k__BackingField;
    struct GameObject* _LastReflector_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    int32_t m_piercingCount;
    struct ArtificialSoundHostReference m_soundHost;
    struct TrackingExclusions _TrackingExclusions_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Projectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_Projectile__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Projectile_.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Projectile_ExplodeCollisionInfo.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WaterInteraction.h>
#endif
#undef IL2CPP_STRUCT_Projectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Projectile__Fields_FWDDECL)
#include <Modloader/app/structs/Projectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Projectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
