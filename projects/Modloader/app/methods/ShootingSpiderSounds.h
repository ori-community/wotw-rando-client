#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShootingSpiderSounds.h>

namespace app::classes::ShootingSpiderSounds {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ShootingSpiderSounds * this_ptr))
}
