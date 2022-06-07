#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UpgradableShardItem {
    IL2CPP_REGISTER_METHOD(0x013AE4A0, app::PlayerUberStateShards_Shard *, get_ShardState, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AE670, app::MessageProvider *, get_ItemName, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AE750, app::MessageProvider *, get_ItemDescription, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AE890, app::MessageProvider *, get_ItemNextLevelDescription, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEA20, app::Texture2D *, get_ItemIcon, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEB90, int32_t, get_DisplayLevel, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEBB0, int32_t, get_ItemCurrentLevel, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowNextLevel, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEBD0, int32_t, get_ItemMaxLevel, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEC00, bool, get_IsVisible, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEC30, bool, get_IsLocked, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEC60, bool, get_IsOwned, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AECC0, bool, get_IsAffordable, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEC60, bool, get_IsMaxLevel, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AEC00, bool, get_IsUpgradable, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesEnergy, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AECF0, bool, TryPurchase, (app::UpgradableShardItem * this_ptr, app::Action_1_MessageProvider_ * show_hint, app::UISoundSettingsAsset * sounds, app::ShopKeeperHints * hints))
    IL2CPP_REGISTER_METHOD(0x013AEF00, void, DoPurchase, (app::UpgradableShardItem * this_ptr, app::PurchaseContext * context))
    IL2CPP_REGISTER_METHOD(0x013AF2A0, int32_t, GetCostForLevel, (app::UpgradableShardItem * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x013AF2D0, float, get_GameModeBasedCostMultiplier, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpgradableShardItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AF390, bool, _get_ShardState_b__2_0, (app::UpgradableShardItem * this_ptr, app::PlayerUberStateShards_Shard * x))
    IL2CPP_REGISTER_METHODINFO(0x0470E4A8, UpgradableShardItem__get_ShardState_b__2_0__MethodInfo)
}
