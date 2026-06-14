#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritGrenade__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritGrenade__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritGrenade__Fields_DEFINED)
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritGrenade__Fields_DEFINED
struct DamageDealer;
struct DamageOwner;
struct GameObject;
struct Event_1;
struct Rigidbody;
struct IgnitableSpiritTorch;
struct SoundHost;
struct ParticleSystem__Array;
struct MoonTrail__Array;
struct IDamageReciever__Array;
struct SpiritGrenade__Fields {
    struct MonoBehaviour__Fields _;
    float Gravity;
    struct DamageDealer* DamageDealer;
    struct DamageOwner* DamageOwner;
    struct GameObject* Explosion;
    float Duration;
    float DelayBeforeBashable;
    struct Event_1* LoopingSound;
    float m_time;
    struct Rigidbody* m_rigidbody;
    struct IgnitableSpiritTorch* m_ignitableTorch;
    bool ForceExplodeOnAttackableImpact;
    bool ForceExplodeOnCollision;
    bool Bashable;
    bool InstantlyExplodesOnAttackableSwitches;
    float InstantExplosionDistance;
    float KickbackMultiplier;
    float KickbackGravity;
    bool Fractures;
    bool _IsFracturedPiece_k__BackingField;
    bool ChangeDamageLayerAfterBash;
    DamageLayerMask__Enum TargetDamageLayerMaskAfterBash;

    bool m_isBashed;
    float m_preBashedDamage;
    DamageLayerMask__Enum m_damageLayerMask;

    struct ArtificialSoundHostReference m_artificialSoundHost;
    struct SoundHost* m_soundHost;
    struct ParticleSystem__Array* m_particleSystems;
    struct MoonTrail__Array* m_trails;
    bool m_canBeBashed;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritGrenade__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritGrenade__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IgnitableSpiritTorch.h>
#include <Modloader/app/structs/MoonTrail__Array.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundHost.h>
#endif
#undef IL2CPP_STRUCT_SpiritGrenade__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritGrenade__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritGrenade__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritGrenade__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritGrenade__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
