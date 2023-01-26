#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotificationChecker_c.h>
#include <Modloader/app/structs/LeaderBoardEntry.h>

namespace app::classes::NotificationChecker___c {
    IL2CPP_REGISTER_METHOD(0x0060CD50, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotificationChecker_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060CE90, bool, _TryReadLeaderboardData_b__14_0, (app::NotificationChecker_c * this_ptr, app::LeaderBoardEntry* o))
} // namespace app::classes::NotificationChecker___c
