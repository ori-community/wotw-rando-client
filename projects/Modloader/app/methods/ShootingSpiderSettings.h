#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShootingSpiderSettings.h>

namespace app::classes::ShootingSpiderSettings {
    IL2CPP_REGISTER_METHOD(0x005BD9F0, void, ctor, app::ShootingSpiderSettings* this_ptr)
}
