#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_SwoopState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_SwoopState {
    IL2CPP_REGISTER_METHOD(0x017723D0, void, ctor, (app::PetrifiedOwlBossFinalComboBehaviour_SwoopState * this_ptr, app::PetrifiedOwlBossFinalComboBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01772460, void, OnEnter, (app::PetrifiedOwlBossFinalComboBehaviour_SwoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01772640, void, UpdateState, (app::PetrifiedOwlBossFinalComboBehaviour_SwoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01772750, void, OnExit, (app::PetrifiedOwlBossFinalComboBehaviour_SwoopState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_SwoopState
