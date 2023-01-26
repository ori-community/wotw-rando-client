#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/UberStateArchive.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateShards_Shard {
    IL2CPP_REGISTER_METHOD(0x00F41E60, void, ctor, (app::PlayerUberStateShards_Shard * this_ptr, app::SpiritShardType__Enum type, app::Action* set_dirty_callback))
    IL2CPP_REGISTER_METHOD(0x00F420B0, void, Save, (app::PlayerUberStateShards_Shard * this_ptr, app::UberStateArchive* archive))
    IL2CPP_REGISTER_METHOD(0x00F420C0, void, Load, (app::PlayerUberStateShards_Shard * this_ptr, app::UberStateArchive* archive))
    IL2CPP_REGISTER_METHOD(0x00F42120, void, Serialize, (app::PlayerUberStateShards_Shard * this_ptr, app::UberStateArchive* archive))
    IL2CPP_REGISTER_METHOD(0x0052B590, app::SpiritShardType__Enum, get_Type, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F421C0, void, set_Type, (app::PlayerUberStateShards_Shard * this_ptr, app::SpiritShardType__Enum value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Level, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F421D0, void, set_Level, (app::PlayerUberStateShards_Shard * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00F421E0, int32_t, get_DisplayLevel, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F421F0, int32_t, get_MaxLevel, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F42350, int32_t, get_UpgradeCost, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsNew, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F424F0, void, set_IsNew, (app::PlayerUberStateShards_Shard * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00533160, bool, get_Gained, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F42500, void, set_Gained, (app::PlayerUberStateShards_Shard * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F42510, float, get_GameModeBasedCostMultiplier, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F425D0, int32_t, GetCostForLevel, (app::PlayerUberStateShards_Shard * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x00F427F0, bool, get_UpgradeAffordable, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F42990, bool, get_InitialPurchaseAffordable, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F42AD0, bool, get_Upgradable, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F42BD0, bool, get_VisibleInShop, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F42D10, bool, get_PurchasableInShop, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F42E50, app::State*, get_OnState, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F430B0, app::State*, get_OffState, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F43310, bool, get_EquipOnStart, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F43320, void, set_EquipOnStart, (app::PlayerUberStateShards_Shard * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Index, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F43330, void, set_Index, (app::PlayerUberStateShards_Shard * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00F43340, bool, get_Equipped, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F43350, void, Equip, (app::PlayerUberStateShards_Shard * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00F433B0, void, Unequip, (app::PlayerUberStateShards_Shard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F43410, void, RunSetDirtyCallback, (app::PlayerUberStateShards_Shard * this_ptr))
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateShards_Shard
