#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossButtSlamBehaviour.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_AttackState.h>

namespace app::classes::KwolokBossButtSlamBehaviour_AttackState {
    IL2CPP_REGISTER_METHOD(0x0124A2D0, void, ctor, app::KwolokBossButtSlamBehaviour_AttackState* this_ptr, app::KwolokBossButtSlamBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x0124A2E0, void, OnEnter, app::KwolokBossButtSlamBehaviour_AttackState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124A4D0, void, OnExit, app::KwolokBossButtSlamBehaviour_AttackState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124A6C0, void, OnButtSlamTimelineEnded, app::KwolokBossButtSlamBehaviour_AttackState* this_ptr)
} // namespace app::classes::KwolokBossButtSlamBehaviour_AttackState
