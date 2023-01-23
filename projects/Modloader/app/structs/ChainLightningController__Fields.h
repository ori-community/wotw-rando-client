#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChainLightningController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChainLightningController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainLightningController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ChainLightningController__Fields_DEFINED
struct List_1_Moon_DamageReceiver_;
struct List_1_Moon_EnemyEntity_;
struct ChainLightningController__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_Moon_DamageReceiver_* m_damageReceivers;
    struct List_1_Moon_EnemyEntity_* m_enemies;
    float m_baseDamage;
    float m_range;
    float m_secondHitMultiplier;
    float m_otherHitMultiplier;
    float m_delay;
    int32_t m_hits;
    bool m_chained;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChainLightningController__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChainLightningController__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_DamageReceiver_.h>
#include <Modloader/app/structs/List_1_Moon_EnemyEntity_.h>
#endif
#undef IL2CPP_STRUCT_ChainLightningController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainLightningController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChainLightningController__Fields_FWDDECL)
#include <Modloader/app/structs/ChainLightningController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChainLightningController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
