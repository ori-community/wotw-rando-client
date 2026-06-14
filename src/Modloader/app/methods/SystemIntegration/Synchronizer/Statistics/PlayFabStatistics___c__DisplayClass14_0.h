#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteCloudScriptResult.h>
#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerResult.h>
#include <Modloader/app/structs/GetLeaderboardAroundPlayerResult.h>
#include <Modloader/app/structs/GetLeaderboardResult.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabStatistics_c_DisplayClass14_0.h>

namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c__DisplayClass14_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005393B0, void, _GetStatistics_b__0, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::ExecuteCloudScriptResult* success)
    IL2CPP_REGISTER_METHOD(0x005395C0, void, _GetStatistics_b__1, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x00539790, void, _GetStatistics_b__2, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::GetLeaderboardResult* result)
    IL2CPP_REGISTER_METHOD(0x00539840, void, _GetStatistics_b__3, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(
        0x00539A10,
        void,
        _GetStatistics_b__4,
        app::PlayFabStatistics_c_DisplayClass14_0* this_ptr,
        app::GetLeaderboardAroundPlayerResult* result
    )
    IL2CPP_REGISTER_METHOD(0x00539AC0, void, _GetStatistics_b__5, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(
        0x00539C90,
        void,
        _GetStatistics_b__6,
        app::PlayFabStatistics_c_DisplayClass14_0* this_ptr,
        app::GetFriendLeaderboardAroundPlayerResult* result
    )
    IL2CPP_REGISTER_METHOD(0x00539D40, void, _GetStatistics_b__7, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x00539F10, void, _GetStatistics_b__8, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::GetLeaderboardResult* result)
    IL2CPP_REGISTER_METHOD(0x0053A690, void, _GetStatistics_b__12, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x0053A860, void, _GetStatistics_b__9, app::PlayFabStatistics_c_DisplayClass14_0* this_ptr, app::PlayFabError* error)
} // namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c__DisplayClass14_0
