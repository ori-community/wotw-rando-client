#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLeftRequest.h>

namespace app::classes::PlayFab::MatchmakerModels::PlayerLeftRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerLeftRequest * this_ptr))
}
