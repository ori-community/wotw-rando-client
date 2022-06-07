#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DashOwlState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DashOwlState * this_ptr, app::DashOwlEnemy * dash_owl))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::DashOwlState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::DashOwlState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::DashOwlState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (app::DashOwlState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::DashOwlState * this_ptr))
}
