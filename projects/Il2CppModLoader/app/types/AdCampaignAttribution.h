#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttribution {
        namespace {
            app::AdCampaignAttribution__Class* type_info_ref = nullptr;
        }
        app::AdCampaignAttribution__Class** type_info = &type_info_ref;
        inline app::AdCampaignAttribution__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttribution__Class>(type_info, "PlayFab.ServerModels", "AdCampaignAttribution");
        }
        inline app::AdCampaignAttribution* create() {
            return il2cpp::create_object<app::AdCampaignAttribution>(get_class());
        }
        inline app::AdCampaignAttribution__Array* create_array(int size) {
            return il2cpp::array_new<app::AdCampaignAttribution__Array>(get_class(), size);
        }
    } // namespace AdCampaignAttribution
} // namespace app::classes::types
