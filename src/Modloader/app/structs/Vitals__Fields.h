#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vitals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vitals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals__Fields_DEFINED)
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vitals_SpecialHealthType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageResult_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vitals_SpecialHealthType__Enum_DEFINED)
#define IL2CPP_STRUCT_Vitals__Fields_DEFINED
struct DynamicDataResolver;
struct DamageReceiver__Array;
struct ActionMethod;
struct MoonTimeline;
struct Action_1_DamageResult_;
struct Action_2_Single_Single_;
struct Event_1;
struct List_1_UnityEngine_SkinnedMeshRenderer_;
struct DamageReceiver;
struct HashSet_1_System_Int32_;
struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_;
struct InterfaceCache;
struct List_1_Moon_IVitalsDeathListener_;
struct Vitals_DamageProcessHelper;
struct Damage;
struct Vitals__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float m_health;
    float m_maxHealth;
    int32_t m_difficulty;
    bool CombineDamageReceivers;
    struct DamageReceiver__Array* DamageReceivers;
    bool DisableWhenZeroHealth;
    bool textAtDamageReceiver;
    bool PreventResettingHealthOnRestoreCheckpoint;
    struct ActionMethod* DamageReceivedAction;
    struct MoonTimeline* DamageReceivedTimeline;
    struct ActionMethod* ZeroHealthAction;
    struct MoonTimeline* ZeroHealthTimeline;
    bool ExecuteZeroHealthActionOnlyOnce;
    struct Action_1_DamageResult_* DamageResultReceived;
    struct Action_2_Single_Single_* OnHealthChanged;
    struct Action_1_DamageResult_* OnDeath;
    struct Event_1* ExplosionDeathSound;
    struct List_1_UnityEngine_SkinnedMeshRenderer_* FireEffectEmissionMeshes;
    bool Imortal;
    bool ShowDamageText;
    bool ZeroHealthActionExecuted;
    bool m_isEnemyEntityVital;
    struct DamageReceiver* m_fireReceiver;
    struct HashSet_1_System_Int32_* m_processedIDs;
    struct Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* m_fireEffects;
    struct InterfaceCache* m_deathListenersCache;
    struct List_1_Moon_IVitalsDeathListener_* m_deathListeners;
    bool m_isPrewarmed;
    struct Vitals_DamageProcessHelper* m_damageProcessor;
    bool m_hasFireshardFallbackReceiver;
    struct DamageReceiver* m_fireshardFallbackReceiver;
    float m_stressTestDamageInterval;
    struct Damage* m_stressTestDamage;
    struct DamageResult m_stressTestDamageResult;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;

    Vitals_SpecialHealthType__Enum SpecialHealthRule;

    bool m_affectedByFocusShard;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vitals__Fields_FWDDECL)
#define IL2CPP_STRUCT_Vitals__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Action_1_DamageResult_.h>
#include <Modloader/app/structs/Action_2_Single_Single_.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/DamageReceiver__Array.h>
#include <Modloader/app/structs/Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/List_1_Moon_IVitalsDeathListener_.h>
#include <Modloader/app/structs/List_1_UnityEngine_SkinnedMeshRenderer_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper.h>
#endif
#undef IL2CPP_STRUCT_Vitals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Vitals__Fields_FWDDECL)
#include <Modloader/app/structs/Vitals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vitals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
