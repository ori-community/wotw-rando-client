#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest.h>

namespace app::classes::PlayFab::ClientModels::UpdatePlayerStatisticsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdatePlayerStatisticsRequest * this_ptr))
}
