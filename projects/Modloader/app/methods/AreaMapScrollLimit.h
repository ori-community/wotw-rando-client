#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/AreaMapScrollLimit.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::AreaMapScrollLimit {
    IL2CPP_REGISTER_METHOD(0x00417920, app::SelectableCategory__Enum, get_Category, (app::AreaMapScrollLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083AB50, bool, get_Active, (app::AreaMapScrollLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083AC30, app::Rect, get_Area, (app::AreaMapScrollLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AreaMapScrollLimit * this_ptr))
} // namespace app::classes::AreaMapScrollLimit
