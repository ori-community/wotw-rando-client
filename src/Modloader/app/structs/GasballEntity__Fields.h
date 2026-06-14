#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/GasballEntity_InflateState__Enum.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_GasballEntity_InflateState__Enum_DEFINED)
#define IL2CPP_STRUCT_GasballEntity__Fields_DEFINED
struct MoonTimeline;
struct GasballDeathReaction;
struct GameObject;
struct GasballEntity__Fields {
    struct EnemyEntity__Fields _;
    float VulnerabilityDuration;
    float InflateRadius;
    float DeflateRadius;
    float ExplosionTriggerDistance;
    struct MoonTimeline* InflateTimeline;
    struct MoonTimeline* InflateIdleTimeline;
    struct MoonTimeline* DeflateTimeline;
    struct GasballDeathReaction* DeathReaction;
    GasballEntity_InflateState__Enum m_state;

    struct GameObject* m_explosionEffect;
    float m_vulnerabilityTimer;
    float m_inflateDelay;
    bool m_isInflationBlocked;
    bool _IsChasingOri_k__BackingField;
    bool _OriWasInsideZone_k__BackingField;
    bool m_isExploded;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballEntity__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GasballDeathReaction.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_GasballEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballEntity__Fields_FWDDECL)
#include <Modloader/app/structs/GasballEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
