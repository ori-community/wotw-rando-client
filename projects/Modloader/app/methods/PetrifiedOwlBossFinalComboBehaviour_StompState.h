#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_StompState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_StompState {
    IL2CPP_REGISTER_METHOD(0x01771BE0, void, ctor, (app::PetrifiedOwlBossFinalComboBehaviour_StompState * this_ptr, app::PetrifiedOwlBossFinalComboBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01771C70, void, OnEnter, (app::PetrifiedOwlBossFinalComboBehaviour_StompState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017720F0, void, UpdateState, (app::PetrifiedOwlBossFinalComboBehaviour_StompState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017721D0, void, OnExit, (app::PetrifiedOwlBossFinalComboBehaviour_StompState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017723B0, void, OnStompDestructionEvent, (app::PetrifiedOwlBossFinalComboBehaviour_StompState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_StompState
