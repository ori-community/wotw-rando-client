#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetMatchRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::GetMatchRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetMatchRequest * this_ptr))
}
