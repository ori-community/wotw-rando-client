#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MapmakerItem.h>
#include <Modloader/app/structs/MapmakerUIItem.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::MapmakerUIItem {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::MapmakerItem*, get_Item, (app::MapmakerUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0EC20, void, SetItemContext, (app::MapmakerUIItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00A0EE80, void, OnItemContextDirty, (app::MapmakerUIItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00A0F020, void, UpdateIconsFromShard, (app::MapmakerUIItem * this_ptr, app::MapmakerItem* upgrade_item, bool initialize))
    IL2CPP_REGISTER_METHOD(0x00A0F030, void, UpdateMapmakerItem, (app::MapmakerUIItem * this_ptr, app::MapmakerItem* upgrade_item))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MapmakerUIItem * this_ptr))
} // namespace app::classes::MapmakerUIItem
