#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFrustumArtOptimizer.h>

namespace app::classes::CameraFrustumArtOptimizer {
    IL2CPP_REGISTER_METHOD(0x016897F0, void, UpdateList, app::CameraFrustumArtOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01689BB0, void, ctor, app::CameraFrustumArtOptimizer* this_ptr)
} // namespace app::classes::CameraFrustumArtOptimizer
