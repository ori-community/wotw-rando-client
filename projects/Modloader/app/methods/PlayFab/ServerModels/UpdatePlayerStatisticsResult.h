#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsResult_1.h>

namespace app::classes::PlayFab::ServerModels::UpdatePlayerStatisticsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdatePlayerStatisticsResult_1 * this_ptr))
}
