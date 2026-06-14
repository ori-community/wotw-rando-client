#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradableShardItem__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradableShardItem__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableShardItem__VTable_DEFINED)
#define IL2CPP_STRUCT_UpgradableShardItem__VTable_DEFINED
struct UpgradableShardItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ItemName;
    VirtualInvokeData get_ItemDescription;
    VirtualInvokeData get_ItemNextLevelDescription;
    VirtualInvokeData get_ItemIcon;
    VirtualInvokeData get_ShowNextLevel;
    VirtualInvokeData get_GameModeBasedCostMultiplier;
    VirtualInvokeData GetCostForLevel;
    VirtualInvokeData get_DisplayLevel;
    VirtualInvokeData get_ItemCurrentLevel;
    VirtualInvokeData get_ItemMaxLevel;
    VirtualInvokeData get_IsVisible;
    VirtualInvokeData get_IsLocked;
    VirtualInvokeData get_IsOwned;
    VirtualInvokeData get_IsAffordable;
    VirtualInvokeData get_IsMaxLevel;
    VirtualInvokeData get_UsesEnergy;
    VirtualInvokeData get_IsUpgradable;
    VirtualInvokeData TryPurchase;
    VirtualInvokeData DoPurchase;
};
#endif
#if !defined(IL2CPP_STRUCT_UpgradableShardItem__VTable_FWDDECL)
#define IL2CPP_STRUCT_UpgradableShardItem__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_UpgradableShardItem__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableShardItem__VTable_DEFINED) && !defined(IL2CPP_STRUCT_UpgradableShardItem__VTable_FWDDECL)
#include <Modloader/app/structs/UpgradableShardItem__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradableShardItem__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
