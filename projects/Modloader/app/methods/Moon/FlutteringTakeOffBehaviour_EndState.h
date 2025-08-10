#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringTakeOffBehaviour.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_EndState.h>

namespace app::classes::Moon::FlutteringTakeOffBehaviour_EndState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::FlutteringTakeOffBehaviour_EndState* this_ptr, app::FlutteringTakeOffBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x01487E10, void, OnEnter, app::FlutteringTakeOffBehaviour_EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, app::FlutteringTakeOffBehaviour_EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01488000, void, OnExit, app::FlutteringTakeOffBehaviour_EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014881C0, void, OnEndTimelineEnded, app::FlutteringTakeOffBehaviour_EndState* this_ptr)
} // namespace app::classes::Moon::FlutteringTakeOffBehaviour_EndState
