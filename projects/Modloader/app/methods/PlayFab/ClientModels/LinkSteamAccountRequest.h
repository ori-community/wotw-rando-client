#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkSteamAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkSteamAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LinkSteamAccountRequest* this_ptr)
}
