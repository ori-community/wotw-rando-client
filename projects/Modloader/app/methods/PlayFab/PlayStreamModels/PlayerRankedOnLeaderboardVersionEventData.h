#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerRankedOnLeaderboardVersionEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerRankedOnLeaderboardVersionEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerRankedOnLeaderboardVersionEventData* this_ptr)
}
