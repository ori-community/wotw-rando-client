#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabRightOutState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour.h>

namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabRightOutState {
    IL2CPP_REGISTER_METHOD(0x012F0720, void, ctor, (app::KwolokBossTendrilStrikeBehaviour_StabRightOutState * this_ptr, app::KwolokBossTendrilStrikeBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x012F0A00, void, OnEnter, (app::KwolokBossTendrilStrikeBehaviour_StabRightOutState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0A40, void, UpdateState, (app::KwolokBossTendrilStrikeBehaviour_StabRightOutState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0A90, void, OnExit, (app::KwolokBossTendrilStrikeBehaviour_StabRightOutState * this_ptr))
} // namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabRightOutState
