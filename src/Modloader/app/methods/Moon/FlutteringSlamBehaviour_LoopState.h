#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringSlamBehaviour.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour_LoopState.h>

namespace app::classes::Moon::FlutteringSlamBehaviour_LoopState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::FlutteringSlamBehaviour_LoopState* this_ptr, app::FlutteringSlamBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x014859B0, void, OnEnter, app::FlutteringSlamBehaviour_LoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014859E0, void, UpdateState, app::FlutteringSlamBehaviour_LoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::FlutteringSlamBehaviour_LoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01485AB0, void, OnReachedGround, app::FlutteringSlamBehaviour_LoopState* this_ptr)
} // namespace app::classes::Moon::FlutteringSlamBehaviour_LoopState
