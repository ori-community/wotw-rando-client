#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChargeShotProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChargeShotProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeShotProjectile__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ChargeShotProjectile__Fields_DEFINED
struct GameObject;
struct Rigidbody;
struct ChargeShotCollider;
struct IDamageReciever__Array;
struct ChargeShotProjectile__Fields {
    struct MonoBehaviour__Fields _;
    float Speed;
    float MaxLifetime;
    struct GameObject* Explosion;
    struct GameObject* ExplosionFire;
    struct GameObject* ExplosionFrost;
    float m_timeAlive;
    float m_damage;
    float m_explosionScale;
    float m_explosionCameraShakeStrength;
    struct Rigidbody* m_rigidbody;
    bool m_released;
    bool m_suspended;
    struct ChargeShotCollider* m_wallCollider;
    struct ChargeShotCollider* m_enemyCollider;
    bool m_reflected;
    SuspendableMask__Enum m_suspensionMask;

    struct GameObject* _IReflectable_LastReflector_k__BackingField;
    int32_t m_piercingCount;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChargeShotProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChargeShotProjectile__Fields_FWDDECL
#include <Modloader/app/structs/ChargeShotCollider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_ChargeShotProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeShotProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChargeShotProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/ChargeShotProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChargeShotProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
