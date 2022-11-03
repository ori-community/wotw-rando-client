#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SoundController2D {
    IL2CPP_REGISTER_METHOD(0x00EE8B70, void, OnStart, (app::SoundController2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE8E40, void, LateUpdate, (app::SoundController2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE91E0, void, ctor, (app::SoundController2D * this_ptr))
} // namespace app::classes::SoundController2D
