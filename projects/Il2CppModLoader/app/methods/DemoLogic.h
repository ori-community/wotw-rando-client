#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DemoLogic {
    IL2CPP_REGISTER_METHOD(0x00B81FC0, bool, get_OutOfTime, ())
    IL2CPP_REGISTER_METHOD(0x00B82040, void, set_OutOfTime, (bool value))
    IL2CPP_REGISTER_METHOD(0x00B820D0, float, get_IdleElapsedTime, ())
    IL2CPP_REGISTER_METHOD(0x00B82150, void, set_IdleElapsedTime, (float value))
    IL2CPP_REGISTER_METHOD(0x00B821E0, float, get_PlaytimeElapsedTime, ())
    IL2CPP_REGISTER_METHOD(0x00B82260, void, set_PlaytimeElapsedTime, (float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DemoLogic * this_ptr))
} // namespace app::classes::DemoLogic
