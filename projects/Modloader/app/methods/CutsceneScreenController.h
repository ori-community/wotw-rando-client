#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CutsceneScreenController.h>

namespace app::classes::CutsceneScreenController {
    IL2CPP_REGISTER_METHOD(0x00DBEB70, void, Awake, app::CutsceneScreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBEC00, void, OnDestroy, app::CutsceneScreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CutsceneScreenController* this_ptr)
} // namespace app::classes::CutsceneScreenController
