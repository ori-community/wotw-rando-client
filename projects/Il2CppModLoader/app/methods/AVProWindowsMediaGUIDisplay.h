#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AVProWindowsMediaGUIDisplay {
    IL2CPP_REGISTER_METHOD(0x0312BF00, void, OnGUI, (app::AVProWindowsMediaGUIDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312C2C0, app::Rect, GetRect, (app::AVProWindowsMediaGUIDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312C550, void, ctor, (app::AVProWindowsMediaGUIDisplay * this_ptr))
}
