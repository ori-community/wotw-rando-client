#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AddFriendRequest.h>

namespace app::classes::PlayFab::ClientModels::AddFriendRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddFriendRequest * this_ptr))
}
