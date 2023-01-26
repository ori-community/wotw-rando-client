#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GizmosChangeColor.h>

namespace app::classes::Moon::Gui::GizmosChangeColor {
    IL2CPP_REGISTER_METHOD(0x01349560, app::Color, get_PreviousColor, (app::GizmosChangeColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011927A0, void, set_PreviousColor, (app::GizmosChangeColor * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x01988840, void, ctor, (app::GizmosChangeColor * this_ptr, app::Color new_color))
    IL2CPP_REGISTER_METHOD(0x01988940, void, Dispose, (app::GizmosChangeColor * this_ptr))
} // namespace app::classes::Moon::Gui::GizmosChangeColor
