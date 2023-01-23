#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LeaderboardsController_UpdateCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Leaderboard__Enum.h>
#include <Modloader/app/structs/LeaderboardData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::LeaderboardsController_UpdateCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::LeaderboardsController_UpdateCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::LeaderboardsController_UpdateCallback * this_ptr, app::Leaderboard__Enum leaderboard, app::LeaderboardData* data))
    IL2CPP_REGISTER_METHOD(0x015C2600, app::IAsyncResult*, BeginInvoke, (app::LeaderboardsController_UpdateCallback * this_ptr, app::Leaderboard__Enum leaderboard, app::LeaderboardData* data, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::LeaderboardsController_UpdateCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::LeaderboardsController_UpdateCallback
