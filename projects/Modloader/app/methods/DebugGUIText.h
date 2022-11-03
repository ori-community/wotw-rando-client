#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DebugGUIText {
    IL2CPP_REGISTER_METHOD(0x00DE43A0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x00DE4440, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x00DE4540, void, EnsureImguiRegistered, (app::DebugGUIText * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x00DE4640, void, add_OnEnabledChangedEvent, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x00DE4780, void, remove_OnEnabledChangedEvent, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x00DE48C0, void, Awake, (app::DebugGUIText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE4B50, void, EnsureBuildInfo, (app::DebugGUIText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE4BA0, void, OnGUI, (app::DebugGUIText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE5200, void, OnDestroy, (app::DebugGUIText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE54B0, void, OnEnabledChanged, (app::DebugGUIText * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C718, DebugGUIText_OnEnabledChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DebugGUIText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE56E0, void, cctor, ())
} // namespace app::classes::DebugGUIText
