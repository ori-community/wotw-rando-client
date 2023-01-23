#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacySpring.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::LegacySpring {
    IL2CPP_REGISTER_METHOD(0x00A377C0, void, OnCollisionEnter, (app::LegacySpring * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LegacySpring * this_ptr))
} // namespace app::classes::LegacySpring
