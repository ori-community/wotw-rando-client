#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TestWindow.h>
#include <Modloader/app/structs/TestWindow_State__Enum.h>

namespace app::classes::TestWindow {
    IL2CPP_REGISTER_METHOD(0x010E09F0, void, Show, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E0EA0, void, Hide, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E1340, void, Awake, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E1370, void, ChangeState, (app::TestWindow * this_ptr, app::TestWindow_State__Enum state))
    IL2CPP_REGISTER_METHODINFO(0x0475F260, TestWindow_ChangeState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E14F0, void, EnterLeftMenu, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E1530, void, EnterRightMenu, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E1570, void, ExitLeftMenu, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E15B0, void, ExitRightMenu, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E15F0, void, FixedUpdate, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708B50, TestWindow_FixedUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateLeftMenu, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateRightMenu, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E16A0, void, ToggleMenuCallback, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047124B0, TestWindow_ToggleMenuCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E16C0, void, SwitchWindowCallback, (app::TestWindow * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047623B8, TestWindow_SwitchWindowCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E17A0, void, ctor, (app::TestWindow * this_ptr))
} // namespace app::classes::TestWindow
