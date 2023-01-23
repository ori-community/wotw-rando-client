#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerLeftResponse.h>

namespace app::classes::PlayFab::MatchmakerModels::PlayerLeftResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerLeftResponse * this_ptr))
}
