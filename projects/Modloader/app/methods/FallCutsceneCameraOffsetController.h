#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FallCutsceneCameraOffsetController {
    IL2CPP_REGISTER_METHOD(0x00996570, void, FixedUpdate, (app::FallCutsceneCameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009967F0, void, ctor, (app::FallCutsceneCameraOffsetController * this_ptr))
} // namespace app::classes::FallCutsceneCameraOffsetController
