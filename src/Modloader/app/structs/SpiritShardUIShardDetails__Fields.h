#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_DEFINED
struct GameObject;
struct SpiritShardUIShardBackdrop;
struct SpiritShardUIShardFloatingTooltip;
struct Transform;
struct SpellUIShardEquipStatus;
struct MessageProvider;
struct PlayerUberStateShards_Shard;
struct SpiritShardUIShardDetails__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* IconGO;
    struct GameObject* NameGO;
    struct GameObject* DescriptionGO;
    struct GameObject* UpgradableGO;
    struct GameObject* NotUpgradableGO;
    struct GameObject* TooExpensiveGO;
    struct GameObject* UpgradeGO;
    struct GameObject* UpgradeAmountGO;
    struct GameObject* UpgradeSpiritLightGO;
    struct GameObject* LevelGO;
    struct GameObject* LevelNextGO;
    struct GameObject* LevelNextDescriptionGO;
    struct SpiritShardUIShardBackdrop* Background;
    struct SpiritShardUIShardFloatingTooltip* Tooltip;
    struct GameObject* EquipStatusPrefab;
    struct Transform* AnchorEquipStatus;
    struct SpellUIShardEquipStatus* m_equipStatus;
    struct MessageProvider* UpgradeHeaderMessage;
    struct MessageProvider* UpgradeAmountMessage;
    struct Color UpgradeTextColor;
    struct Color TooExpensiveColor;
    bool ShowEquipStatus;
    bool RequireOwned;
    bool ShowUpgradeCost;
    bool ColorByPurchasable;
    struct MessageProvider* Level;
    struct MessageProvider* NextLevel;
    struct MessageProvider* MaxLevel;
    struct MessageProvider* LockedName;
    struct MessageProvider* LockedDescription;
    struct PlayerUberStateShards_Shard* m_item;
    bool m_dirty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpellUIShardEquipStatus.h>
#include <Modloader/app/structs/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/structs/SpiritShardUIShardFloatingTooltip.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardUIShardDetails__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardUIShardDetails__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardUIShardDetails__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
