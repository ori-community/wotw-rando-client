#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabStatistics_c.h>
#include <Modloader/app/structs/PlayerLeaderboardEntry.h>

namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c {
    IL2CPP_REGISTER_METHOD(0x00538C90, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayFabStatistics_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00538DD0, void, _AwardOnServer_b__11_1, app::PlayFabStatistics_c* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x00538EA0, bool, _GetStatistics_b__14_10, app::PlayFabStatistics_c* this_ptr, app::PlayerLeaderboardEntry* e)
} // namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c
