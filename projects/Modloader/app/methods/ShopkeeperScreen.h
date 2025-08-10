#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/ShopkeeperItem.h>
#include <Modloader/app/structs/ShopkeeperItem__Array.h>
#include <Modloader/app/structs/ShopkeeperScreen.h>
#include <Modloader/app/structs/ShopkeeperUIItem.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::ShopkeeperScreen {
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::ShopkeeperScreen*, get_ShopInstance, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_ShopInstance, app::ShopkeeperScreen* this_ptr, app::ShopkeeperScreen* value)
    IL2CPP_REGISTER_METHOD(0x005BDA00, app::ShopkeeperItem__Array*, get_Items, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BDA80, app::CleverMenuItemSelectionManager*, get_NavigationManager, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BDAA0, bool, get_PurchasedItem, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BDAB0, void, set_PurchasedItem, app::ShopkeeperScreen* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00417920, app::MenuTabBackground__Enum, get_BackgroundMode, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedsExperienceUI, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BDAC0, void, HideExistingHint, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BDBB0, void, ShowHint, app::ShopkeeperScreen* this_ptr, app::MessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(0x005BDDF0, void, Awake, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BDEC0, void, OnDestroy, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BDF60, void, OnNewItemHighlighted, app::ShopkeeperScreen* this_ptr, bool first_after_populating)
    IL2CPP_REGISTER_METHOD(0x005BDF70, void, OnItemActivatedCallback, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BDF80, app::ShopkeeperUIItem*, get_SelectedItem, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BE080, app::ShopkeeperItem*, get_SelectedUpgradeItem, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FBE70, bool, get_IsSuspended, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FBE80, void, set_IsSuspended, app::ShopkeeperScreen* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FBE90, app::SuspendableMask__Enum, get_Mask, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BE150, void, set_Mask, app::ShopkeeperScreen* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x005BE210, void, Hide, app::ShopkeeperScreen* this_ptr, bool change)
    IL2CPP_REGISTER_METHOD(0x005BE500, void, HideImmediate, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BE540, void, Show, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BE740, void, ShowImmediate, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BE7B0, void, FocusOnPreviousSelection, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BEA10, void, FixedUpdate, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, AdditionalUpdate, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BEBF0, void, OnCategoryChanged, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BEED0, void, UpdateContextCanvasShards, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BF0B0, void, PopulateInventoryCanvasWithUpgrades, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BF500, void, OnPostTimeSlicedEnable, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BF610, void, Init, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BF900, void, OnInstantiate, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::GameObject*, get_EffectTarget, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BFFC0, app::Event_1*, get_PurchaseCompleteSound, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BFFE0, app::Event_1*, get_PurchaseBeginSound, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C0000, app::RTPC*, get_PurchaseRTPC, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C0020, void, PurchaseUpdate, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C02A0, bool, CanPurchase, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C04A0, void, CompletePurchase, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C0680, float, GetPurchaseProgress, app::ShopkeeperScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418B30, void, ctor, app::ShopkeeperScreen* this_ptr)
} // namespace app::classes::ShopkeeperScreen
