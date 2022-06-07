#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DashOwlIdleState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DashOwlIdleState * this_ptr, app::DashOwlEnemy * dash_owl))
    IL2CPP_REGISTER_METHOD(0x00DD1550, void, OnEnter, (app::DashOwlIdleState * this_ptr))
}
