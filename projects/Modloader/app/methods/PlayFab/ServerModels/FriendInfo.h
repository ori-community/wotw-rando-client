#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FriendInfo_1.h>

namespace app::classes::PlayFab::ServerModels::FriendInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FriendInfo_1* this_ptr)
}
