#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShieldCircleSetting.h>

namespace app::classes::LaserShieldCircleSetting {
    IL2CPP_REGISTER_METHOD(0x00F08420, void, ctor, app::LaserShieldCircleSetting* this_ptr)
}
