#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMultiplayerServersRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ListMultiplayerServersRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListMultiplayerServersRequest* this_ptr)
}
