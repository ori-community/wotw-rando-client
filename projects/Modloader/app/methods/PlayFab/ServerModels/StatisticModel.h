#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticModel_1.h>

namespace app::classes::PlayFab::ServerModels::StatisticModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StatisticModel_1 * this_ptr))
}
