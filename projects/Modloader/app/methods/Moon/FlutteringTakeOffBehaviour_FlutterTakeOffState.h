#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::FlutteringTakeOffBehaviour_FlutterTakeOffState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringTakeOffBehaviour_FlutterTakeOffState * this_ptr, app::FlutteringTakeOffBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::FlutteringTakeOffBehaviour_FlutterTakeOffState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::FlutteringTakeOffBehaviour_FlutterTakeOffState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::FlutteringTakeOffBehaviour_FlutterTakeOffState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FlutteringTakeOffBehaviour_FlutterTakeOffState * this_ptr))
} // namespace app::classes::Moon::FlutteringTakeOffBehaviour_FlutterTakeOffState
