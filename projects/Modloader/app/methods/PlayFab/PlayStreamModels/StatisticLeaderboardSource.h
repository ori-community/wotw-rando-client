#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticLeaderboardSource.h>

namespace app::classes::PlayFab::PlayStreamModels::StatisticLeaderboardSource {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StatisticLeaderboardSource* this_ptr)
}
