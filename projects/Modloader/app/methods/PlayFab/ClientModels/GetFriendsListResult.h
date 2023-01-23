#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetFriendsListResult.h>

namespace app::classes::PlayFab::ClientModels::GetFriendsListResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetFriendsListResult * this_ptr))
}
