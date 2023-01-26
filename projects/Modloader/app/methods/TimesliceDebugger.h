#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/TimesliceDebugger.h>

namespace app::classes::TimesliceDebugger {
    IL2CPP_REGISTER_METHOD(0x00AF2610, app::GUIStyle*, get_LabelStyle, (app::TimesliceDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF2980, app::TimesliceDebugger*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00AF2A00, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x00AF2AB0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x00AF2C50, void, EnsureImgui, (app::TimesliceDebugger * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x00AF2D40, void, Awake, (app::TimesliceDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF2DF0, void, OnDestroy, (app::TimesliceDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF2EA0, void, Update, (app::TimesliceDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF34B0, void, OnGUI, (app::TimesliceDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimesliceDebugger * this_ptr))
} // namespace app::classes::TimesliceDebugger
