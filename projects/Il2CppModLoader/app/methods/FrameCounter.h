#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FrameCounter {
    IL2CPP_REGISTER_METHOD(0x0163E720, void, Start, (app::FrameCounter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0163E810, void, FixedUpdate, (app::FrameCounter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0163E890, void, Update, (app::FrameCounter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FrameCounter * this_ptr))
} // namespace app::classes::FrameCounter
