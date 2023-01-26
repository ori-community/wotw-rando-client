#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerAdRewardValuedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerAdRewardValuedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerAdRewardValuedEventData * this_ptr))
}
