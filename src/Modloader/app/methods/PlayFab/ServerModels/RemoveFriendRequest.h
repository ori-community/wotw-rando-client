#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveFriendRequest_1.h>

namespace app::classes::PlayFab::ServerModels::RemoveFriendRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RemoveFriendRequest_1* this_ptr)
}
