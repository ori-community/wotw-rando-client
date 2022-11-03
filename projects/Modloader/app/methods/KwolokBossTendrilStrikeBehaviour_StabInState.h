#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabInState {
    IL2CPP_REGISTER_METHOD(0x012F0720, void, ctor, (app::KwolokBossTendrilStrikeBehaviour_StabInState * this_ptr, app::KwolokBossTendrilStrikeBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x012F0730, void, OnEnter, (app::KwolokBossTendrilStrikeBehaviour_StabInState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0770, void, UpdateState, (app::KwolokBossTendrilStrikeBehaviour_StabInState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0124A9F0, void, OnExit, (app::KwolokBossTendrilStrikeBehaviour_StabInState * this_ptr))
} // namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabInState
