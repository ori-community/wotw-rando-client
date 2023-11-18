#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControlScreenUIItem.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ControlScreenUIItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetItemContext, (app::ControlScreenUIItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnItemContextDirty, (app::ControlScreenUIItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ControlScreenUIItem * this_ptr))
} // namespace app::classes::ControlScreenUIItem
