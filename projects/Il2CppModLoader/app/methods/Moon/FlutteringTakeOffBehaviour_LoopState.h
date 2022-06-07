#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::FlutteringTakeOffBehaviour_LoopState {
    IL2CPP_REGISTER_METHOD(0x01488200, void, ctor, (app::FlutteringTakeOffBehaviour_LoopState * this_ptr, app::FlutteringTakeOffBehaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x01488250, void, OnEnter, (app::FlutteringTakeOffBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014883C0, void, UpdateState, (app::FlutteringTakeOffBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014884D0, void, OnExit, (app::FlutteringTakeOffBehaviour_LoopState * this_ptr))
}
