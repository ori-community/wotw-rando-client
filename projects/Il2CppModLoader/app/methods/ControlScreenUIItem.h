#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ControlScreenUIItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetItemContext, (app::ControlScreenUIItem * this_ptr, app::Object * context, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnItemContextDirty, (app::ControlScreenUIItem * this_ptr, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ControlScreenUIItem * this_ptr))
}
