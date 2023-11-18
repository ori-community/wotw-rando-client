#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticValue_1.h>

namespace app::classes::PlayFab::ServerModels::StatisticValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StatisticValue_1 * this_ptr))
}
