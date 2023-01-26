#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StartGameRequest_1.h>

namespace app::classes::PlayFab::MatchmakerModels::StartGameRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StartGameRequest_1 * this_ptr))
}
