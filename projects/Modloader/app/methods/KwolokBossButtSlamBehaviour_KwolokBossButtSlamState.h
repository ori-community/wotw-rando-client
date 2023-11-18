#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_KwolokBossButtSlamState.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour.h>

namespace app::classes::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState {
    IL2CPP_REGISTER_METHOD(0x0124A6F0, void, ctor, (app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState * this_ptr, app::KwolokBossButtSlamBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState * this_ptr))
} // namespace app::classes::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState
