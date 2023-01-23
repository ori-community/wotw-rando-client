#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AddFriendRequest_1.h>

namespace app::classes::PlayFab::ServerModels::AddFriendRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddFriendRequest_1 * this_ptr))
}
