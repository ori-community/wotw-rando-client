#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ShrineCombat_IdleState {
    IL2CPP_REGISTER_METHOD(0x0073CAB0, void, ctor, (app::ShrineCombat_IdleState * this_ptr, app::ShrineCombat* combat_shrine))
    IL2CPP_REGISTER_METHOD(0x0073CAE0, void, OnEnter, (app::ShrineCombat_IdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073CB70, void, UpdateState, (app::ShrineCombat_IdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073D080, void, OnExit, (app::ShrineCombat_IdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073D0A0, void, StartArena, (app::ShrineCombat_IdleState * this_ptr))
} // namespace app::classes::ShrineCombat_IdleState
