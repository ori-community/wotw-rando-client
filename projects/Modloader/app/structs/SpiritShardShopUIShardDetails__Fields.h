#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_DEFINED
struct GameObject;
struct Transform;
struct SpellUIShardEquipStatus;
struct MessageProvider;
struct PlayerUberStateShards_Shard;
struct SpiritShardShopUIShardDetails__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* IconGO;
    struct GameObject* NameGO;
    struct GameObject* DescriptionGO;
    struct GameObject* UpgradableGO;
    struct GameObject* TooExpensiveGO;
    struct GameObject* EquipStatusPrefab;
    struct Transform* AnchorEquipStatus;
    struct SpellUIShardEquipStatus* m_equipStatus;
    struct MessageProvider* UpgradeHeaderMessage;
    struct Color UpgradeTextColor;
    struct Color TooExpensiveTextColor;
    bool ShowUpgradeRow;
    bool ShowEquipStatus;
    struct MessageProvider* LockedName;
    struct MessageProvider* LockedDescription;
    struct PlayerUberStateShards_Shard* m_item;
    bool m_dirty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpellUIShardEquipStatus.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardShopUIShardDetails__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardShopUIShardDetails__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardShopUIShardDetails__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
