#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::RammingBehaviour_TurnChargeSlamState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RammingBehaviour_TurnChargeSlamState * this_ptr, app::RammingBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00C53650, void, OnEnter, (app::RammingBehaviour_TurnChargeSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RammingBehaviour_TurnChargeSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingBehaviour_TurnChargeSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C50380, void, OnTurnSlamChargeFinished, (app::RammingBehaviour_TurnChargeSlamState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776FF8, RammingBehaviour_TurnChargeSlamState_OnTurnSlamChargeFinished__MethodInfo)
} // namespace app::classes::Moon::RammingBehaviour_TurnChargeSlamState
