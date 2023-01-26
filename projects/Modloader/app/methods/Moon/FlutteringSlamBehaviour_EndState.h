#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringSlamBehaviour_EndState.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::FlutteringSlamBehaviour_EndState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringSlamBehaviour_EndState * this_ptr, app::FlutteringSlamBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01485280, void, OnEnter, (app::FlutteringSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::FlutteringSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014856B0, void, OnExit, (app::FlutteringSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014858A0, void, OnEndTimelineEnded, (app::FlutteringSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, (app::FlutteringSlamBehaviour_EndState * this_ptr, app::Vector3 motion))
} // namespace app::classes::Moon::FlutteringSlamBehaviour_EndState
