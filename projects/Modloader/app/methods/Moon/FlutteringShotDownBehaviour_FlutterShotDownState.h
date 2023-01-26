#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringShotDownBehaviour_FlutterShotDownState.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour.h>

namespace app::classes::Moon::FlutteringShotDownBehaviour_FlutterShotDownState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringShotDownBehaviour_FlutterShotDownState * this_ptr, app::FlutteringShotDownBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::FlutteringShotDownBehaviour_FlutterShotDownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::FlutteringShotDownBehaviour_FlutterShotDownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::FlutteringShotDownBehaviour_FlutterShotDownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FlutteringShotDownBehaviour_FlutterShotDownState * this_ptr))
} // namespace app::classes::Moon::FlutteringShotDownBehaviour_FlutterShotDownState
