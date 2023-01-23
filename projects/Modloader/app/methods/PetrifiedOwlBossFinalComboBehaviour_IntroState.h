#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_IntroState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_IntroState {
    IL2CPP_REGISTER_METHOD(0x01770D60, void, ctor, (app::PetrifiedOwlBossFinalComboBehaviour_IntroState * this_ptr, app::PetrifiedOwlBossFinalComboBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01770DF0, void, OnEnter, (app::PetrifiedOwlBossFinalComboBehaviour_IntroState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01770F50, void, UpdateState, (app::PetrifiedOwlBossFinalComboBehaviour_IntroState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01771020, void, OnExit, (app::PetrifiedOwlBossFinalComboBehaviour_IntroState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_IntroState
