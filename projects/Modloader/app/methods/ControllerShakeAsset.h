#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ControllerShakeAsset.h>

namespace app::classes::ControllerShakeAsset {
    IL2CPP_REGISTER_METHOD(0x011F2260, float, get_Duration, (app::ControllerShakeAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::ControllerShakeAsset * this_ptr))
} // namespace app::classes::ControllerShakeAsset
