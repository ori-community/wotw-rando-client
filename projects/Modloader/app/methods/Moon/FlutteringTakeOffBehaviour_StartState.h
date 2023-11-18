#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringTakeOffBehaviour_StartState.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::FlutteringTakeOffBehaviour_StartState {
    IL2CPP_REGISTER_METHOD(0x01488500, void, ctor, (app::FlutteringTakeOffBehaviour_StartState * this_ptr, app::FlutteringTakeOffBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01488540, void, OnEnter, (app::FlutteringTakeOffBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014888F0, void, UpdateState, (app::FlutteringTakeOffBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01488B90, void, OnExit, (app::FlutteringTakeOffBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01488DB0, void, OnStartTimelineEnded, (app::FlutteringTakeOffBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, (app::FlutteringTakeOffBehaviour_StartState * this_ptr, app::Vector3 motion))
} // namespace app::classes::Moon::FlutteringTakeOffBehaviour_StartState
