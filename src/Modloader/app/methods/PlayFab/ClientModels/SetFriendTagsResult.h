#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetFriendTagsResult.h>

namespace app::classes::PlayFab::ClientModels::SetFriendTagsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SetFriendTagsResult* this_ptr)
}
