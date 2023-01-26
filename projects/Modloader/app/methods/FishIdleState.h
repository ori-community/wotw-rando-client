#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishIdleState.h>
#include <Modloader/app/structs/FishEnemy.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::FishIdleState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FishIdleState * this_ptr, app::FishEnemy* fish))
    IL2CPP_REGISTER_METHOD(0x0126BF40, app::Vector3, get_WanderTargetPosition, (app::FishIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126C0C0, void, UpdateState, (app::FishIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126C950, void, OnEnter, (app::FishIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FishIdleState * this_ptr))
} // namespace app::classes::FishIdleState
