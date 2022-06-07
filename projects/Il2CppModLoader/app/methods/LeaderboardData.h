#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LeaderboardData {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::Leaderboard__Enum, get_Type, (app::LeaderboardData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::LeaderboardFilter__Enum, get_Filter, (app::LeaderboardData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Title, (app::LeaderboardData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B6850, int32_t, get_Count, (app::LeaderboardData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, uint32_t, get_TotalRowCount, (app::LeaderboardData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B68E0, void, ctor, (app::LeaderboardData * this_ptr, app::Leaderboard__Enum type, app::LeaderboardFilter__Enum filter, app::String * title, uint32_t total_row_count, app::IEnumerable_1_LeaderboardData_Entry_ * entries))
    IL2CPP_REGISTER_METHOD(0x015B6A90, bool, Update, (app::LeaderboardData * this_ptr, app::LeaderboardData * new_data))
    IL2CPP_REGISTER_METHOD(0x015B6BB0, app::IEnumerator_1_LeaderboardData_Entry_ *, GetEnumerator, (app::LeaderboardData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B6BB0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::LeaderboardData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B6C80, app::LeaderboardData_Entry *, get_Item, (app::LeaderboardData * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x015B6D30, app::String *, ToString, (app::LeaderboardData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B6E70, app::LeaderboardData_Entry *, GetEntryByUserHandle, (app::LeaderboardData * this_ptr, app::String * user_handle))
}
