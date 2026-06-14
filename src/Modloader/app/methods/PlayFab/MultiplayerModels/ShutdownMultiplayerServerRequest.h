#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShutdownMultiplayerServerRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ShutdownMultiplayerServerRequest* this_ptr)
}
