#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/State_2.h>

namespace app::classes::fsm::State {
    IL2CPP_REGISTER_METHOD(0x00B8BEC0, void, UpdateState, (app::State_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6DFB0, void, OnEnter, (app::State_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6DFD0, void, OnExit, (app::State_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6DFF0, void, ctor_1, (app::State_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6E460, void, ctor_2, (app::State_2 * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, SetID, (app::State_2 * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetStateId, (app::State_2 * this_ptr))
} // namespace app::classes::fsm::State
