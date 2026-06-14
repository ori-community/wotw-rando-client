#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopkeeperUIItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopkeeperUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperUIItem__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ShopkeeperUIItem__Fields_DEFINED
struct GameObject;
struct SpiritShardUIShardUpgradeFill;
struct ShopkeeperItem;
struct ShopkeeperUIItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* AvailableToBuyGO;
    struct GameObject* AlreadyOwnedGO;
    struct GameObject* TooExpensiveGO;
    struct GameObject* LockedGO;
    struct SpiritShardUIShardUpgradeFill* Fill;
    struct ShopkeeperItem* m_upgradeItem;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShopkeeperUIItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShopkeeperUIItem__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ShopkeeperItem.h>
#include <Modloader/app/structs/SpiritShardUIShardUpgradeFill.h>
#endif
#undef IL2CPP_STRUCT_ShopkeeperUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperUIItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShopkeeperUIItem__Fields_FWDDECL)
#include <Modloader/app/structs/ShopkeeperUIItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopkeeperUIItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
