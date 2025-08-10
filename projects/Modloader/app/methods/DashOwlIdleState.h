#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DashOwlEnemy.h>
#include <Modloader/app/structs/DashOwlIdleState.h>

namespace app::classes::DashOwlIdleState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DashOwlIdleState* this_ptr, app::DashOwlEnemy* dash_owl)
    IL2CPP_REGISTER_METHOD(0x00DD1550, void, OnEnter, app::DashOwlIdleState* this_ptr)
} // namespace app::classes::DashOwlIdleState
