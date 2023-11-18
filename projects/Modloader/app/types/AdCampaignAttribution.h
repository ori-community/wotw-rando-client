#pragma once
#include <Modloader/app/structs/AdCampaignAttribution.h>
#include <Modloader/app/structs/AdCampaignAttribution__Array.h>
#include <Modloader/app/structs/AdCampaignAttribution__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttribution {
        inline app::AdCampaignAttribution__Class** type_info() {
            static app::AdCampaignAttribution__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdCampaignAttribution__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdCampaignAttribution__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttribution__Class>(type_info(), "PlayFab.ServerModels", "AdCampaignAttribution");
        }
        inline app::AdCampaignAttribution* create() {
            return il2cpp::create_object<app::AdCampaignAttribution>(get_class());
        }
        inline app::AdCampaignAttribution__Array* create_array(int size) {
            return il2cpp::array_new<app::AdCampaignAttribution__Array>(get_class(), size);
        }
        inline app::AdCampaignAttribution__Array* create_array(const std::vector<app::AdCampaignAttribution*>& items) {
            return il2cpp::array_new<app::AdCampaignAttribution__Array>(get_class(), items);
        }
    } // namespace AdCampaignAttribution
} // namespace app::classes::types
