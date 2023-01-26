#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveFriendRequest.h>

namespace app::classes::PlayFab::ClientModels::RemoveFriendRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoveFriendRequest * this_ptr))
}
