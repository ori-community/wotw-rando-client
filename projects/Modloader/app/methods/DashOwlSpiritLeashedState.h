#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DashOwlEnemy.h>
#include <Modloader/app/structs/DashOwlSpiritLeashedState.h>

namespace app::classes::DashOwlSpiritLeashedState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DashOwlSpiritLeashedState* this_ptr, app::DashOwlEnemy* dash_owl)
    IL2CPP_REGISTER_METHOD(0x00DD16E0, void, OnEnter, app::DashOwlSpiritLeashedState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD18B0, void, UpdateState, app::DashOwlSpiritLeashedState* this_ptr)
} // namespace app::classes::DashOwlSpiritLeashedState
