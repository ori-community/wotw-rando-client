#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StickyMine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StickyMine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickyMine__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/StickyMine_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_StickyMine_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_StickyMine__Fields_DEFINED
struct DamageDealer;
struct GameObject;
struct SoundProvider;
struct Single__Array;
struct Rigidbody;
struct SphereCollider;
struct IgnitableSpiritTorch;
struct IAttackable;
struct IDamageReciever__Array;
struct StickyMine__Fields {
    struct MonoBehaviour__Fields _;
    float Gravity;
    struct DamageDealer* DamageDealer;
    struct GameObject* Explosion;
    struct SoundProvider* CountdownSoundProvider;
    float Duration;
    float HomingDelay;
    float HomingDistance;
    float HomingMinSpeed;
    float HomingStickDistance;
    bool ExplodeImmediatellyAfterSticking;
    float InstantExplodeDistance;
    struct Single__Array* SignalTime;
    float m_time;
    struct Rigidbody* m_rigidbody;
    struct SphereCollider* m_collider;
    int32_t m_signalsLeft;
    struct IgnitableSpiritTorch* m_ignitableTorch;
    bool Bashable;
    StickyMine_State__Enum m_state;

    float m_homingTime;
    float m_homingSpeed;
    float m_homingDuration;
    struct Vector3 m_homingStart;
    struct IAttackable* m_lockOnTarget;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StickyMine__Fields_FWDDECL)
#define IL2CPP_STRUCT_StickyMine__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IgnitableSpiritTorch.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SphereCollider.h>
#endif
#undef IL2CPP_STRUCT_StickyMine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickyMine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StickyMine__Fields_FWDDECL)
#include <Modloader/app/structs/StickyMine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StickyMine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
