#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ShopkeeperItem.h>
#include <Modloader/app/structs/ShopkeeperUISubItem.h>

namespace app::classes::ShopkeeperUISubItem {
    IL2CPP_REGISTER_METHOD(0x005C3260, void, Update, app::ShopkeeperUISubItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C3270, void, SetItemContext, app::ShopkeeperUISubItem* this_ptr, app::Object* context, app::Object* grid_context)
    IL2CPP_REGISTER_METHOD(0x005C3260, void, OnItemContextDirty, app::ShopkeeperUISubItem* this_ptr, app::Object* grid_context)
    IL2CPP_REGISTER_METHOD(0x005C3310, void, SetItem, app::ShopkeeperUISubItem* this_ptr, app::ShopkeeperItem* upgrade_item, app::Object* grid_context)
    IL2CPP_REGISTER_METHOD(0x005C3320, void, UpdateIcon, app::ShopkeeperUISubItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C3260, void, UpdateUpgradeItemProperties, app::ShopkeeperUISubItem* this_ptr, app::Object* grid_context, bool initialize)
    IL2CPP_REGISTER_METHOD(0x005C3410, void, UpdateItem, app::ShopkeeperUISubItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ShopkeeperUISubItem* this_ptr)
} // namespace app::classes::ShopkeeperUISubItem
