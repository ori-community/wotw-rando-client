#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabLeftOutState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour.h>

namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabLeftOutState {
    IL2CPP_REGISTER_METHOD(0x012F0720, void, ctor, (app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState * this_ptr, app::KwolokBossTendrilStrikeBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x012F07D0, void, OnEnter, (app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0810, void, UpdateState, (app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0860, void, OnExit, (app::KwolokBossTendrilStrikeBehaviour_StabLeftOutState * this_ptr))
} // namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabLeftOutState
