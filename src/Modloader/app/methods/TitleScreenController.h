#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleScreenController.h>

namespace app::classes::TitleScreenController {
    IL2CPP_REGISTER_METHOD(0x00AF73E0, void, FixedUpdate, app::TitleScreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TitleScreenController* this_ptr)
} // namespace app::classes::TitleScreenController
