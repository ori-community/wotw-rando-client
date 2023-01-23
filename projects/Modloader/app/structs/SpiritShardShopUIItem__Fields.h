#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_DEFINED
struct GameObject;
struct SpiritShardUIItem;
struct MessageProvider;
struct PlayerUberStateShards_Shard;
struct SpiritShardShopUIItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* CostGO;
    struct GameObject* SpiritLightGO;
    struct SpiritShardUIItem* Shard;
    struct GameObject* AlreadyOwnedGO;
    struct GameObject* PurchasableGO;
    struct GameObject* NotPurchasableGO;
    struct Color UnpurchaseableColor;
    struct Color PurchasableColor;
    struct MessageProvider* PriceMessageProvider;
    struct PlayerUberStateShards_Shard* m_spiritShard;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardShopUIItem__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardShopUIItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardShopUIItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
