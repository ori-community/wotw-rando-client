#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticUpdate.h>

namespace app::classes::PlayFab::ClientModels::StatisticUpdate {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StatisticUpdate* this_ptr)
}
