#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatSetting_StatSource__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatSetting_StatSource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSetting_StatSource__Enum_DEFINED)
#define IL2CPP_STRUCT_StatSetting_StatSource__Enum_DEFINED
enum class StatSetting_StatSource__Enum : int32_t {
    UberState = 0x00000000,
    Condition = 0x00000001,
    Special_Compleation = 0x00000002,
    Special_FavoriteCombatSkill = 0x00000003,
    Special_TopTarget = 0x00000004,
    Special_TopRival = 0x00000005,
    Special_SkillsUpgrades = 0x00000006,
    Special_SkillsGathered = 0x00000007,
    Special_ShardSlotsCollected = 0x00000008,
    Special_ShardsCollected = 0x00000009,
    Special_ShrinesDiscovered = 0x0000000a,
    Special_ShrinesCompleated = 0x0000000b,
    Special_RacesCompleated = 0x0000000c,
    Special_ShardsUpgraded = 0x0000000d,
    Special_TotalPlaytime = 0x0000000e,
    Special_Progression = 0x0000000f,
    Special_HealthContainersProgress = 0x00000010,
    Special_EnergyContainerProgress = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_StatSetting_StatSource__Enum_FWDDECL)
#define IL2CPP_STRUCT_StatSetting_StatSource__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_StatSetting_StatSource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSetting_StatSource__Enum_DEFINED) && !defined(IL2CPP_STRUCT_StatSetting_StatSource__Enum_FWDDECL)
#include <Modloader/app/structs/StatSetting_StatSource__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatSetting_StatSource__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
