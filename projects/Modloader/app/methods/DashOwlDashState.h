#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DashOwlDashState.h>
#include <Modloader/app/structs/DashOwlEnemy.h>

namespace app::classes::DashOwlDashState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DashOwlDashState * this_ptr, app::DashOwlEnemy* dash_owl))
    IL2CPP_REGISTER_METHOD(0x00DCCD40, void, OnEnter, (app::DashOwlDashState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCBEE0, void, OnExit, (app::DashOwlDashState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCD140, void, UpdateState, (app::DashOwlDashState * this_ptr))
} // namespace app::classes::DashOwlDashState
