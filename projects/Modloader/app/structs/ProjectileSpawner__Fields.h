#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProjectileSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProjectileSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileSpawner__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ProjectileSpawner__Fields_DEFINED
struct GameObject;
struct Condition_1;
struct List_1_UnityEngine_GameObject_;
struct List_1_UnityEngine_Collider_;
struct DamageOwner;
struct AudioClip;
struct SoundProvider;
struct EventTriggerAnimator__Array;
struct LegacyTimedTrigger;
struct Transform;
struct PhysicalSystemManager__Array;
struct ProjectileSpawner__Fields {
    struct MonoBehaviour__Fields _;
    float Speed;
    struct Vector3 Direction;
    float Gravity;
    struct GameObject* Projectile;
    int32_t PrewarmAmount;
    bool IngoreColliders;
    struct Condition_1* ConditionToFire;
    struct List_1_UnityEngine_GameObject_* ParentsOfCollidersToIgnore;
    struct List_1_UnityEngine_Collider_* CollidersToIgnore;
    struct GameObject* Owner;
    struct DamageOwner* DamageOwner;
    bool WaitForProjectileToBeDestroyed;
    struct AudioClip* SpawnSound;
    struct SoundProvider* SpawnSoundProvider;
    float SpawnSoundVolume;
    struct EventTriggerAnimator__Array* SpawnTriggers;
    struct LegacyTimedTrigger* LegacyTimedTrigger;
    struct GameObject* m_lastProjectile;
    struct Transform* m_transform;
    float _TimeSinceLastShot_k__BackingField;
    struct PhysicalSystemManager__Array* WaitForPhysicsManagersToActivate;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProjectileSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProjectileSpawner__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTimedTrigger.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PhysicalSystemManager__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ProjectileSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProjectileSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/ProjectileSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProjectileSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
