#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingExtensions_c.h>
#include <Modloader/app/structs/LeaderBoardEntry.h>

namespace app::classes::Moon::Race::MatchmakingExtensions___c {
    IL2CPP_REGISTER_METHOD(0x00C45360, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MatchmakingExtensions_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C454A0, int32_t, _GetEntriesInRange_b__0_0, (app::MatchmakingExtensions_c * this_ptr, app::LeaderBoardEntry* o))
    IL2CPP_REGISTER_METHOD(0x00C454C0, int32_t, _GetEntriesInRange_b__0_1, (app::MatchmakingExtensions_c * this_ptr, app::LeaderBoardEntry* o))
    IL2CPP_REGISTER_METHOD(0x0060CE90, bool, _GetEntriesInRange_b__0_2, (app::MatchmakingExtensions_c * this_ptr, app::LeaderBoardEntry* o))
    IL2CPP_REGISTER_METHOD(0x00C40EF0, int32_t, _GetRaceEntries_b__1_1, (app::MatchmakingExtensions_c * this_ptr, app::LeaderBoardEntry* a, app::LeaderBoardEntry* b))
} // namespace app::classes::Moon::Race::MatchmakingExtensions___c
