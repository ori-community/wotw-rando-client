#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFriendsListResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetFriendsListResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetFriendsListResult_1* this_ptr)
}
