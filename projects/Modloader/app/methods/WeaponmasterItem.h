#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_MessageProvider_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PurchaseContext.h>
#include <Modloader/app/structs/ShopKeeperHints.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#include <Modloader/app/structs/WeaponmasterItem.h>

namespace app::classes::WeaponmasterItem {
    IL2CPP_REGISTER_METHOD(0x004173F0, app::MessageProvider*, get_ItemName, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005712D0, app::MessageProvider*, get_ItemDescription, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571410, app::MessageProvider*, get_ItemNextLevelDescription, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571550, int32_t, get_DescriptionLevel, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571640, int32_t, get_NextDescriptionLevel, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowNextLevel, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571730, app::Texture2D*, get_ItemIcon, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571750, int32_t, get_DisplayLevel, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571790, int32_t, get_ItemCurrentLevel, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005717D0, int32_t, get_ItemMaxLevel, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsVisible, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571800, bool, get_IsLocked, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571910, bool, get_MissingRequiredAbility, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571AB0, bool, get_MissingRequiredCondition, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571BB0, bool, get_IsOwned, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571C10, bool, get_IsAffordable, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571BB0, bool, get_IsMaxLevel, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571D50, bool, get_IsUpgradable, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571D80, bool, get_UsesEnergy, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00571DF0,
        bool,
        TryPurchase,
        app::WeaponmasterItem* this_ptr,
        app::Action_1_MessageProvider_* show_hint,
        app::UISoundSettingsAsset* sounds,
        app::ShopKeeperHints* hints
    )
    IL2CPP_REGISTER_METHOD(0x00572220, void, DoPurchase, app::WeaponmasterItem* this_ptr, app::PurchaseContext* context)
    IL2CPP_REGISTER_METHOD(0x00572750, float, GetAllUpgradesProgress, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00572780, int32_t, GetCostForLevel, app::WeaponmasterItem* this_ptr, int32_t level)
    IL2CPP_REGISTER_METHOD(0x00572910, float, get_GameModeBasedCostMultiplier, app::WeaponmasterItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WeaponmasterItem* this_ptr)
} // namespace app::classes::WeaponmasterItem
