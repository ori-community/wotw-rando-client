#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NormalBackwardsCutsceneState.h>

namespace app::classes::NormalBackwardsCutsceneState {
    IL2CPP_REGISTER_METHOD(0x0060BDF0, void, OnEnter, (app::NormalBackwardsCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060BF20, void, OnExit, (app::NormalBackwardsCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C050, void, ctor, (app::NormalBackwardsCutsceneState * this_ptr))
} // namespace app::classes::NormalBackwardsCutsceneState
