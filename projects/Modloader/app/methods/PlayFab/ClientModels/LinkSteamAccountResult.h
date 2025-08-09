#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkSteamAccountResult.h>

namespace app::classes::PlayFab::ClientModels::LinkSteamAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LinkSteamAccountResult* this_ptr)
}
