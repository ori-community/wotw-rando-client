#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserInfoResponse.h>

namespace app::classes::PlayFab::MatchmakerModels::UserInfoResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserInfoResponse * this_ptr))
}
