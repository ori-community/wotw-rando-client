#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RammingBehaviour_ChargeSlamState.h>
#include <Modloader/app/structs/RammingBehaviour.h>

namespace app::classes::Moon::RammingBehaviour_ChargeSlamState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RammingBehaviour_ChargeSlamState * this_ptr, app::RammingBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00C501E0, void, OnEnter, (app::RammingBehaviour_ChargeSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RammingBehaviour_ChargeSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingBehaviour_ChargeSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C50380, void, OnSlamChargeFinished, (app::RammingBehaviour_ChargeSlamState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476FC10, RammingBehaviour_ChargeSlamState_OnSlamChargeFinished__MethodInfo)
} // namespace app::classes::Moon::RammingBehaviour_ChargeSlamState
