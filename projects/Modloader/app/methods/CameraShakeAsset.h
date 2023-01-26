#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraShakeAsset.h>

namespace app::classes::CameraShakeAsset {
    IL2CPP_REGISTER_METHOD(0x00B1D590, float, get_Duration, (app::CameraShakeAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1D780, void, ClearDurationCache, (app::CameraShakeAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::CameraShakeAsset * this_ptr))
} // namespace app::classes::CameraShakeAsset
