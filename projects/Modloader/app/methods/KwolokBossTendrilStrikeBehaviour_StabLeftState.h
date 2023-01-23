#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour_StabLeftState.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour.h>

namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabLeftState {
    IL2CPP_REGISTER_METHOD(0x012F0720, void, ctor, (app::KwolokBossTendrilStrikeBehaviour_StabLeftState * this_ptr, app::KwolokBossTendrilStrikeBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x012F0890, void, OnEnter, (app::KwolokBossTendrilStrikeBehaviour_StabLeftState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F08D0, void, UpdateState, (app::KwolokBossTendrilStrikeBehaviour_StabLeftState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F09D0, void, OnExit, (app::KwolokBossTendrilStrikeBehaviour_StabLeftState * this_ptr))
} // namespace app::classes::KwolokBossTendrilStrikeBehaviour_StabLeftState
