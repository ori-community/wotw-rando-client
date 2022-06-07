#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SlugState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SlugState * this_ptr, app::SlugEnemy * slug))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::SlugState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::SlugState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SlugState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::SlugState * this_ptr))
}
