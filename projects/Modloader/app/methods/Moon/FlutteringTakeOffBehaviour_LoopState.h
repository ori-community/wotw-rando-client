#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringTakeOffBehaviour_LoopState.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour.h>

namespace app::classes::Moon::FlutteringTakeOffBehaviour_LoopState {
    IL2CPP_REGISTER_METHOD(0x01488200, void, ctor, (app::FlutteringTakeOffBehaviour_LoopState * this_ptr, app::FlutteringTakeOffBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01488250, void, OnEnter, (app::FlutteringTakeOffBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014883C0, void, UpdateState, (app::FlutteringTakeOffBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014884D0, void, OnExit, (app::FlutteringTakeOffBehaviour_LoopState * this_ptr))
} // namespace app::classes::Moon::FlutteringTakeOffBehaviour_LoopState
