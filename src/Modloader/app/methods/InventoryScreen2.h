#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InventoryScreen2.h>
#include <Modloader/app/structs/InventoryScreenItem.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>

namespace app::classes::InventoryScreen2 {
    IL2CPP_REGISTER_METHOD(0x00640F90, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00641010, app::InventoryScreenItem*, get_SelectedItem, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006410F0, app::MenuTabBackground__Enum, get_BackgroundMode, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641100, void, Awake, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641330, void, OnDestroy, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641690, void, OnBackPressed, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641750, void, OnGCTriggerEnter, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006417F0, void, Hide, app::InventoryScreen2* this_ptr, bool change)
    IL2CPP_REGISTER_METHOD(0x00641840, void, DeregisterCallbacks, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641B10, void, HideImmediate, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641B40, void, Show, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641C80, void, RegisterCallbacks, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641F50, void, ShowImmediate, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00641F90, void, OnNavigate, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00642130, void, OnShow, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006422A0, void, UpdateText, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPressed, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006428A0, void, OnPostTimeSlicedEnable, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006429B0, void, OnInstantiate, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00642DF0, void, FixedUpdate, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00642ED0, void, UpdateHint, app::InventoryScreen2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006435D0, void, ctor, app::InventoryScreen2* this_ptr)
} // namespace app::classes::InventoryScreen2
