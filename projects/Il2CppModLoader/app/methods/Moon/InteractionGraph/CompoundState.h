#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::CompoundState {
    IL2CPP_REGISTER_METHOD(0x0198C3C0, void, ctor, (app::CompoundState * this_ptr, app::IState_1__Array* states))
    IL2CPP_REGISTER_METHOD(0x0198C840, void, OnEnter, (app::CompoundState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198C9E0, void, OnExit, (app::CompoundState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198CB80, void, UpdateState, (app::CompoundState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::CompoundState * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::CompoundState
