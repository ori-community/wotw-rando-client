#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossTendril__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossTendril__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossTendril__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossTendril_DurationType__Enum.h>
#include <Modloader/app/structs/KwolokBossTendril_State__Enum.h>
#include <Modloader/app/structs/KwolokBossTendril_VariationType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossTendril_DurationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossTendril_VariationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossTendril_State__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokBossTendril__Fields_DEFINED
struct Vitals;
struct HitFlash3D;
struct MoonTimeline;
struct List_1_Condition_;
struct KwolokBossTendril_AllowedTendrilVariations;
struct Collider__Array;
struct OrbSpawner;
struct KwolokBossTendril__Fields {
    struct MonoBehaviour__Fields _;
    struct Vitals* Vitals;
    struct HitFlash3D* HitFlash;
    struct MoonTimeline* AttackTimeline;
    struct MoonTimeline* HoldTimeline;
    struct MoonTimeline* DestroyTimeline;
    struct MoonTimeline* HitTimeline;
    struct List_1_Condition_* AutoAttackConditions;
    struct KwolokBossTendril_AllowedTendrilVariations* AllowedVariations;
    bool ShouldSelfDestroy;
    bool DestroyOnRestoreCheckpoint;
    float HoldTime;
    float m_holdTimer;
    struct Collider__Array* m_colliders;
    KwolokBossTendril_DurationType__Enum m_duration;

    KwolokBossTendril_VariationType__Enum m_variation;

    KwolokBossTendril_State__Enum m_currentState;

    struct OrbSpawner* m_orbSpawner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossTendril__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossTendril__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/HitFlash3D.h>
#include <Modloader/app/structs/KwolokBossTendril_AllowedTendrilVariations.h>
#include <Modloader/app/structs/List_1_Condition_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossTendril__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossTendril__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossTendril__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossTendril__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossTendril__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
