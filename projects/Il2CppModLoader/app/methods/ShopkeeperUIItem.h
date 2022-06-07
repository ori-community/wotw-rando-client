#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ShopkeeperUIItem {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::ShopkeeperItem *, get_Item, (app::ShopkeeperUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C2B70, void, SetItemContext, (app::ShopkeeperUIItem * this_ptr, app::Object * context, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x005C2D30, void, OnItemContextDirty, (app::ShopkeeperUIItem * this_ptr, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x005C2ED0, void, UpdateIcons, (app::ShopkeeperUIItem * this_ptr, app::ShopkeeperItem * upgrade_item, bool initialize))
    IL2CPP_REGISTER_METHOD(0x005C2EE0, void, UpdateItem, (app::ShopkeeperUIItem * this_ptr, app::ShopkeeperItem * upgrade_item))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ShopkeeperUIItem * this_ptr))
}
