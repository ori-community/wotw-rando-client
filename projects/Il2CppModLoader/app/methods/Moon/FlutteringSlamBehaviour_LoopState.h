#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::FlutteringSlamBehaviour_LoopState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringSlamBehaviour_LoopState * this_ptr, app::FlutteringSlamBehaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x014859B0, void, OnEnter, (app::FlutteringSlamBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014859E0, void, UpdateState, (app::FlutteringSlamBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FlutteringSlamBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01485AB0, void, OnReachedGround, (app::FlutteringSlamBehaviour_LoopState * this_ptr))
}
