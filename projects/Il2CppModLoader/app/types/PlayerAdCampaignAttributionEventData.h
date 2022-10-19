#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerAdCampaignAttributionEventData {
        namespace {
            inline app::PlayerAdCampaignAttributionEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAdCampaignAttributionEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdCampaignAttributionEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdCampaignAttributionEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdCampaignAttributionEventData");
        }
        inline app::PlayerAdCampaignAttributionEventData* create() {
            return il2cpp::create_object<app::PlayerAdCampaignAttributionEventData>(get_class());
        }
    } // namespace PlayerAdCampaignAttributionEventData
} // namespace app::classes::types
