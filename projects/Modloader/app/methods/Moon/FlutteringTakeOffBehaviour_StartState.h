#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::FlutteringTakeOffBehaviour_StartState {
    IL2CPP_REGISTER_METHOD(0x01488500, void, ctor, (app::FlutteringTakeOffBehaviour_StartState * this_ptr, app::FlutteringTakeOffBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01488540, void, OnEnter, (app::FlutteringTakeOffBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014888F0, void, UpdateState, (app::FlutteringTakeOffBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01488B90, void, OnExit, (app::FlutteringTakeOffBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01488DB0, void, OnStartTimelineEnded, (app::FlutteringTakeOffBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736B68, FlutteringTakeOffBehaviour_StartState_OnStartTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, (app::FlutteringTakeOffBehaviour_StartState * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x0472E800, FlutteringTakeOffBehaviour_StartState_ProcessRootMotion__MethodInfo)
} // namespace app::classes::Moon::FlutteringTakeOffBehaviour_StartState
