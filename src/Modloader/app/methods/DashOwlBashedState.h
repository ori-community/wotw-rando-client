#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DashOwlBashedState.h>
#include <Modloader/app/structs/DashOwlEnemy.h>

namespace app::classes::DashOwlBashedState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DashOwlBashedState* this_ptr, app::DashOwlEnemy* dash_owl)
    IL2CPP_REGISTER_METHOD(0x00DCBD90, void, OnEnter, app::DashOwlBashedState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DCBEE0, void, OnExit, app::DashOwlBashedState* this_ptr)
} // namespace app::classes::DashOwlBashedState
