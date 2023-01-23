#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinCutsceneMovement.h>
#include <Modloader/app/structs/PlatformMovement.h>

namespace app::classes::SeinCutsceneMovement {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinCutsceneMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinCutsceneMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3D20, void, FixedUpdate, (app::SeinCutsceneMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::SeinCutsceneMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SeinCutsceneMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinCutsceneMovement * this_ptr))
} // namespace app::classes::SeinCutsceneMovement
