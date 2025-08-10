#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardForUsersCharactersResult.h>

namespace app::classes::PlayFab::ClientModels::GetLeaderboardForUsersCharactersResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetLeaderboardForUsersCharactersResult* this_ptr)
}
