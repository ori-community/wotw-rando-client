#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LoginWithSteamRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithSteamRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithSteamRequest * this_ptr))
}
