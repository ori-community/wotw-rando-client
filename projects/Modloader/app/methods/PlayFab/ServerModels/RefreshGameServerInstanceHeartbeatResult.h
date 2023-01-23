#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RefreshGameServerInstanceHeartbeatResult.h>

namespace app::classes::PlayFab::ServerModels::RefreshGameServerInstanceHeartbeatResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RefreshGameServerInstanceHeartbeatResult * this_ptr))
}
