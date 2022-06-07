#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FishState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FishState * this_ptr, app::FishEnemy * fish))
    IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (app::FishState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::FishState * this_ptr))
}
