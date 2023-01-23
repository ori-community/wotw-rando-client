#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour_StartState.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::FlutteringSlamBehaviour_StartState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringSlamBehaviour_StartState * this_ptr, app::FlutteringSlamBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01485BA0, void, OnEnter, (app::FlutteringSlamBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01485EB0, void, UpdateState, (app::FlutteringSlamBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01486090, void, OnExit, (app::FlutteringSlamBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01486280, void, OnStartTimelineEnded, (app::FlutteringSlamBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758310, FlutteringSlamBehaviour_StartState_OnStartTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, (app::FlutteringSlamBehaviour_StartState * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x047936B8, FlutteringSlamBehaviour_StartState_ProcessRootMotion__MethodInfo)
} // namespace app::classes::Moon::FlutteringSlamBehaviour_StartState
