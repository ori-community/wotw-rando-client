#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StatSetting {
    IL2CPP_REGISTER_METHOD(0x009B36A0, app::String *, GetNumberLabel, (app::StatSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::StatSetting * this_ptr))
}
