#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerStatistic.h>

namespace app::classes::PlayFab::ServerModels::PlayerStatistic {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerStatistic* this_ptr)
}
