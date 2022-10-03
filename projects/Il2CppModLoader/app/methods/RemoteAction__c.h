#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RemoteAction___c {
    IL2CPP_REGISTER_METHOD(0x02EA1DF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoteAction_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EA1F30, void, _StartCheckingThread_b__8_0, (app::RemoteAction_c * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785208, RemoteAction_c__StartCheckingThread_b__8_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EA2370, void, _StartCheckingThread_b__8_1, (app::RemoteAction_c * this_ptr, app::ActionStatesCallback* callback))
    IL2CPP_REGISTER_METHODINFO(0x0473E218, RemoteAction_c__StartCheckingThread_b__8_1__MethodInfo)
} // namespace app::classes::RemoteAction___c
