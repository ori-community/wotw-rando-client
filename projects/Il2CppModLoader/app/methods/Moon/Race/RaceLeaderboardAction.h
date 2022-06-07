#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Race::RaceLeaderboardAction {
    IL2CPP_REGISTER_METHOD(0x00C48BF0, void, Perform, (app::RaceLeaderboardAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RaceLeaderboardAction * this_ptr))
}
