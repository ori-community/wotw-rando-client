#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsResult.h>

namespace app::classes::PlayFab::ClientModels::UpdatePlayerStatisticsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdatePlayerStatisticsResult * this_ptr))
}
