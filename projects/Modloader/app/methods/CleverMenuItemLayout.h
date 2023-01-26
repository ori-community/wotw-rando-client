#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemLayout.h>

namespace app::classes::CleverMenuItemLayout {
    IL2CPP_REGISTER_METHOD(0x012B3E70, void, OnEnable, (app::CleverMenuItemLayout * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B4070, void, OnDisable, (app::CleverMenuItemLayout * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B4270, void, Sort, (app::CleverMenuItemLayout * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B48A0, void, ctor, (app::CleverMenuItemLayout * this_ptr))
} // namespace app::classes::CleverMenuItemLayout
