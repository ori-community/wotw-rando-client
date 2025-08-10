#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossButtSlamBehaviour.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_PositioningState.h>

namespace app::classes::KwolokBossButtSlamBehaviour_PositioningState {
    IL2CPP_REGISTER_METHOD(0x0124A2D0, void, ctor, app::KwolokBossButtSlamBehaviour_PositioningState* this_ptr, app::KwolokBossButtSlamBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x0124A7B0, void, OnEnter, app::KwolokBossButtSlamBehaviour_PositioningState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124A810, void, UpdateState, app::KwolokBossButtSlamBehaviour_PositioningState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124A9F0, void, OnExit, app::KwolokBossButtSlamBehaviour_PositioningState* this_ptr)
} // namespace app::classes::KwolokBossButtSlamBehaviour_PositioningState
