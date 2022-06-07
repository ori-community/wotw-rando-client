#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::FlutteringTakeOffBehaviour_TurnStartState {
    IL2CPP_REGISTER_METHOD(0x01488F10, void, ctor, (app::FlutteringTakeOffBehaviour_TurnStartState * this_ptr, app::FlutteringTakeOffBehaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x01488F50, void, OnEnter, (app::FlutteringTakeOffBehaviour_TurnStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01489300, void, UpdateState, (app::FlutteringTakeOffBehaviour_TurnStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014895A0, void, OnExit, (app::FlutteringTakeOffBehaviour_TurnStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014881C0, void, OnTurnSlamChargeFinished, (app::FlutteringTakeOffBehaviour_TurnStartState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B8E8, FlutteringTakeOffBehaviour_TurnStartState_OnTurnSlamChargeFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, (app::FlutteringTakeOffBehaviour_TurnStartState * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x04739D00, FlutteringTakeOffBehaviour_TurnStartState_ProcessRootMotion__MethodInfo)
}
