#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::FlutteringSlamBehaviour_FlutterSlamState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringSlamBehaviour_FlutterSlamState * this_ptr, app::FlutteringSlamBehaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::FlutteringSlamBehaviour_FlutterSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::FlutteringSlamBehaviour_FlutterSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::FlutteringSlamBehaviour_FlutterSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FlutteringSlamBehaviour_FlutterSlamState * this_ptr))
}
