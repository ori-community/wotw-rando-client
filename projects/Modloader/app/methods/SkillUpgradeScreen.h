#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SkillUpgradeScreen.h>
#include <Modloader/app/structs/SkillUpgradeShopUIItem.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpgradeAbilityItem.h>

namespace app::classes::SkillUpgradeScreen {
    IL2CPP_REGISTER_METHOD(0x006B88C0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x006B8940, app::CleverMenuItemSelectionManager*, get_NavigationManager, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_PurchasedSkillUpgrade, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8970, void, set_PurchasedSkillUpgrade, (app::SkillUpgradeScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417920, app::MenuTabBackground__Enum, get_BackgroundMode, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedsExperienceUI, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8980, void, HideExistingHint, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8A70, void, ShowHint, (app::SkillUpgradeScreen * this_ptr, app::MessageProvider* message_provider))
    IL2CPP_REGISTER_METHOD(0x006B8C90, void, Awake, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8D60, void, OnDestroy, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8E00, void, OnNewItemHighlighted, (app::SkillUpgradeScreen * this_ptr, bool first_after_populating))
    IL2CPP_REGISTER_METHOD(0x006B8E10, void, OnItemActivatedCallback, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8EC0, app::SkillUpgradeShopUIItem*, get_SelectedSkillUpgradeUIItem, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8FC0, app::UpgradeAbilityItem*, get_SelectedUpgradeItem, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9090, bool, get_IsSuspended, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B90A0, void, set_IsSuspended, (app::SkillUpgradeScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006B90B0, app::SuspendableMask__Enum, get_Mask, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B90C0, void, set_Mask, (app::SkillUpgradeScreen * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x006B9180, void, Hide, (app::SkillUpgradeScreen * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x006B93E0, void, HideImmediate, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9420, void, Show, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9600, void, ShowImmediate, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9670, void, FocusOnPreviousSelection, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B98D0, void, FixedUpdate, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9A90, void, OnCategoryChanged, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9D20, void, UpdateContextCanvasShards, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9EA0, void, PopulateInventoryCanvasWithUpgrades, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BA290, app::PlayerUberStateShards_Shard*, GetActualInventoryItem, (app::SkillUpgradeScreen * this_ptr, app::SpiritShardType__Enum typ))
    IL2CPP_REGISTER_METHOD(0x006BA480, void, OnPostTimeSlicedEnable, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BA590, void, Init, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BA8F0, void, OnInstantiate, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::GameObject*, get_EffectTarget, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00572C50, app::Event_1*, get_PurchaseCompleteSound, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00572C30, app::Event_1*, get_PurchaseBeginSound, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00572C70, app::RTPC*, get_PurchaseRTPC, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BAF50, void, PurchaseUpdate, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BB1D0, bool, CanPurchase, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BB440, void, CompletePurchase, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BB970, float, GetAllUpgradesProgress, (app::SkillUpgradeScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BBAB0, void, ctor, (app::SkillUpgradeScreen * this_ptr))
} // namespace app::classes::SkillUpgradeScreen
