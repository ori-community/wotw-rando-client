#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetFriendTagsRequest.h>

namespace app::classes::PlayFab::ClientModels::SetFriendTagsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetFriendTagsRequest * this_ptr))
}
