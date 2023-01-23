#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPoisonTrail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPoisonTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_WaterPoisonTrail_DamagePoint_DEFINED)
#define IL2CPP_STRUCT_WaterPoisonTrail__Fields_DEFINED
struct ParticleSystem;
struct MoonTrail;
struct AnimationCurve;
struct DamageOwner;
struct List_1_WaterPoisonTrail_DamagePoint_;
struct WaterPoisonTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct ParticleSystem* HeadParticle;
    struct ParticleSystem* MainParticle;
    struct MoonTrail* Trail;
    float SpawnEveryDistance;
    float MinSize;
    float MaxSize;
    struct AnimationCurve* SizeOverLifetime;
    float PointLifeTime;
    bool StartOnAwake;
    float DamageAmound;
    float DamageKickbackForce;
    DamageType__Enum DamageType;

    struct DamageOwner* Owner;
    AbilityType__Enum AbilityType;

    DamageWeight__Enum DamageWeight;

    bool DebugDrawDamageZones;
    struct Color DebugDamageZoneColor;
    struct Color DebugDamageZoneOutlineColor;
    struct Vector3 m_lastPosition;
    bool m_spawnActive;
    struct WaterPoisonTrail_DamagePoint m_head;
    bool m_destroyOnCleared;
    float m_timeToSpawnInPlace;
    struct List_1_WaterPoisonTrail_DamagePoint_* m_points;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterPoisonTrail__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/List_1_WaterPoisonTrail_DamagePoint_.h>
#include <Modloader/app/structs/MoonTrail.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_WaterPoisonTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterPoisonTrail__Fields_FWDDECL)
#include <Modloader/app/structs/WaterPoisonTrail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPoisonTrail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
