#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StartGameResponse.h>

namespace app::classes::PlayFab::MatchmakerModels::StartGameResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StartGameResponse * this_ptr))
}
