#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerStatisticsRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GetPlayerStatisticsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerStatisticsRequest_1 * this_ptr))
}
