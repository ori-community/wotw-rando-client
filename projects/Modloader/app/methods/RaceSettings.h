#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceSettings.h>

namespace app::classes::RaceSettings {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_Version, app::RaceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00718BB0, bool, IsLeaderboardsStatesValid, app::RaceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00718C40, void, ctor, app::RaceSettings* this_ptr)
} // namespace app::classes::RaceSettings
