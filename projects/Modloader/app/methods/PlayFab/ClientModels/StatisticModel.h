#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticModel.h>

namespace app::classes::PlayFab::ClientModels::StatisticModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StatisticModel * this_ptr))
}
