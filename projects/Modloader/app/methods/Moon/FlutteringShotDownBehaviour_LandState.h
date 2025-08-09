#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringShotDownBehaviour.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_LandState.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::FlutteringShotDownBehaviour_LandState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::FlutteringShotDownBehaviour_LandState* this_ptr, app::FlutteringShotDownBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x01483DE0, void, OnEnter, app::FlutteringShotDownBehaviour_LandState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, app::FlutteringShotDownBehaviour_LandState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014840F0, void, OnExit, app::FlutteringShotDownBehaviour_LandState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014842E0, void, OnLandTimelineEnded, app::FlutteringShotDownBehaviour_LandState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, app::FlutteringShotDownBehaviour_LandState* this_ptr, app::Vector3 motion)
} // namespace app::classes::Moon::FlutteringShotDownBehaviour_LandState
