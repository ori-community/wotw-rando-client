#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakeRequest.h>

namespace app::classes::PlayFab::ClientModels::MatchmakeRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MatchmakeRequest* this_ptr)
}
