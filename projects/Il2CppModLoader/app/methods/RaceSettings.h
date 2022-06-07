#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RaceSettings {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_Version, (app::RaceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00718BB0, bool, IsLeaderboardsStatesValid, (app::RaceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00718C40, void, ctor, (app::RaceSettings * this_ptr))
}
