#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ShopkeeperUIDetails {
    IL2CPP_REGISTER_METHOD(0x005C0C60, void, Awake, (app::ShopkeeperUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::ShopkeeperUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C0E90, void, SetItemDirty, (app::ShopkeeperUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C0EA0, void, Show, (app::ShopkeeperUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::ShopkeeperUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C0F70, void, SetItem, (app::ShopkeeperUIDetails * this_ptr, app::ShopkeeperItem* item))
    IL2CPP_REGISTER_METHOD(0x005C0FB0, void, ShowEmptyDetails, (app::ShopkeeperUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C1840, void, UpdateDetails, (app::ShopkeeperUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C1AC0, void, UpdateDetails2, (app::ShopkeeperUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C2B60, void, ctor, (app::ShopkeeperUIDetails * this_ptr))
} // namespace app::classes::ShopkeeperUIDetails
