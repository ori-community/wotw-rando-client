#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabRightState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour.h>

namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabRightState {
    IL2CPP_REGISTER_METHOD(0x012F0720, void, ctor, (app::KwolokBossTendrilStrikeBehaviour_StabRightState * this_ptr, app::KwolokBossTendrilStrikeBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x012F0AC0, void, OnEnter, (app::KwolokBossTendrilStrikeBehaviour_StabRightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0B00, void, UpdateState, (app::KwolokBossTendrilStrikeBehaviour_StabRightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0C00, void, OnExit, (app::KwolokBossTendrilStrikeBehaviour_StabRightState * this_ptr))
} // namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabRightState
