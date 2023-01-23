#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/MapmakerScreen.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MapmakerUIItem.h>
#include <Modloader/app/structs/MapmakerItem.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/RTPC.h>

namespace app::classes::MapmakerScreen {
    IL2CPP_REGISTER_METHOD(0x00A0B3F0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x006B8940, app::CleverMenuItemSelectionManager*, get_NavigationManager, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_PurchasedSkillUpgrade, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8970, void, set_PurchasedSkillUpgrade, (app::MapmakerScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417920, app::MenuTabBackground__Enum, get_BackgroundMode, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedsExperienceUI, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0B470, void, HideExistingHint, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0B560, void, ShowHint, (app::MapmakerScreen * this_ptr, app::MessageProvider* message_provider))
    IL2CPP_REGISTER_METHOD(0x00A0B780, void, Awake, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0B850, void, OnDestroy, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0B8F0, void, OnNewItemHighlighted, (app::MapmakerScreen * this_ptr, bool first_after_populating))
    IL2CPP_REGISTER_METHODINFO(0x0475F2A0, MapmakerScreen_OnNewItemHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A0B900, void, OnItemActivatedCallback, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F518, MapmakerScreen_OnItemActivatedCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A0B9B0, app::MapmakerUIItem*, get_SelectedItem, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0BAB0, app::MapmakerItem*, get_SelectedUpgradeItem, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9090, bool, get_IsSuspended, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B90A0, void, set_IsSuspended, (app::MapmakerScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006B90B0, app::SuspendableMask__Enum, get_Mask, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0BB80, void, set_Mask, (app::MapmakerScreen * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A0BC40, void, Hide, (app::MapmakerScreen * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x006B93E0, void, HideImmediate, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0BEA0, void, Show, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B9600, void, ShowImmediate, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0C140, void, FocusOnPreviousSelection, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0C3A0, void, FixedUpdate, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0C560, void, OnCategoryChanged, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0C7F0, void, UpdateContextCanvasShards, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0C970, void, PopulateInventoryCanvasWithUpgrades, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0CD80, void, OnPostTimeSlicedEnable, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0CE90, void, Init, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0D180, void, OnInstantiate, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0D7E0, void, UpgradeItemsBasedOnHandToHandQuestCompletion, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::GameObject*, get_EffectTarget, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BFFC0, app::Event_1*, get_PurchaseCompleteSound, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BFFE0, app::Event_1*, get_PurchaseBeginSound, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C0000, app::RTPC*, get_PurchaseRTPC, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0D8A0, void, PurchaseUpdate, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0DB20, bool, CanPurchase, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0DE40, void, CompletePurchase, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0E030, float, GetAllMapmakerUpgradesProgress, (app::MapmakerScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BBAB0, void, ctor, (app::MapmakerScreen * this_ptr))
} // namespace app::classes::MapmakerScreen
