#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XboxOneLeaderboards {
    IL2CPP_REGISTER_METHOD(0x01C58D80, bool, get_EnableLeaderboards, ())
    IL2CPP_REGISTER_METHOD(0x01C58E00, void, set_EnableLeaderboards, (bool value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::LeaderboardData *, get_LeaderboardData, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, UpdateLeaderboard, (app::LeaderboardB__Enum leaderboard, app::LeaderboardFilter__Enum filter, app::Action * success, app::Action * failure))
    IL2CPP_REGISTER_METHOD(0x01C58E90, bool, SendLeaderboardData, (app::LeaderboardB__Enum leaderboard, int64_t data))
    IL2CPP_REGISTER_METHOD(0x01C58F30, app::String *, GetLeaderboardEventName, (app::LeaderboardB__Enum leaderboard))
    IL2CPP_REGISTER_METHODINFO(0x0476BD48, XboxOneLeaderboards_GetLeaderboardEventName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneLeaderboards * this_ptr))
}
