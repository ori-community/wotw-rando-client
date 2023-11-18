#pragma once
#include <Modloader/app/structs/AdCampaignAttribution_1.h>
#include <Modloader/app/structs/AdCampaignAttribution_1__Array.h>
#include <Modloader/app/structs/AdCampaignAttribution_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttribution_1 {
        inline app::AdCampaignAttribution_1__Class** type_info() {
            static app::AdCampaignAttribution_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdCampaignAttribution_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdCampaignAttribution_1__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttribution_1__Class>(type_info(), "PlayFab.PlayStreamModels", "AdCampaignAttribution");
        }
        inline app::AdCampaignAttribution_1* create() {
            return il2cpp::create_object<app::AdCampaignAttribution_1>(get_class());
        }
        inline app::AdCampaignAttribution_1__Array* create_array(int size) {
            return il2cpp::array_new<app::AdCampaignAttribution_1__Array>(get_class(), size);
        }
        inline app::AdCampaignAttribution_1__Array* create_array(const std::vector<app::AdCampaignAttribution_1*>& items) {
            return il2cpp::array_new<app::AdCampaignAttribution_1__Array>(get_class(), items);
        }
    } // namespace AdCampaignAttribution_1
} // namespace app::classes::types
