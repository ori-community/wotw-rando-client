#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_LandState.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour.h>

namespace app::classes::PetrifiedOwlBossJumpAndSlamBehaviour_LandState {
    IL2CPP_REGISTER_METHOD(0x017754C0, void, ctor, (app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState * this_ptr, app::PetrifiedOwlBossJumpAndSlamBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01775550, void, OnEnter, (app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01775700, void, OnExit, (app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017757A0, void, OnLandTimelineFinished, (app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossJumpAndSlamBehaviour_LandState
