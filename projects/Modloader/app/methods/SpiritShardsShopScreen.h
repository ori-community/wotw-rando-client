#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/SpellUIItem.h>
#include <Modloader/app/structs/SpiritShardShopUIItem.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay_Selection__Enum.h>
#include <Modloader/app/structs/SpiritShardsShopScreen.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::SpiritShardsShopScreen {
    IL2CPP_REGISTER_METHOD(0x006B8940, app::CleverMenuItemSelectionManager*, get_NavigationManager, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::MenuTabBackground__Enum, get_BackgroundMode, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedsExperienceUI, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D76830, void, HideExistingHint, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D76920, void, ShowHint, (app::SpiritShardsShopScreen * this_ptr, app::MessageProvider* message_provider))
    IL2CPP_REGISTER_METHOD(0x00D76B40, void, Awake, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D76C10, void, OnDestroy, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D770C0, void, OnGlobalShardsUpdated, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D771B0, void, OnBindingsUpdated, (app::SpiritShardsShopScreen * this_ptr, app::SpellInventory_Binding__Enum binding))
    IL2CPP_REGISTER_METHOD(0x00D772A0, void, OnNewItemHighlighted, (app::SpiritShardsShopScreen * this_ptr, bool first_after_populating))
    IL2CPP_REGISTER_METHOD(0x00D774C0, void, OnItemActivatedCallback, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77700, void, OnConfirmationSelected, (app::SpiritShardsShopScreen * this_ptr, app::SpiritShardUIConfirmationOverlay_Selection__Enum selection))
    IL2CPP_REGISTER_METHOD(0x00D77860, void, OnShardInventoryUpdatedCallback, (app::SpiritShardsShopScreen * this_ptr, app::PlayerUberStateShards_Shard* item))
    IL2CPP_REGISTER_METHOD(0x00D77870, app::SpellUIItem*, get_SelectedSpellUIItem, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77970, app::PlayerUberStateInventory_InventoryItem*, get_SelectedSpell, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77B10, app::SpiritShardShopUIItem*, get_SelectedSpiritShardUIItem, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77C10, app::PlayerUberStateShards_Shard*, get_SelectedSpiritShard, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77CE0, bool, get_IsSuspended, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77CF0, void, set_IsSuspended, (app::SpiritShardsShopScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C1F020, app::SuspendableMask__Enum, get_Mask, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77D00, void, set_Mask, (app::SpiritShardsShopScreen * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00D77DC0, void, Hide, (app::SpiritShardsShopScreen * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x006B93E0, void, HideImmediate, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77F60, void, Show, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9600, void, ShowImmediate, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D781B0, void, FocusOnShard, (app::SpiritShardsShopScreen * this_ptr, app::PlayerUberStateShards_Shard* item))
    IL2CPP_REGISTER_METHOD(0x00D784F0, void, FocusOnPreviousSelection, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D78830, void, FixedUpdate, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D78A90, void, OnCategoryChanged, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D78C70, void, UpdateContextCanvasShards, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D78E80, void, PopulateInventoryCanvasWithShards, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D795A0, app::PlayerUberStateShards_Shard*, GetActualInventoryItem, (app::SpiritShardsShopScreen * this_ptr, app::SpiritShardType__Enum typ))
    IL2CPP_REGISTER_METHOD(0x00D79790, void, OnPostTimeSlicedEnable, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D798A0, void, Init, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D79D60, void, OnInstantiate, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::GameObject*, get_EffectTarget, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7A820, app::Event_1*, get_PurchaseCompleteSound, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7A840, app::Event_1*, get_PurchaseBeginSound, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7A860, app::RTPC*, get_PurchaseRTPC, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7A880, void, PurchaseUpdate, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7AB30, bool, CanPurchase, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7AF70, void, CompletePurchase, (app::SpiritShardsShopScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7B590, void, ctor, (app::SpiritShardsShopScreen * this_ptr))
} // namespace app::classes::SpiritShardsShopScreen
