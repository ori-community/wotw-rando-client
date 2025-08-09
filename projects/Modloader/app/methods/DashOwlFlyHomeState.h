#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DashOwlEnemy.h>
#include <Modloader/app/structs/DashOwlFlyHomeState.h>

namespace app::classes::DashOwlFlyHomeState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DashOwlFlyHomeState* this_ptr, app::DashOwlEnemy* dash_owl)
    IL2CPP_REGISTER_METHOD(0x00DD0A00, bool, IsHome, app::DashOwlFlyHomeState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD0A50, void, UpdateState, app::DashOwlFlyHomeState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD0E10, void, OnEnter, app::DashOwlFlyHomeState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD10F0, void, OnExit, app::DashOwlFlyHomeState* this_ptr)
} // namespace app::classes::DashOwlFlyHomeState
