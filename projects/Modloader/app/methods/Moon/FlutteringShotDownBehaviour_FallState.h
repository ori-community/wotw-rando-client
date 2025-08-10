#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringShotDownBehaviour.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_FallState.h>

namespace app::classes::Moon::FlutteringShotDownBehaviour_FallState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::FlutteringShotDownBehaviour_FallState* this_ptr, app::FlutteringShotDownBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x01483730, void, OnEnter, app::FlutteringShotDownBehaviour_FallState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01483760, void, UpdateState, app::FlutteringShotDownBehaviour_FallState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::FlutteringShotDownBehaviour_FallState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01483800, void, OnReachedGround, app::FlutteringShotDownBehaviour_FallState* this_ptr)
} // namespace app::classes::Moon::FlutteringShotDownBehaviour_FallState
