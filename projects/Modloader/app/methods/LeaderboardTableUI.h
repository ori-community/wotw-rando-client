#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LeaderboardTableUI_LeaderboardMetaData.h>
#include <Modloader/app/structs/LeaderboardTableUI.h>
#include <Modloader/app/structs/LeaderboardRowUI.h>
#include <Modloader/app/structs/LeaderboardData.h>

namespace app::classes::LeaderboardTableUI {
    IL2CPP_REGISTER_METHOD(0x015B8B20, app::LeaderboardTableUI_LeaderboardMetaData*, get_CurrentMetaData, (app::LeaderboardTableUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8C90, app::LeaderboardRowUI*, GetRowByIndex, (app::LeaderboardTableUI * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x015B8D60, void, Awake, (app::LeaderboardTableUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8D70, void, GenerateTable, (app::LeaderboardTableUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B94C0, void, DestroyTable, (app::LeaderboardTableUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B97F0, void, UpdateTable, (app::LeaderboardTableUI * this_ptr, app::LeaderboardData* data))
    IL2CPP_REGISTER_METHOD(0x015B9CC0, void, ClearTable, (app::LeaderboardTableUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8D60, void, OnInstantiate, (app::LeaderboardTableUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B9CD0, void, ctor, (app::LeaderboardTableUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B9F00, bool, _get_CurrentMetaData_b__11_0, (app::LeaderboardTableUI * this_ptr, app::LeaderboardTableUI_LeaderboardMetaData* x))
    IL2CPP_REGISTER_METHODINFO(0x04783310, LeaderboardTableUI__get_CurrentMetaData_b__11_0__MethodInfo)
} // namespace app::classes::LeaderboardTableUI
