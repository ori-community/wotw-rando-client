#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DashOwlHurtState.h>
#include <Modloader/app/structs/DashOwlEnemy.h>

namespace app::classes::DashOwlHurtState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DashOwlHurtState * this_ptr, app::DashOwlEnemy* dash_owl))
    IL2CPP_REGISTER_METHOD(0x00DD1180, void, OnEnter, (app::DashOwlHurtState * this_ptr))
} // namespace app::classes::DashOwlHurtState
