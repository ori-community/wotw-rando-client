#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColosseumTower_SentryStats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColosseumTower_SentryStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumTower_SentryStats_DEFINED)
#define IL2CPP_STRUCT_ColosseumTower_SentryStats_DEFINED
struct ColosseumTower_SentryStats {
    float ShotCooldownMax;
    float ShotCooldownMin;
    float AttackDistance;
    int32_t UpgradeCost;
};
#endif
#if !defined(IL2CPP_STRUCT_ColosseumTower_SentryStats_FWDDECL)
#define IL2CPP_STRUCT_ColosseumTower_SentryStats_FWDDECL
#endif
#undef IL2CPP_STRUCT_ColosseumTower_SentryStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumTower_SentryStats_DEFINED) && !defined(IL2CPP_STRUCT_ColosseumTower_SentryStats_FWDDECL)
#include <Modloader/app/structs/ColosseumTower_SentryStats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColosseumTower_SentryStats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
