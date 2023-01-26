#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserSteamInfo.h>

namespace app::classes::PlayFab::ClientModels::UserSteamInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserSteamInfo * this_ptr))
}
