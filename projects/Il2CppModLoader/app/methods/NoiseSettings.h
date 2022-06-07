#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NoiseSettings {
    IL2CPP_REGISTER_METHOD(0x0060BC50, app::NoiseSettings *, Clone, (app::NoiseSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060BDA0, void, CopyFrom, (app::NoiseSettings * this_ptr, app::NoiseSettings * settings_noise))
    IL2CPP_REGISTER_METHOD(0x0060BDD0, void, ctor, (app::NoiseSettings * this_ptr))
}
