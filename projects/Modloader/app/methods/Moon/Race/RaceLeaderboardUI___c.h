#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeaderBoardEntry.h>
#include <Modloader/app/structs/RaceLeaderboardUI_c.h>

namespace app::classes::Moon::Race::RaceLeaderboardUI___c {
    IL2CPP_REGISTER_METHOD(0x00C490D0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RaceLeaderboardUI_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060CE90, bool, _Show_b__4_0, app::RaceLeaderboardUI_c* this_ptr, app::LeaderBoardEntry* o)
} // namespace app::classes::Moon::Race::RaceLeaderboardUI___c
