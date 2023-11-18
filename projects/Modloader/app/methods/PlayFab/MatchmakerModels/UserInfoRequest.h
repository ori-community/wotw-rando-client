#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserInfoRequest.h>

namespace app::classes::PlayFab::MatchmakerModels::UserInfoRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserInfoRequest * this_ptr))
}
