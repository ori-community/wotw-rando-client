#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromSteamIDsResult.h>

namespace app::classes::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayFabIDsFromSteamIDsResult * this_ptr))
}
