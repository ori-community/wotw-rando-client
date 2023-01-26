#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CutsceneController.h>
#include <Modloader/app/structs/CutsceneState.h>

namespace app::classes::CutsceneController {
    IL2CPP_REGISTER_METHOD(0x00DBE1C0, void, Start, (app::CutsceneController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBE1D0, void, FixedUpdate, (app::CutsceneController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBE3E0, void, ChangeState, (app::CutsceneController * this_ptr, app::CutsceneState* state))
    IL2CPP_REGISTER_METHOD(0x00DBE550, void, Awake, (app::CutsceneController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CutsceneController * this_ptr))
} // namespace app::classes::CutsceneController
