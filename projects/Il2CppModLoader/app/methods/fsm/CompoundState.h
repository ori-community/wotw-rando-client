#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::fsm::CompoundState {
    IL2CPP_REGISTER_METHOD(0x00F6D490, void, ctor, (app::CompoundState_1 * this_ptr, app::IState_2__Array * states))
    IL2CPP_REGISTER_METHOD(0x00F6D910, void, OnEnter, (app::CompoundState_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6DAB0, void, OnExit, (app::CompoundState_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6DC50, void, UpdateState, (app::CompoundState_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::CompoundState_1 * this_ptr))
}
