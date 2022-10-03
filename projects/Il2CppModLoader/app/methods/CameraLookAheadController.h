#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraLookAheadController {
    IL2CPP_REGISTER_METHOD(0x01692AC0, void, Update, (app::CameraLookAheadController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005100F0, void, Activate, (app::CameraLookAheadController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01692E90, void, Deactivate, (app::CameraLookAheadController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01692F90, void, ctor, (app::CameraLookAheadController * this_ptr))
} // namespace app::classes::CameraLookAheadController
