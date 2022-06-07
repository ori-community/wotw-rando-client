#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Game::ScrollLocks {
    IL2CPP_REGISTER_METHOD(0x01527950, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01527BF0, void, Register, (app::CameraScrollLock * camera_scroll_lock))
    IL2CPP_REGISTER_METHOD(0x01527CB0, void, Unregister, (app::CameraScrollLock * camera_scroll_lock))
    IL2CPP_REGISTER_METHOD(0x01527D90, void, cctor, ())
}
