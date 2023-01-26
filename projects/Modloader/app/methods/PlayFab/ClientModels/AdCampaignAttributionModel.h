#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AdCampaignAttributionModel.h>

namespace app::classes::PlayFab::ClientModels::AdCampaignAttributionModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AdCampaignAttributionModel * this_ptr))
}
