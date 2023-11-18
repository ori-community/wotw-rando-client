#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerStatisticsResult.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerStatisticsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerStatisticsResult * this_ptr))
}
