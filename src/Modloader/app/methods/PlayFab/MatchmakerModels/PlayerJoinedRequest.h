#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerJoinedRequest.h>

namespace app::classes::PlayFab::MatchmakerModels::PlayerJoinedRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerJoinedRequest* this_ptr)
}
