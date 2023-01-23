#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DashOwlBounceState.h>
#include <Modloader/app/structs/DashOwlEnemy.h>

namespace app::classes::DashOwlBounceState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DashOwlBounceState * this_ptr, app::DashOwlEnemy* dash_owl))
    IL2CPP_REGISTER_METHOD(0x00DCBF20, void, UpdateState, (app::DashOwlBounceState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCC0C0, void, OnEnter, (app::DashOwlBounceState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCBEE0, void, OnExit, (app::DashOwlBounceState * this_ptr))
} // namespace app::classes::DashOwlBounceState
