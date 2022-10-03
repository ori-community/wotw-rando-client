#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XboxLiveLoginScreen {
    IL2CPP_REGISTER_METHOD(0x00596340, app::String*, get_Code, ())
    IL2CPP_REGISTER_METHOD(0x005963C0, void, set_Code, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x00596450, app::String*, get_Url, ())
    IL2CPP_REGISTER_METHOD(0x005964D0, void, set_Url, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x00596560, void, OnEnable, (app::XboxLiveLoginScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00596810, void, OnDisable, (app::XboxLiveLoginScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00596900, void, Update, (app::XboxLiveLoginScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00596D60, void, ShowHandler, (app::String * url, app::String* code, app::CancellationTokenSource* cancellation_token_source))
    IL2CPP_REGISTER_METHODINFO(0x0475BB10, XboxLiveLoginScreen_ShowHandler__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::XboxLiveLoginScreen * this_ptr))
} // namespace app::classes::XboxLiveLoginScreen
