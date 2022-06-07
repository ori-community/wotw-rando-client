#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Gui::GuiChangeBackgroundColor {
    IL2CPP_REGISTER_METHOD(0x01349560, app::Color, get_PreviousColor, (app::GuiChangeBackgroundColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011927A0, void, set_PreviousColor, (app::GuiChangeBackgroundColor * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x01989620, void, ctor, (app::GuiChangeBackgroundColor * this_ptr, app::Color new_color))
    IL2CPP_REGISTER_METHOD(0x019896F0, void, Dispose, (app::GuiChangeBackgroundColor * this_ptr))
}
