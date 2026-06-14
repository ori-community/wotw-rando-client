#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeaderboardData_Entry.h>
#include <Modloader/app/structs/LeaderboardTableUI_c.h>

namespace app::classes::LeaderboardTableUI___c {
    IL2CPP_REGISTER_METHOD(0x015B9F20, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LeaderboardTableUI_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BA060, bool, _UpdateTable_b__18_0, app::LeaderboardTableUI_c* this_ptr, app::LeaderboardData_Entry* x)
} // namespace app::classes::LeaderboardTableUI___c
