#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MapmakerUISubItem.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MapmakerItem.h>

namespace app::classes::MapmakerUISubItem {
    IL2CPP_REGISTER_METHOD(0x00A0F4A0, void, Update, (app::MapmakerUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0F4B0, void, SetItemContext, (app::MapmakerUISubItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00A0F4A0, void, OnItemContextDirty, (app::MapmakerUISubItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00A0F590, void, SetUpgradeItem, (app::MapmakerUISubItem * this_ptr, app::MapmakerItem* upgrade_item, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00A0F680, void, UpdateUpgradeIcon, (app::MapmakerUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0F4A0, void, UpdateUpgradeItemProperties, (app::MapmakerUISubItem * this_ptr, app::Object* grid_context, bool initialize))
    IL2CPP_REGISTER_METHOD(0x00A0F760, void, UpdateItem, (app::MapmakerUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0FD30, void, ctor, (app::MapmakerUISubItem * this_ptr))
} // namespace app::classes::MapmakerUISubItem
