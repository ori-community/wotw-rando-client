#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::CallbackState {
    IL2CPP_REGISTER_METHOD(0x0198B7F0, app::CallbackState*, AddUpdateStateAction, (app::CallbackState * this_ptr, app::Action* update_state_action))
    IL2CPP_REGISTER_METHOD(0x0198B8B0, void, ctor, (app::CallbackState * this_ptr, app::IState_1* state))
    IL2CPP_REGISTER_METHOD(0x0198BD30, void, UpdateState, (app::CallbackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198BDE0, void, OnEnter, (app::CallbackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198BE90, void, OnExit, (app::CallbackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::CallbackState * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::CallbackState
