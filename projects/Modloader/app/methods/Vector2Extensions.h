#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Vector2Extensions {
    IL2CPP_REGISTER_METHOD(0x013BB000, app::Vector2, Rotate, (app::Vector2 v, float degrees))
}
