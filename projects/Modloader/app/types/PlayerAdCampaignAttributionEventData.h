#pragma once
#include <Modloader/app/structs/PlayerAdCampaignAttributionEventData.h>
#include <Modloader/app/structs/PlayerAdCampaignAttributionEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAdCampaignAttributionEventData {
        inline app::PlayerAdCampaignAttributionEventData__Class** type_info() {
            static app::PlayerAdCampaignAttributionEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAdCampaignAttributionEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAdCampaignAttributionEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdCampaignAttributionEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerAdCampaignAttributionEventData");
        }
        inline app::PlayerAdCampaignAttributionEventData* create() {
            return il2cpp::create_object<app::PlayerAdCampaignAttributionEventData>(get_class());
        }
    } // namespace PlayerAdCampaignAttributionEventData
} // namespace app::classes::types
