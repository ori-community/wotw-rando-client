#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterLeaderboardRequest.h>

namespace app::classes::PlayFab::ClientModels::GetCharacterLeaderboardRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetCharacterLeaderboardRequest* this_ptr)
}
