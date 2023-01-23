#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerAdCampaignAttributionEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerAdCampaignAttributionEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerAdCampaignAttributionEventData * this_ptr))
}
