#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindVent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindVent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindVent__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WindVent_State__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_WindVent_State__Enum_DEFINED)
#define IL2CPP_STRUCT_WindVent__Fields_DEFINED
struct GameObject;
struct Transform;
struct BaseAnimator;
struct ParticleSystem__Array;
struct WindVent__Fields {
    struct SaveSerialize__Fields _;
    bool StartAutomatically;
    bool Looping;
    float TimeOffset;
    float AnticipationDuration;
    float BurstDuration;
    float CooldownDuration;
    struct GameObject* AnticipationEffect;
    struct GameObject* BurstEffect;
    struct GameObject* ImpactEffect;
    struct Transform* ImpactEffectLocator;
    struct GameObject* VentGraphic;
    struct BaseAnimator* WindAnimator;
    struct GameObject* WindBeam;
    struct GameObject* KillZone;
    float m_currentStateTime;
    struct ParticleSystem__Array* m_windBeamParticleSystems;
    bool m_hasErrupted;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    WindVent_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindVent__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindVent__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_WindVent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindVent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindVent__Fields_FWDDECL)
#include <Modloader/app/structs/WindVent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindVent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
