#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetQueueStatisticsResult.h>

namespace app::classes::PlayFab::MultiplayerModels::GetQueueStatisticsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetQueueStatisticsResult* this_ptr)
}
