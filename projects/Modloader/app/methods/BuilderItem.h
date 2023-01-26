#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Action_1_MessageProvider_.h>
#include <Modloader/app/structs/BuilderItem.h>
#include <Modloader/app/structs/PurchaseContext.h>
#include <Modloader/app/structs/ShopKeeperHints.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>

namespace app::classes::BuilderItem {
    IL2CPP_REGISTER_METHOD(0x004173F0, app::MessageProvider*, get_ItemName, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00818320, app::MessageProvider*, get_ItemDescription, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00818460, app::MessageProvider*, get_ItemNextLevelDescription, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008185A0, int32_t, get_DescriptionLevel, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00818690, int32_t, get_NextDescriptionLevel, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowNextLevel, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417880, app::Texture2D*, get_ItemIcon, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004178A0, int32_t, get_DisplayLevel, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004178E0, int32_t, get_ItemCurrentLevel, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ItemMaxLevel, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsVisible, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417930, bool, get_IsLocked, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417970, bool, get_IsOwned, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00818780, bool, get_IsAffordable, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417970, bool, get_IsMaxLevel, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsUpgradable, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesEnergy, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008188D0, bool, TryPurchase, (app::BuilderItem * this_ptr, app::Action_1_MessageProvider_* show_hint, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints))
    IL2CPP_REGISTER_METHOD(0x00818B90, void, DoPurchase, (app::BuilderItem * this_ptr, app::PurchaseContext* context))
    IL2CPP_REGISTER_METHOD(0x00417EC0, float, GetAllProjectsProgress, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00818F40, int32_t, GetCostForLevel, (app::BuilderItem * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_GameModeBasedCostMultiplier, (app::BuilderItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BuilderItem * this_ptr))
} // namespace app::classes::BuilderItem
