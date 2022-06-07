#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlatformPuppet {
    IL2CPP_REGISTER_METHOD(0x01172090, int32_t, get_Id, (app::PlatformPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA3850, float, get_NearEnoughDistance, (app::PlatformPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011720A0, float, get_TooFarDistance, (app::PlatformPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59860, void, ctor, (app::PlatformPuppet * this_ptr))
}
