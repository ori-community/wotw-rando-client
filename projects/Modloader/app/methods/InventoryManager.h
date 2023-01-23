#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InventoryManager.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>

namespace app::classes::InventoryManager {
    IL2CPP_REGISTER_METHOD(0x0063F0E0, void, Show, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063F120, void, Hide, (app::InventoryManager * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x0063F150, void, ShowImmediate, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063F190, void, HideImmediate, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063F1C0, void, Awake, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063F6F0, void, OnBackPressed, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04773CE0, InventoryManager_OnBackPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnMenuItemChange, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711060, InventoryManager_OnMenuItemChange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0063F7A0, void, OnMenuItemPressed, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766960, InventoryManager_OnMenuItemPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0063FE00, void, OnMessageScreenHide, (app::InventoryManager * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x0476F248, InventoryManager_OnMessageScreenHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00640000, void, OnDestroy, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00640580, void, OnDifficultyChanged, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472D420, InventoryManager_OnDifficultyChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00640650, void, UpdateItems, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00640F80, void, FixedUpdate, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00640F80, void, OnEnable, (app::InventoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InventoryManager * this_ptr))
} // namespace app::classes::InventoryManager
