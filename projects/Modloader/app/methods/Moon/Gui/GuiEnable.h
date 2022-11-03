#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Gui::GuiEnable {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_PreviousState, (app::GuiEnable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_PreviousState, (app::GuiEnable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01989AA0, void, ctor, (app::GuiEnable * this_ptr, bool new_state))
    IL2CPP_REGISTER_METHOD(0x01989BC0, void, Dispose, (app::GuiEnable * this_ptr))
} // namespace app::classes::Moon::Gui::GuiEnable
