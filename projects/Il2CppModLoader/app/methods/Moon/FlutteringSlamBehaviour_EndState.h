#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::FlutteringSlamBehaviour_EndState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringSlamBehaviour_EndState * this_ptr, app::FlutteringSlamBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01485280, void, OnEnter, (app::FlutteringSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::FlutteringSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014856B0, void, OnExit, (app::FlutteringSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014858A0, void, OnEndTimelineEnded, (app::FlutteringSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705628, FlutteringSlamBehaviour_EndState_OnEndTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, (app::FlutteringSlamBehaviour_EndState * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x047088E0, FlutteringSlamBehaviour_EndState_ProcessRootMotion__MethodInfo)
} // namespace app::classes::Moon::FlutteringSlamBehaviour_EndState
