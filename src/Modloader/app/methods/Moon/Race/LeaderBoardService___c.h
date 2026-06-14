#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeaderBoardEntry.h>
#include <Modloader/app/structs/LeaderBoardService_c.h>

namespace app::classes::Moon::Race::LeaderBoardService___c {
    IL2CPP_REGISTER_METHOD(0x00C440C0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LeaderBoardService_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C44200, bool, _GetPlayerTime_b__1_0, app::LeaderBoardService_c* this_ptr, app::LeaderBoardEntry* o)
    IL2CPP_REGISTER_METHOD(0x00C44310, bool, _HasScore_b__2_0, app::LeaderBoardService_c* this_ptr, app::LeaderBoardEntry* o)
    IL2CPP_REGISTER_METHOD(0x00C40EF0, int32_t, _InTop_b__4_0, app::LeaderBoardService_c* this_ptr, app::LeaderBoardEntry* a, app::LeaderBoardEntry* b)
    IL2CPP_REGISTER_METHOD(0x00C44420, bool, _InTop_b__4_1, app::LeaderBoardService_c* this_ptr, app::LeaderBoardEntry* o)
} // namespace app::classes::Moon::Race::LeaderBoardService___c
