#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerAdRewardedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerAdRewardedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerAdRewardedEventData* this_ptr)
}
