#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::QuaternionExt {
    IL2CPP_REGISTER_METHOD(0x00E87010, app::Quaternion, EulerZ, (float degrees))
}
