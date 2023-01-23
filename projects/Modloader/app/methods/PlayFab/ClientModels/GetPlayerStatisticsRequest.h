#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPlayerStatisticsRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerStatisticsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerStatisticsRequest * this_ptr))
}
