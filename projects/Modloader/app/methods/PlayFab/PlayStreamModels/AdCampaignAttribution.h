#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AdCampaignAttribution_1.h>

namespace app::classes::PlayFab::PlayStreamModels::AdCampaignAttribution {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AdCampaignAttribution_1 * this_ptr))
}
