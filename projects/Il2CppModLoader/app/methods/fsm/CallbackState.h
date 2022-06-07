#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::fsm::CallbackState {
    IL2CPP_REGISTER_METHOD(0x00F6CC00, app::CallbackState_1 *, AddUpdateStateAction, (app::CallbackState_1 * this_ptr, app::Action * update_state_action))
    IL2CPP_REGISTER_METHOD(0x00F6CCC0, void, ctor, (app::CallbackState_1 * this_ptr, app::IState_2 * state))
    IL2CPP_REGISTER_METHOD(0x00F6D140, void, UpdateState, (app::CallbackState_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6D1F0, void, OnEnter, (app::CallbackState_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6D2A0, void, OnExit, (app::CallbackState_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::CallbackState_1 * this_ptr))
}
