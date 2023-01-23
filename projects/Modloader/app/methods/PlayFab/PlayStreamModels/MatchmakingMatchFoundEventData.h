#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MatchmakingMatchFoundEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::MatchmakingMatchFoundEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MatchmakingMatchFoundEventData * this_ptr))
}
