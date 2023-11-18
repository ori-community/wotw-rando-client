#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerStatistic_1.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerStatistic {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerStatistic_1 * this_ptr))
}
