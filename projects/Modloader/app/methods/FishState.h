#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishEnemy.h>
#include <Modloader/app/structs/FishState.h>

namespace app::classes::FishState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::FishState* this_ptr, app::FishEnemy* fish)
    IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, app::FishState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, app::FishState* this_ptr)
} // namespace app::classes::FishState
