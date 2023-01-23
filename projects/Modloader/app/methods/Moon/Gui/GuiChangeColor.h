#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GuiChangeColor.h>

namespace app::classes::Moon::Gui::GuiChangeColor {
    IL2CPP_REGISTER_METHOD(0x01349560, app::Color, get_PreviousColor, (app::GuiChangeColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011927A0, void, set_PreviousColor, (app::GuiChangeColor * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x019897A0, void, ctor, (app::GuiChangeColor * this_ptr, app::Color new_color))
    IL2CPP_REGISTER_METHOD(0x01989870, void, Dispose, (app::GuiChangeColor * this_ptr))
} // namespace app::classes::Moon::Gui::GuiChangeColor
