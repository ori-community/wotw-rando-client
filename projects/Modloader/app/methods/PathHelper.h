#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PathHelper {
    IL2CPP_REGISTER_METHOD(0x00447EE0, app::Vector3, CalculateBeizer, app::Vector3 a, app::Vector3 b, app::Vector3 c, app::Vector3 d, float r)
}
