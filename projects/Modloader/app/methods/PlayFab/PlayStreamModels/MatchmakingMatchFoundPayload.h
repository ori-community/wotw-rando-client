#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingMatchFoundPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MatchmakingMatchFoundPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MatchmakingMatchFoundPayload* this_ptr)
}
