#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AVProWindowsMediaGUIDisplay.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::AVProWindowsMediaGUIDisplay {
    IL2CPP_REGISTER_METHOD(0x0312BF00, void, OnGUI, app::AVProWindowsMediaGUIDisplay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312C2C0, app::Rect, GetRect, app::AVProWindowsMediaGUIDisplay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312C550, void, ctor, app::AVProWindowsMediaGUIDisplay* this_ptr)
} // namespace app::classes::AVProWindowsMediaGUIDisplay
