#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMultiplayerServersResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::ListMultiplayerServersResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListMultiplayerServersResponse* this_ptr)
}
