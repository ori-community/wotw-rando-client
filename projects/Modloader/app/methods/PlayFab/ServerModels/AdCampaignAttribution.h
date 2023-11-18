#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AdCampaignAttribution.h>

namespace app::classes::PlayFab::ServerModels::AdCampaignAttribution {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AdCampaignAttribution * this_ptr))
}
