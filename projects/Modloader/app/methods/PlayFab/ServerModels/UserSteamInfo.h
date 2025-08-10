#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserSteamInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserSteamInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserSteamInfo_1* this_ptr)
}
