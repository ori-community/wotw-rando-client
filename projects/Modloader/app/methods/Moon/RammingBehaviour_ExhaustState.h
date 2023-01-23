#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/RammingBehaviour_ExhaustState.h>
#include <Modloader/app/structs/RammingBehaviour.h>

namespace app::classes::Moon::RammingBehaviour_ExhaustState {
    IL2CPP_REGISTER_METHOD(0x00C52540, app::String*, get_StateName, (app::RammingBehaviour_ExhaustState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C525C0, void, ctor, (app::RammingBehaviour_ExhaustState * this_ptr, app::RammingBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00C52600, void, OnEnter, (app::RammingBehaviour_ExhaustState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C52830, void, UpdateState, (app::RammingBehaviour_ExhaustState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C52890, void, OnExit, (app::RammingBehaviour_ExhaustState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C52A60, void, OnTransitionFinished, (app::RammingBehaviour_ExhaustState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047454C8, RammingBehaviour_ExhaustState_OnTransitionFinished__MethodInfo)
} // namespace app::classes::Moon::RammingBehaviour_ExhaustState
