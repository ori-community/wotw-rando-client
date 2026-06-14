#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeaderBoardEntry.h>
#include <Modloader/app/structs/RaceLeaderboardScreen_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RaceLeaderboardScreen___c {
    IL2CPP_REGISTER_METHOD(0x00EA37D0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RaceLeaderboardScreen_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C40EF0, int32_t, _Setup_b__46_0, app::RaceLeaderboardScreen_c* this_ptr, app::LeaderBoardEntry* a, app::LeaderBoardEntry* b)
    IL2CPP_REGISTER_METHOD(0x00C454A0, int32_t, _SetupEntries_b__55_0, app::RaceLeaderboardScreen_c* this_ptr, app::LeaderBoardEntry* o)
    IL2CPP_REGISTER_METHOD(0x00C454C0, int32_t, _SetupEntries_b__55_1, app::RaceLeaderboardScreen_c* this_ptr, app::LeaderBoardEntry* o)
    IL2CPP_REGISTER_METHOD(0x0060CE90, bool, _SetupEntries_b__55_2, app::RaceLeaderboardScreen_c* this_ptr, app::LeaderBoardEntry* o)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__64_0, app::RaceLeaderboardScreen_c* this_ptr, app::String* _p0_, bool _p1_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__64_1, app::RaceLeaderboardScreen_c* this_ptr)
} // namespace app::classes::RaceLeaderboardScreen___c
