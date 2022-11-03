#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Gui::GuiChangeContentColor {
    IL2CPP_REGISTER_METHOD(0x01349560, app::Color, get_PreviousColor, (app::GuiChangeContentColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011927A0, void, set_PreviousColor, (app::GuiChangeContentColor * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x01989920, void, ctor, (app::GuiChangeContentColor * this_ptr, app::Color new_color))
    IL2CPP_REGISTER_METHOD(0x019899F0, void, Dispose, (app::GuiChangeContentColor * this_ptr))
} // namespace app::classes::Moon::Gui::GuiChangeContentColor
