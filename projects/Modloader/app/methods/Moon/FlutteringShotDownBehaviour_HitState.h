#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_HitState.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::FlutteringShotDownBehaviour_HitState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringShotDownBehaviour_HitState * this_ptr, app::FlutteringShotDownBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01483850, void, OnEnter, (app::FlutteringShotDownBehaviour_HitState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::FlutteringShotDownBehaviour_HitState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01483BA0, void, OnExit, (app::FlutteringShotDownBehaviour_HitState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01483D90, void, OnStartTimelineEnded, (app::FlutteringShotDownBehaviour_HitState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047419F8, FlutteringShotDownBehaviour_HitState_OnStartTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, (app::FlutteringShotDownBehaviour_HitState * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x0478D0F8, FlutteringShotDownBehaviour_HitState_ProcessRootMotion__MethodInfo)
} // namespace app::classes::Moon::FlutteringShotDownBehaviour_HitState
