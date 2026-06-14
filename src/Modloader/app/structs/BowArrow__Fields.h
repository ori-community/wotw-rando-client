#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BowArrow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BowArrow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BowArrow__Fields_DEFINED)
#include <Modloader/app/structs/BowArrow_RicochetShardSettings.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_BowArrow_RicochetShardSettings_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_BowArrow__Fields_DEFINED
struct SeinBowAttack;
struct GameObject;
struct Transform;
struct Event_1;
struct SoundProvider;
struct RTPC;
struct MoonTimeline;
struct MaterialBasedSeinEffectsMap;
struct Rigidbody;
struct Collider__Array;
struct DamageOwner;
struct Damage;
struct Component_1__Array;
struct RaycastHit__Array;
struct List_1_UnityEngine_Collider_;
struct Dictionary_2_UnityEngine_Collider_System_Single_;
struct Collider;
struct SoundHost;
struct BowArrow__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 InitialVelocity;
    float Damage;
    float Gravity;
    float ExplosionSoundVolume;
    float ExplosionScale;
    float ExplosionCameraShakeStrength;
    float DisableEnemyFallingDuration;
    struct SeinBowAttack* Bow;
    struct GameObject* Explosion;
    struct Transform* Tip;
    struct LayerMask InitialCheckCollisionMask;
    struct LayerMask CollisionMask;
    struct Event_1* FlySound;
    struct SoundProvider* ImpactSound;
    struct RTPC* ImpactSoundRtpc;
    struct RTPC* ArrowDamageRtpc;
    struct Event_1* DisperseSound;
    struct GameObject* DisperseVFX;
    struct GameObject* DefaultVisuals;
    struct GameObject* RicochetVisuals;
    struct GameObject* ExplosiveShardExplosion;
    float FirstExplosionDelay;
    float RadiusExpansionDelay;
    float RadiusExpansionPercentage;
    float OriginOffsetAmount;
    float DissipationLifetimeRandomVariability;
    float DissipationTimer;
    struct MoonTimeline* SplinterDisperseTimeline;
    bool _Charged_k__BackingField;
    struct Transform* TrailOrigin;
    struct GameObject* TrailPrefab;
    struct GameObject* m_trail;
    bool IsMainArrow;
    struct BowArrow_RicochetShardSettings RicochetShardInteraction;
    struct MaterialBasedSeinEffectsMap* HitEffects;
    struct LayerMask PiercableLayers;
    int32_t m_bouncesRemaining;
    struct Rigidbody* m_rigidbody;
    struct Collider__Array* m_colliders;
    bool m_released;
    float m_traveledDistance;
    bool m_destroyInUpdate;
    bool m_ricochet;
    struct Vector3 m_previousPosition;
    struct Vector3 m_preCollisionVelocity;
    struct Vector3 m_ricochetNormal;
    struct Vector3 m_ricochetLocation;
    SurfaceMaterialType__Enum m_ricochetMaterial;

    bool m_exploded;
    struct Vector3 m_explosionPosition;
    struct DamageOwner* m_damageOwner;
    struct Damage* m_damage;
    bool m_oneTimeOnCollisionEffectPlayed;
    bool m_shouldDoDamage;
    struct Component_1__Array* m_onKillRecievers;
    SuspendableMask__Enum m_suspensionMask;

    struct Vector2 m_velocityLastFrame;
    bool m_isSuspended;
    struct RaycastHit__Array* m_initialHits;
    struct List_1_UnityEngine_Collider_* m_removeReflectors;
    struct Dictionary_2_UnityEngine_Collider_System_Single_* m_recentReflectors;
    int32_t m_piercingCount;
    struct Collider* m_piercedCollider;
    struct SoundHost* m_soundHost;
    struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BowArrow__Fields_FWDDECL)
#define IL2CPP_STRUCT_BowArrow__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Collider_System_Single_.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SeinBowAttack.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BowArrow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BowArrow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BowArrow__Fields_FWDDECL)
#include <Modloader/app/structs/BowArrow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BowArrow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
