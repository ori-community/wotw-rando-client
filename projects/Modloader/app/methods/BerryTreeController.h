#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BerryTreeController.h>

namespace app::classes::BerryTreeController {
    IL2CPP_REGISTER_METHOD(0x00F9E920, void, Start, (app::BerryTreeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9EAD0, void, OnAnimationEnd, (app::BerryTreeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9EC60, void, PlayerCollisionTrigger, (app::BerryTreeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9F0C0, void, SwapCharacters, (app::BerryTreeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BerryTreeController * this_ptr))
} // namespace app::classes::BerryTreeController
