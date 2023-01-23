#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnlinkSteamAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlinkSteamAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkSteamAccountRequest * this_ptr))
}
