#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticValue.h>

namespace app::classes::PlayFab::ClientModels::StatisticValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StatisticValue * this_ptr))
}
