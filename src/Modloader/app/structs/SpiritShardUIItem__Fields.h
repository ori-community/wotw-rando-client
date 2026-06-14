#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardUIItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIItem__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SpiritShardUIItem__Fields_DEFINED
struct GameObject;
struct SpiritShardUIShardBackdrop;
struct SpiritShardUIShardUpgradeFill;
struct PlayerUberStateShards_Shard;
struct SpiritShardUIItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* IconGO;
    struct GameObject* EquippedGO;
    struct GameObject* NewGO;
    struct GameObject* NotCollectedGO;
    struct GameObject* UpgradableGO;
    struct GameObject* NotUpgradableGO;
    struct SpiritShardUIShardBackdrop* Background;
    struct SpiritShardUIShardUpgradeFill* Fill;
    struct GameObject* UnknownGO;
    struct GameObject* LockedGO;
    struct Color NormalColor;
    struct Color UpgradableColor;
    struct PlayerUberStateShards_Shard* m_spiritShard;
    bool RequireOwned;
    bool PurchaseRules;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardUIItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardUIItem__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/structs/SpiritShardUIShardUpgradeFill.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardUIItem__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardUIItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardUIItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
