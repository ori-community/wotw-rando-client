#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerJoinedResponse.h>

namespace app::classes::PlayFab::MatchmakerModels::PlayerJoinedResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerJoinedResponse* this_ptr)
}
