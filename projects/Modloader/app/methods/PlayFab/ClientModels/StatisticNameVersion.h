#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StatisticNameVersion.h>

namespace app::classes::PlayFab::ClientModels::StatisticNameVersion {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StatisticNameVersion * this_ptr))
}
