#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RaceFinishIcon {
    IL2CPP_REGISTER_METHOD(0x00E98900, void, SetRaceData, (app::RaceFinishIcon * this_ptr, float elapsed_time, bool show_trial_reward))
    IL2CPP_REGISTER_METHOD(0x00E98D90, void, ctor, (app::RaceFinishIcon * this_ptr))
}
