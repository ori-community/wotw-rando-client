#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticUpdate_1.h>

namespace app::classes::PlayFab::ServerModels::StatisticUpdate {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StatisticUpdate_1* this_ptr)
}
