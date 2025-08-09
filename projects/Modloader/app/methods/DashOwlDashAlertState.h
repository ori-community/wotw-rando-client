#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DashOwlDashAlertState.h>
#include <Modloader/app/structs/DashOwlEnemy.h>

namespace app::classes::DashOwlDashAlertState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DashOwlDashAlertState* this_ptr, app::DashOwlEnemy* dash_owl)
    IL2CPP_REGISTER_METHOD(0x00DCCB40, void, OnEnter, app::DashOwlDashAlertState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00728810, void, UpdateState, app::DashOwlDashAlertState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DCBEE0, void, OnExit, app::DashOwlDashAlertState* this_ptr)
} // namespace app::classes::DashOwlDashAlertState
