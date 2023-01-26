#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FriendInfo.h>

namespace app::classes::PlayFab::ClientModels::FriendInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FriendInfo * this_ptr))
}
