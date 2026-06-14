#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishBashedState.h>
#include <Modloader/app/structs/FishEnemy.h>

namespace app::classes::FishBashedState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::FishBashedState* this_ptr, app::FishEnemy* fish)
    IL2CPP_REGISTER_METHOD(0x01267060, void, UpdateState, app::FishBashedState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01267270, void, OnEnter, app::FishBashedState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::FishBashedState* this_ptr)
} // namespace app::classes::FishBashedState
