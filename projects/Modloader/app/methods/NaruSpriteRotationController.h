#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NaruSpriteRotationController.h>

namespace app::classes::NaruSpriteRotationController {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (app::NaruSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (app::NaruSpriteRotationController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008872D0, void, Awake, (app::NaruSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00887340, void, Start, (app::NaruSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00887490, void, FixedUpdate, (app::NaruSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::NaruSpriteRotationController * this_ptr))
} // namespace app::classes::NaruSpriteRotationController
