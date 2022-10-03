#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GardenerItem {
    IL2CPP_REGISTER_METHOD(0x004173F0, app::MessageProvider*, get_ItemName, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417410, app::MessageProvider*, get_ItemDescription, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417550, app::MessageProvider*, get_ItemNextLevelDescription, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417690, int32_t, get_DescriptionLevel, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417780, int32_t, get_NextDescriptionLevel, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowNextLevel, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417880, app::Texture2D*, get_ItemIcon, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004178A0, int32_t, get_DisplayLevel, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004178E0, int32_t, get_ItemCurrentLevel, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ItemMaxLevel, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsVisible, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417930, bool, get_IsLocked, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417970, bool, get_IsOwned, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004179B0, bool, get_IsAffordable, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417970, bool, get_IsMaxLevel, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsUpgradable, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesEnergy, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004179F0, bool, TryPurchase, (app::GardenerItem * this_ptr, app::Action_1_MessageProvider_* show_hint, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints))
    IL2CPP_REGISTER_METHOD(0x00417BB0, void, DoPurchase, (app::GardenerItem * this_ptr, app::PurchaseContext* context))
    IL2CPP_REGISTER_METHOD(0x00417EC0, float, GetAllProjectsProgress, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417EF0, int32_t, GetCostForLevel, (app::GardenerItem * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_GameModeBasedCostMultiplier, (app::GardenerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GardenerItem * this_ptr))
} // namespace app::classes::GardenerItem
