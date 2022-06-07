#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Race::LeaderBoardEntry {
    IL2CPP_REGISTER_METHOD(0x00C42ED0, bool, get_IsPlatformlessEntry, (app::LeaderBoardEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C42EF0, bool, Equals_1, (app::LeaderBoardEntry * this_ptr, app::LeaderBoardEntry * other))
    IL2CPP_REGISTER_METHOD(0x00C42F40, int32_t, GetHashCode, (app::LeaderBoardEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C42F60, bool, Equals_2, (app::LeaderBoardEntry * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x00C43090, float, get_DisplayTime, (app::LeaderBoardEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LeaderBoardEntry * this_ptr))
}
