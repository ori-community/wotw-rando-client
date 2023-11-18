#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RequestMultiplayerServerResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::RequestMultiplayerServerResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RequestMultiplayerServerResponse * this_ptr))
}
