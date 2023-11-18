#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetMultiplayerServerDetailsResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetMultiplayerServerDetailsResponse * this_ptr))
}
