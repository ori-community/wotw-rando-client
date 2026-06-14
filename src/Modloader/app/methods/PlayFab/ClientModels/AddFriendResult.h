#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddFriendResult.h>

namespace app::classes::PlayFab::ClientModels::AddFriendResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AddFriendResult* this_ptr)
}
