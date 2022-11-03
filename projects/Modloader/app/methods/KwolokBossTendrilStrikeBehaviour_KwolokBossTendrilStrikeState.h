#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState {
    IL2CPP_REGISTER_METHOD(0x012F0660, void, ctor, (app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * this_ptr, app::KwolokBossTendrilStrikeBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState * this_ptr))
} // namespace app::classes::KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState
