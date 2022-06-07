#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::InteractionGraph::State {
    IL2CPP_REGISTER_METHOD(0x00B8BEC0, void, UpdateState, (app::State_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6DFB0, void, OnEnter, (app::State_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6DFD0, void, OnExit, (app::State_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01991590, void, ctor_1, (app::State_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01991A00, void, ctor_2, (app::State_1 * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, SetID, (app::State_1 * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetStateId, (app::State_1 * this_ptr))
}
